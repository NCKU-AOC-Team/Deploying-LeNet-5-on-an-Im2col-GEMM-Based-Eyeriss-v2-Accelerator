from __future__ import annotations
'''
import os, math, copy, platform, warnings
import numpy as np
import matplotlib.pyplot as plt
from tqdm import tqdm
from typing import Tuple
from sklearn.metrics import confusion_matrix
from PIL import Image

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

# 🌟 暴力破解：不要管什麼機器，全部強制使用 qnnpack！
torch.backends.quantized.engine = 'qnnpack'

print("PyTorch:", torch.__version__)
print(f"Backend: {torch.backends.quantized.engine}  Device: {DEFAULT_DEVICE}")

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
            quant_min=0, quant_max=15,
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
    model.eval(); mq = tq.convert(model, inplace=False)
    print(f"  [{tag}] Converted to quantized model.")
    return mq

def train_int8_qat(fp32, train_l, val_l, epochs=8, lr=5e-4, save_path="./weights/best_lenet_int8_qat.pth"):
    return _run_qat(fp32, train_l, val_l, get_int8_qconfig(), epochs, lr, save_path, "INT8")

def train_int4_qat(fp32, train_l, val_l, epochs=8, lr=5e-4, save_path="./weights/best_lenet_int4_qat.pth"):
    return _run_qat(fp32, train_l, val_l, get_int4_qconfig(), epochs, lr, save_path, "INT4")

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
    
def generate_dram_and_golden(model_q, test_loader, num_samples=1000, out_dir="test/tb/TOP_test/MEM", dram_file="DRAM.txt", golden_label_file="GOLDEN_LABEL.txt", golden_pred_file="GOLDEN_PRED.txt", device='cpu'):
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
    with open(dram_path, "w") as f: f.write("\n".join(dlines) + "\n")
    with open(label_path, "w") as f: f.write("\n".join(label_lines) + "\n")
    with open(pred_path, "w") as f: f.write("\n".join(pred_lines) + "\n")
    print(f"  DRAM           : {done*784} lines")
    print(f"  GOLDEN_LABEL   : {done} lines")
    print(f"  GOLDEN_PRED    : {done} lines")
    return done

def export_weights_for_hardware_compiler(model_q, out_dir="layer2"):
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

def csc_compression_single_col(matrix):
    addr, count, data = [], [], []
    for row_idx in range(matrix.shape[0]):
        for col_idx in range(matrix.shape[1]):
            value = int(matrix[row_idx, col_idx])
            if value != 0:
                count.append(row_idx)
                data.append(value)
    addr.append(len(data)); addr.append(0); count.append(0); data.append(0)
    return addr, count, data

def toBinary(i, digits, signed=False):
    if signed:
        if i < 0: return format((1 << digits) + i, f'0{digits}b')
        else: return format(i, f'0{digits}b')
    else: return format(i, f'0{digits}b')
    
def combineDataAndCount(theData, theCount, cscDataWidth=8, cscCountWidth=4):
    theDataWithCount = list(zip(theData, theCount))
    theDataCountBinary = [toBinary(x, cscDataWidth, signed=True) + toBinary(y, cscCountWidth, signed=False) for x, y in theDataWithCount]
    return theDataCountBinary

def read_matrices_from_file(file_path, matrix_size, channels):
    with open(file_path, 'r') as file:
        data = file.read().replace('[', '').replace(']', '').replace(',', '').split()
        data = [int(num) for num in data]  # ⚠️ 修改為 base 10，配合 PyTorch 匯出格式
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
# 9. 終極硬體編譯整合函式
# ==========================================
def generate_verilog_parameters(file_names, output_file):
    param_names = [
        "ROM_WEIGHT_ADDR_1_END", "ROM_WEIGHT_DATA_1_END",
        "ROM_WEIGHT_ADDR_2_FORMER_END", "ROM_WEIGHT_DATA_2_FORMER_END", "ROM_WEIGHT_ADDR_2_LATER_END", "ROM_WEIGHT_DATA_2_LATER_END",
        "ROM_WEIGHT_ADDR_3_END", "ROM_WEIGHT_DATA_3_END",
        "ROM_WEIGHT_ADDR_4_END", "ROM_WEIGHT_DATA_4_END",
        "ROM_WEIGHT_ADDR_5_END", "ROM_WEIGHT_DATA_5_END"
    ]
    total_length = 0
    with open(output_file, 'w') as out_file:
        out_file.write("parameter IACT_DATA_END             = 'd784;\n\n")
        for file_name, param_name in zip(file_names, param_names):
            if not os.path.exists(file_name): continue
            with open(file_name, 'r') as in_file:
                length = sum(1 for _ in in_file)
                total_length += length
                out_file.write(f"parameter {param_name:<25} = 'd{total_length};\n")
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
    print("\n" + "="*60)
    print(" [啟動硬體編譯器] 開始讀取 Kernel 進行稀疏壓縮...")
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
    fc1_weight = read_and_group_data(fc1_weight_path, 256, 120)
    fc2_weight = read_and_group_data(fc2_weight_path, 120, 84)
    fc3_weight = read_and_group_data(fc3_weight_path, 84, 10)

    # 剪枝 Pruning
    conv_threshold, fc_threshold = 0.9, 0.9
    conv1_weight = threshold_array_by_mean_abs(conv1_weight, conv_threshold)
    conv2_weight = threshold_array_by_mean_abs(conv2_weight, conv_threshold)
    fc1_weight = threshold_array_by_mean_abs(fc1_weight, fc_threshold)
    fc2_weight = threshold_array_by_mean_abs(fc2_weight, fc_threshold)
    fc3_weight = threshold_array_by_mean_abs(fc3_weight, fc_threshold)

    # Layer 1
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
        c_later, c_later_mask   = modify_matrix(merge_c[:, 8:16])
        
        addr_f, count_f, data_f = genAdrCountData(c_former, True, c_former_mask)
        addr_l, count_l, data_l = genAdrCountData(c_later, True, c_later_mask)
        
        dc_f = combineDataAndCount([int(item) for item in data_f], count_f, cscDataWidth=8, cscCountWidth=5)
        dc_l = combineDataAndCount([int(item) for item in data_l], count_l, cscDataWidth=8, cscCountWidth=5)
        
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

    # ---------------- 最終匯出 ----------------
    file_names = [
        'weight_0_addr.txt', 'weight_0_data_count.txt', 
        'weight_2_addr_former.txt', 'weight_2_data_count_former.txt', 
        'weight_2_addr_later.txt', 'weight_2_data_count_later.txt',
        'weight_3_addr.txt', 'weight_3_data_count.txt',
        'weight_4_addr.txt', 'weight_4_data_count.txt',
        'weight_5_addr.txt', 'weight_5_data_count.txt'
    ]

    print("\n開始生成硬體燒錄檔案...")
    generate_verilog_parameters(file_names, 'rom_params_for_verilog.txt')
    merge_txt_files(file_names, [1]*12, 'ROM_sparse.txt')
    rom2coe('ROM_sparse.txt', 'ROM_sparse_COE.coe')

    print("="*60)
    print(" 🎉 所有硬體檔案生成完畢！請打開 rom_params_for_verilog.txt 複製參數。")
    print("="*60 + "\n")

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
    os.makedirs("./layer2", exist_ok=True)

    print("\n[0] Load MNIST...")
    train_l, val_l, test_l = get_mnist_loaders(BATCH)
    
    print("\n[1] FP32 Pretrain")
    fp32_path = "./weights/best_lenet_fp32.pth"
    model_fp32 = LeNet(in_channels=1).to(DEFAULT_DEVICE)
    if os.path.exists(fp32_path):
        print(f"  Load existing: {fp32_path}")
        model_fp32.load_state_dict(torch.load(fp32_path, map_location=DEFAULT_DEVICE))
    else:
        model_fp32 = train_fp32(model_fp32, train_l, val_l, epochs=FP32_EP, lr=FP32_LR, device=DEFAULT_DEVICE, save_path=fp32_path)
    
    crit = nn.CrossEntropyLoss()
    fl, fa, _ = evaluate(model_fp32, test_l, crit, DEFAULT_DEVICE)
    print(f"  FP32 -> Acc={fa:.2f}%")

    print("\n[2] INT8 QAT")
    model_int8 = train_int8_qat(model_fp32, train_l, val_l, epochs=QAT_EP, lr=QAT_LR, save_path="./weights/best_lenet_int8_qat.pth")

    print("\n[3] INT4 QAT")
    model_int4 = train_int4_qat(model_fp32, train_l, val_l, epochs=QAT_EP, lr=QAT_LR, save_path="./weights/best_lenet_int4_qat.pth")

    print("\n[4] Generate Verification Files (Using a Random Subset for IFMAP/DRAM)")
    tf_export = transforms.Compose([transforms.Resize((28, 28)), transforms.ToTensor()])
    
    # 1. 載入完整的訓練集
    full_export_set = datasets.MNIST(root="data/mnist", train=True, download=True, transform=tf_export)
    
    # 🌟 2. 隨機挑選 1000 個不重複的 index 
    # (加上 manual_seed 確保 INT8 和 INT4 測試的是同一批「隨機」圖片，方便比較)
    torch.manual_seed(42) 
    random_indices = torch.randperm(len(full_export_set))[:N_SAMPLES].tolist()
    
    # 3. 建立隨機的子資料集與 Loader
    random_subset = torch.utils.data.Subset(full_export_set, random_indices)
    export_loader = DataLoader(random_subset, batch_size=BATCH, shuffle=False)

    # ==========================================
    # 🌟 自動化硬體生產線函式
    # ==========================================
    def build_hardware_workspace(model_q, tag):
        folder_name = f"hw_export_{tag}"
        print(f"\n" + "🚀"*20)
        print(f" 開始建立 {tag} 專屬硬體工作區 -> ./{folder_name}/")
        print("🚀"*20)
        
        # A. 建立專屬資料夾與 layer2 子資料夾
        os.makedirs(folder_name, exist_ok=True)
        kernel_dir = os.path.join(folder_name, "layer2")
        os.makedirs(kernel_dir, exist_ok=True)
        
        # B. 匯出測資與解答到該資料夾
        generate_ifmap(model_q, export_loader, 1, folder_name, "ifmap.txt", 'cpu')
        generate_dram_and_golden(model_q, export_loader, N_SAMPLES, folder_name, "DRAM.txt", "GOLDEN_LABEL.txt", "GOLDEN_PRED.txt", 'cpu')
        
        # C. 匯出神經網路權重到該資料夾的 layer2 裡面
        export_weights_for_hardware_compiler(model_q, out_dir=kernel_dir)
        
        # D. 🌟 關鍵魔法：切換工作目錄進去專屬資料夾，讓原本的編譯程式獨立運作
        original_pwd = os.getcwd()
        os.chdir(folder_name)
        
        try:
            # 執行硬體壓縮 (它會自己讀取當前目錄下的 layer2/kernelX.txt，並產出 COE)
            compile_hardware_rom()
        finally:
            # 確保不管有沒有報錯，最後都會切換回原本的根目錄
            os.chdir(original_pwd)
            
        print(f"✅ {tag} 所有檔案已安全存放於 ./{folder_name}/ 中！\n")

    # ==========================================
    # 🚀 執行：一次呼叫，兩者皆得！
    # ==========================================
    build_hardware_workspace(model_int8, "INT8")
    build_hardware_workspace(model_int4, "INT4")
    
    print("\n🎉 大功告成！您現在擁有了 hw_export_INT8/ 和 hw_export_INT4/ 兩個完整的獨立工作區。")
'''


