import os, math, copy, platform, warnings
import numpy as np
import matplotlib.pyplot as plt
from tqdm import tqdm
from typing import Tuple
from sklearn.metrics import confusion_matrix
from PIL import Image
from functools import partial 

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
warnings.filterwarnings("ignore")

torch.backends.quantized.engine = 'qnnpack'

print("PyTorch:", torch.__version__)
print(f"Backend: {torch.backends.quantized.engine}  Device: {DEFAULT_DEVICE}")

# ==========================================
# 1.5 PACT FakeQuant for INT4 Activation
# ==========================================
class PACTFakeQuantize(tq.FakeQuantizeBase):
    def __init__(self, init_alpha=5.0, quant_min=0, quant_max=15, **kwargs):
        super().__init__()
        self.alpha = nn.Parameter(torch.tensor(float(init_alpha)))
        self.quant_min = quant_min
        self.quant_max = quant_max

        # 給 PyTorch convert() 用
        self.dtype = torch.quint8
        self.qscheme = torch.per_tensor_affine
        self.ch_axis = -1
        self.is_dynamic = False
        self.reduce_range = False

    def forward(self, X):
        alpha = torch.clamp(self.alpha, min=1e-6)

        # PACT clipping: y = min(max(x, 0), alpha)
        X_clip = torch.minimum(torch.clamp_min(X, 0.0), alpha)
        
        scale = alpha / float(self.quant_max - self.quant_min)
        X_q = torch.round(X_clip / scale)
        X_q = torch.clamp(X_q, self.quant_min, self.quant_max)
        X_dq = X_q * scale

        # STE: forward 用量化值，backward 讓梯度通過 clipping 前後
        return X_clip + (X_dq - X_clip).detach()

    def calculate_qparams(self):
        alpha = torch.clamp(self.alpha.detach(), min=1e-6)
        scale = alpha / float(self.quant_max - self.quant_min)
        zero_point = torch.tensor([0], dtype=torch.int64, device=scale.device)
        return scale.reshape(1), zero_point

def get_pact_int4_qconfig(init_alpha=6.0) -> QConfig:
    return QConfig(
        activation=partial(
            PACTFakeQuantize,
            quant_min=0, quant_max=127, # 🌟 保持 W4A8 架構
            dtype=torch.quint8,
            qscheme=torch.per_tensor_affine,
            reduce_range=False,
            init_alpha=init_alpha),
        weight=FakeQuantize.with_args(
            observer=MovingAverageMinMaxObserver,
            quant_min=-8, quant_max=7,
            dtype=torch.qint8,
            qscheme=torch.per_tensor_symmetric,
            reduce_range=False))

def print_pact_alpha(model, tag="INT4_PACT"):
    alphas = []
    for name, module in model.named_modules():
        if isinstance(module, PACTFakeQuantize):
            alphas.append((name, float(torch.clamp(module.alpha.detach(), min=1e-6).cpu())))
    if alphas:
        print(f"\n[{tag}] Learned PACT alpha values:")
        for name, alpha in alphas:
            print(f"  {name:<45} alpha={alpha:.6f}, act_scale≈{alpha/127.0:.6f}")

# ==========================================
# 2. QConfig
# ==========================================
def get_int8_qconfig() -> QConfig:
    return QConfig(
        activation=FakeQuantize.with_args(
            observer=MovingAverageMinMaxObserver,
            quant_min=0, quant_max=127,
            dtype=torch.quint8,
            qscheme=torch.per_tensor_affine,
            reduce_range=False),
        weight=FakeQuantize.with_args(
            observer=MovingAverageMinMaxObserver,
            quant_min=-128, quant_max=127,
            dtype=torch.qint8,
            qscheme=torch.per_tensor_symmetric,
            reduce_range=False))

def get_int4_qconfig() -> QConfig:
    return QConfig(
        activation=FakeQuantize.with_args(
            observer=MovingAverageMinMaxObserver,
            quant_min=0, quant_max=127,
            dtype=torch.quint8, qscheme=torch.per_tensor_affine, reduce_range=False),
        weight=FakeQuantize.with_args(
            observer=MovingAverageMinMaxObserver,
            quant_min=-8, quant_max=7,
            dtype=torch.qint8, qscheme=torch.per_tensor_symmetric, reduce_range=False))

# ==========================================
# 3. Data Loaders
# ==========================================
def get_mnist_loaders(batch_size=64, root="data/mnist", split_ratio=0.1):
    tf = transforms.Compose([
        transforms.Resize((28, 28)),
        transforms.ToTensor(),
    ])
    trainset = datasets.MNIST(root=root, train=True,  download=True, transform=tf)
    testset  = datasets.MNIST(root=root, train=False, download=True, transform=tf)
    val_len  = int(split_ratio * len(trainset))
    trainset, valset = torch.utils.data.random_split(
        trainset, [len(trainset)-val_len, val_len])
    kw = dict(batch_size=batch_size, num_workers=4, pin_memory=True)
    return (DataLoader(trainset, shuffle=True,  **kw),
            DataLoader(valset,   shuffle=False, **kw),
            DataLoader(testset,  shuffle=False, **kw))

