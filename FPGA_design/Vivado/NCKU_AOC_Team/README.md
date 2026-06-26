# NCKU_AOC_Team — FPGA Bringup（把 develop 的 RTL 燒上 PYNQ-Z2）

這份說明帶你把 **develop 分支的 RTL** 從頭長成 bitstream，燒到 **PYNQ-Z2** 板上跑 LeNet-5 手寫數字辨識 demo。
全程用 **Vivado GUI** 操作，只有「建專案」這一步用一支 Tcl 腳本自動完成，其餘都是點按鈕。

- **目標板**：PYNQ-Z2（`xc7z020clg400-1`）
- **板上頂層**：`TOP_integration_uart`（`clock / reset / rx_pin_in` → `result[3:0] / seg_7[6:0]`）
- **產物**：`build/eyeriss_develop.runs/impl_1/TOP_integration_uart.bit`

---

## 🚀 快速重現：直接燒已附的 bitstream（免重建）

本分支**已把建好的 bitstream 與檢查點放進版控**（`.bit` / `*_routed.dcp` / synth `.dcp` / `.xpr`），
驗收時可不必重跑合成：`.bit` 綁的是晶片型號（`xc7z020`），任何版本的 Vivado Hardware Manager 都能燒，
權重已在 implementation 階段固化進 bitstream，燒錄不需任何 `.coe`。

1. 板子設 **JTAG 開機模式**、接 USB、上電。
2. 開 Vivado → **Open Hardware Manager → Open Target → Auto Connect**。
3. **Program Device** → 選 `build/eyeriss_develop.runs/impl_1/TOP_integration_uart.bit` → **Program**。
4. 用 repo 根目錄的 `host_demo/fpga_uart_demo.py` 經 UART 餵手寫數字 → 看板上 `result` / 七段顯示結果。

> 想從 RTL 從頭重建才需要下面的完整步驟。
> 本次實作結果與原作者的比較見 [`Reports/develop_clean_rtl/COMPARISON.md`](Reports/develop_clean_rtl/COMPARISON.md)。

---

## 為什麼要用這支腳本（先看，省得踩雷）

原作者 committed 的 Vivado 專案 `FPGA_design/Vivado/PYNQ_Z2/` 是**很久以前 flat 檔案結構**的版本；
我們的 develop 已經把 `src/` 重構成**巢狀資料夾＋重新命名**（例如 `ClusterGroup.v` → `Cluster_Group/Cluster_Group.v`）。

> ⚠️ 所以 **直接開作者的 `PYNQ_Z2.xpr` 會有約 53 個檔案 file-not-found**，燒出來的也不是我們的 RTL。
> 必須用下面的腳本，依 develop 現況重新組一個專案。

腳本做的事：建新專案 → 遞迴收 `src/` 全部 `.v`（59 個）→ 就地引用作者的 10 顆 BRAM/ROM IP → 套正確的約束 → 設好頂層。**完全不動作者的 `PYNQ_Z2/`。**

---

## 前置需求

- **Vivado**（建議與作者 IP 同代 2019.1；較新版本也可，開啟時腳本會自動 `upgrade_ip`）
- **PYNQ-Z2** 板 + USB 線（JTAG 模式）
- 把整個 repo clone 到 Windows（Vivado 在 Windows 跑）

---

## 操作步驟

### 🟢 第一次：用腳本生出專案（只做一次）

1. 開 Vivado（不用先開任何專案）。
2. 選單 **Tools → Run Tcl Script…**，選
   `FPGA_design/Vivado/NCKU_AOC_Team/setup_project.tcl`
   （腳本會自己找到 repo 根目錄，不管你從哪開 Vivado 都對。）
3. 等 Tcl Console 印出「收到 59 個 .v」「專案已就緒」。專案 `eyeriss_develop` 會**直接開在 GUI**，src / IP / 約束 / top 全配好。

> 之後要回來，**不必再跑腳本**：File → Open Project →
> `FPGA_design/Vivado/NCKU_AOC_Team/build/eyeriss_develop.xpr`，跟開作者 `.xpr` 一樣。

### 🔵 接著：左側 Flow Navigator 點按鈕

