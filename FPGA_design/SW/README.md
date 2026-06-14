# SW/ — `LeNet_5_*.py` 腳本導航

> 人工整理的快速導航,目的是讓人一眼分辨這四支 `LeNet_5_*.py` 各自的角色。
> **細節以程式碼為準**(行號、參數、準確率數字會隨改動而變,本文刻意不寫死)。
> 最後更新:2026-06-10。
>
> ⚠️ 本資料夾還有大量 `.txt` / `.coe` / `.pth` / `.pt` 等檔案,**多半是下面腳本「跑出來的產物」**(測資、權重、各層中間輸出),本文不逐一列。

---

## 一句話總覽

這四支 = **1 個訓練/量化源頭** + **1 個 GEMM golden model 兼測資產生器** + **2 個手寫數字 GUI demo**。

| 檔案 | 角色 |
|---|---|
| `LeNet_5_quantization.py` | 訓練 + 量化 LeNet-5,匯出量化模型與 int8 權重(整條流程最上游) |
| `LeNet_5_GEMM_Demo.py` | im2col-GEMM 軟體 golden model;產生硬體模擬/合成用的所有記憶體初始化檔 |
| `LeNet_5_np_Demo.py` | 純 numpy「定點」模型 + 手寫板 GUI(貼近硬體行為的驗證) |
| `LeNet_5_MNIST_DEMO.py` | 載入 PyTorch 量化模型的手寫板 GUI(最輕量 demo) |

資料流關係:

```
LeNet_5_quantization.py ──► scripted_quantized_model.pth / quantized_model_params.txt(int8 權重)
                              │
                              ├──► 兩個 GUI demo 載來推論
                              └──► 硬體權重來源

LeNet_5_GEMM_Demo.py    ──► DRAM.txt / GOLDEN.txt / ROM*.coe / iact_*、weight_* …
                              └──► 餵給 Verilator / Vivado RTL 模擬($readmemh)
```

---

## 1. `LeNet_5_quantization.py` — 訓練 + 量化的源頭

整條流程的**模型與權重來源**,跟推論 demo 無關。

- **作用**:用 PyTorch 定義 LeNet-5(`conv1 1→6`、`conv2 6→16`、`fc1 256→120`、`fc2 120→84`、`fc3 84→10`,全部 `bias=False`),做訓練 / 量化 / 剪枝,再把量化後的模型與權重匯出。
- **三種 `mode`**:`train`(FP32 從頭訓練)、`test`(訓練後量化 PTQ,含 float/default/custom/fbgemm 子模式)、`aware`(QAT 量化感知訓練)。
- **輸入**:MNIST(由 torchvision 自動下載到 `./data`)。
- **產出**:`scripted_quantized_model.pth`(給下面兩個 GUI demo 載)、`quantized_model_params.txt`(int8 權重 + scale/zero_point,**硬體權重的來源**)。
- **備註**:會在執行時印出 INT8 測試準確率(動態算,沒寫死在檔案裡)。

## 2. `LeNet_5_GEMM_Demo.py` — im2col-GEMM golden model + 測資產生器

repo 名稱「Im2col-GEMM」的本體,也是**最大、最雜**的一支,一檔身兼多職:

- **im2col + GEMM 軟體模型**:`im2col()` 把卷積展開成矩陣乘,`LeNet_with_GEMM()` 用 GEMM 跑完整個 LeNet-5。這是**最貼近硬體資料流**的軟體 golden model。
- **CSC 稀疏壓縮**:把 weight / iact 壓成 `{value, count}` + address 串流(對應硬體吃的格式)。
- **產生硬體記憶體初始化檔**:大量 `save_*` / hex 轉換 / `txt_to_coe`,輸出 `DRAM.txt`、`GOLDEN.txt`、`ROM(_sparse).coe`、各層 `iact_*` / `weight_*_addr` / `data_count` 等 —— **本資料夾那一大堆 txt/coe 就是這支吐出來的**,給 Verilator / Vivado `$readmemh` 用。
- **MNIST 準確率評估**:`evaluate_mnist()` 用 im2col+GEMM 跑 MNIST 算 top-1。⚠️ **此段目前被三引號註解掉**,要量準確率得先解註解。
- **GUI + UART 板上 demo**:含 tkinter 手寫板與 `send_to_fpga()`。⚠️ 這正是 `host_demo/README.md` 指出**有 bug 的原始版**(predict 只跑軟體模型、`send_to_fpga` 從沒被呼叫、baud 寫死),板上 demo 請改用 `host_demo/`。
- **頂層實際執行**:讀圖 → 載權重 → 剪枝 → 印稀疏率 → 產測資檔。**預設不是在跑準確率。**

## 3. `LeNet_5_np_Demo.py` — 純 numpy 定點模型 GUI

- **作用**:tkinter 手寫板(280×280),按 Predict 推論。推論**完全不靠 PyTorch**,手刻 `conv_multi_input` / `max_pool2d` / `relu` / `linear` / `softmax`,權重從 `layer1/kernel*.txt` 讀。
- **特點**:帶**硬體風格的整數定點行為** —— 每層後 `// 4096` 縮放、`padding=0`、剪枝、輸入做 `invert + 255- + //2 → [0,127]`。
- **用途**:用「跟硬體一致的定點 numpy」驗證演算法,比 PyTorch 版更貼近 RTL。
- **坑**:用到 `Image.ANTIALIAS`,Pillow ≥10 已移除,新版要改成 `Image.LANCZOS` 才能跑。

## 4. `LeNet_5_MNIST_DEMO.py` — PyTorch 量化模型 GUI

- **作用**:最輕量的一支。tkinter 手寫板,按 Predict 直接用 `scripted_quantized_model.pth`(torch.jit) 推論。
- **前處理**:resize 28×28 → ToTensor。
- **用途**:純粹驗證「PyTorch 量化模型本身」認不認得手寫數字。
- **坑**:同樣用到 `Image.ANTIALIAS`(見上)。

---

## 想實際量「軟體模型準確率」?

文件不記死數字;要量請執行(三者都動態算):

- **INT8(PyTorch)**:跑 `LeNet_5_quantization.py`,看印出的 INT8 準確率。
- **GEMM(對應硬體)**:`LeNet_5_GEMM_Demo.py` 的 `evaluate_mnist()`,**需先解開註解**。
- **FP32(PyTorch)**:另有 `verification.py`(非 `LeNet_5_*` 開頭),跑 MNIST 測試集。
