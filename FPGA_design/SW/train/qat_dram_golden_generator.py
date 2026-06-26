"""
Train LeNet FP32/INT8/INT4 QAT models and generate RTL DRAM/golden vectors.

Output paths are derived from this file's location so the script can be run
from any working directory. This script does not generate
layer0_int4_as_int8/MEM.txt, mem_boundaries.vh, or the FC sparse weight stream
consumed by TOP_interface.v.
"""

import os, math, copy, platform, warnings
import numpy as np
import matplotlib.pyplot as plt
from tqdm import tqdm
from typing import Tuple
from sklearn.metrics import confusion_matrix

import torch
import torch.nn as nn
import torch.optim as optim
import torch.ao.quantization as tq
from torch.ao.quantization import FakeQuantize, QConfig
from torch.ao.quantization.observer import MovingAverageMinMaxObserver
from torch.utils.data import DataLoader
from torchvision import datasets, transforms




# ==========================================
# 1. Environment Setup
# ==========================================
DEFAULT_DEVICE = 'cuda' if torch.cuda.is_available() else 'cpu'
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
FPGA_DESIGN_DIR = os.path.abspath(os.path.join(SCRIPT_DIR, "..", ".."))
WEIGHTS_DIR = SCRIPT_DIR
RESULTS_DIR = os.path.join(SCRIPT_DIR, "results")
MNIST_ROOT = os.path.join(FPGA_DESIGN_DIR, "SW", "data")
TEST_MEM_DIR = os.path.join(FPGA_DESIGN_DIR, "test", "tb", "TOP_test", "MEM", "Test")
warnings.filterwarnings("ignore")

# Use the same quantized backend for reproducible exported vectors.
torch.backends.quantized.engine = 'qnnpack'

print("PyTorch:", torch.__version__)
print(f"Backend: {torch.backends.quantized.engine}  Device: {DEFAULT_DEVICE}")

# ==========================================
# 2. QConfig
# ==========================================
def get_int8_qconfig() -> QConfig:
    return QConfig(
        # Activation uses quint8 affine quantization with a reduced 0..127 range.
        # For 0.0..1.0 image inputs, 1.0 maps to 127 and 0.0 maps to 0.
        activation=FakeQuantize.with_args(
            observer=MovingAverageMinMaxObserver,
            quant_min=0, quant_max=127,
            dtype=torch.quint8,
            qscheme=torch.per_tensor_affine,
            reduce_range=False),

        weight=FakeQuantize.with_args(
            observer=MovingAverageMinMaxObserver,
            quant_min=-64, quant_max=63,
            dtype=torch.qint8,
            qscheme=torch.per_tensor_symmetric,
            reduce_range=False))

def get_int4_qconfig() -> QConfig:
    return QConfig(
        activation=FakeQuantize.with_args(
            observer=MovingAverageMinMaxObserver,
            quant_min=0, quant_max=15,
            dtype=torch.quint8, qscheme=torch.per_tensor_affine, reduce_range=False),
        weight=FakeQuantize.with_args(
            observer=MovingAverageMinMaxObserver,
            quant_min=-8, quant_max=7,
            dtype=torch.qint8, qscheme=torch.per_tensor_symmetric, reduce_range=False))

# ==========================================
# 3. Data Loaders  (shuffle=False for deterministic order)
# ==========================================
def get_mnist_loaders(batch_size=64, root="data/mnist", split_ratio=0.1):
    """
    MNIST 28x28 -> 784 pixels, matching testbench `for(i=0;i<784;...)`
    shuffle=False ensures test set order is reproducible for DRAM/GOLDEN generation.
    """
    tf = transforms.Compose([
        transforms.Resize((28, 28)),
        transforms.ToTensor(),
        #transforms.Normalize((0.1307,), (0.3081,)),
    ])
    trainset = datasets.MNIST(root=root, train=True,  download=True, transform=tf)
    testset  = datasets.MNIST(root=root, train=False, download=True, transform=tf)
    val_len  = int(split_ratio * len(trainset))
    trainset, valset = torch.utils.data.random_split(
        trainset, [len(trainset)-val_len, val_len])
    kw = dict(batch_size=batch_size, num_workers=4, pin_memory=True)
    return (DataLoader(trainset, shuffle=True,  **kw),
            DataLoader(valset,   shuffle=False, **kw),
            DataLoader(testset,  shuffle=False, **kw))  # MUST be False

