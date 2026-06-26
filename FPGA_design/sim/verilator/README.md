# Verilator 模擬流程

BoooC's Eyeriss-v2 + LeNet-5 的純軟體 RTL 模擬，目標環境是助教評分用的
Docker（Ubuntu 24.04 + Verilator 5.030）。

與 Vivado xsim 流程平行（功能等價），但跑得快 10–100 倍，且直接對齊
`Final Project Guidelines.md` 規定的可重現性環境。`FPGA_design/Vivado/PYNQ_Z2/`
底下的 Vivado 專案完全不動。

## 快速上手

```bash
cd FPGA_design/sim/verilator
make sim                   # normal fast mode: build + 跑 5 張 MNIST 圖
make sim ITERS=100         # normal fast mode: 跑 100 張
make trace ITERS=1         # trace mode: 跑 1 張並產生 dump.vcd
make trace_public ITERS=1  # public-flat mode: 加 --public-flat-rw 後產生 dump.vcd
make clean
```

`make sim` 預設不編 VCD trace，build 速度較快；只有 `make trace` /
`make trace_public` 會啟用 Verilator `--trace`。

預期輸出：
```
Iter 0: result=7 golden=7 (xxxx cycles) OK
Iter 1: result=2 golden=2 (xxxx cycles) OK
...
=== Summary: 5/5 passed (100%) ===
```

## 重構後等價驗證（PR 必跑）

> 用途：修剪重複接線、`generate` 化、port array 化這類**純結構重構**後，證明
> 「行為跟重構前 byte-for-byte 完全一樣」。這是 **equivalence（行為沒變）**，
> 不是 correctness（準不準是另一回事）。

### 核心觀念：`baseline.log` 鎖的是「目前的行為」

`baseline.log` 是在 **main** 上跑滿 1000 張、**只留判定行**的輸出，裡面**包含目前
已知的 62 個 FAIL**（938/1000）。所以「等價」的定義是：這 1000 筆的
`result / golden / cycles` 全部一字不差 —— **不是**全部 pass。準確率 93.8%→~98%
的缺口是另一條 TODO（見下方〈與 Vivado 的 accuracy 差距〉一節），別跟等價驗證混在一起。

### 重構 PR：reviewer / 作者跑這個就好

```bash
cd FPGA_design/sim/verilator

# 在你的重構 branch 上，從乾淨狀態重 build 再跑 1000 張，只留 deterministic 判定行
make clean && make sim ITERS=1000 2>&1 | grep -E '^(Iter|=== Summary)' > /tmp/after_1000.log

# 跟 repo 裡的 golden 比對：diff 全空才算等價
diff baseline.log /tmp/after_1000.log && echo "✅ 等價：行為未變" || echo "❌ 行為改變，需 review"
```

- 約 19 分鐘（首次含 build）。想先 smoke test 用 `ITERS=5` 或 `100`，但**合 PR 前必跑 1000**。
- **一定要 `make clean`**：否則可能拿 main 舊 build 的 binary 跑你的 branch，驗到的是舊 RTL。
- `diff` 全空 = 通過；把那行 `=== Summary: 938/1000 ...` 貼進 PR 描述當證據。
- 結果輸出寫到 `/tmp`，不會污染 repo，也不用加 `.gitignore`。
- 若你**故意**動了時序但 result 應不變，可只比 result 欄、忽略 cycle 數：
  ```bash
  diff <(sed -E 's/ \([0-9]+ cycles\)//' baseline.log) \
       <(sed -E 's/ \([0-9]+ cycles\)//' /tmp/after_1000.log)
  ```

### `baseline.log` 什麼時候更新

只有「**故意改功能**」（不是純重構）的 PR 才重生，並在 PR 說明為什麼行為要變：

```bash
git checkout main && make clean
make sim ITERS=1000 2>&1 | grep -E '^(Iter|=== Summary)' > baseline.log
# 連同功能修改一起 commit，reviewer 會審 baseline.log 的 diff
```

**純重構 PR 不可以動到 `baseline.log`。**

## 波形檔操作指南

本流程使用 Verilator 的 VCD tracing。執行 `make trace` 或 `make trace_public`
後，波形檔會輸出在目前資料夾：

```text
FPGA_design/sim/verilator/dump.vcd
```

建議先用 `ITERS=1` 產生單張圖的波形，檔案比較小，也比較容易 debug：

```bash
make clean
make trace ITERS=1
```

### normal mode 與 public-flat mode

Makefile 提供兩種 Verilator build mode：

