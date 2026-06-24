import os
import math
import copy
import torch
import matplotlib.pyplot as plt
import numpy as np
from tqdm import tqdm
from torchvision import datasets, transforms
from torch.utils.data import DataLoader

# 🌟 把 get_pact_int4_qconfig 換成 get_int4_qconfig
# 如果您的標準訓練腳本叫做 LeNet.py：
# 🌟 把原本的 import：
# from LeNet import LeNet, get_int4_qconfig, get_int8_qconfig, DEFAULT_DEVICE

# 換成這行（多加了 get_pact_int4_qconfig）：
from LeNet import LeNet, get_int4_qconfig, get_int8_qconfig, get_pact_int4_qconfig, DEFAULT_DEVICE

def reset_observers(model):
    """
    重置模型中所有的 Observer，讓下一次 forward 重新計算 Scale
    """
    # 🌟 關鍵 1: 強制開啟 Observer 觀察模式 (否則 eval() 下會忽略新輸入的圖片)
    model.apply(torch.ao.quantization.enable_observer)
    
    for module in model.modules():
        if hasattr(module, 'activation_post_process') and module.activation_post_process is not None:
            fq = module.activation_post_process
            
            # 🌟 關鍵 2: 穿透 FakeQuantize 外殼，找到裡面真正的 Observer
            if hasattr(fq, 'activation_post_process'):
                fq.activation_post_process.reset_min_max_vals()
            elif hasattr(fq, 'observer'): # 兼容不同版本的 PyTorch
                fq.observer.reset_min_max_vals()

def calculate_hardware_shifts(quantized_model):
    """計算並回傳當前 Observer 狀態下，硬體各層所需的 >>> N"""
    shifts = {}
    layers = [
        ("Conv1", quantized_model.features[0]),
        ("Conv2", quantized_model.features[3]),
        ("FC1",   quantized_model.classifier[0]),
        ("FC2",   quantized_model.classifier[2]),
        ("FC3",   quantized_model.classifier[4])
    ]
    
    try:
        current_sin = quantized_model.quant.scale.item()
    except:
        current_sin = 1.0

    for name, layer in layers:
        if hasattr(layer, 'weight') and hasattr(layer, 'scale'):
            sw = layer.weight().q_scale()
            sout = layer.scale
            
            # 這就是您的 (Sin * Sweigth) / Sout
            m_real = (current_sin * sw) / sout 
            
            if m_real > 0:
                # 🌟 改成您的邏輯：尋找讓 m_real * (1 << N) 最接近 1 的 N
                best_n = 0
                min_diff = float('inf')
                
                # 測試 N 從 0 到 31 (硬體 Shift 的合理範圍)
                for n in range(32):
                    # 計算差距: abs( M * (2^N) - 1 )
                    diff = abs(m_real * (1 << n) - 1.0)
                    
                    if diff < min_diff:
                        min_diff = diff
                        best_n = n
                        
                shifts[name] = best_n
            else:
                shifts[name] = None
                
            current_sin = sout
            
    return shifts
    