# ==========================================
# 4. LeNet for 28x28 input
#    Conv1: 28->24->12  Conv2: 12->8->4  FC: 256->120->84->10
# ==========================================
class LeNet(nn.Module):
    def __init__(self, in_channels=1, num_classes=10):
        super().__init__()
        self.quant    = tq.QuantStub()
        self.features = nn.Sequential(
            nn.Conv2d(in_channels, 6, 5),   # 28->24
            nn.ReLU(inplace=True),
            nn.MaxPool2d(2, 2),              # 24->12
            nn.Conv2d(6, 16, 5),             # 12->8
            nn.ReLU(inplace=True),
            nn.MaxPool2d(2, 2),              # 8->4
        )
        self.flatten    = nn.Flatten()
        self.classifier = nn.Sequential(
            nn.Linear(16*4*4, 120),
            nn.ReLU(inplace=True),
            nn.Linear(120, 84),
            nn.ReLU(inplace=True),
            nn.Linear(84, num_classes),
        )
        self.dequant = tq.DeQuantStub()

    def forward(self, x):
        x = self.quant(x)
        x = self.features(x)
        x = self.flatten(x)
        x = self.classifier(x)
        return self.dequant(x)

    def fuse_model(self):
        tq.fuse_modules(self.features,   [['0','1'], ['3','4']], inplace=True)
        tq.fuse_modules(self.classifier, [['0','1'], ['2','3']], inplace=True)

# ==========================================
# 5. Utilities
# ==========================================
def preprocess_filename(fn, existed="keep_both"):
    if existed == "keep_both":
        base, ext = os.path.splitext(fn)
        cnt = 1
        while os.path.exists(fn):
            fn = f"{base}-{cnt}{ext}"; cnt += 1
    return fn

def save_model(model, filename, existed="keep_both"):
    filename = preprocess_filename(filename, existed)
    os.makedirs(os.path.dirname(filename) or ".", exist_ok=True)
    torch.save(model.state_dict(), filename)
    print(f"  Saved: {filename} ({os.path.getsize(filename)/1e6:.2f} MB)")

def plot_curves(tl, ta, vl, va, filename):
    fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(10, 4))
    for ax, y1, y2, t, yl in zip([ax1,ax2],[tl,ta],[vl,va],
                                   ["Loss","Accuracy"],["Loss","Accuracy"]):
        ax.plot(y1, label="Train"); ax.plot(y2, label="Val")
        ax.set_title(t); ax.set_ylabel(yl); ax.legend()
    fig.tight_layout()
    filename = preprocess_filename(filename)
    os.makedirs(os.path.dirname(filename) or ".", exist_ok=True)
    plt.savefig(filename); print(f"  Plot: {filename}")

def evaluate(model, loader, criterion, device=DEFAULT_DEVICE):
    model.eval()
    loss_sum = correct = total = 0
    preds, labels_all = [], []
    with torch.no_grad():
        for x, y in tqdm(loader, desc="Eval", leave=False):
            x, y = x.to(device), y.to(device)
            out = model(x); loss_sum += criterion(out, y).item()
            p = torch.argmax(out, 1)
            total += y.size(0); correct += (p == y).sum().item()
            preds.extend(p.cpu().numpy()); labels_all.extend(y.cpu().numpy())
    return loss_sum/len(loader), correct/total*100, confusion_matrix(labels_all, preds)

