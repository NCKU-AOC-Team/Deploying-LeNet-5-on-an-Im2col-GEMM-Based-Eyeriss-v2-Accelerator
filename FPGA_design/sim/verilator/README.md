# Verilator 模擬流程

BoooC's Eyeriss-v2 + LeNet-5 的純軟體 RTL 模擬，目標是助教評分用的 Docker
（Ubuntu 24.04 + Verilator 5.030）。與 Vivado xsim 流程功能等價，但快 10–100 倍。
`FPGA_design/Vivado/PYNQ_Z2/` 底下的 Vivado 專案完全不動。

> 前半「日常操作」是想跑模擬就看這裡；後半「實作細節與排錯筆記」是接手 debug
> 或改設計才需要的深水內容。

---

## 快速上手

```bash
cd FPGA_design/sim/verilator
make sim                   # build + 跑 5 張 MNIST 圖（預設 ITERS=5）
make sim ITERS=100         # 跑 100 張
make trace ITERS=1         # 跑 1 張並產生 dump.vcd
make trace_public ITERS=1  # 同上，但加 --public-flat-rw
make clean
```

預期輸出：
```
Iter 0: result=7 golden=7 (xxxx cycles) OK
...
=== Summary: 5/5 passed (100%) ===
```

模擬器內建 golden 比對：每張圖把 `result` 對 `GOLDEN.txt`，最後給 `Summary`。
預設測資是 `../../test/tb/TOP_test/MEM/{DRAM,GOLDEN}.txt`，直接 `make sim` 就對，
**不要自己指定別的路徑**。

## 驗證改動沒弄壞行為

任何會動到 RTL 的改動（重構、同步 develop、加功能），都用「改動前後各跑一次
`make sim`、`diff` 比對 result + cycle」來確認行為變化符合預期。完整步驟（含合併
develop、解衝突、判讀 diff）見同目錄的
**[`SYNC_DEVELOP_AND_VERIFY.md`](./SYNC_DEVELOP_AND_VERIFY.md)**。

> 判準是「跟你自己改動前的基準一致」，不是去對某個固定準確率（通過數會隨 RTL
> 改動而變）。純結構重構應 **byte-for-byte 一致**（result + cycle 全不變）；改功能的
> PR 則在說明裡解釋為什麼某些結果 / cycle 會變。

## 看波形（trace）

`make trace` / `make trace_public` 後，波形輸出在目前資料夾的 `dump.vcd`。建議先用
`ITERS=1` 產生單張圖的波形，檔案小、好 debug：

```bash
make clean && make trace ITERS=1
```

| 目標 | Build dir | Verilator flag | 使用時機 |
|---|---|---|---|
| `make trace` | `obj_dir` | `--trace` | 一般看波形，較快 |
| `make trace_public` | `obj_dir_public` | `--trace --public-flat-rw` | 要在 `sim_main.cpp` 直接讀寫 flattened 內部訊號時 |

`--public-flat-rw` 讓 Verilator model 可公開讀寫內部訊號，會變慢，只有要在 harness
裡觀察 / 強制修改 internal signal 時才用。

## 在助教 Docker 環境跑

```bash
docker run -it --rm -v $(pwd):/work -w /work/FPGA_design/sim/verilator \
    <ta-image> make sim
```

本機 Verilator 版本與 5.030 不同也應一致 —— behavioral BRAM 與 harness 都沒用到
版本相依特性。

## 檔案說明

| 檔案 | 用途 |
|---|---|
| `Makefile` | build + 執行驅動；自動掃 `../../src/` 的 RTL，提供 normal / public-flat 兩種 trace mode |
| `sim_main.cpp` | C++ harness：clock、reset、餵 ifmap、檢查結果 |
| `bram_behavioral.v` | 8 顆 Xilinx BMG IP + `ROM_sparse_weight` 的行為級替代品 |
| `rom_sparse_weight.mem` | build 時由 `ROM_sparse_COE.coe` 自動轉換（LeNet 權重） |
| `SYNC_DEVELOP_AND_VERIFY.md` | 組員把 develop 合併進自己分支並驗證的操作手冊 |
| `README.md` | 本檔 |

---

# 實作細節與排錯筆記

> 以下是接手 debug 或改設計才需要的內容，日常跑模擬可略過。

## Build 時排除的檔案

Makefile 的 `RTL_SRCS` 從 `find` 結果排掉這幾類：

- **Board demo 專用模組**：UART RX/TX、七段顯示、`clock_gen`（MMCM）、`debouncing`、
  `interrupt_gen`
- **替代版 top**：`TOP_integration_uart.v` / `TOP_integration_rom.v`（板上 demo 用）
- **作者 dead-code stub**：`SCNN_shape_info_compiler.v`（沒被 instantiated；line 123
  有空的 `else if() begin`，Vivado 放過、Verilator 拒絕）
- **重複定義的 module**：`CSC_encoderr_FIFO.v`（內含的 `module CSC_switch_FIFO` 與
  `CSC_switch_FIFO.v` 完全相同 —— 作者 copy-paste 殘留）

模擬用的 top 是 `TOP_integration`（與 Vivado TB 同一個）。

## Behavioral BRAM / ROM