4. **Run Synthesis** → 跑完先別急著下一步，看 **Messages** 分頁（見下方「synth 要盯什麼」）。
5. **Run Implementation**
6. **Generate Bitstream** → 產出 `.bit`（路徑見最上面）。

### 🟠 燒板（Hardware Manager）

7. 板子設 **JTAG 開機模式**、接 USB、上電。
8. Flow Navigator **Open Hardware Manager** → **Open Target → Auto Connect**。
9. **Program Device** → 選上面的 `.bit` → **Program**。
10. 用 repo 根目錄的 `host_demo/fpga_uart_demo.py` 經 UART 餵手寫數字 → 看板上 `result` / 七段顯示推論結果。
    （PC 端請用修正版腳本；原始 demo 有 9600 baud / predict 不送出的 bug。）

---

## ⚠️ Synthesis 要盯什麼

develop 的等價驗證是用 Verilator 跑 sim 頂層（`TOP_integration`），**沒涵蓋只在板上才用到的** `UART/`、`display/`、`IO_processing/` 這些模組——它們在這裡是**重構後第一次被合成檢查**。
Run Synthesis 後請在 **Messages** 找這幾類，有的話先解決再往下：

- `Error`（紅色）
- Critical Warning：`inferred latch`、`multi-driven net`、`undriven`、`black box`、`unconnected port`

---

## 重跑注意事項

- 要重新生專案（例如 develop 又更新）時，**先在 GUI File → Close Project**，否則 `build/` 資料夾被鎖，腳本刪不掉會報錯。
- `build/` 預設被 `.gitignore` 擋掉（它整體是生成物）；但**交付用的 `.bit` / `*_routed.dcp` / synth `.dcp` / `.xpr` 已用 `git add -f` 強制追蹤**，讓驗收能直接燒。重建後要更新這些已追蹤檔，用 `git add -u`（或 `git add -f`）；其餘生成物仍不要 commit。

---

## 檔案說明

```
FPGA_design/Vivado/
├── PYNQ_Z2/                 # 原作者專案（不要動）
└── NCKU_AOC_Team/
    ├── README.md            # 本檔
    ├── setup_project.tcl    # ★ GUI 用：一鍵建專案（建完用按鈕跑）
    ├── build_bitstream.tcl  # 選用：headless 一鍵建置（見下）
    ├── Reports/             # 合成/實作報告與 vs 原作者比較（develop_clean_rtl/COMPARISON.md）
    └── build/               # 生成的 Vivado 專案（整體 gitignored；.bit/.dcp/.xpr 交付物強制追蹤）
```

| 檔案 | 用途 |
|---|---|
| `setup_project.tcl` | **大多數人用這支。** GUI `Tools → Run Tcl Script` 跑一次，建好專案後用 Flow Navigator 按鈕跑 synth/impl/bitstream。 |
| `build_bitstream.tcl` | 選用。想用一道指令從頭重生 bitstream（重現性 / 交付）時用。 |

### 選用：headless 一鍵建置

在 repo 根目錄執行（Windows 可用 Vivado 的 Tcl Shell 或把 `vivado` 加進 PATH）：

```bash
vivado -mode batch -source FPGA_design/Vivado/NCKU_AOC_Team/build_bitstream.tcl -nojournal -log build.log
```

---

## 疑難排解

| 症狀 | 原因 / 解法 |
|---|---|
| 開作者 `PYNQ_Z2.xpr` 一堆 file-not-found | 預期行為（檔案已重構改名）。請改用本資料夾的 `setup_project.tcl`。 |
| 板上推論結果全錯但 synth 沒報錯 | 多半是 ROM 的 `.coe` 初值沒載到（空 ROM）。**不要把作者的 IP `.xci` 複製到別處**，其 `.coe` 路徑是相對原位置寫死的；腳本採就地引用就是為了避開這點。 |
| Vivado 版本比 2019.1 新 | 正常，腳本會自動 `upgrade_ip`；若升版有警告再回報。 |
| 重跑腳本報「無法刪除 build/」 | 專案還開著。先 File → Close Project 再跑。 |