# ==========================================
# 6. Training
# ==========================================
def train_fp32(model, train_loader, val_loader, epochs=15, lr=0.05,
               device=DEFAULT_DEVICE, save_path="./weights/best_lenet_fp32.pth"):
    crit = nn.CrossEntropyLoss()
    opt  = optim.SGD(model.parameters(), lr, momentum=0.9, weight_decay=1e-3)
    sch  = optim.lr_scheduler.CosineAnnealingLR(opt, T_max=epochs)
    best = 0.0; tl_h,ta_h,vl_h,va_h = [],[],[],[]

    for ep in range(epochs):
        model.train(); rl=rc=rt=0
        for x, y in tqdm(train_loader, desc=f"[FP32] {ep+1}/{epochs}", leave=False):
            x, y = x.to(device), y.to(device)
            opt.zero_grad()
            loss = crit(model(x), y); loss.backward(); opt.step()
            rl += loss.item()*x.size(0)
            rc += model(x).argmax(1).eq(y).sum().item(); rt += y.size(0)
        tl=rl/rt; ta=rc/rt

        model.eval(); vl=vc=vt=0
        with torch.no_grad():
            for x,y in val_loader:
                x,y=x.to(device),y.to(device)
                out=model(x); vl+=crit(out,y).item()*x.size(0)
                vc+=out.argmax(1).eq(y).sum().item(); vt+=y.size(0)
        val_loss=vl/vt; val_acc=100.*vc/vt
        tl_h.append(tl); ta_h.append(ta); vl_h.append(val_loss); va_h.append(val_acc/100)
        print(f"  [FP32] Ep{ep+1} TL={tl:.4f} TA={ta*100:.2f}% VL={val_loss:.4f} VA={val_acc:.2f}%")
        if val_acc > best:
            best=val_acc; save_model(model, save_path, existed="overwrite")
        sch.step()
    plot_curves(tl_h,ta_h,vl_h,va_h,os.path.join(RESULTS_DIR, "fp32_loss_accuracy.png"))
    if os.path.exists(save_path):
        model.load_state_dict(torch.load(save_path, map_location=device))
    return model

def _run_qat(model_fp32, train_loader, val_loader, qconfig,
             epochs, lr, save_path, tag):
    print(f"\n{'='*60}\n  {tag} QAT\n{'='*60}")
    model = copy.deepcopy(model_fp32).cpu().eval()
    model.fuse_model(); model.qconfig = qconfig
    model.train(); tq.prepare_qat(model, inplace=True)
    crit = nn.CrossEntropyLoss()
    opt  = optim.Adam(model.parameters(), lr)
    sch  = optim.lr_scheduler.CosineAnnealingLR(opt, T_max=epochs)
    best=0.0; tl_h,ta_h,vl_h,va_h=[],[],[],[]

    for ep in range(epochs):
        model.train(); rl=rc=rt=0
        for x,y in tqdm(train_loader, desc=f"[{tag}] {ep+1}/{epochs}", leave=False):
            x,y=x.cpu(),y.cpu(); opt.zero_grad()
            out=model(x); loss=crit(out,y); loss.backward(); opt.step()
            rl+=loss.item()*x.size(0); rc+=out.argmax(1).eq(y).sum().item(); rt+=y.size(0)
        tl=rl/rt; ta=rc/rt
        model.eval(); vl=vc=vt=0
        with torch.no_grad():
            for x,y in val_loader:
                x,y=x.cpu(),y.cpu(); out=model(x)
                vl+=crit(out,y).item()*x.size(0)
                vc+=out.argmax(1).eq(y).sum().item(); vt+=y.size(0)
        val_loss=vl/vt; val_acc=100.*vc/vt
        tl_h.append(tl); ta_h.append(ta); vl_h.append(val_loss); va_h.append(val_acc/100)
        print(f"  [{tag}] Ep{ep+1} TL={tl:.4f} TA={ta*100:.2f}% VL={val_loss:.4f} VA={val_acc:.2f}%")
        if val_acc > best:
            best=val_acc; save_model(model, save_path, existed="overwrite")
        sch.step()
    plot_curves(tl_h,ta_h,vl_h,va_h,
                os.path.join(RESULTS_DIR, f"{tag.lower()}_qat_loss_accuracy.png"))
    if os.path.exists(save_path):
        model.load_state_dict(torch.load(save_path, map_location='cpu'))
    model.eval(); mq = tq.convert(model, inplace=False)
    print(f"  [{tag}] Converted to quantized model.")
    return mq