# ==========================================
# 4. LeNet Model
# ==========================================
class LeNet(nn.Module):
    def __init__(self, in_channels=1, num_classes=10):
        super().__init__()
        self.quant    = tq.QuantStub()
        self.features = nn.Sequential(
            nn.Conv2d(in_channels, 6, 5),
            nn.ReLU(inplace=True),
            nn.MaxPool2d(2, 2),
            nn.Conv2d(6, 16, 5),
            nn.ReLU(inplace=True),
            nn.MaxPool2d(2, 2),
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
# 5. Utilities & Evaluation
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
# 6. Training Functions
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
    plot_curves(tl_h,ta_h,vl_h,va_h,"./results/fp32_loss_accuracy.png")
    return model

def _run_qat(model_fp32, train_loader, val_loader, qconfig, epochs, lr, save_path, tag):
    print(f"\n{'='*60}\n  {tag} QAT\n{'='*60}")
    model = copy.deepcopy(model_fp32).cpu().eval()
    model.fuse_model(); model.qconfig = qconfig

    if "PACT" in tag:
        model.quant.qconfig = get_int8_qconfig()

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
    plot_curves(tl_h,ta_h,vl_h,va_h,f"./results/{tag.lower()}_qat_loss_accuracy.png")
    
    if "PACT" in tag:
        print_pact_alpha(model, tag)

    model.eval(); mq = tq.convert(model, inplace=False)
    print(f"  [{tag}] Converted to quantized model.")

    # 量化尺度掃描儀
    print(f"\n[{tag}] 模型量化尺度分析 (Scale Analysis):")
    print(f"{'-'*85}")
    print(f" {'Layer (硬體 Kernel)':<20} | {'Sin':<8} | {'Sw':<8} | {'Sout':<8} | {'M (真實乘數)':<12} | {'推薦 >>> N'}")
    print(f"{'-'*85}")
    layers_to_analyze = [
        ("Kernel 1 (Conv1)", mq.features[0]),
        ("Kernel 2 (Conv2)", mq.features[3]),
        ("Kernel 3 (FC1)",   mq.classifier[0]),
        ("Kernel 4 (FC2)",   mq.classifier[2]),
        ("Kernel 5 (FC3)",   mq.classifier[4])
    ]
    try:
        current_sin = mq.quant.scale.item()
    except:
        current_sin = 1.0
    for name, layer in layers_to_analyze:
        if hasattr(layer, 'weight') and hasattr(layer, 'scale'):
            sw   = layer.weight().q_scale()
            sout = layer.scale
            m_real = (current_sin * sw) / sout
            
            if m_real > 0:
                # 🌟 換成線性誤差最小化的搜尋邏輯
                best_n = 0
                min_diff = float('inf')
                for n in range(32):
                    diff = abs(m_real * (1 << n) - 1.0)
                    if diff < min_diff:
                        min_diff = diff
                        best_n = n
                n_hw = best_n
            else:
                n_hw = "N/A"
                
            print(f" {name:<20} | {current_sin:.4f}   | {sw:.4f}   | {sout:.4f}   | {m_real:.6f}     | >>> {n_hw}")
            current_sin = sout
    print(f"{'-'*85}\n")

    return mq

def train_int8_qat(fp32, train_l, val_l, epochs=8, lr=5e-4, save_path="./weights/best_lenet_int8_qat.pth"):
    return _run_qat(fp32, train_l, val_l, get_int8_qconfig(), epochs, lr, save_path, "INT8")

def train_int4_qat(fp32, train_l, val_l, epochs=8, lr=5e-4, save_path="./weights/best_lenet_int4_qat.pth"):
    return _run_qat(fp32, train_l, val_l, get_int4_qconfig(), epochs, lr, save_path, "INT4")

def train_pact_int4_qat(fp32, train_l, val_l, epochs=8, lr=5e-4, save_path="./weights/best_lenet_pact_int4_qat.pth"):
    return _run_qat(fp32, train_l, val_l, get_pact_int4_qconfig(init_alpha=6.0), epochs, lr, save_path, "PACT_INT4")
# ==========================================
# 7. File Generation Functions (DRAM, Golden, IFMAP, Kernels)
# ==========================================
def generate_ifmap(model_q, test_loader, num_samples=1, out_dir="test/tb/TOP_test/MEM", ifmap_file="ifmap.txt", device='cpu'):
    os.makedirs(out_dir, exist_ok=True)
    fp = os.path.join(out_dir, ifmap_file)
    lines = []
    done = 0
    model_q.eval()
    print(f"\n[IFMAP] Generating {ifmap_file} ...")
    for imgs, _ in test_loader:
        imgs_device = imgs.to(device)
        with torch.no_grad():
            quantized_imgs = model_q.quant(imgs_device)
            int_pixels = quantized_imgs.int_repr().cpu().numpy()
        for i in range(imgs.size(0)):
            if done >= num_samples: break
            pix = int_pixels[i].flatten()
            for p in pix: lines.append(f"{int(p) & 0xFF:02x}")
            done += 1
        if done >= num_samples: break
    with open(fp, "w") as f: f.write("\n".join(lines) + "\n")
    print(f"  IFMAP : {len(lines)} lines")

def generate_dram_and_golden(model_q, test_loader, num_samples=1000, out_dir="test/tb/TOP_test/MEM",
                              dram_file="DRAM.txt", golden_label_file="GOLDEN_LABEL.txt",
                              golden_pred_file="GOLDEN_PRED.txt", device='cpu'):
    os.makedirs(out_dir, exist_ok=True)
    dram_path  = os.path.join(out_dir, dram_file)
    label_path = os.path.join(out_dir, golden_label_file)
    pred_path  = os.path.join(out_dir, golden_pred_file)
    dlines, label_lines, pred_lines = [], [], []
    done = 0
    model_q.eval()
    print(f"\n[DRAM/GOLDEN] Generating verification files: {dram_file} ...")
    for imgs, labels in tqdm(test_loader, desc="Batches"):
        imgs_device = imgs.to(device)
        with torch.no_grad():
            outputs = model_q(imgs_device)
            software_preds = torch.argmax(outputs, dim=1)
            quantized_imgs = model_q.quant(imgs_device)
            int_pixels = quantized_imgs.int_repr().cpu().numpy()
        for i in range(imgs.size(0)):
            if done >= num_samples: break
            pix = int_pixels[i].flatten()
            for p in pix: dlines.append(f"{int(p) & 0xFF:02x}")
            label_lines.append(f"{int(labels[i].item()) & 0x0F:01x}")
            pred_lines.append(f"{int(software_preds[i].item()) & 0x0F:01x}")
            done += 1
        if done >= num_samples: break
    with open(dram_path,  "w") as f: f.write("\n".join(dlines) + "\n")
    with open(label_path, "w") as f: f.write("\n".join(label_lines) + "\n")
    with open(pred_path,  "w") as f: f.write("\n".join(pred_lines) + "\n")
    print(f"  DRAM           : {done*784} lines")
    print(f"  GOLDEN_LABEL   : {done} lines")
    print(f"  GOLDEN_PRED    : {done} lines")
    return done

def export_weights_for_hardware_compiler(model_q, out_dir="layer2", tag="INT8"):
    os.makedirs(out_dir, exist_ok=True)
    layer_mapping = {
        "features.0": "kernel1.txt", "features.3": "kernel2.txt",
        "classifier.0": "kernel3.txt", "classifier.2": "kernel4.txt", "classifier.4": "kernel5.txt"
    }
    print("\n[Export Kernel Files]")
    for name, module in model_q.named_modules():
        if name not in layer_mapping: continue
        filename = layer_mapping[name]
        filepath = os.path.join(out_dir, filename)
        w = module.weight().int_repr().cpu().numpy()
        if len(w.shape) == 4:
            with open(filepath, "w") as f: f.write(str(w.tolist()))
        elif len(w.shape) == 2:
            flat = w.flatten()
            with open(filepath, "w") as f: f.write(" ".join(map(str, flat)))
        print(f"  {filename:<12} shape={w.shape}")

# ==========================================
# 8. 硬體編譯與壓縮輔助函式 (Hardware Compiler Tools)
# ==========================================
def genAdrCountData(listA, inActOrWeight, modified_mask):
    if inActOrWeight:
        zeroCode = 255; max_count = 31
    else:
        zeroCode = 127; max_count = 15
    adrList, countList, dataList = [], [], []

    for j in range(len(listA[0])):
        currentCol = [row[j] for row in listA]
        currentMaskCol = [row[j] for row in modified_mask]
        if max(map(abs, currentCol)) == 0:
            adrList.append(zeroCode)
        else:
            if j != 0: adrList.append(len(dataList))
            for i, value in enumerate(currentCol):
                if value != 0:
                    if currentMaskCol[i]: countList.append(max_count)
                    else: countList.append(i)
                    dataList.append(value)
    if len(dataList) - 1 > adrList[-1]: adrList.append(len(dataList))
    if len(dataList) - adrList[-1] == 1: adrList.append(len(dataList))
    if all([row[-1] == 0 for row in listA]): adrList.append(zeroCode)

    adrList.append(0); countList.append(0); dataList.append(0)
    return adrList, countList, dataList

def toBinary(i, digits, signed=False):
    if signed:
        if i < 0: return format((1 << digits) + i, f'0{digits}b')
        else: return format(i, f'0{digits}b')
    else: return format(i, f'0{digits}b')

def combineDataAndCount(theData, theCount, cscDataWidth=8, cscCountWidth=4):
    theDataWithCount = list(zip(theData, theCount))
    theDataCountBinary = [toBinary(x, cscDataWidth, signed=True) + toBinary(y, cscCountWidth, signed=False)
                          for x, y in theDataWithCount]
    return theDataCountBinary

def read_matrices_from_file(file_path, matrix_size, channels):
    with open(file_path, 'r') as file:
        data = file.read().replace('[', '').replace(']', '').replace(',', '').split()
        data = [int(num) for num in data]
        num_matrices = len(data) // (matrix_size * matrix_size * channels)
        matrices = []
        for i in range(num_matrices):
            matrix = data[i * matrix_size * matrix_size * channels:(i + 1) * matrix_size * matrix_size * channels]
            matrix = np.array(matrix).reshape(channels, matrix_size, matrix_size)
            matrices.append(matrix)
        return np.array(matrices)

def read_and_group_data(file_path, elements_per_group, num_groups):
    with open(file_path, 'r') as file:
        data = file.read().replace('[', '').replace(']', '').split()
        data = [int(num) for num in data]
        grouped_data = np.array([data[i:i + elements_per_group] for i in range(0, len(data), elements_per_group)])
        return grouped_data

def threshold_array_by_mean_abs(arr, factor=0.8):
    threshold = np.mean(np.abs(arr)) * factor
    arr[np.abs(arr) < threshold] = 0
    return arr

def modify_matrix(matrix):
    rows, cols = matrix.shape
    modified_mask = np.zeros_like(matrix, dtype=bool)
    for j in range(cols):
        if np.all(matrix[:, j] == 0):
            matrix[-1, j] = 1
            modified_mask[-1, j] = True
    return matrix, modified_mask

def flatten_2d_array(arr): return arr.flatten()
def stack_and_transpose(arrays): return np.transpose(np.vstack(arrays))

def binary_str_to_16bit_hex(binary_list): return [format(int(binary_str, 2), '04x') for binary_str in binary_list]
def binary_str_to_12bit_hex(binary_list): return [format(int(binary_str, 2), '03x') for binary_str in binary_list]

def save_dec_as_hex_to_txt(input_list, filename, mode):
    hex_list = [hex(item)[2:] for item in input_list]
    with open(filename, mode) as file:
        for hex_val in hex_list: file.write(hex_val + "\n")

def save_data_to_txt(data_list, filename, mode):
    with open(filename, mode) as file:
        for item in data_list: file.write(item + "\n")

def merge_txt_files(input_filenames, repetitions, output_filename):
    with open(output_filename, 'w') as output_file:
        for filename, repeat in zip(input_filenames, repetitions):
            for _ in range(repeat):
                with open(filename, 'r') as input_file:
                    for line in input_file: output_file.write(line)

# ==========================================
# 8.5 INT4 SIMD2 硬體格式輔助函式
# ==========================================
def int4_payload(value: int) -> int:
    """將 INT4 weight 轉為 4-bit two's complement unsigned 表示。
    輸入範圍 [-8, 7]，超出範圍先 clip 再取低 4 bits。
    例: -1 -> 0xF, -8 -> 0x8, 7 -> 0x7, 0 -> 0x0
    """
    value = max(-8, min(7, int(value)))
    return value & 0xF


def genAdrCountData_int4_conv_single(listA, inActOrWeight, modified_mask):
    """Conv 層 INT4 CSC 壓縮 (count_width=5, single-lane)。

    格式: {data[7:0]=0000_xxxx, count[4:0]}，共 13 bits。
    - data[7:4] = 0000 (固定為零)
    - data[3:0] = INT4 two's complement payload
    - count[4:0] = 行索引 (0..24) 或 max_count=31 (mask sentinel)

    回傳:
        adrList       : column 的起始位址 (int list)，與原始 genAdrCountData 相同語意
        hex_data_list : 13-bit 資料的 12-bit hex string list ('03x' 格式)
                        (與原 binary_str_to_12bit_hex 輸出相容)

    RTL 注意: 讀取此格式時需對 data[3:0] 做 sign-extend 才能得到正確的 INT4 值。
    """
    if inActOrWeight:
        zeroCode = 255; max_count = 31
    else:
        zeroCode = 127; max_count = 15

    adrList   = []
    hex_data  = []  # 直接產出 hex string，不需要 countList / dataList 中間步驟

    for j in range(len(listA[0])):
        currentCol     = [row[j] for row in listA]
        currentMaskCol = [row[j] for row in modified_mask]

        if max(map(abs, currentCol)) == 0:
            adrList.append(zeroCode)
        else:
            if j != 0:
                adrList.append(len(hex_data))
            for i, value in enumerate(currentCol):
                if value != 0:
                    cnt   = max_count if currentMaskCol[i] else i
                    p4    = int4_payload(value)                       # 4-bit unsigned
                    # 組合: {0000, p4[3:0], cnt[4:0]} = 13 bits
                    bits  = toBinary(p4, 8, signed=False) + toBinary(cnt, 5, signed=False)
                    hex_data.append(format(int(bits, 2), '03x'))      # 12-bit hex (3 digits)

    # ---- trailing sentinel (同原版 genAdrCountData 邏輯) ----
    if len(hex_data) - 1 > adrList[-1]: adrList.append(len(hex_data))
    if len(hex_data) - adrList[-1] == 1: adrList.append(len(hex_data))
    if all([row[-1] == 0 for row in listA]):  adrList.append(zeroCode)

    adrList.append(0)
    hex_data.append(format(0, '03x'))   # sentinel data word = '000'

    return adrList, hex_data


def genAdrCountData_int4_fc_simd2(listA, inActOrWeight, modified_mask):
    """FC 層 INT4 adjacent SIMD2 CSC 壓縮 (count_width=4)。

    每個 column 的非零 entry 兩兩打包成一個 16-bit ROM word:
        {w1[3:0], count1[3:0], w0[3:0], count0[3:0]}
    若該 column 非零 entry 數為奇數，最後一個以 (w1=0, count1=0) 補零。

    addr boundary 直接指向打包後的 data_words 索引（非打包前的 entry 數），
    RTL controller 必須以「每讀一個 word = 兩個 MAC 運算」的方式處理。

    回傳:
        adrList       : column 的起始位址 (int list)
        hex_data_list : 16-bit packed words 的 hex string list ('04x' 格式)

    RTL 注意:
        - 每個 word 的 lane0 = bits[7:0]  = {w0[3:0], count0[3:0]}
        - 每個 word 的 lane1 = bits[15:8] = {w1[3:0], count1[3:0]}
        - w0/w1 均需 sign-extend bits[3:0] 以還原 INT4 有號值
        - 若 lane1 的 w1=0x0 且 count1=0x0，表示本 word 只有一個有效 MAC
    """
    if inActOrWeight:
        zeroCode = 255; max_count = 31   # conv path (不應走到這裡，但保留容錯)
    else:
        zeroCode = 127; max_count = 15   # FC path

    adrList    = []
    data_words = []   # 直接存放 16-bit hex string

    for j in range(len(listA[0])):
        currentCol     = [row[j] for row in listA]
        currentMaskCol = [row[j] for row in modified_mask]

        if max(map(abs, currentCol)) == 0:
            adrList.append(zeroCode)
        else:
            if j != 0:
                adrList.append(len(data_words))   # 打包後的 word 起始索引

            # 收集本 column 所有非零 entry: (count, value)
            entries = []
            for i, value in enumerate(currentCol):
                if value != 0:
                    cnt = max_count if currentMaskCol[i] else i
                    entries.append((cnt, int(value)))

            # 相鄰兩兩打包
            for idx in range(0, len(entries), 2):
                count0, value0 = entries[idx]
                if idx + 1 < len(entries):
                    count1, value1 = entries[idx + 1]
                else:
                    count1, value1 = 0, 0    # 奇數補零

                bits = (
                    toBinary(int4_payload(value1), 4, signed=False) +   # bits[15:12]
                    toBinary(count1,               4, signed=False) +   # bits[11:8]
                    toBinary(int4_payload(value0), 4, signed=False) +   # bits[7:4]
                    toBinary(count0,               4, signed=False)     # bits[3:0]
                )
                data_words.append(format(int(bits, 2), '04x'))          # 16-bit hex

    # ---- trailing sentinel (同原版 genAdrCountData 邏輯) ----
    if len(data_words) - 1 > adrList[-1]: adrList.append(len(data_words))
    if len(data_words) - adrList[-1] == 1: adrList.append(len(data_words))
    if all([row[-1] == 0 for row in listA]):  adrList.append(zeroCode)

    adrList.append(0)
    data_words.append('0000')   # sentinel word

    return adrList, data_words

# ==========================================
# 9. 終極硬體編譯整合函式
# ==========================================
def generate_verilog_parameters(file_names, output_file, mode):

    if (mode == 1) :
        param_names = [
            "INT8_ROM_WEIGHT_ADDR_1_END       ", "INT8_ROM_WEIGHT_DATA_1_END       ",
            "INT8_ROM_WEIGHT_ADDR_2_FORMER_END", "INT8_ROM_WEIGHT_DATA_2_FORMER_END",
            "INT8_ROM_WEIGHT_ADDR_2_LATER_END ", "INT8_ROM_WEIGHT_DATA_2_LATER_END ",
            "INT8_ROM_WEIGHT_ADDR_3_END       ", "INT8_ROM_WEIGHT_DATA_3_END       ",
            "INT8_ROM_WEIGHT_ADDR_4_END       ", "INT8_ROM_WEIGHT_DATA_4_END       ",
            "INT8_ROM_WEIGHT_ADDR_5_END       ", "INT8_ROM_WEIGHT_DATA_5_END       "
        ]
    elif (mode == 2) :
        param_names = [
            "INT4_ROM_WEIGHT_ADDR_1_END       ", "INT4_ROM_WEIGHT_DATA_1_END       ",
            "INT4_ROM_WEIGHT_ADDR_2_FORMER_END", "INT4_ROM_WEIGHT_DATA_2_FORMER_END",
            "INT4_ROM_WEIGHT_ADDR_2_LATER_END ", "INT4_ROM_WEIGHT_DATA_2_LATER_END ",
            "INT4_ROM_WEIGHT_ADDR_3_END       ", "INT4_ROM_WEIGHT_DATA_3_END       ",
            "INT4_ROM_WEIGHT_ADDR_4_END       ", "INT4_ROM_WEIGHT_DATA_4_END       ",
            "INT4_ROM_WEIGHT_ADDR_5_END       ", "INT4_ROM_WEIGHT_DATA_5_END       "
        ]

    total_length = 0
    with open(output_file, 'w') as out_file:
        out_file.write("parameter IACT_DATA_END             = 'd784;\n\n")
        for file_name, param_name in zip(file_names, param_names):
            if not os.path.exists(file_name): continue
            with open(file_name, 'r') as in_file:
                length = sum(1 for _ in in_file)
                total_length += length
                out_file.write(f"localparam {param_name:<25} = 'd{total_length};\n")
    print(f"✅ 成功產生 Verilog 參數表 -> {output_file}")

def rom2coe(input_file, output_file):
    print(f"[轉換中] 正在將 {input_file} 轉換為 {output_file} ...")
    if not os.path.exists(input_file): return
    with open(input_file, 'r') as f: values = f.read().split()
    with open(output_file, 'w') as f:
        f.write("memory_initialization_radix=16;\n")
        f.write("memory_initialization_vector=\n")
        total = len(values)
        for i, val in enumerate(values):
            hex_val = val.strip().lower().replace('0x', '').zfill(4)[-4:]
            f.write(hex_val + (";\n" if i == total - 1 else ",\n"))
    print(f"✅ COE 轉換成功！總共 {total} 個權重項已寫入 {output_file}")

def compile_hardware_rom():
    """原版 INT8 / INT4-sign-extended-to-INT8 硬體 ROM 編譯器。
    使用標準 CSC 壓縮，所有層的 data 均為 8-bit wide。
    輸出: ROM_sparse.txt / ROM_sparse_COE.coe
    """
    print("\n" + "="*60)
    print(" [啟動硬體編譯器] 開始讀取 Kernel 進行稀疏壓縮 (INT8 格式)...")
    print("="*60)

    conv1_weight_path = 'layer2/kernel1.txt'
    conv2_weight_path = 'layer2/kernel2.txt'
    fc1_weight_path   = 'layer2/kernel3.txt'
    fc2_weight_path   = 'layer2/kernel4.txt'
    fc3_weight_path   = 'layer2/kernel5.txt'

    if not os.path.exists(conv1_weight_path):
        print("🚨 找不到權重檔案，請確認前面的訓練與匯出步驟是否成功。")
        return

    conv1_weight = read_matrices_from_file(conv1_weight_path, 5, 1)
    conv2_weight = read_matrices_from_file(conv2_weight_path, 5, 6)
    fc1_weight   = read_and_group_data(fc1_weight_path, 256, 120)
    fc2_weight   = read_and_group_data(fc2_weight_path, 120, 84)
    fc3_weight   = read_and_group_data(fc3_weight_path, 84, 10)

    conv_threshold, fc_threshold = 0.9, 0.9
    conv1_weight = threshold_array_by_mean_abs(conv1_weight, conv_threshold)
    conv2_weight = threshold_array_by_mean_abs(conv2_weight, conv_threshold)
    fc1_weight   = threshold_array_by_mean_abs(fc1_weight, fc_threshold)
    fc2_weight   = threshold_array_by_mean_abs(fc2_weight, fc_threshold)
    fc3_weight   = threshold_array_by_mean_abs(fc3_weight, fc_threshold)

    # Layer 1 (Conv1)
    conv1_weight_merge = stack_and_transpose([flatten_2d_array(conv1_weight[i]) for i in range(6)])
    conv1_weight_merge, conv1_weight_merge_mask = modify_matrix(conv1_weight_merge)
    weight_0_addr, weight_0_count, weight_0_data = genAdrCountData(conv1_weight_merge, True, conv1_weight_merge_mask)
    weight_0_data_count = combineDataAndCount(weight_0_data, weight_0_count, cscDataWidth=8, cscCountWidth=5)
    save_dec_as_hex_to_txt(weight_0_addr, 'weight_0_addr.txt', 'w')
    save_data_to_txt(binary_str_to_12bit_hex(weight_0_data_count), 'weight_0_data_count.txt', 'w')

    # Layer 2 (Conv2)
    conv2_flat = [flatten_2d_array(conv2_weight[i]) for i in range(16)]
    for chunk_idx, start_idx in enumerate([0, 25, 50, 75, 100, 125]):
        end_idx = start_idx + 25
        merge_c = stack_and_transpose([cf[start_idx:end_idx] for cf in conv2_flat])
        c_former, c_former_mask = modify_matrix(merge_c[:, 0:8])
        c_later,  c_later_mask  = modify_matrix(merge_c[:, 8:16])
        addr_f, count_f, data_f = genAdrCountData(c_former, True, c_former_mask)
        addr_l, count_l, data_l = genAdrCountData(c_later,  True, c_later_mask)
        dc_f = combineDataAndCount([int(x) for x in data_f], count_f, cscDataWidth=8, cscCountWidth=5)
        dc_l = combineDataAndCount([int(x) for x in data_l], count_l, cscDataWidth=8, cscCountWidth=5)
        save_dec_as_hex_to_txt(addr_f, f'weight_2_c{chunk_idx}_former_addr.txt', 'w')
        save_dec_as_hex_to_txt(addr_l, f'weight_2_c{chunk_idx}_later_addr.txt', 'w')
        save_data_to_txt(binary_str_to_16bit_hex(dc_f), f'weight_2_c{chunk_idx}_former_data_count.txt', 'w')
        save_data_to_txt(binary_str_to_16bit_hex(dc_l), f'weight_2_c{chunk_idx}_later_data_count.txt', 'w')

    merge_txt_files([f'weight_2_c{i}_former_addr.txt' for i in range(6)], [1]*6, 'weight_2_addr_former.txt')
    merge_txt_files([f'weight_2_c{i}_later_addr.txt' for i in range(6)], [1]*6, 'weight_2_addr_later.txt')
    merge_txt_files([f'weight_2_c{i}_former_data_count.txt' for i in range(6)], [1]*6, 'weight_2_data_count_former.txt')
    merge_txt_files([f'weight_2_c{i}_later_data_count.txt' for i in range(6)], [1]*6, 'weight_2_data_count_later.txt')

    # Layer 3 (FC1)
    mode = 'w'
    for i in range(16):
        for j in range(30):
            fc1_modify_matrix, mask = modify_matrix(fc1_weight[0+4*j:4+4*j, i*16:16+i*16])
            w3_addr, w3_count, w3_data = genAdrCountData(fc1_modify_matrix, False, mask)
            w3_dc = combineDataAndCount(w3_data, w3_count, cscDataWidth=8, cscCountWidth=4)
            save_dec_as_hex_to_txt(w3_addr, 'weight_3_addr.txt', mode)
            save_data_to_txt(binary_str_to_12bit_hex(w3_dc), 'weight_3_data_count.txt', mode)
            mode = 'a'

    # Layer 4 (FC2)
    mode = 'w'
    for i in range(6):
        for j in range(21):
            fc2_modify_matrix, mask = modify_matrix(fc2_weight[0+4*j:4+4*j, i*20:20+i*20])
            w4_addr, w4_count, w4_data = genAdrCountData(fc2_modify_matrix, False, mask)
            w4_dc = combineDataAndCount(w4_data, w4_count, cscDataWidth=8, cscCountWidth=4)
            save_dec_as_hex_to_txt(w4_addr, 'weight_4_addr.txt', mode)
            save_data_to_txt(binary_str_to_12bit_hex(w4_dc), 'weight_4_data_count.txt', mode)
            mode = 'a'

    # Layer 5 (FC3)
    mode = 'w'
    for i in range(4):
        for j in range(3):
            temp_mat = fc3_weight[0+4*j:4+4*j, i*21:21+i*21] if j != 2 else fc3_weight[8:10, i*21:21+i*21]
            fc3_modify_matrix, mask = modify_matrix(temp_mat)
            w5_addr, w5_count, w5_data = genAdrCountData(fc3_modify_matrix, False, mask)
            w5_dc = combineDataAndCount(w5_data, w5_count, cscDataWidth=8, cscCountWidth=4)
            save_dec_as_hex_to_txt(w5_addr, 'weight_5_addr.txt', mode)
            save_data_to_txt(binary_str_to_12bit_hex(w5_dc), 'weight_5_data_count.txt', mode)
            mode = 'a'

    # 最終匯出
    file_names = [
        'weight_0_addr.txt', 'weight_0_data_count.txt',
        'weight_2_addr_former.txt', 'weight_2_data_count_former.txt',
        'weight_2_addr_later.txt', 'weight_2_data_count_later.txt',
        'weight_3_addr.txt', 'weight_3_data_count.txt',
        'weight_4_addr.txt', 'weight_4_data_count.txt',
        'weight_5_addr.txt', 'weight_5_data_count.txt'
    ]
    print("\n開始生成硬體燒錄檔案 (INT8)...")
    generate_verilog_parameters(file_names, 'rom_params_for_verilog.txt', 1)
    merge_txt_files(file_names, [1]*12, 'ROM_sparse.txt')
    rom2coe('ROM_sparse.txt', 'ROM_sparse_COE.coe')

    print("="*60)
    print(" 🎉 INT8 所有硬體檔案生成完畢！")
    print("="*60 + "\n")


def compile_hardware_rom_int4_simd2():
    """INT4 adjacent SIMD2 full packing 硬體 ROM 編譯器。

    格式說明:
    ┌─────────────────────────────────────────────────────────────┐
    │  Conv1     (Kernel 1): single-lane INT4, 12-bit hex         │
    │    {data[7:0]=0000_xxxx, count[4:0]}                        │
    │  Conv2 F/L (Kernel 2): single-lane INT4, 16-bit hex         │
    │    {0000_0000_xxxx, count[4:0]} zero-padded to 16 bits      │
    │  FC1/2/3   (Kernel 3-5): adjacent SIMD2, 16-bit hex         │
    │    {w1[3:0], count1[3:0], w0[3:0], count0[3:0]}             │
    │    → RTL 每讀一 word = 兩個 MAC 運算                        │
    └─────────────────────────────────────────────────────────────┘

    RTL 設計注意事項:
    - 所有 INT4 weight 均需對低 4 bits 做 sign-extend 後才能進 MAC
    - FC 層 SIMD2 的 addr boundary 指向打包後 word 的索引
    - 若 lane1 的 {w1, count1} = {0x0, 0x0}，表示該 word 只有一個有效 MAC
    - Conv 層維持 single-lane (count_width=5 → 18-bit 超出 16-bit ROM 上限)

    輸出: ROM_sparse_INT4_PACKED_SIMD2_FULL.txt
          ROM_sparse_INT4_PACKED_SIMD2_FULL.coe
          rom_params_for_verilog_int4_simd2.txt
    """
    print("\n" + "="*60)
    print(" [啟動 INT4 SIMD2 硬體編譯器] Adjacent SIMD2 Full Packing")
    print("="*60)

    conv1_weight_path = 'layer2/kernel1.txt'
    conv2_weight_path = 'layer2/kernel2.txt'
    fc1_weight_path   = 'layer2/kernel3.txt'
    fc2_weight_path   = 'layer2/kernel4.txt'
    fc3_weight_path   = 'layer2/kernel5.txt'

    if not os.path.exists(conv1_weight_path):
        print("🚨 找不到權重檔案，請確認前面的訓練與匯出步驟是否成功。")
        return

    conv1_weight = read_matrices_from_file(conv1_weight_path, 5, 1)
    conv2_weight = read_matrices_from_file(conv2_weight_path, 5, 6)
    fc1_weight   = read_and_group_data(fc1_weight_path, 256, 120)
    fc2_weight   = read_and_group_data(fc2_weight_path, 120, 84)
    fc3_weight   = read_and_group_data(fc3_weight_path, 84, 10)

    conv_threshold, fc_threshold = 0.9, 0.9
    conv1_weight = threshold_array_by_mean_abs(conv1_weight, conv_threshold)
    conv2_weight = threshold_array_by_mean_abs(conv2_weight, conv_threshold)
    fc1_weight   = threshold_array_by_mean_abs(fc1_weight, fc_threshold)
    fc2_weight   = threshold_array_by_mean_abs(fc2_weight, fc_threshold)
    fc3_weight   = threshold_array_by_mean_abs(fc3_weight, fc_threshold)

    # ------------------------------------------------------------------
    # Layer 1 (Conv1): INT4 single-lane, 12-bit hex
    # 使用 genAdrCountData_int4_conv_single，inActOrWeight=True (zeroCode=255, max_count=31)
    # ------------------------------------------------------------------
    print("\n[SIMD2] Layer 1 (Conv1) - INT4 single-lane (count_width=5)...")
    conv1_weight_merge = stack_and_transpose([flatten_2d_array(conv1_weight[i]) for i in range(6)])
    conv1_weight_merge, conv1_weight_merge_mask = modify_matrix(conv1_weight_merge)
    w1_addr, w1_hex = genAdrCountData_int4_conv_single(
        conv1_weight_merge, True, conv1_weight_merge_mask)
    save_dec_as_hex_to_txt(w1_addr, 'w4_0_addr.txt', 'w')
    save_data_to_txt(w1_hex,        'w4_0_data_count.txt', 'w')
    print(f"  Conv1: {len(w1_addr)} addr entries, {len(w1_hex)} data words")

    # ------------------------------------------------------------------
    # Layer 2 (Conv2): INT4 single-lane, 16-bit hex
    # Former/Later 均使用 genAdrCountData_int4_conv_single，inActOrWeight=True
    # 但回傳的是 12-bit hex；轉成 16-bit 時直接 zero-pad 高 4 bits
    # ------------------------------------------------------------------
    print("\n[SIMD2] Layer 2 (Conv2) - INT4 single-lane Former/Later (count_width=5)...")
    conv2_flat = [flatten_2d_array(conv2_weight[i]) for i in range(16)]

    for chunk_idx, start_idx in enumerate([0, 25, 50, 75, 100, 125]):
        end_idx = start_idx + 25
        merge_c = stack_and_transpose([cf[start_idx:end_idx] for cf in conv2_flat])

        c_former, c_former_mask = modify_matrix(merge_c[:, 0:8])
        c_later,  c_later_mask  = modify_matrix(merge_c[:, 8:16])

        addr_f, hex_f = genAdrCountData_int4_conv_single(c_former, True, c_former_mask)
        addr_l, hex_l = genAdrCountData_int4_conv_single(c_later,  True, c_later_mask)

        # Conv2 原版輸出 16-bit hex；12-bit hex 零填補高 4 bits 即可
        hex_f_16 = [h.zfill(4) for h in hex_f]
        hex_l_16 = [h.zfill(4) for h in hex_l]

        save_dec_as_hex_to_txt(addr_f, f'w4_2_c{chunk_idx}_former_addr.txt', 'w')
        save_dec_as_hex_to_txt(addr_l, f'w4_2_c{chunk_idx}_later_addr.txt', 'w')
        save_data_to_txt(hex_f_16, f'w4_2_c{chunk_idx}_former_data_count.txt', 'w')
        save_data_to_txt(hex_l_16, f'w4_2_c{chunk_idx}_later_data_count.txt', 'w')

    merge_txt_files([f'w4_2_c{i}_former_addr.txt'       for i in range(6)], [1]*6, 'w4_2_addr_former.txt')
    merge_txt_files([f'w4_2_c{i}_later_addr.txt'        for i in range(6)], [1]*6, 'w4_2_addr_later.txt')
    merge_txt_files([f'w4_2_c{i}_former_data_count.txt' for i in range(6)], [1]*6, 'w4_2_data_count_former.txt')
    merge_txt_files([f'w4_2_c{i}_later_data_count.txt'  for i in range(6)], [1]*6, 'w4_2_data_count_later.txt')
    print(f"  Conv2: 6 chunks × 2 halves, single-lane INT4 done.")

    # ------------------------------------------------------------------
    # Layer 3 (FC1): INT4 adjacent SIMD2, 16-bit hex
    # 每個 word = {w1[3:0], count1[3:0], w0[3:0], count0[3:0]}
    # ------------------------------------------------------------------
    print("\n[SIMD2] Layer 3 (FC1) - INT4 adjacent SIMD2 (count_width=4)...")
    mode = 'w'
    total_fc1_words = 0
    for i in range(16):
        for j in range(30):
            fc1_mod, mask = modify_matrix(fc1_weight[0+4*j:4+4*j, i*16:16+i*16])
            w3_addr, w3_hex = genAdrCountData_int4_fc_simd2(fc1_mod, False, mask)
            save_dec_as_hex_to_txt(w3_addr, 'w4_3_addr.txt', mode)
            save_data_to_txt(w3_hex,        'w4_3_data_count.txt', mode)
            total_fc1_words += len(w3_hex)
            mode = 'a'
    print(f"  FC1: {total_fc1_words} packed 16-bit words total")

    # ------------------------------------------------------------------
    # Layer 4 (FC2): INT4 adjacent SIMD2, 16-bit hex
    # ------------------------------------------------------------------
    print("\n[SIMD2] Layer 4 (FC2) - INT4 adjacent SIMD2 (count_width=4)...")
    mode = 'w'
    total_fc2_words = 0
    for i in range(6):
        for j in range(21):
            fc2_mod, mask = modify_matrix(fc2_weight[0+4*j:4+4*j, i*20:20+i*20])
            w4_addr, w4_hex = genAdrCountData_int4_fc_simd2(fc2_mod, False, mask)
            save_dec_as_hex_to_txt(w4_addr, 'w4_4_addr.txt', mode)
            save_data_to_txt(w4_hex,        'w4_4_data_count.txt', mode)
            total_fc2_words += len(w4_hex)
            mode = 'a'
    print(f"  FC2: {total_fc2_words} packed 16-bit words total")

    # ------------------------------------------------------------------
    # Layer 5 (FC3): INT4 adjacent SIMD2, 16-bit hex
    # ------------------------------------------------------------------
    print("\n[SIMD2] Layer 5 (FC3) - INT4 adjacent SIMD2 (count_width=4)...")
    mode = 'w'
    total_fc3_words = 0
    for i in range(4):
        for j in range(3):
            if j != 2:
                temp_mat = fc3_weight[0+4*j:4+4*j, i*21:21+i*21]
            else:
                temp_mat = fc3_weight[8:10, i*21:21+i*21]
            fc3_mod, mask = modify_matrix(temp_mat)
            w5_addr, w5_hex = genAdrCountData_int4_fc_simd2(fc3_mod, False, mask)
            save_dec_as_hex_to_txt(w5_addr, 'w4_5_addr.txt', mode)
            save_data_to_txt(w5_hex,        'w4_5_data_count.txt', mode)
            total_fc3_words += len(w5_hex)
            mode = 'a'
    print(f"  FC3: {total_fc3_words} packed 16-bit words total")

    # ------------------------------------------------------------------
    # 最終合併與 COE 輸出
    # ------------------------------------------------------------------
    file_names = [
        'w4_0_addr.txt',             'w4_0_data_count.txt',
        'w4_2_addr_former.txt',      'w4_2_data_count_former.txt',
        'w4_2_addr_later.txt',       'w4_2_data_count_later.txt',
        'w4_3_addr.txt',             'w4_3_data_count.txt',
        'w4_4_addr.txt',             'w4_4_data_count.txt',
        'w4_5_addr.txt',             'w4_5_data_count.txt',
    ]

    print("\n開始生成 INT4 SIMD2 硬體燒錄檔案...")
    generate_verilog_parameters(file_names, 'rom_params_for_verilog_int4_simd2.txt', 2)
    merge_txt_files(file_names, [1]*12, 'ROM_sparse_INT4_PACKED_SIMD2_FULL.txt')
    rom2coe('ROM_sparse_INT4_PACKED_SIMD2_FULL.txt', 'ROM_sparse_INT4_PACKED_SIMD2_FULL.coe')

    # 壓縮率統計
    int8_rom_path = 'ROM_sparse.txt'
    simd2_rom_path = 'ROM_sparse_INT4_PACKED_SIMD2_FULL.txt'
    if os.path.exists(int8_rom_path) and os.path.exists(simd2_rom_path):
        with open(int8_rom_path, 'r') as f:  int8_lines  = sum(1 for _ in f)
        with open(simd2_rom_path, 'r') as f: simd2_lines = sum(1 for _ in f)
        ratio = int8_lines / simd2_lines if simd2_lines > 0 else float('inf')
        print(f"\n📊 ROM 壓縮對比:")
        print(f"   INT8 standard  : {int8_lines:6d} words")
        print(f"   INT4 SIMD2     : {simd2_lines:6d} words")
        print(f"   壓縮比         : {ratio:.2f}x")

    print("="*60)
    print(" 🎉 INT4 SIMD2 所有硬體檔案生成完畢！")
    print("    ├── ROM_sparse_INT4_PACKED_SIMD2_FULL.txt")
    print("    ├── ROM_sparse_INT4_PACKED_SIMD2_FULL.coe")
    print("    └── rom_params_for_verilog_int4_simd2.txt")
    print("="*60 + "\n")

def compare_accuracy(label_file, pred_file):
    print(f"\n🔍 開始比對: {label_file} vs {pred_file}")
    if not os.path.exists(label_file) or not os.path.exists(pred_file):
        print("🚨 找不到檔案，請確認路徑是否正確！")
        return
    with open(label_file, 'r') as f_label, open(pred_file, 'r') as f_pred:
        labels = f_label.read().splitlines()
        preds  = f_pred.read().splitlines()
    if len(labels) != len(preds):
        print(f"⚠️ 警告：行數不一致！Label有 {len(labels)} 行，Pred有 {len(preds)} 行。")
        return
    total   = len(labels)
    correct = sum(1 for l, p in zip(labels, preds) if l.strip() == p.strip())
    wrong   = total - correct
    accuracy = (correct / total) * 100
    print("-" * 30)
    print(f"✅ 總測試筆數 : {total}")
    print(f"🎯 正確預測數 : {correct}")
    print(f"❌ 錯誤預測數 : {wrong}")
    print(f"🏆 最終準確率 : {accuracy:.2f}%")
    print("-" * 30)

# ==========================================
# 10. Main Execution Flow
# ==========================================
if __name__ == "__main__":
    BATCH       = 64
    FP32_EP     = 15
    QAT_EP      = 8
    FP32_LR     = 0.05
    QAT_LR      = 5e-4
    N_SAMPLES   = 1000

    os.makedirs("./weights", exist_ok=True)
    os.makedirs("./results", exist_ok=True)

    print("\n[0] Load MNIST...")
    train_l, val_l, test_l = get_mnist_loaders(BATCH)

    print("\n[1] FP32 Pretrain")
    fp32_path = "./weights/best_lenet_fp32.pth"
    model_fp32 = LeNet(in_channels=1).to(DEFAULT_DEVICE)
    if os.path.exists(fp32_path):
        print(f"  Load existing: {fp32_path}")
        model_fp32.load_state_dict(torch.load(fp32_path, map_location=DEFAULT_DEVICE))
    else:
        model_fp32 = train_fp32(model_fp32, train_l, val_l, epochs=FP32_EP, lr=FP32_LR,
                                device=DEFAULT_DEVICE, save_path=fp32_path)

    crit = nn.CrossEntropyLoss()
    fl, fa, _ = evaluate(model_fp32, test_l, crit, DEFAULT_DEVICE)
    print(f"  FP32 -> Acc={fa:.2f}%")

    print("\n[2] INT8 QAT")
    model_int8 = train_int8_qat(model_fp32, train_l, val_l, epochs=QAT_EP, lr=QAT_LR,
                                 save_path="./weights/best_lenet_int8_qat.pth")

    print("\n[3] INT4 QAT")
    model_int4 = train_int4_qat(model_fp32, train_l, val_l, epochs=QAT_EP, lr=QAT_LR,
                                 save_path="./weights/best_lenet_int4_qat.pth")

    print("\n[3.5] PACT INT4 QAT")
    model_pact_int4 = train_pact_int4_qat(model_fp32, train_l, val_l, epochs=QAT_EP, lr=QAT_LR,
                                          save_path="./weights/best_lenet_pact_int4_qat.pth")
    print("\n[4] Generate Verification Files")
    tf_export = transforms.Compose([transforms.Resize((28, 28)), transforms.ToTensor()])
    full_export_set = datasets.MNIST(root="data/mnist", train=False, download=True, transform=tf_export)
    random_indices  = torch.randperm(len(full_export_set))[:N_SAMPLES].tolist()
    random_subset   = torch.utils.data.Subset(full_export_set, random_indices)
    export_loader   = DataLoader(random_subset, batch_size=BATCH, shuffle=False)

    def build_hardware_workspace(model_q, tag, also_build_simd2=False):
        """建立硬體工作區。

        Args:
            model_q         : 量化後的 PyTorch 模型
            tag             : 'INT8' 或 'INT4'
            also_build_simd2: 若為 True，在同一工作區額外執行
                              compile_hardware_rom_int4_simd2()，
                              產生 ROM_sparse_INT4_PACKED_SIMD2_FULL.coe
        """
        folder_name = f"hw_export_{tag}"
        print(f"\n" + "🚀"*20)
        print(f" 開始建立 {tag} 專屬硬體工作區 -> ./{folder_name}/")
        print("🚀"*20)

        os.makedirs(folder_name, exist_ok=True)
        kernel_dir = os.path.join(folder_name, "layer2")
        os.makedirs(kernel_dir, exist_ok=True)

        generate_ifmap(model_q, export_loader, 1, folder_name, "ifmap.txt", 'cpu')
        generate_dram_and_golden(model_q, export_loader, N_SAMPLES, folder_name,
                                 "DRAM.txt", "GOLDEN_LABEL.txt", "GOLDEN_PRED.txt", 'cpu')
        export_weights_for_hardware_compiler(model_q, out_dir=kernel_dir, tag=tag)

        original_pwd = os.getcwd()
        os.chdir(folder_name)
        try:
            # 原版 INT8 / INT4-sign-extended ROM
            compile_hardware_rom()

            # 若有 SIMD2 flag，額外產生 INT4 adjacent SIMD2 full packing ROM
            if also_build_simd2:
                compile_hardware_rom_int4_simd2()
        finally:
            os.chdir(original_pwd)

        print(f"✅ {tag} 所有檔案已安全存放於 ./{folder_name}/ 中！\n")

    # ---- INT8: 只產生標準 ROM ----
    build_hardware_workspace(model_int8, "INT8", also_build_simd2=False)

    # ---- INT4: 同時產生標準 ROM (sign-extended) + SIMD2 ROM ----
    build_hardware_workspace(model_int4, "INT4", also_build_simd2=True)

    build_hardware_workspace(model_pact_int4, "PACT_INT4", also_build_simd2=True)

    print("\n🎉 大功告成！")
    print("   hw_export_INT8/       : ROM_sparse_COE.coe                         (INT8 標準)")
    print("   hw_export_INT4/       : ROM_sparse_INT4_SIGNEXT_AS_INT8.coe        (INT4 sign-extended to INT8)")
    print("   hw_export_INT4/       : ROM_sparse_INT4_PACKED_SIMD2_FULL.coe      (INT4 adjacent SIMD2)")
    print("   hw_export_PACT_INT4/  : ROM_sparse_INT4_PACKED_SIMD2_FULL.coe      (PACT INT4 adjacent SIMD2)")
    
    compare_accuracy("hw_export_INT8/GOLDEN_LABEL.txt", "hw_export_INT8/GOLDEN_PRED.txt")
    compare_accuracy("hw_export_INT4/GOLDEN_LABEL.txt", "hw_export_INT4/GOLDEN_PRED.txt")
    compare_accuracy("hw_export_PACT_INT4/GOLDEN_LABEL.txt", "hw_export_PACT_INT4/GOLDEN_PRED.txt")