| 目標 | Build directory | Verilator flag | 使用時機 |
|---|---|---|---|
| `make sim` | `obj_dir` | 無 `--trace` | 一般快速 regression |
| `make trace` | `obj_dir_trace` | `--trace` | 一般看波形 |
| `make trace_public` | `obj_dir_public_trace` | `--trace --public-flat-rw` | 需要在 C++ harness 直接讀寫 flattened internal signal 時 |

`--public-flat-rw` 是讓 Verilator 產生的 C++ model 可以公開讀寫內部訊號。
它通常會讓 build 或 simulation 變慢，只有要在 `sim_main.cpp` 裡直接觀察或
強制修改 internal signal 時才需要。

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
| `Makefile` | build + 執行驅動程式；自動掃描 `../../src/` 底下的 RTL，並提供 normal / public-flat 兩種 trace mode |
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
「`result != 0xf`」當作推論完成的訊號，因此 normal mode 不需要直接讀
`final_out_valid` 這個內部 signal。如果之後改了 top 讓輸出類別可能等於 0xf，
可以改用 `make build_public` / `make trace_public` 產生 public-flat model，
再從 C++ harness 讀取對應的 internal signal。

## 與 Vivado 的 accuracy 差距（已驗證）

**ITERS=1000 量測結果：938/1000 PASS（93.8%），耗時 19 分鐘。**

LeNet-5 在 Vivado xsim / 板上應該接近 ~98%（作者 paper 數據），本流程少了
~4-5 個百分點。這個差距**不影響 PR 開出來給組員 review**（infra 本身可
重現、reproducibility 50% 那部分穩拿），但要後續調。

可能成因（依優先順序）：
1. **`COMBDLY` warning 的副作用** —— `Processing_Element_core.v:452` 在
   `always @(*)` 用了 non-blocking。Verilator 當 blocking 跑（與 synth 一致），
   但 xsim 當 NB 跑，導致兩邊收斂時序略異。
2. **Behavioral BRAM 的 read mode** —— 我寫的是 read-first，Vivado BMG 在
   PE Spad 那幾顆預設可能是 write-first 或 no-change。對某些 corner case
   會吃到不同的舊/新資料。
3. **X-propagation 差異** —— Verilator 預設把 X 當 0（嚴格），xsim 採 X-tracking
   能容忍未初始化 corner。

驗證/修正方向（給接手的人）：
- 比對 Vivado xsim 在同樣 5 張 fail 的 pattern 是否也 fail / 是 boundary case
- 試把 `bram_sp` 改成 write-first（dina shadow），再跑 1000 看 accuracy 變化
- 開 trace 看 fail pattern 在哪一層 layer 出現 result 分歧

## 已知問題 / TODOs

- [ ] **Accuracy 差距 ~4-5%**（見上一節）—— 主要 follow-up 工作，建議派一人
      用 `make trace` 抓 fail pattern 的 layer-level 差異。
- [ ] 單張圖的 timeout 在 `sim_main.cpp` 是 `TIMEOUT_CYCLES = 250000`（已驗證
      足以跑完 LeNet 5 層）；如果之後改設計讓推論時間拉長，記得加大。
- [ ] `ifmap_{0,4,5}.coe` 存在於 `Vivado/.../mem_init_files/`，但那是給
      `TOP_integration_rom.v`（board demo，此 build 沒包）用的替代 ifmap 變體。
      如果之後切換 sim top，可能要連帶處理它們。
- [x] Makefile 已提供 `trace` 與 `trace_public` 兩種波形流程。一般看波形用
      `make trace ITERS=1`；需要 C++ harness 直接讀寫 internal signal 時再用
      `make trace_public ITERS=1`。

## 跟 Vivado 流程的關係

| 面向 | Vivado xsim | Verilator (本流程) |
|---|---|---|
| Testbench | `test/tb/TOP_test/TOP_integration_tb.v` | `sim_main.cpp` |
| BRAMs | Xilinx BMG IP | `bram_behavioral.v` |
| 測試資料 | `$readmemh` 讀 `MEM/*.txt` | C++ harness 自己 parse |
| 5 patterns 純跑時間 | 約 7 分鐘 | 約 6 秒（首次含 build 約 1-2 分鐘） |
| 1000 patterns 純跑時間 | 約 25 小時 | **19 分鐘（量測）** |
| Accuracy | ~98%（作者 paper） | **93.8%（量測，差距見上節）** |
| 速度比 | 1× | **~79× faster** |

兩邊吃同一份 `MEM/DRAM.txt` 與 `MEM/GOLDEN.txt`。`src/` 底下的 RTL 也是共用
一份 —— 沒有重複。