def train_int8_qat(fp32, train_l, val_l, epochs=8, lr=5e-4,
                   save_path="./weights/best_lenet_int8_qat.pth"):
    return _run_qat(fp32, train_l, val_l, get_int8_qconfig(),
                    epochs, lr, save_path, "INT8")

def train_int4_qat(fp32, train_l, val_l, epochs=8, lr=5e-4,
                   save_path="./weights/best_lenet_int4_qat.pth"):
    return _run_qat(fp32, train_l, val_l, get_int4_qconfig(),
                    epochs, lr, save_path, "INT4")

# ==========================================
# 7. Hardware Profiling (shared INT8/INT4)
# ==========================================
def _profile(model_q, loader, device, bit, tag):
    model_q.eval(); stats={}
    def make_hook(name):
        def h(m, i, o):
            if name in stats: return
            s = o.q_scale() if hasattr(o,'q_scale') else 1.0
            z = o.q_zero_point() if hasattr(o,'q_zero_point') else 0
            t = o[0]; raw = t.int_repr() if hasattr(t,'int_repr') else t
            stats[name]={"shape":list(o.shape[1:]),"scale":s,"zp":z,
                         "nz":torch.count_nonzero(raw).item(),"n":raw.numel(),
                         "isq":hasattr(o,'q_scale')}
        return h
    hooks=[]
    for n,m in model_q.features.named_children():
        hooks.append(m.register_forward_hook(make_hook(f"feat.{n}({m.__class__.__name__})")))
    hooks.append(model_q.flatten.register_forward_hook(make_hook("flatten")))
    for n,m in model_q.classifier.named_children():
        hooks.append(m.register_forward_hook(make_hook(f"cls.{n}({m.__class__.__name__})")))
    with torch.no_grad():
        x,_=next(iter(loader)); model_q(x.to(device))
    for h in hooks: h.remove()
    print(f"\n{'='*100}\n [{tag}] Sparsity Report\n{'='*100}")
    for n,s in stats.items():
        kb=(s['n']*bit)/8/1024; sp=1-s['nz']/s['n'] if s['n'] else 0
        sc=f"{s['scale']:.5f}" if s['isq'] else "N/A"
        print(f"  {n:<35} shape={str(s['shape']):<14} scale={sc:<10} "
              f"{kb:.3f}KB({tag}) sparsity={sp*100:.2f}%")
    print(f"{'='*100}")

def profile_int8(m,dl,device='cpu'): _profile(m,dl,device,8,"INT8")
def profile_int4(m,dl,device='cpu'): _profile(m,dl,device,4,"INT4")