`bram_behavioral.v` 提供 Vivado Block Memory Generator IP 的 Verilog 替身，整個檔包在
`` `ifdef VERILATOR `` 內，即使被加進 Vivado 專案也看不到、不會誤觸。

- **8 顆讀寫 BRAM**（`IP_*_BRAM`），基於兩種 primitive：
  - `bram_sp`（single port，shared addr 讀寫）：`IP_ifmap_BRAM`、`IP_Iact_DATA_Spad_BRAM`、
    `IP_Weight_DATA_Spad_BRAM`（PE 內 scratchpad 是分時讀寫，故用 SP）
  - `bram_sdp`（simple dual port，獨立 read/write port）：其餘 5 顆（GLB 與 Psum 系列，
    需要 producer-consumer overlap）
  - 兩種都是讀延遲 1 cycle、輸出有暫存器；SP 採 read-first。寬度 / 深度都從作者 RTL
    每個 instantiation 的 port 寬度反推。
- **`ROM_sparse_weight`**：LeNet 量化權重（33,722 × 16 bit）。Makefile 把
  `Vivado/.../ROM_sparse_COE.coe` 轉成 `rom_sparse_weight.mem`，sim 開始時 `$readmemh`
  載入。**少了它 inference 會跑出垃圾值**；重新訓練 / 量化後要更新 Vivado 端 COE，再
  `make clean && make sim` 重產 .mem。

存取模式是「寫入階段與讀出階段時間上分開」，功能應與 Vivado 一致。若遇到 xsim 過、
Verilator 不過的資料錯亂，懷疑 write-during-read collision，檢查設計是否依賴特定 BMG
read mode。

## 為 Verilator 動到的 RTL

原則上 `src/` 不動，唯一例外：`src/TOP/TOP.v` 與 `src/TOP/TOP_interface.v` 把
`module TOP` 改名為 `module TOP_eyeriss` —— Verilator 保留 `TOP` 當 top-level wrapper
class 名，不允許 user module 用。Vivado 認 module 名本身，兩邊改一致即可、不受影響。

## 推論完成的判斷方式

`TOP_integration` reset 時把 `result <= 4'hf`，等 `final_out_valid` pulse 才把 `result`
latch 成 `final_out`（0–9 類別）。Harness 用「`result != 0xf`」當推論完成訊號，故 normal
mode 不需直接讀內部 `final_out_valid`。若之後改 top 讓輸出可能等於 0xf，改用
`make trace_public` 的 public-flat model 從 C++ harness 讀對應 internal signal。

## 與 Vivado 的 accuracy 差距

> ⚠️ 下面的 938/1000、93.8% 是**早期在 main 上的量測**；develop 經 PR#2–#4（含 SIMD /
> softmax / requantizer 改動）後**尚未重測**，數字僅供參考，需要時以 `make sim ITERS=1000`
> 重跑為準。

早期量測：ITERS=1000 → 938/1000（93.8%），約 19 分鐘。LeNet-5 在 Vivado xsim / 板上
約 ~98%（作者 paper），本流程少 ~4–5 個百分點。不影響可重現性（reproducibility 那部分
穩拿），但要後續調。

可能成因（依優先順序）：
1. **`COMBDLY` 副作用**：`Processing_Element_core.v:452` 在 `always @(*)` 用 non-blocking。
   Verilator 當 blocking 跑（與 synth 一致），xsim 當 NB 跑，兩邊收斂時序略異。
2. **Behavioral BRAM read mode**：我寫的是 read-first，Vivado BMG 在 PE Spad 那幾顆可能
   是 write-first / no-change，某些 corner case 吃到不同舊 / 新資料。
3. **X-propagation**：Verilator 把 X 當 0（嚴格），xsim 採 X-tracking 能容忍未初始化 corner。

排查方向（給接手的人）：比對 xsim 在同樣 fail 的 pattern 是否也 fail / 是 boundary case；
試把 `bram_sp` 改 write-first 再跑 1000 看變化；開 trace 看 fail 出現在哪一層。

## 已知問題 / TODOs

- [ ] **Accuracy 差距 ~4–5%**（見上節）—— 主要 follow-up，建議用 `make trace` 抓 fail
      pattern 的 layer-level 差異。
- [ ] `sim_main.cpp` 的 `TIMEOUT_CYCLES = 250000`（已驗足夠跑完 5 層）；之後若推論時間
      拉長記得加大。
- [ ] `ifmap_{0,4,5}.coe` 在 `Vivado/.../mem_init_files/`，是給 `TOP_integration_rom.v`
      （board demo）的替代 ifmap 變體，此 build 沒包；之後切換 sim top 可能要連帶處理。

## 跟 Vivado 流程的對照

| 面向 | Vivado xsim | Verilator（本流程） |
|---|---|---|
| Testbench | `test/tb/TOP_test/TOP_integration_tb.v` | `sim_main.cpp` |
| BRAMs | Xilinx BMG IP | `bram_behavioral.v` |
| 測試資料 | `$readmemh` 讀 `MEM/*.txt` | C++ harness 自己 parse |
| 5 patterns 純跑 | 約 7 分鐘 | 約 6 秒（首次含 build 約 1–2 分） |
| 1000 patterns 純跑 | 約 25 小時 | 約 19 分鐘（早期量測） |
| Accuracy | ~98%（paper） | 93.8%（早期量測，待重測） |

兩邊吃同一份 `MEM/DRAM.txt` 與 `MEM/GOLDEN.txt`，`src/` 的 RTL 也共用一份、沒有重複。
