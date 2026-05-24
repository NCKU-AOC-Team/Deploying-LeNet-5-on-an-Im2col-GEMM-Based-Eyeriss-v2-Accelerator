# Verilator 模擬流程

BoooC's Eyeriss-v2 + LeNet-5 的純軟體 RTL 模擬，目標環境是助教評分用的
Docker（Ubuntu 24.04 + Verilator 5.030）。

與 Vivado xsim 流程平行（功能等價），但跑得快 10–100 倍，且直接對齊
`Final Project Guidelines.md` 規定的可重現性環境。`FPGA_design/Vivado/PYNQ_Z2/`
底下的 Vivado 專案完全不動。

## 快速上手

```bash
cd FPGA_design/sim/verilator
make sim                   # build + 跑 5 張 MNIST 圖（約 1-2 分鐘）
make sim ITERS=100         # 跑 100 張
make trace ITERS=2         # 跑 2 張並 dump 波形 (dump.vcd)
make clean
```

預期輸出：
```
Iter 0: result=7 golden=7 (xxxx cycles) OK
Iter 1: result=2 golden=2 (xxxx cycles) OK
...
=== Summary: 5/5 passed (100%) ===
```

## 在助教 Docker 環境跑

```bash
docker run -it --rm -v $(pwd):/work -w /work/FPGA_design/sim/verilator \
    <ta-image> make sim
```

如果本機 Verilator 版本與 5.030 不同，結果應該還是會一致 —— behavioral BRAM
跟 harness 都沒用到任何版本相依的特性。

## 檔案說明

| 檔案 | 用途 |
|---|---|
| `Makefile` | build + 執行驅動程式；自動掃描 `../../src/` 底下的 RTL |
| `sim_main.cpp` | C++ harness：clock 產生、reset、餵 ifmap、檢查結果 |
| `bram_behavioral.v` | 8 顆 Xilinx BMG IP + `ROM_sparse_weight` 的行為級替代品 |
| `rom_sparse_weight.mem` | build 時由 `ROM_sparse_COE.coe` 自動轉換（LeNet 權重） |
| `README.md` | 本檔 |

## Build 時排除的檔案

Makefile 的 `RTL_SRCS` 從 `find` 結果排掉以下幾類：

- **Board demo 專用模組**：UART RX/TX、七段顯示、`clock_gen`（MMCM 計數器）、
  `debouncing`、`interrupt_gen`
- **替代版 top**：`TOP_integration_uart.v` / `TOP_integration_rom.v`（板上 demo 用）
- **作者 dead-code stub**：`SCNN_shape_info_compiler.v`（沒被 instantiated；
  line 123 有空的 `else if() begin`，Vivado 寬鬆放過，Verilator 拒絕）
- **重複定義的 module**：`CSC_encoderr_FIFO.v`（內含 `module CSC_switch_FIFO`，
  與 `CSC_switch_FIFO.v` 內容完全相同 —— 作者 copy-paste 殘留）

模擬用的 top 是 `TOP_integration`（與 Vivado TB 用的同一個）。

## Behavioral BRAM / ROM 注意事項

`bram_behavioral.v` 提供 Vivado Block Memory Generator IP 的 Verilog 替身：

- **8 顆讀寫 BRAM** (`IP_*_BRAM`) —— 基於兩種 generic primitive：
  - `bram_sp`（single port，shared addr 讀寫）—— `IP_ifmap_BRAM`、
    `IP_Iact_DATA_Spad_BRAM`、`IP_Weight_DATA_Spad_BRAM`（PE 內 scratchpad
    操作是分時讀寫，所以作者用 SP）
  - `bram_sdp`（simple dual port，獨立 read/write port）—— 其餘 5 顆
    （GLB 跟 Psum 系列，需要 producer-consumer overlap）

  兩種都是讀延遲 1 cycle、輸出有暫存器；SP 採 read-first 模式。寬度與深度
  都從作者 RTL 每個 instantiation 的 port 寬度反推出來。
- **`ROM_sparse_weight`** —— LeNet 量化權重（33,722 × 16 bit）。Makefile 會
  把 `Vivado/.../ROM_sparse_COE.coe` 轉成 `rom_sparse_weight.mem`，模組在
  sim 開始時透過 `$readmemh` 載入。**少了這個 inference 會跑出垃圾值** ——
  如果之後重新訓練或重新量化模型，記得在 Vivado 端更新 COE，然後執行
  `make clean && make sim` 重新產生 .mem。

對於設計實際使用的存取模式（寫入階段與讀出階段在時間上分開），功能行為應該
與 Vivado 一致。如果遇到 Vivado xsim 跑得過但 Verilator 跑不過的資料錯亂，
要懷疑是 write-during-read collision，並檢查設計是否依賴特定的 BMG read mode。

整個檔案包在 `` `ifdef VERILATOR `` 內，所以即使不小心被加進 Vivado 專案，
Vivado synth 也看不到，不會誤觸。

## 為 Verilator 動到的 RTL

原則上 `src/` 不動，但為了讓 Verilator 跑得起來有一處小例外：

- `src/TOP/TOP.v` 跟 `src/TOP/TOP_interface.v`：把 `module TOP` 改名為
  `module TOP_eyeriss`。原因是 Verilator 內部保留 `TOP` 作為 top-level
  wrapper class 名，不允許 user module 使用。改名 Vivado 端不受影響
  （Vivado 認的是 module 名字本身，兩邊改一致即可）。

## 推論完成的判斷方式

`TOP_integration` 在 reset 時把 `result <= 4'hf`，等 `final_out_valid` pulse
時才把 `result` latch 成 `final_out`（0–9，MNIST 類別索引）。Harness 用
「`result != 0xf`」當作推論完成的訊號，避免要動到 `--public-flat-rw` 去
暴露 `final_out_valid` 這個內部 signal。如果之後改了 top 讓輸出類別可能等於
0xf，這個判斷就要改用 public signal 的做法。

## 已知問題 / TODOs

- [ ] 單張圖的 timeout 在 `sim_main.cpp` 是 `TIMEOUT_CYCLES = 50000`；如果之後
      改設計讓推論時間拉長，記得加大。
- [ ] 本機只驗證到檔案 scaffold 階段，完整 1000 pattern 還沒做 end-to-end 驗證
      —— 第一個跑 `make sim ITERS=1000` 的組員麻煩把實際 wall-clock 時間更新進
      這份 README。
- [ ] `ifmap_{0,4,5}.coe` 存在於 `Vivado/.../mem_init_files/`，但那是給
      `TOP_integration_rom.v`（board demo，此 build 沒包）用的替代 ifmap 變體。
      如果之後切換 sim top，可能要連帶處理它們。
- [ ] `dump.vcd` 目前只 trace top-level port，沒有 trace 內部 signal。如果需要
      看內部，把 `--public-flat-rw` 加進 Makefile 的 VFLAGS。

## 跟 Vivado 流程的關係

| 面向 | Vivado xsim | Verilator (本流程) |
|---|---|---|
| Testbench | `test/tb/TOP_test/TOP_integration_tb.v` | `sim_main.cpp` |
| BRAMs | Xilinx BMG IP | `bram_behavioral.v` |
| 測試資料 | `$readmemh` 讀 `MEM/*.txt` | C++ harness 自己 parse |
| 5 patterns | 約 7 分鐘 wall-clock | 約 1-2 分鐘（估計值） |
| 1000 patterns | 約 25 小時 | 分鐘級（待確認） |

兩邊吃同一份 `MEM/DRAM.txt` 與 `MEM/GOLDEN.txt`。`src/` 底下的 RTL 也是共用
一份 —— 沒有重複。