def _csc(model_q, loader, device, bit, tag):
    model_q.eval(); stats={}; BK,BA,MC=4,16,15
    def make_hook(name):
        def h(m,i,o):
            if name not in stats: stats[name]={"shape":[],"db":0,"cb":0,"dum":0}
            t=o[0]; x=t.int_repr() if hasattr(t,'int_repr') else t
            stats[name]["shape"]=list(x.shape); db=x.numel()*bit
            de=dum=ab=0
            if x.dim()==3:
                C,H,W=x.shape; ab=(H*W+1)*BA
                for hh in range(H):
                    for ww in range(W):
                        zc=0
                        for c in range(C):
                            if x[c,hh,ww].item()==0:
                                zc+=1
                                if zc>MC: de+=1;dum+=1;zc=0
                            else: de+=1;zc=0
            elif x.dim()==1:
                ab=2*BA; zc=0
                for v in x.tolist():
                    if v==0:
                        zc+=1
                        if zc>MC: de+=1;dum+=1;zc=0
                    else: de+=1;zc=0
            else: de=x.numel()
            stats[name]["db"]+=db; stats[name]["cb"]+=de*(bit+BK)+ab; stats[name]["dum"]+=dum
        return h
    hooks=[]
    for n,m in model_q.features.named_children():
        hooks.append(m.register_forward_hook(make_hook(f"feat.{n}({m.__class__.__name__})")))
    hooks.append(model_q.flatten.register_forward_hook(make_hook("flatten")))
    for n,m in model_q.classifier.named_children():
        hooks.append(m.register_forward_hook(make_hook(f"cls.{n}({m.__class__.__name__})")))
    with torch.no_grad():
        x,_=next(iter(loader)); model_q(x.to(device))
    for h in hooks: h.remove()
    print(f"\n{'='*100}\n [{tag}] CSC Report (Data{bit}+Count{BK}+Addr{BA})\n{'='*100}")
    for n,s in stats.items():
        if s["db"]==0: continue
        dk=s["db"]/8/1024; ck=s["cb"]/8/1024; cr=dk/ck if ck else 0
        print(f"  {n:<40} {str(s['shape']):<14} Dense={dk:.3f}KB  CSC={ck:.3f}KB  "
              f"Ratio={cr:.2f}x  Dum={s['dum']}")
    print(f"{'='*100}")

def csc_int8(m,dl,device='cpu'): _csc(m,dl,device,8,"INT8")
def csc_int4(m,dl,device='cpu'): _csc(m,dl,device,4,"INT4")

def _bw(model_q, loader, device, bit, tag):
    model_q.eval(); hw={}; NC,BK,BA,MC=4,4,16,15
    def make_hook(name):
        def h(m,i,o):
            if name not in hw:
                K=(m.out_channels if isinstance(m,nn.quantized.Conv2d)
                   else m.out_features if isinstance(m,nn.quantized.Linear) else 1)
                hw[name]={"K":K,"p":math.ceil(K/NC),"t":m.__class__.__name__,
                          "db":0,"cb":0,"bw":0}
            xq=i[0][0]; x=xq.int_repr() if hasattr(xq,'int_repr') else xq
            db=x.numel()*bit; de=ab=0
            if x.dim()==3:
                C,H,W=x.shape; ab=(H*W+1)*BA
                for hh in range(H):
                    for ww in range(W):
                        zc=0
                        for c in range(C):
                            if x[c,hh,ww].item()==0:
                                zc+=1
                                if zc>MC: de+=1;zc=0
                            else: de+=1;zc=0
            elif x.dim()==1:
                ab=2*BA; zc=0
                for v in x.tolist():
                    if v==0:
                        zc+=1
                        if zc>MC: de+=1;zc=0
                    else: de+=1;zc=0
            else: de=x.numel()
            sc=de*(bit+BK)+ab; p=hw[name]["p"]
            hw[name]["db"]+=db; hw[name]["cb"]+=sc; hw[name]["bw"]+=sc*p
        return h
    hooks=[]
    for n,m in model_q.features.named_children():
        hooks.append(m.register_forward_hook(make_hook(f"feat.{n}")))
    for n,m in model_q.classifier.named_children():
        hooks.append(m.register_forward_hook(make_hook(f"cls.{n}")))
    with torch.no_grad():
        x,_=next(iter(loader)); model_q(x.to(device))
    for h in hooks: h.remove()
    print(f"\n{'='*100}\n [{tag}] 4-Cluster SRAM Bandwidth\n{'='*100}")
    for n,s in hw.items():
        if s["db"]==0: continue
        dk=s["db"]/8/1024; ck=s["cb"]/8/1024; bk=s["bw"]/8/1024
        print(f"  {n:<20} {s['t']:<18} K={s['K']:<4}({s['p']:>2}pass) "
              f"Dense={dk:.3f}KB  CSC={ck:.3f}KB  BW={bk:.3f}KB")
    print(f"{'='*100}")

def bw_int8(m,dl,device='cpu'): _bw(m,dl,device,8,"INT8")
def bw_int4(m,dl,device='cpu'): _bw(m,dl,device,4,"INT4")

