# host_demo — 即時手寫數字辨識（PC 端）

PC 端 GUI，用來驅動本專案在 **PYNQ-Z2** 上的 LeNet-5 手寫數字辨識 demo：
在畫布上手寫一個數字 → 透過 UART 傳給 FPGA → 辨識結果顯示在板子的 **LED / 七段顯示器**上。

> FPGA 上的推論由 Eyeriss-v2 加速器完成；本程式只負責「畫圖 + 把影像送過去」，**不在 PC 上做辨識**。

## 檔案

- `fpga_uart_demo.py` — Tkinter 手寫面板 + UART 送圖

## 需要的硬體

- PYNQ-Z2 開發板 + micro-USB 線（接 `J8`，供電 + JTAG 燒錄）
- 一個 **3.3V 的 USB-to-UART (TTL)** 轉接器（例如 CP2102 / CH340）
  - ⚠️ 必須 **3.3V**，不能用 5V 或 RS-232（DB9），否則會燒壞 FPGA 腳位
- （只有 seg7 版需要）一顆**共陽極**七段顯示器

## 接線

UART 走的是 **PL 端的腳位，不是板子那條 micro-USB**：

| USB-UART | 接到 PYNQ-Z2 |
|---|---|
| TX | Raspberry Pi 排針**第 16 腳**（Zynq `W6` = `rx_pin_in`）|
| GND | Raspberry Pi 排針**第 14 腳**（GND）|

> 轉接器的 VCC（常是紅線 / 5V）**不要接到板子**；板子用自己的 micro-USB 供電。

## 步驟

### 1. 燒錄 bitstream（Vivado Hardware Manager）

連上板子 → 右鍵 `xc7z020_1` → **Program Device**，選：

- `FPGA_design/bitstream/normal/TOP_integration_uart.bit` → 結果顯示在 **4 顆 LED**（二進位）
- `FPGA_design/bitstream/seg7/TOP_integration_uart.bit` → 結果顯示在**七段顯示器**（接 Arduino 排針 AR0–AR6，共陽極 / active-low）

> bitstream 是揮發性的，**斷電就要重燒**。

### 2. 安裝相依套件（在 Windows 端的 Python 執行）

```
pip install pyserial pillow numpy
```

### 3. 執行

```
cd host_demo
python fpga_uart_demo.py
```

1. 下拉選 USB-UART 的 **COM 埠** → 按 **Connect**
2. 在黑底畫布上寫一個數字（**寫大、置中**，像 MNIST）
3. 按 **Predict (送到 FPGA)**
4. 看**板子上**的結果

## 怎麼看結果（normal / LED 版）

`result` 是 4-bit 二進位（LD3 LD2 LD1 LD0）：

| 數字 | LED | | 數字 | LED |
|---|---|---|---|---|
| 0 | `0000` | | 5 | `0101` |
| 7 | `0111` | | 9 | `1001` |

`1111`（全亮）= 閒置 / 還沒有結果。板上 **BTN0（`D19`）** 可手動重置回閒置；辨識下一個數字**不用按 reset**，硬體會在收到新影像後自動歸位。

## 技術細節

- UART：**115200 baud, 8N1**，無流量控制
- 每次送**正好 784 bytes**（28×28，逐列 row-major，像素 0–127）；FPGA 收滿才開始推論
- 晶片內做 im2col + CSC 壓縮；LeNet-5 權重已燒在 bitstream 的 ROM 裡，執行時只送影像
- 這版 bitstream **沒有 UART 回傳**，結果只在板子上看

## 常見問題

- **LED 完全沒反應**：COM 埠沒選對 / TX-GND 接錯腳。確認綠線是 TX、接在 RPi 第 16 腳，黑線 GND 接第 14 腳。
- **辨識錯誤**：數字畫太小或太偏，重畫大一點、置中再試。
- **`pip` 不是命令**：改用 `py -m pip install ...`，或重裝 Python 時勾「Add python.exe to PATH」。

## 備註：為什麼另外寫這支

本專案原本的 `FPGA_design/SW/LeNet_5_GEMM_Demo.py` **無法驅動板子**——它的 `predict()` 只跑 `LeNet_with_GEMM()`（純 numpy 軟體模型），`send_to_fpga()` 從沒被呼叫、baud 寫死成 9600、又用了 Pillow 10 已移除的 `Image.ANTIALIAS`。本程式是修正後、會實際把影像送到 FPGA 的版本。