# 🌟 這裡新增 qconfig 和 output_filename 作為傳入參數
def run_shift_stability_test(model_path, qconfig, output_filename, num_runs=500, samples_per_run=1000, is_pact=False):
    print("="*60)
    print(f" 啟動硬體 Shift 穩定度蒙地卡羅測試")
    print(f" 測試模型: {model_path}")
    print(f" 測試次數: {num_runs} 次")
    print(f" 每次抽樣: {samples_per_run} 張圖片")
    print("="*60)

    tf_test = transforms.Compose([transforms.Resize((28, 28)), transforms.ToTensor()])
    full_test_set = datasets.MNIST(root="data/mnist", train=False, download=True, transform=tf_test)

    if not os.path.exists(model_path):
        print(f"🚨 找不到模型權重 {model_path}，請先執行 pact_qat.py 訓練模型。")
        return

    model = LeNet(in_channels=1).to('cpu')
    model.fuse_model()
    
    # 🌟 動態套用對應的 QConfig
    model.qconfig = qconfig 

    if is_pact:
        model.quant.qconfig = get_int8_qconfig()

    torch.ao.quantization.prepare_qat(model, inplace=True)
    
    model.load_state_dict(torch.load(model_path, map_location='cpu'))
    model.eval()

    shift_history = {"Conv1": [], "Conv2": [], "FC1": [], "FC2": [], "FC3": []}

    for run in tqdm(range(num_runs), desc="執行隨機抽樣實驗"):
        reset_observers(model)
        
        random_indices = torch.randperm(len(full_test_set))[:samples_per_run].tolist()
        subset = torch.utils.data.Subset(full_test_set, random_indices)
        loader = DataLoader(subset, batch_size=256, shuffle=False)
        
        with torch.no_grad():
            for imgs, _ in loader:
                model(imgs)
                
        quantized_model = torch.ao.quantization.convert(copy.deepcopy(model), inplace=False)
        current_shifts = calculate_hardware_shifts(quantized_model)
        
        for layer_name, shift_val in current_shifts.items():
            if shift_val is not None:
                shift_history[layer_name].append(shift_val)

    # 🌟 將檔名傳給畫圖函式
    plot_histograms(shift_history, num_runs, samples_per_run, output_filename)

def plot_histograms(shift_history, num_runs, samples_per_run, output_path):
    num_layers = len(shift_history)
    fig, axes = plt.subplots(1, num_layers, figsize=(18, 4), sharey=True)
    fig.suptitle(f'Hardware Shift (>>> N) Distribution ({num_runs} runs, {samples_per_run} imgs/run)', fontsize=16)

    for ax, (layer_name, shifts) in zip(axes, shift_history.items()):
        unique_shifts, counts = np.unique(shifts, return_counts=True)
        
        ax.bar(unique_shifts, counts, color='skyblue', edgecolor='black', width=0.6)
        ax.set_title(f'{layer_name}', fontsize=14, fontweight='bold')
        ax.set_xlabel('Shift Value (N)', fontsize=12)
        if ax == axes[0]:
            ax.set_ylabel('Frequency (Runs)', fontsize=12)
            
        for x, y in zip(unique_shifts, counts):
            ax.text(x, y + (num_runs*0.02), str(y), ha='center', va='bottom', fontsize=10)

        ax.set_xticks(unique_shifts)

    plt.tight_layout(rect=[0, 0.03, 1, 0.95])
    plt.savefig(output_path, dpi=300)
    print(f"\n✅ 分析完成！直方圖已儲存為: {output_path}")
    plt.close() # 畫完關閉，避免兩張圖疊加

if __name__ == "__main__":
    # ---------------------------------------------------------
    # 1. 測試 INT8 模型
    # ---------------------------------------------------------
    run_shift_stability_test(
        model_path="./weights/best_lenet_int8_qat.pth",
        qconfig=get_int8_qconfig(),
        output_filename="shift_hist_INT8.png", 
        num_runs=1000,
        samples_per_run=1000
    )

    # ---------------------------------------------------------
    # 2. 測試「標準 INT4 QAT」模型 
    # ---------------------------------------------------------
    run_shift_stability_test(
        model_path="./weights/best_lenet_int4_qat.pth",
        qconfig=get_int4_qconfig(), 
        output_filename="shift_hist_INT4_Standard.png", 
        num_runs=1000,
        samples_per_run=1000
    )

    # ---------------------------------------------------------
    # 3. 🌟 新增：測試「PACT INT4 QAT」模型
    # ---------------------------------------------------------
    run_shift_stability_test(
        model_path="./weights/best_lenet_pact_int4_qat.pth", # 🌟 修正檔名與訓練腳本對齊
        qconfig=get_pact_int4_qconfig(init_alpha=6.0), 
        output_filename="shift_hist_INT4_PACT.png",    
        num_runs=1000,
        samples_per_run=1000,
        is_pact=True # 🌟 告訴函數這顆是 PACT，請幫它的輸入端打疫苗！
    )