def _macs(model, loader, device, bw, ba, tag):
    model.eval(); stats={}; BB=4
    def make_hook(name):
        def h(m,i,o):
            if name in stats: return
            ix=i[0]; ox=o
            imap=ix[0].numel() if ix.dim()>1 else ix.numel()
            omap=ox[0].numel() if ox.dim()>1 else ox.numel()
            wt=bi=mac=0; lt=m.__class__.__name__
            if isinstance(m,(nn.Conv2d,*(getattr(nn,'quantized',type).__dict__.get('Conv2d',[]) if False else []))):
                pass
            if hasattr(nn,'quantized') and isinstance(m,(nn.quantized.Conv2d,nn.Conv2d)):
                K=m.out_channels; C=m.in_channels//m.groups
                R,S=m.kernel_size if isinstance(m.kernel_size,tuple) else (m.kernel_size,)*2
                wt=K*C*R*S*bw; bi=K*BB if m.bias is not None else 0
                Ho=ox.shape[2] if ox.dim()==4 else 1; Wo=ox.shape[3] if ox.dim()==4 else 1
                mac=K*C*R*S*Ho*Wo
            elif hasattr(nn,'quantized') and isinstance(m,(nn.quantized.Linear,nn.Linear)):
                K=m.out_features; C=m.in_features
                wt=K*C*bw; bi=K*BB if m.bias is not None else 0; mac=K*C
            stats[name]={"t":lt,"mac":mac,"wt":wt,"bi":bi,
                         "if":imap*ba,"of":omap*ba,"pk":imap*ba+wt+bi+omap*ba}
        return h
    tgt=[nn.Conv2d,nn.Linear]
    if hasattr(nn,'quantized'): tgt+=[nn.quantized.Conv2d,nn.quantized.Linear]
    hooks=[]
    for n,m in model.named_modules():
        if isinstance(m,tuple(tgt)): hooks.append(m.register_forward_hook(make_hook(n)))
    with torch.no_grad():
        x,_=next(iter(loader)); model(x.to(device))
    for h in hooks: h.remove()
    tm=sum(s["mac"] for s in stats.values())
    tw=sum(s["wt"]  for s in stats.values())
    tb=sum(s["bi"]  for s in stats.values())
    pk=max((s["pk"] for s in stats.values()),default=0)
    print(f"\n{'='*110}\n [{tag}] MACs & Memory\n{'='*110}")
    for n,s in stats.items():
        pct=s["mac"]/tm*100 if tm else 0
        print(f"  {n:<22} {s['t']:<20} MACs={s['mac']:>9,}({pct:5.1f}%) "
              f"W={s['wt']/1024:.3f}KB B={s['bi']/1024:.3f}KB "
              f"IF={s['if']/1024:.3f}KB OF={s['of']/1024:.3f}KB PK={s['pk']/1024:.3f}KB")
    print(f"  Total MACs={tm:,}  Weight={tw/1024:.3f}KB  Bias={tb/1024:.3f}KB  PeakSRAM={pk/1024:.3f}KB")
    print(f"{'='*110}")

def macs_int8(m,dl,device='cpu'): _macs(m,dl,device,1.0,1.0,"INT8")
def macs_int4(m,dl,device='cpu'): _macs(m,dl,device,0.5,0.5,"INT4")

def summary_table():
    print(f"\n{'='*70}\n INT4 vs INT8\n{'='*70}")
    for r in [("Bits","8","4"),("Weight mem","1B","0.5B"),("Act mem","1B","0.5B"),
              ("CSC entry","12b","8b"),("W range","-128~127","-8~7"),("QAT","optional","required")]:
        print(f"  {r[0]:<20} {r[1]:^15} {r[2]:^15}")
    print(f"{'='*70}")