#!/usr/bin/env python3
"""Generate a CSC sparse ROM with INT4 payload.

Supported modes (--mode):
  single-lane        : one logical weight per 16-bit word (default)
                       [15:8]=0, [7:4]=w[3:0], [3:0]=count (count_width=4)
                       [15:13]=0, [12:5]=w[7:0], [4:0]=count (count_width=5, fallback to INT8 container)

  adjacent-simd2-full: pack adjacent pairs of FC/Later (count_width=4) entries
                       into one 16-bit word:
                         [15:12] = lane1 weight INT4 two's complement
                         [11:8]  = lane1 CSC row count
                         [7:4]   = lane0 weight INT4 two's complement
                         [3:0]   = lane0 CSC row count
                       Odd entries: lane1 padded with (value=0, count=0).
                       RTL must skip lane1 MAC when lane1_data[3:0]==0.
                       Address stream records packed word indices.
                       Former/conv (count_width=5) always stays single-lane
                       because a packed entry would need 18 bits.

RTL requirement for all modes:
  sign-extend the selected 4-bit weight field before MAC:
    wire signed [7:0] w = {{4{data[3]}}, data[3:0]};
"""


import argparse
from pathlib import Path

import generate_int4_as_int8_sparse_rom_from_txt as base


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

def _int4_payload(value: int) -> int:
    """Return the 4-bit two's-complement representation of a signed INT4."""
    if value < -8 or value > 7:
        raise ValueError(f"INT4 value out of range [-8,7]: {value}")
    return value & 0xF


