"""
最小化 PYNQ-Z2 手寫數字 demo 送圖程式 (LeNet-5 / Eyeriss-v2 加速器)

用法:
  - 在 Windows 端的 Python 執行 (這樣才看得到 COM 埠、tkinter 視窗才會出現)
  - 先安裝相依套件:  pip install pyserial pillow numpy
  - 執行:            python fpga_uart_demo.py

流程:
  1. 下拉選 USB-UART 的 COM 埠 -> 按 Connect
  2. 在黑底畫布上手寫一個數字
  3. 按 "Predict (送到 FPGA)" -> 影像縮成 28x28、轉 784 bytes、用 115200 送出
  4. 辨識結果「看板子上的 4 顆綠色 user LED (LD3 LD2 LD1 LD0 = 二進位)」, 本程式不印答案
     (這版 bitstream 沒有 UART 回傳, 答案只在板子上; 例: 0111 -> 7)

硬體接線 (PYNQ-Z2, 純 PL 設計, 不走 micro-USB):
  - UART RX 腳位 = W6 = Raspberry Pi 40-pin header 實體 pin16; GND = RPi pin14
  - USB-to-TTL 轉接板:  TX -> W6(pin16),  GND -> pin14
    ★ 轉接板務必用 3.3V 邏輯 (W6 是 LVCMOS33, 接 5V 會燒腳; 切勿接 5V 紅線)
  - reset = D19 = 板上按鈕 BTN0: 只在上電/卡住時按一下做初始化
    每張數字之間「不需」手動 reset (interrupt_gen 約 128ms 自動 re-arm),
    直接 Clear -> 重畫 -> Predict 即可
  - result 閒置值 = 0xF (4 顆 LED 全亮) = 尚未有結果; 送圖後約 0.1s 內變成答案
"""

import tkinter as tk
from tkinter import Button, ttk, messagebox
from PIL import Image, ImageDraw, ImageOps
import numpy as np
import serial
import serial.tools.list_ports

BAUD = 115200      # 必須跟 FPGA 一致 (硬體 RX 預設 115200, 不是 9600!)
IMG_BYTES = 784    # 28 x 28; FPGA 收滿 784 bytes 才開始推論

# Pillow 相容: 新版 (>=9.1) 用 Resampling.LANCZOS, 舊版用 LANCZOS;
# 原始 demo 的 Image.ANTIALIAS 在 Pillow>=10 已被移除, 會崩, 這裡換掉
try:
    RESAMPLE = Image.Resampling.LANCZOS
except AttributeError:
    RESAMPLE = Image.LANCZOS


class App(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("PYNQ-Z2 LeNet-5 UART Demo")
        self.serial_port = None

        # 畫布: 280x280 黑底, 白筆 (跟原始 demo 一致)
        self.canvas = tk.Canvas(self, width=280, height=280, bg='black')
        self.canvas.pack(padx=10, pady=10)
        self.image = Image.new('L', (280, 280), 'black')
        self.draw = ImageDraw.Draw(self.image)
        self.brush = 10
        self.canvas.bind('<B1-Motion>', self.paint)

        bar = tk.Frame(self)
        bar.pack(fill='x', padx=10, pady=6)
        self.com_var = tk.StringVar(self)
        self.com_box = ttk.Combobox(bar, textvariable=self.com_var,
                                    values=self.scan_ports(), state='readonly', width=12)
        self.com_box.pack(side=tk.LEFT)
        Button(bar, text='重新掃描', command=self.rescan).pack(side=tk.LEFT, padx=4)
        Button(bar, text='Connect', command=self.connect).pack(side=tk.LEFT, padx=4)
        Button(bar, text='Predict (送到 FPGA)', command=self.predict).pack(side=tk.LEFT, padx=4)
        Button(bar, text='Clear', command=self.clear).pack(side=tk.LEFT, padx=4)

        self.status = tk.Label(self, text='請選 COM 埠並按 Connect', anchor='w', fg='blue')
        self.status.pack(fill='x', padx=10, pady=(0, 8))

    # ---- COM 埠 ----
    def scan_ports(self):
        return [p.device for p in serial.tools.list_ports.comports()]

    def rescan(self):
        self.com_box['values'] = self.scan_ports()

    def connect(self):
        port = self.com_var.get()
        if not port:
            messagebox.showwarning("提醒", "請先選一個 COM 埠")
            return
        try:
            self.serial_port = serial.Serial(port, BAUD, timeout=1)
            self.serial_port.reset_output_buffer()
            self.status.config(text=f"已連線 {port} @ {BAUD} 8N1")
        except serial.SerialException as e:
            messagebox.showerror("連線失敗", str(e))

    # ---- 畫圖 ----
    def paint(self, e):
        x1, y1 = e.x - self.brush, e.y - self.brush
        x2, y2 = e.x + self.brush, e.y + self.brush
        self.canvas.create_oval(x1, y1, x2, y2, fill='white', outline='')
        self.draw.ellipse([x1, y1, x2, y2], fill='white')

    def clear(self):
        self.canvas.delete('all')
        self.image = Image.new('L', (280, 280), 'black')
        self.draw = ImageDraw.Draw(self.image)

    # ---- 預處理: 與原始 demo 等效 (白字黑底, 縮 28x28, 數值壓到 0~127) ----
    def preprocess(self):
        img = self.image.resize((28, 28), RESAMPLE)
        img = ImageOps.invert(img)
        arr = np.array(img, dtype=np.uint8)
        arr = ((255 - arr) // 2).astype(np.uint8)   # 白筆畫~127, 背景~0
        return arr

    # ---- 送到 FPGA ----
    def predict(self):
        if self.serial_port is None or not self.serial_port.is_open:
            messagebox.showwarning("提醒", "請先 Connect")
            return
        arr = self.preprocess()
        data = arr.tobytes()              # 784 bytes, 逐列 (row-major)
        if len(data) != IMG_BYTES:
            messagebox.showerror("錯誤", f"應為 {IMG_BYTES} bytes, 實際 {len(data)}")
            return
        self.serial_port.reset_output_buffer()
        self.serial_port.write(data)      # 一次送完整 784 bytes
        self.serial_port.flush()
        print("送出 28x28 影像 (0~127):")
        print(arr)
        print("看板子 4 顆綠 LED 讀二進位: LD3 LD2 LD1 LD0 (例 0111 -> 7)")
        print("約 0.1s 內 LED 從 1111(閒置) 變成答案; 下一張直接 Clear->畫->Predict")
        self.status.config(text="已送出 784 bytes -> 看板上 4 顆 LED 二進位 (約 0.1s 出結果)")


if __name__ == '__main__':
    App().mainloop()