# ==========================================
# 8. DRAM.txt & GOLDEN.txt Generator
#    for TOP_integration_tb
#
#  DRAM.txt  : 784 x N signed int8 pixels (hex 2-digit, one per line)
#               formula: pixel = clip(denorm*255, 0,255) - 128
#               testbench: reg signed [7:0] DRAM [0:784*test_iters-1]
#
#  GOLDEN.txt: N labels (hex 1-digit, one per line)
#               testbench: reg [3:0] GOLDEN [0:test_iters-1]
# ==========================================

def _to_int8_pixels(img_tensor, mean=(0.1307,), std=(0.3081,)):
    """
    Denormalize -> [0,255] uint8 -> subtract 128 -> signed int8.
    Returns flat numpy array of 784 int8 values.
    """
    img = img_tensor.numpy()
    if img.shape[0] == 1:
        denorm = img[0] * std[0] + mean[0]
    else:
        mn = np.array(mean); st = np.array(std)
        denorm = (img.transpose(1,2,0)*st + mn).mean(axis=2)
    uint8 = np.clip(denorm * 255.0, 0, 255).astype(np.int32)
    int8  = (uint8 - 128).astype(np.int8).flatten()
    pad   = 784 - len(int8)
    if pad > 0:
        int8 = np.pad(int8, (0, pad), constant_values=0)
    return int8[:784]


def generate_dram_and_golden(
        model_q,
        test_loader,
        num_samples=1000,
        out_dir="test/tb/TOP_test/MEM",
        dram_file="DRAM.txt",
        golden_file="GOLDEN.txt",
        device='cpu'):

    os.makedirs(out_dir, exist_ok=True)
    dp = os.path.join(out_dir, dram_file)
    gp = os.path.join(out_dir, golden_file)

    dlines = []
    glines = []
    done = 0

    model_q.eval()
    print(f"\n[DRAM/GOLDEN] Generating HW-Verification samples for {golden_file}...")

    for imgs, labels in tqdm(test_loader, desc="Batches"):
        imgs_device = imgs.to(device)
        with torch.no_grad():
            # 1. 取得軟體最終預測結果給 GOLDEN.txt
            outputs = model_q(imgs_device)
            software_preds = torch.argmax(outputs, 1)

            # 2. 🌟 終極殺招：攔截 PyTorch 內部的量化整數給 DRAM.txt
            quantized_imgs = model_q.quant(imgs_device)
            int_pixels = quantized_imgs.int_repr().cpu().numpy()

        for i in range(imgs.size(0)):
            if done >= num_samples:
                break

            # 寫入 DRAM.txt (背景會是 00，最大值不會超過 7f)
            pix = int_pixels[i].flatten()
            for p in pix:
                dlines.append(f"{int(p) & 0xFF:02x}")

            # 寫入 GOLDEN.txt
            pred_val = int(software_preds[i].item())
            glines.append(f"{pred_val & 0x0F:01x}")
            done += 1

        if done >= num_samples:
            break

    with open(dp, "w") as f:
        f.write("\n".join(dlines) + "\n")
    with open(gp, "w") as f:
        f.write("\n".join(glines) + "\n")

    print(f"  DRAM.txt  : {done * 784} lines (Extracted from int_repr)")
    print(f"  GOLDEN.txt: {done} lines (Software predictions)")
    return done