# ---------------------------------------------------------------------------
# Mode 1: single-lane
# ---------------------------------------------------------------------------

def _single_lane_data_count_hex(data: list[int], count: list[int], count_width: int) -> list[str]:
    """
    Encode one logical weight per ROM word.
    count_width==4 (later/FC) → 3 hex digits: {0000, w[3:0], count[3:0]}
    count_width==5 (former/conv) → 4 hex digits: {000, w[3:0], count[4:0]}
    """
    digits = 4 if count_width == 5 else 3
    out: list[str] = []
    for value, cnt in zip(data, count):
        payload = _int4_payload(value)
        bits = (
            base.to_binary(payload, 8, signed=False)
            + base.to_binary(cnt, count_width, signed=False)
        )
        out.append(format(int(bits, 2), f"0{digits}x"))
    return out


# ---------------------------------------------------------------------------
# Mode 2: adjacent SIMD2 full
# ---------------------------------------------------------------------------

def _encode_matrix_adjacent_simd2_full(
    matrix: base.Matrix,
    inact_or_weight: bool,
    count_width: int,
    _original_encode_matrix,
) -> tuple[list[str], list[str]]:
    """
    Pack adjacent pairs of non-zero CSC entries into one 16-bit word.

    Word format (count_width==4 only):
      [15:12] = lane1 weight INT4 two's complement
      [11:8]  = lane1 CSC row index
      [7:4]   = lane0 weight INT4 two's complement
      [3:0]   = lane0 CSC row index

    count_width==5: fallback to original single-lane encoder (18-bit packed
    does not fit a 16-bit ROM word).

    Key differences from the old implementation:
    - Uses `last_data_start` (the packed word index where the last non-zero col
      began) for the tail boundary, avoiding zero_code contamination of addr[-1].
    - Detects all-zero cols from the *original* matrix so that the modify_matrix
      sentinel does not mask a genuine zero col.
    - Simplified tail: always appends one end-pointer when there is at least one
      packed word in the last non-zero col.
    """
    if count_width == 5:
        return _original_encode_matrix(matrix, inact_or_weight, count_width)

    zero_code = 255 if inact_or_weight else 127
    max_count  = 31  if inact_or_weight else 15

    rows = len(matrix)
    cols = len(matrix[0])

    # modify_matrix: fill all-zero cols with a sentinel so gen_adr_count_data
    # still produces a terminator entry
    modified = [row[:] for row in matrix]
    mask = [[False] * cols for _ in range(rows)]
    for col in range(cols):
        if all(modified[r][col] == 0 for r in range(rows)):
            modified[rows - 1][col] = 1
            mask[rows - 1][col] = True

    addr: list[int] = []
    data_words: list[str] = []
    packed_pairs = 0
    last_data_start = 0  # packed word index where last non-zero col started

    for col in range(cols):
        # detect zero col from original (pre-modify) matrix
        if all(matrix[r][col] == 0 for r in range(rows)):
            addr.append(zero_code)
            continue

        # record start of this col's packed block (skip col=0 — RTL knows it
        # starts at word 0)
        if col != 0:
            addr.append(len(data_words))
        last_data_start = len(data_words)

        # collect non-zero entries: (row_count, weight_value)
        entries: list[tuple[int, int]] = []
        for row in range(rows):
            value = modified[row][col]
            if value != 0:
                entries.append((max_count if mask[row][col] else row, value))

        # pack adjacent pairs; odd last entry gets lane1 = (0, 0)
        index = 0
        while index < len(entries):
            count0, value0 = entries[index]
            if index + 1 < len(entries):
                count1, value1 = entries[index + 1]
                index += 2
                packed_pairs += 1
            else:
                # pad: RTL detects lane1_data==0 and skips MAC
                count1, value1 = 0, 0
                index += 1
            bits = (
                base.to_binary(_int4_payload(value1), 4, signed=False)
                + base.to_binary(count1, 4, signed=False)
                + base.to_binary(_int4_payload(value0), 4, signed=False)
                + base.to_binary(count0, 4, signed=False)
            )
            data_words.append(format(int(bits, 2), "04x"))

    # tail: append end-pointer for last non-zero col if it has any packed words
    n = len(data_words)
    if n > last_data_start:
        addr.append(n)

    # CSC stream terminator
    addr.append(0)
    data_words.append("0000")

    return base.addr_hex(addr), data_words


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main() -> None:
    parser = argparse.ArgumentParser(
        description="Generate INT4 CSC sparse ROM (.txt + .coe)"
    )
    parser.add_argument(
        "--input-dir", type=Path,
        default=Path("FPGA_design/SW/layer2"),
        help="Directory containing kernel1.txt … kernel5.txt",
    )
    parser.add_argument("--threshold", type=float, default=0.0)
    parser.add_argument(
        "--mode",
        choices=["single-lane", "adjacent-simd2-full"],
        default="single-lane",
        help=(
            "single-lane: one weight per word (default). "
            "adjacent-simd2-full: pack adjacent pairs for FC/Later (count_width=4)."
        ),
    )
    parser.add_argument(
        "--output-txt", type=Path,
        default=Path("FPGA_design/test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED.txt"),
    )
    parser.add_argument(
        "--output-coe", type=Path,
        default=Path("FPGA_design/test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED.coe"),
    )
    args = parser.parse_args()

    # --- monkey-patch base module ---
    original_data_count_hex = base.data_count_hex
    original_encode_matrix  = base.encode_matrix

    packed_pairs_total = [0]  # mutable container for closure

    if args.mode == "adjacent-simd2-full":
        # Replace encode_matrix with SIMD2 version
        def _encode_simd2_wrapper(matrix, inact_or_weight, count_width):
            result = _encode_matrix_adjacent_simd2_full(
                matrix, inact_or_weight, count_width, original_encode_matrix
            )
            # result is (addr_hex, data_words) because fallback returns 2-tuple
            # and our impl also returns 2-tuple now
            return result

        # We need to also track packed_pairs; wrap with counter
        _pp = [0]
        def _encode_simd2_counted(matrix, inact_or_weight, count_width):
            if count_width == 5:
                return original_encode_matrix(matrix, inact_or_weight, count_width)
            # run full impl
            zero_code = 255 if inact_or_weight else 127
            max_count  = 31  if inact_or_weight else 15
            rows = len(matrix); cols = len(matrix[0])
            modified = [row[:] for row in matrix]
            mask = [[False]*cols for _ in range(rows)]
            for col in range(cols):
                if all(modified[r][col] == 0 for r in range(rows)):
                    modified[rows-1][col] = 1; mask[rows-1][col] = True
            addr: list[int] = []; data_words: list[str] = []
            last_data_start = 0
            for col in range(cols):
                if all(matrix[r][col] == 0 for r in range(rows)):
                    addr.append(zero_code); continue
                if col != 0:
                    addr.append(len(data_words))
                last_data_start = len(data_words)
                entries: list[tuple[int,int]] = []
                for row in range(rows):
                    value = modified[row][col]
                    if value != 0:
                        entries.append((max_count if mask[row][col] else row, value))
                index = 0
                while index < len(entries):
                    count0, value0 = entries[index]
                    if index + 1 < len(entries):
                        count1, value1 = entries[index+1]; index += 2; _pp[0] += 1
                    else:
                        count1, value1 = 0, 0; index += 1
                    bits = (
                        base.to_binary(_int4_payload(value1), 4)
                        + base.to_binary(count1, 4)
                        + base.to_binary(_int4_payload(value0), 4)
                        + base.to_binary(count0, 4)
                    )
                    data_words.append(format(int(bits, 2), "04x"))
            n = len(data_words)
            if n > last_data_start:
                addr.append(n)
            addr.append(0); data_words.append("0000")
            return base.addr_hex(addr), data_words

        base.encode_matrix  = _encode_simd2_counted
        base.data_count_hex = _single_lane_data_count_hex  # fallback for count_width==5
    else:
        base.data_count_hex = _single_lane_data_count_hex

    try:
        rom, boundaries = base.build_sparse_rom(
            args.input_dir, "int4", args.threshold, 1
        )
    finally:
        base.data_count_hex = original_data_count_hex
        base.encode_matrix  = original_encode_matrix

    base.write_txt(args.output_txt, rom)
    base.write_coe(args.output_coe, rom)

    # --- summary ---
    print(f"source    = {args.input_dir}")
    print(f"mode      = {args.mode}")
    print(f"threshold = {args.threshold}")
    print(f"txt       = {args.output_txt}")
    print(f"coe       = {args.output_coe}")
    print(f"words     = {len(rom)}")
    print("boundaries= " + ",".join(str(b) for b in boundaries))

    if args.mode == "adjacent-simd2-full":
        print(f"packed_adjacent_pairs = {_pp[0]}")
        print("word_format (count_width=4):")
        print("  [15:12] = lane1 INT4 weight (two's complement)")
        print("  [11:8]  = lane1 CSC row index")
        print("  [7:4]   = lane0 INT4 weight (two's complement)")
        print("  [3:0]   = lane0 CSC row index")
        print("  lane1 padded to (0,0) when entries are odd — RTL skips MAC if lane1_data==0")
        print("  Former/conv (count_width=5) entries remain single-lane")
    else:
        print("word_format (count_width=4): {0000, w[3:0], count[3:0]} → 3 hex digits")
        print("word_format (count_width=5): {000,  w[3:0], count[4:0]} → 4 hex digits")
    print("rtl_requirement: sign-extend weight before MAC: {{4{data[3]}}, data[3:0]}")


if __name__ == "__main__":
    main()