# ==========================================
# 9. Main
# ==========================================
if __name__ == "__main__":
    BATCH       = 64
    FP32_EP     = 15
    QAT_EP      = 8
    FP32_LR     = 0.05
    QAT_LR      = 5e-4
    N_SAMPLES   = 1000    # test_iters in testbench

    os.makedirs(WEIGHTS_DIR, exist_ok=True)
    os.makedirs(RESULTS_DIR, exist_ok=True)

    # ---- Data ----
    print("\n[0] Load MNIST (28x28, shuffle=False for test)...")
    train_l, val_l, test_l = get_mnist_loaders(BATCH, root=MNIST_ROOT)
    print(f"  Train={len(train_l.dataset):,} Val={len(val_l.dataset):,} Test={len(test_l.dataset):,}")

    # ---- FP32 ----
    print("\n[1] FP32 Pretrain")
    fp32_path = os.path.join(WEIGHTS_DIR, "best_lenet_fp32.pth")
    model_fp32 = LeNet(in_channels=1).to(DEFAULT_DEVICE)
    if os.path.exists(fp32_path):
        print(f"  Load existing: {fp32_path}")
        model_fp32.load_state_dict(torch.load(fp32_path, map_location=DEFAULT_DEVICE))
    else:
        model_fp32 = train_fp32(model_fp32, train_l, val_l,
                                epochs=FP32_EP, lr=FP32_LR,
                                device=DEFAULT_DEVICE, save_path=fp32_path)
    model_fp32.eval()
    crit = nn.CrossEntropyLoss()
    fl, fa, _ = evaluate(model_fp32, test_l, crit, DEFAULT_DEVICE)
    print(f"  FP32 -> Loss={fl:.4f}  Acc={fa:.2f}%")

    # ---- INT8 QAT ----
    print("\n[2] INT8 QAT")
    model_int8 = train_int8_qat(model_fp32, train_l, val_l,
                                epochs=QAT_EP, lr=QAT_LR,
                                save_path=os.path.join(WEIGHTS_DIR, "best_lenet_int8_qat.pth"))
    model_int8.eval()
    l8, a8, _ = evaluate(model_int8, test_l, crit, 'cpu')
    print(f"  INT8 -> Loss={l8:.4f}  Acc={a8:.2f}%  drop={fa-a8:.2f}%")

    # ---- INT4 QAT ----
    print("\n[3] INT4 QAT")
    model_int4 = train_int4_qat(model_fp32, train_l, val_l,
                                epochs=QAT_EP, lr=QAT_LR,
                                save_path=os.path.join(WEIGHTS_DIR, "best_lenet_int4_qat.pth"))
    model_int4.eval()
    l4, a4, _ = evaluate(model_int4, test_l, crit, 'cpu')
    print(f"  INT4 -> Loss={l4:.4f}  Acc={a4:.2f}%  drop={fa-a4:.2f}%")
    print(f"  {'OK' if fa-a4 < 3 else 'High drop'}")

    # ---- Profiling ----
    print("\n[4] Hardware Profiling")
    summary_table()
    print("\n-- INT8 --"); macs_int8(model_int8, test_l)
    print("\n-- INT4 --"); macs_int4(model_int4, test_l)
    print("\n-- INT8 Sparsity --"); profile_int8(model_int8, test_l)
    print("\n-- INT4 Sparsity --"); profile_int4(model_int4, test_l)
    print("\n-- INT8 CSC --"); csc_int8(model_int8, test_l)
    print("\n-- INT4 CSC --"); csc_int4(model_int4, test_l)
    print("\n-- INT8 BW  --"); bw_int8(model_int8, test_l)
    print("\n-- INT4 BW  --"); bw_int4(model_int4, test_l)

    # ---- Generate DRAM.txt & GOLDEN.txt ----
    # Generate separate vectors because int_repr() depends on each model's
    # activation quantizer. Hardware sparse weights are generated elsewhere.
    print("\n[5] Generate DRAM.txt & GOLDEN files for Verilog TB")

    # 第一次呼叫：產生 INT8 專用的答案卡
    generate_dram_and_golden(
        model_q=model_int8,
        test_loader=test_l,
        num_samples=N_SAMPLES,
        out_dir=TEST_MEM_DIR,
        dram_file="DRAM_INT8.txt",
        golden_file="GOLDEN_INT8.txt",
        device='cpu')  # 🌟 已經刪除 mean 和 std

    # 第二次呼叫：產生 INT4 (擴充至 INT8 運算) 專用的答案卡
    generate_dram_and_golden(
        model_q=model_int4,
        test_loader=test_l,
        num_samples=N_SAMPLES,
        out_dir=TEST_MEM_DIR,
        dram_file="DRAM_INT4.txt",
        golden_file="GOLDEN_INT4.txt",
        device='cpu')  # 🌟 已經刪除 mean 和 std

    print("\n Done.")
