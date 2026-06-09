# 稀疏卷積神經網路加速器 FPGA 專案

本專案是以 Eyeriss v2 架構為基礎修改而成的稀疏卷積神經網路加速器。設計重點包含 `im2col`、`GEMM`、CSC 稀疏壓縮、router 資料流重整，以及適合 LeNet-5 推論的 FPGA 控制流程。

原始專案曾獲中興大學電機系大學部專題競賽第一名。此 repository 主要提供 FPGA prototype、Verilog RTL、測試資料產生腳本、Vivado 專案與相關文件。

## Repository 內容

- `FPGA_design/src/`：主要 Verilog RTL。
- `FPGA_design/sim/verilator/`：Verilator simulation flow。
- `FPGA_design/test/tb/TOP_test/`：TOP-level 測試資料、DRAM、golden、layer data。
- `FPGA_design/Vivado/PYNQ_Z2/`：PYNQ-Z2 Vivado project 與既有 implementation 產物。
- `docs/`：架構分析、controller FSM、module reference 等文件。
- `host_demo/`：主機端 demo 相關程式。
- `picture/`：README 與報告使用的圖片。

Demo 影片：[YouTube](https://www.youtube.com/watch?v=wLz8Di9vdas&ab_channel=BOCHUNChen)

## 目前分支狀態

### BOYU_ShunWei

目前工作分支是 `BOYU_ShunWei`，來源是 `origin/feat/hw-analysis`。這個分支用來測試 ShunWei 重構後的 RTL，並在自己的 branch 上做低風險優化，不修改或污染其他人的遠端 branch。

目前同步到的 commit：

```text
7b21c07 refactor(task#2): arrayify PE_disable ([r][c], ctrl-tap); read_out_en/data_out/data_in/interconnect left as-is
```

Verilator smoke test：

```bash
cd FPGA_design/sim/verilator
make clean
make sim ITERS=5
```

目前結果：

```text
Iter 0: result=5 golden=5 (88400 cycles) OK
Iter 1: result=0 golden=0 (88440 cycles) OK
Iter 2: result=4 golden=4 (85152 cycles) OK
Iter 3: result=1 golden=1 (87474 cycles) OK
Iter 4: result=9 golden=9 (87722 cycles) OK

=== Summary: 5/5 passed (100%) ===
```

## Verilator `make sim` 目前吃的檔案

目前 `FPGA_design/sim/verilator/Makefile` 跑的是 Verilator C++ harness，不是直接跑原本的 Verilog testbench。也就是說，TOP-level testbench 由 `sim_main.cpp` 取代，RTL top module 是 `TOP_integration`。

預設指令：

```bash
cd FPGA_design/sim/verilator
make sim
```

等價於：

```bash
./obj_dir/VTOP_integration \
  --iters 5 \
  --dram ../../test/tb/TOP_test/MEM/DRAM.txt \
  --golden ../../test/tb/TOP_test/MEM/GOLDEN.txt
```

目前資料來源如下：

| 類別 | 目前使用檔案 / module | 說明 |
|---|---|---|
| Verilator harness / tb | `FPGA_design/sim/verilator/sim_main.cpp` | 取代原本 Verilog TB，負責 reset、等待、寫入 ifmap、讀 `result` 並比對 golden。 |
| RTL top | `FPGA_design/src/TOP/TOP_integration.v` | Verilator top module，Makefile 用 `--top-module TOP_integration`。 |
| Behavioral BRAM/IP replacement | `FPGA_design/sim/verilator/bram_behavioral.v` | 取代 Vivado Block Memory Generator IP，讓 RTL 可以在 Verilator 下跑。 |
| Iact / input image | `FPGA_design/test/tb/TOP_test/MEM/DRAM.txt` | `sim_main.cpp` 每個 pattern 讀 784 bytes，透過 `ifmap_BRAM_wr_in` / `ifmap_BRAM_dina_in` 寫入 ifmap BRAM。 |
| Golden label | `FPGA_design/test/tb/TOP_test/MEM/GOLDEN.txt` | 每個 pattern 一個 expected class label，`sim_main.cpp` 用來比對 `dut->result`。 |
| Weight COE source | `FPGA_design/Vivado/PYNQ_Z2/PYNQ_Z2.ip_user_files/mem_init_files/ROM_sparse_COE.coe` | Makefile 預設從這個 Vivado COE 取 sparse weight。 |
| Weight runtime mem | `FPGA_design/sim/verilator/rom_sparse_weight.mem` | Makefile build 前由 `ROM_sparse_COE.coe` 轉出，`ROM_sparse_weight` 用 `$readmemh` 載入。這是 generated file，`make clean` 會刪掉。 |
| Weight ROM module | `ROM_sparse_weight` in `bram_behavioral.v` | 模擬版 sparse weight ROM，接在 `TOP_interface.v` 的 `ROM_weight_inst`。 |

相關行號：

| 檔案 | 行號 | 內容 |
|---|---:|---|
| `FPGA_design/sim/verilator/Makefile` | 37-38 | `RTL_DIR` 與 `TEST_DIR`，預設 test data 指到 `../../test/tb/TOP_test/MEM`。 |
| `FPGA_design/sim/verilator/Makefile` | 55-56 | `COE_FILE` 與 `MEM_FILE`，定義 sparse weight COE 來源與轉出的 `.mem`。 |
| `FPGA_design/sim/verilator/Makefile` | 74-76 | `ITERS`、`DRAM`、`GOLDEN` 預設值。 |
| `FPGA_design/sim/verilator/Makefile` | 93-99 | 將 `ROM_sparse_COE.coe` 轉成 `rom_sparse_weight.mem`。 |
| `FPGA_design/sim/verilator/Makefile` | 101-102 | `make sim` 執行 `VTOP_integration --dram ... --golden ...`。 |
| `FPGA_design/sim/verilator/sim_main.cpp` | 89-97 | C++ harness 的 `--iters`、`--dram`、`--golden` 參數解析。 |
| `FPGA_design/sim/verilator/sim_main.cpp` | 152-156 | 每個 pattern 寫入 784 bytes ifmap 到 DUT。 |
| `FPGA_design/src/TOP/TOP_integration.v` | 67-88 | `IP_ifmap_BRAM` 與 `ifmap_BRAM_wr_in` / `ifmap_BRAM_dina_in` 接線。 |
| `FPGA_design/src/TOP/TOP_interface.v` | 71-76 | `ROM_sparse_weight ROM_weight_inst`，TOP 從這裡讀 sparse weight。 |
| `FPGA_design/src/TOP/TOP_interface.v` | 98-106 | `MEM_read_addr < 784` 時讀 DRAM/iact，`>= 784` 時讀 ROM/weight。 |
| `FPGA_design/sim/verilator/bram_behavioral.v` | 240-248 | `ROM_sparse_weight` module 宣告與 `$readmemh("rom_sparse_weight.mem", mem)`。 |

如果要改成吃別的 iact / golden，不需要改 RTL，可以直接覆蓋 Makefile 變數：

```bash
make sim ITERS=5 \
  DRAM=../../test/tb/TOP_test/MEM/Test/DRAM_INT4.txt \
  GOLDEN=../../test/tb/TOP_test/MEM/Test/GOLDEN_INT4.txt
```

如果要改 weight，重點不是 `DRAM`，而是要改 `COE_FILE` 指到的 sparse weight COE，或修改 Makefile 讓它從新的 COE/MEM 產生 `rom_sparse_weight.mem`。

## INT4-as-INT8 container 初版實驗

目前已在 `BOYU_INT4` branch 建立第一版 INT4 sparse weight 實驗，但這版不是從真正的 INT4 QAT checkpoint 匯出，原因是目前 repo 內沒有明確的 `best_lenet_int4_qat.pth`，且目前 Windows Python 環境沒有 `torch` 可以重新載入 QAT model。

目前 INT4 來源：

```text
FPGA_design/Vivado/PYNQ_Z2/PYNQ_Z2.ip_user_files/mem_init_files/ROM_sparse_COE.coe
```

產生方式：

```text
原本 sparse INT8 COE
  -> 只轉換 data/count segment
  -> signed INT8 weight 重新量化到 signed INT4 [-8, 7]
  -> INT4 bit[3] 作為 sign bit
  -> sign-extend 回原本 8-bit weight container
  -> 保留原本 CSC addr/count stream 與一筆 addr 對一筆 data 的格式
```

新增工具：

```text
FPGA_design/tools/make_int4_as_int8_sparse_rom.py
```

產生的 COE：

```text
FPGA_design/test/tb/TOP_test/MEM/int4_as_int8/ROM_sparse_INT4_AS_INT8.coe
```

使用方式：

```bash
cd FPGA_design/sim/verilator
make clean
make sim ITERS=5 \
  COE_FILE=../../test/tb/TOP_test/MEM/int4_as_int8/ROM_sparse_INT4_AS_INT8.coe
```

測試結果：

```text
Iter 0: result=15 golden=5 TIMEOUT
Iter 1: result=15 golden=0 TIMEOUT
Iter 2: result=15 golden=4 TIMEOUT
Iter 3: result=15 golden=1 TIMEOUT
Iter 4: result=15 golden=9 TIMEOUT

=== Summary: 0/5 passed (0%) ===
```

判斷：

- Makefile / baseline RTL 沒壞，因為同一個 branch 用原本 `ROM_sparse_COE.coe` 跑 `make sim ITERS=5` 仍是 `5/5 passed`。
- 目前 INT4-as-INT8 COE 只證明「可以產生格式相同的 INT4 container COE」，但不能作為可用 INT4 accuracy 結果。
- 真正要提高 INT4 準確率，下一步應從 INT4 QAT 權重 checkpoint 匯出 sparse ROM，而不是從既有 INT8 sparse ROM 重新壓到 INT4。
- 若要確認 `result=15` 是 final output invalid 還是 `final_out_valid` 沒發生，需要再用 `make trace` 或 public signal debug，但這會花較多時間。

## BOYU_INT4 最新結果：重新 CSC 產生 INT4 ROM

這次已經改成從現有 dense INT8 權重文字檔重新跑 CSC encoder，而不是直接後處理舊的 sparse COE。

來源：
```text
FPGA_design/SW/layer2/kernel1.txt
FPGA_design/SW/layer2/kernel2.txt
FPGA_design/SW/layer2/kernel3.txt
FPGA_design/SW/layer2/kernel4.txt
FPGA_design/SW/layer2/kernel5.txt
```

工具：
```text
FPGA_design/tools/generate_int4_as_int8_sparse_rom_from_txt.py
```

先做過 sanity check：

- `--quant none` 會重生原本 INT8 sparse ROM。
- 重生結果為 `33722` words。
- boundary 為 `7,97,151,760,814,1351,9511,25090,27736,32974,33238,33722`。
- 用重生 INT8 COE 跑 `make sim ITERS=5`，結果仍是 `5/5 passed`。

因此目前可以確認新的 generator 產生的 CSC 排列格式是正確的。

### 純 INT4 sign-extend 測試

產生方式：
```bash
python FPGA_design/tools/generate_int4_as_int8_sparse_rom_from_txt.py \
  --quant int4 \
  --threshold 0 \
  --container-scale 1 \
  --output-txt FPGA_design/test/tb/TOP_test/MEM/int4_as_int8_regen/ROM_sparse_INT4_SIGNEXT_AS_INT8.txt \
  --output-coe FPGA_design/test/tb/TOP_test/MEM/int4_as_int8_regen/ROM_sparse_INT4_SIGNEXT_AS_INT8.coe
```

意義：

- 先把 INT8 權重量化成 signed INT4 `[-8, 7]`。
- INT4 sign bit 是 bit[3]。
- 再 sign-extend 成目前 RTL 可吃的 signed 8-bit container。
- 重新產生 CSC addr / data_count stream。

結果：

```text
words=51263
boundaries=7,149,203,1300,1354,2428,10588,38449,41095,50204,50468,51263

make sim ITERS=5 INT4_REGEN=1
=== Summary: 0/5 passed (0%) ===
全部 TIMEOUT
```

判斷：這是初版純 sign-extend 測試，當時仍使用一般 INT8 requantizer slice，因此前 5 筆 timeout。後續已改成在 `INT4_REGEN=1` 時測試 INT4 專用 requantizer bit slice，詳見下面的 `[14:7]` 測試。

### INT4 code decode 回 INT8 scale 測試

產生方式：
```bash
python FPGA_design/tools/generate_int4_as_int8_sparse_rom_from_txt.py \
  --quant int4 \
  --threshold 0 \
  --container-scale 16 \
  --output-txt FPGA_design/test/tb/TOP_test/MEM/int4_as_int8_regen/ROM_sparse_INT4_SCALED_AS_INT8.txt \
  --output-coe FPGA_design/test/tb/TOP_test/MEM/int4_as_int8_regen/ROM_sparse_INT4_SCALED_AS_INT8.coe
```

意義：

- INT4 code 仍然是 signed INT4 `[-8, 7]`。
- 但存進目前 8-bit RTL container 前，先 decode 成 `q4 * 16`。
- 這不是純 INT4 sign-extend 硬體版本，而是用來驗證目前 timeout 是否主要來自數值尺度。

當時 Makefile 設定：

- `make sim`：仍吃原本 INT8 COE。
- `make sim INT4_REGEN=1`：當時吃 `ROM_sparse_INT4_SCALED_AS_INT8.coe`，啟用 `INT4_AS_INT8_REGEN` boundary，並使用獨立 `obj_dir_int4`，避免和一般 INT8 simulation build 混在一起。

目前 Makefile 已改成預設吃純 sign-extend ROM：`ROM_sparse_INT4_SIGNEXT_AS_INT8.coe`，並透過 `INT4_REQUANT` 選擇 requantizer bit slice。

測試結果：
```text
make sim ITERS=5 INT4_REGEN=1

Iter 0: result=0 golden=5 FAIL
Iter 1: result=0 golden=0 OK
Iter 2: result=4 golden=4 OK
Iter 3: result=1 golden=1 OK
Iter 4: result=9 golden=9 OK

=== Summary: 4/5 passed (80%) ===
```

當時結論：

- CSC generator 格式正確，因為 INT8 regen 可 5/5 通過。
- 初版純 INT4 sign-extend 搭配一般 INT8 requantizer 會 timeout，主要問題不是 sparse ROM 排列，而是 requantizer 尺度。
- `q4 * 16` 版本可跑完且前 5 筆 4/5 正確，表示數值尺度會直接影響 final result。
- 後續改成純 INT4 sign-extend ROM 搭配 `INT4_REQUANT=14_7` 後，前 5 筆可 5/5 通過。

### INT4 sign-extend + requantizer bit-slice sweep

後續改成保留純 INT4 sign-extend ROM，並只在 `INT4_REGEN=1` 時調整 `Psum_Requantizer.v` 的輸出 bit slice。

一般 INT8 模式仍維持：

```verilog
assign data_out = data_in[17:10];
```

INT4 模式測試以下四組：

| INT4_REQUANT | Requantizer bit slice | `make sim ITERS=5 INT4_REGEN=1` 結果 |
|---|---:|---|
| `16_9` | `[16:9]` | `0/5`，後 4 筆 timeout |
| `15_8` | `[15:8]` | `1/5`，可跑完但多數輸出 0 |
| `14_7` | `[14:7]` | `5/5`，全部通過 |
| `13_6` | `[13:6]` | `4/5`，可跑完 |

目前 Makefile 預設：

```make
INT4_REQUANT ?= 14_7
```

也就是直接執行：

```bash
cd FPGA_design/sim/verilator
make clean
make sim ITERS=5 INT4_REGEN=1
```

會使用純 INT4 sign-extend ROM 搭配 `Psum_Requantizer.v` 的 `[14:7]` bit slice。這裡的 `[14:7]` 是目前預設設定，使用的是「純 INT4 sign-extend」版本，不是 `q4 * 16` scaled 版本。

資料來源與格式：

- 原始權重來源：`FPGA_design/SW/layer2/kernel1.txt` 到 `kernel5.txt` 的既有 INT8 dense weight。
- 產生方式：先把 INT8 權重量化到 signed INT4 範圍 `[-8, 7]`。
- INT4 sign bit：使用 INT4 的第 3 bit，也就是 4-bit two's complement 的最高位。
- RTL container：再把 signed INT4 sign-extend 回原本 RTL 能吃的 signed 8-bit 權重欄位。
- CSC 格式：維持原本「一筆 address 對一筆 data」的 sparse stream 格式。
- ROM 檔案：`FPGA_design/test/tb/TOP_test/MEM/int4_as_int8_regen/ROM_sparse_INT4_SIGNEXT_AS_INT8.coe`。
- Requantizer：`INT4_REGEN=1 INT4_REQUANT=14_7` 會讓 `Psum_Requantizer.v` 使用 `data_in[14:7]`。

已完成的 5 筆測試結果：

```text
Iter 0: result=5 golden=5 OK
Iter 1: result=0 golden=0 OK
Iter 2: result=4 golden=4 OK
Iter 3: result=1 golden=1 OK
Iter 4: result=9 golden=9 OK

=== Summary: 5/5 passed (100%) ===
```

若要測 `[14:7]` 的 100 筆與 1000 筆，建議在 WSL 或 Docker bash 裡執行：

```bash
cd FPGA_design/sim/verilator
make clean
set -o pipefail
make sim ITERS=100 INT4_REGEN=1 INT4_REQUANT=14_7 2>&1 | tee int4_signext_14_7_100.log
```

```bash
cd FPGA_design/sim/verilator
make clean
set -o pipefail
make sim ITERS=1000 INT4_REGEN=1 INT4_REQUANT=14_7 2>&1 | tee int4_signext_14_7_1000.log
```

`tee` 會把完整 log 存下來給組員看；`set -o pipefail` 會保留 `make sim` 的失敗狀態，避免因為接了 pipe 後看起來像成功。

1000 筆測試結果：

```text
make sim ITERS=1000 INT4_REGEN=1 INT4_REQUANT=14_7

Iter 224: result=7 golden=1 (126342 cycles) FAIL
Iter 418: result=5 golden=8 (119503 cycles) FAIL

=== Summary: 998/1000 passed (99.8%) ===
make: *** [Makefile:109: sim] Error 1
```

`make` 回傳 `Error 1` 是因為 1000 筆中仍有 2 筆分類錯誤，不是 Verilator build 或 simulation timeout。這代表目前純 INT4 sign-extend ROM 搭配 `[14:7]` requantizer 已經可以完整跑完 1000 筆，但仍不是完全 bit-accurate。

## Vivado baseline utilization

既有 Vivado implementation baseline：

```text
Slice LUTs       39537 / 53200  = 74.32%
Slice Registers  51828 / 106400 = 48.71%
BRAM             134.5 / 140    = 96.07%
DSP              0 / 220        = 0.00%
```

目前判斷：

- BRAM 使用率最高，已接近 PYNQ-Z2 上限，是最主要的 FPGA 資源瓶頸。
- LUT 使用率也偏高，但還沒有像 BRAM 一樣接近滿載。
- DSP 使用量為 0，代表 PE MAC 乘法可能被映射到 LUT，後續可嘗試讓 Vivado 使用 DSP。
- 既有 timing report 顯示 timing 已通過，因此不應該在沒有 critical path 證據前先改 pipeline 或 controller cycle timing。

## 已完成的 BOYU_ShunWei 修改

### 1. Verilator build flow 拆分 trace / no-trace

原本 `make sim` 也會用 `--trace` 編譯，導致一般 simulation build 較慢。現在改成：

- `make sim`：不開 VCD trace，使用 `obj_dir`。
- `make trace`：開 VCD trace，使用 `obj_dir_trace`。
- `make trace_public`：開 trace 與 `--public-flat-rw`，使用獨立 build directory。

這只影響 simulation build time，不影響 FPGA RTL 面積或 timing。

### 2. 低風險 RTL area / timing cleanup

在沒有 Vivado report 的情況下，只做功能等價且風險較低的 RTL 修改：

- `Processing_Element_core.v`
  - 保留 PE MAC 的 `(* use_dsp = "yes" *)` DSP mapping hint。
  - 將 psum write index 中的常數乘法 `*4` 改成 shift/concat。
- `PE_data_FIFO.v`
  - 對 4-depth 小 buffer 加上 `(* ram_style = "distributed" *)`。
- `PE_psum_FIFO.v`
  - 對 4-depth 小 buffer 加上 `(* ram_style = "distributed" *)`。
- `Iact_Router.v`
  - 共用 `data_in_sel` / `data_out_sel` decode wire。
  - 將 output valid 的重複 case block 改成等價 continuous assignment。
- `TOP_controller.v`
  - 只簡化兩邊結果完全相同的 ternary expression。
- `Weight_Router.v`
  - 將 `data_in_sel` / `data_out_sel` 先 decode 成共用 wire，避免同一個 select 在多處重複比較。
- `Psum_Router.v`
  - 將 `data_in_sel` / `data_out_sel` 先 decode 成共用 wire。
  - 修正 `internal_data` 宣告為 `signed [20:0]`，避免 21-bit psum data 被隱含截成 1-bit wire。
- `TOP_controller.v`
  - 將多處重複的 `(read_out_psum_iter + 1) * psum_depth` 抽成共用 wire。
  - 將 `psum_read_out_channel * 144` 改成 shift/add 形式。

這些修改不改 BRAM depth、不改 bank count、不改 TOP controller 排程、不改 ready/valid protocol。

較長 regression：

```text
make sim ITERS=20
=== Summary: 20/20 passed (100%) ===
```

### 2.1 修改原因與行號對照

以下行號以目前 `BOYU_ShunWei` branch 的檔案內容為準。這些修改的共同原則是：先做不改功能、不改資料流排程、不改 BRAM bank/depth 的低風險整理，讓一般 simulation 更快，並讓未來 Vivado synthesis 比較有機會壓 LUT、routing depth 或 control logic。

#### Verilator build flow 拆分 trace / no-trace

為什麼要改：

- 原本 `make sim` 也會用 `--trace` 編譯，Verilator 需要產生 VCD trace 相關 C++ code，build time 會明顯變長。
- 一般功能驗證不需要波形，所以 `make sim` 應該保持 trace-free。
- 需要看波形時才用 `make trace`；需要用 public signal debug 時才用 `make trace_public`。
- 這只影響 Verilator build/run flow，不會改 FPGA RTL 面積或 timing。

修改位置：

| 檔案 | 行號 | 內容 |
|---|---:|---|
| `FPGA_design/sim/verilator/Makefile` | 24-35 | 新增 `TRACE`、`TRACE_FLAG`，並讓 `BUILD_DIR` 依 `TRACE` / `PUBLIC_FLAT_RW` / `OCC` 分開。 |
| `FPGA_design/sim/verilator/Makefile` | 64-65 | Verilator command 只在需要時加入 `--trace` 與 `--public-flat-rw`。 |
| `FPGA_design/sim/verilator/Makefile` | 107-115 | `make trace` / `make trace_public` 改成獨立 trace build flow。 |
| `FPGA_design/sim/verilator/Makefile` | 118 | `make clean` 同時清掉不同 build mode 的 output directory。 |
| `FPGA_design/sim/verilator/sim_main.cpp` | 18, 34, 41, 48, 122-129, 188 | 用 `#if VM_TRACE` 包住 VCD trace code，避免 no-trace binary 編譯不必要的 trace 支援。 |

#### PE MAC / arithmetic path

為什麼要改：

- PE 的乘加路徑通常是 timing 與 LUT 使用量的候選熱點。
- `(* use_dsp = "yes" *)` 是 synthesis hint，目標是讓乘法器優先 mapping 到 DSP，降低 LUT 壓力。
- `*4` 屬於固定倍率 index 計算，用 shift/concat 表達比乘法器語意更直接，也比較不容易被工具保留成多餘算術邏輯。
- 沒有 Vivado timing report 前，不改 MAC pipeline，避免改 cycle timing。

修改位置：

| 檔案 | 行號 | 內容 |
|---|---:|---|
| `FPGA_design/src/PE_Cluster/PE/Processing_Element_core.v` | 237 | 保留 PE MAC 的 `(* use_dsp = "yes" *)` DSP mapping hint。 |
| `FPGA_design/src/PE_Cluster/PE/Processing_Element_core.v` | 241-243 | 先用 `{former_matrix_col_minus_one_wire[2:0], 2'b00}` 產生等價於 `*4` 的 base，再加上 `later_matrix_row_wire[2:0]`。第 243 行本身是最後加法，shift/concat 在第 242 行。 |
| `FPGA_design/src/PE_Cluster/PE/Processing_Element_core.v` | 284 | `Psum_Spad_write_idx` 繼續使用整理後的 `psum_write_idx_wire`，不改寫入時序。 |

#### 小 FIFO / buffer inference

為什麼要改：

- 4-depth FIFO 很小，若被合成成大量 FF/LUT，可能增加 slice 使用。
- 加上 `ram_style = "distributed"` hint，讓工具優先用 distributed RAM / SRL 類資源處理小 buffer。
- 這不改主要 BRAM，不改 FIFO depth，也不改 ready/valid protocol。

修改位置：

| 檔案 | 行號 | 內容 |
|---|---:|---|
| `FPGA_design/src/PE_Cluster/PE/PE_data_FIFO.v` | 32 | 對 `buffer` 加上 `(* ram_style = "distributed" *)`。 |
| `FPGA_design/src/PE_Cluster/PE/PE_psum_FIFO.v` | 32 | 對 psum FIFO `buffer` 加上 `(* ram_style = "distributed" *)`。 |

#### Router mux cleanup

為什麼要改：

- Router 裡的 `data_in_sel` / `data_out_sel` 會在多個 mux、valid、ready 判斷中重複比較，可能增加 LUT 與 mux depth。
- 先 decode 成共用 wire，可以減少重複 comparator，讓 synthesis 更容易共用條件。
- 只整理等價組合邏輯，不改資料路徑寬度、方向或 ready/valid 行為。

修改位置：

| 檔案 | 行號 | 內容 |
|---|---:|---|
| `FPGA_design/src/Router_Cluster/Iact_Router.v` | 113-120 | 新增 `route_*` 與 `select_*` decode wire，共用 `data_in_sel` / `data_out_sel` 判斷。 |
| `FPGA_design/src/Router_Cluster/Iact_Router.v` | 128-159 | ready / valid output 改用共用 decode wire 與 continuous assignment。 |
| `FPGA_design/src/Router_Cluster/Weight_Router.v` | 73-83 | 新增 `select_horiz_in_wire`、`route_hor_cast_wire`，共用 input/output select 判斷。 |
| `FPGA_design/src/Router_Cluster/Weight_Router.v` | 90-106 | ready / valid / data assignment 改用共用 decode wire。 |
| `FPGA_design/src/Router_Cluster/Psum_Router.v` | 71-76 | 新增 `select_from_glb_wire`、`select_to_pe_wire`，並修正 `internal_data` 為 `signed [20:0]`。 |
| `FPGA_design/src/Router_Cluster/Psum_Router.v` | 91, 94 | output data 繼續接整理後的 21-bit `internal_data`，避免 psum 被隱含截成 1-bit。 |

#### TOP_controller arithmetic / duplicate logic cleanup

為什麼要改：

- `TOP_controller.v` 很大，重複 comparator、重複乘法與結果相同的 ternary 會增加組合邏輯。
- 把重複算式抽成 wire，可讓 synthesis 共用邏輯，也讓 RTL 更容易 review。
- `psum_read_out_channel * 144` 改成 `*128 + *16` 的 shift/add 形式，避免固定倍率乘法語意。
- 只整理等價 expression，不改 state transition、address schedule、`csc_en` / `csc_en_fin` 時序。

修改位置：

| 檔案 | 行號 | 內容 |
|---|---:|---|
| `FPGA_design/src/TOP/TOP_controller.v` | 916 | 新增 `read_out_psum_iter_next_base`，共用 `(read_out_psum_iter + 1) * psum_depth`。 |
| `FPGA_design/src/TOP/TOP_controller.v` | 917-918 | 新增 `psum_read_out_channel_x144`，用 shift/add 表達 `psum_read_out_channel * 144`。 |
| `FPGA_design/src/TOP/TOP_controller.v` | 945-948 | 簡化兩邊結果完全相同的 psum source ternary，只保留真正會變的條件。 |
| `FPGA_design/src/TOP/TOP_controller.v` | 1168-1546 | 多處 GLB psum read address base 改用共用 `read_out_psum_iter_next_base`。 |
| `FPGA_design/src/TOP/TOP_controller.v` | 1953 | `psum_rearrange_read_addr` 改用 `psum_read_out_channel_x144`。 |

#### 功能驗證

修改後已做較長 Verilator regression：

```text
make sim ITERS=20
=== Summary: 20/20 passed (100%) ===
```

這代表目前已測 pattern 的 RTL output 沒有因上述 cleanup 改變。不過實際 FPGA area / timing 是否改善，仍需 Vivado utilization / timing report 驗證。

### 3. Verilator-only BRAM occupancy 統計

新增 Verilator-only occupancy counter，用來觀察 simulation 中各類 BRAM 實際最高寫入 address。這是未來安全縮 SRAM depth 前的依據。

使用方式：

```bash
cd FPGA_design/sim/verilator
make clean
make sim ITERS=1 OCC=1 > occ_iter1.log 2>&1
python3 summarize_occ.py occ_iter1.log
```

範例摘要：

```text
kind,instances,total_writes,max_write_addr,depth,used_percent,width
GLB Iact addr SRAM,36,18066,314,512,61.52%,7
GLB Iact data SRAM,36,35432,815,2048,39.84%,12
GLB Psum SRAM,12,6720,287,512,56.25%,21
PE Iact data SPad,36,15120,127,256,50.00%,13
PE Psum SPad,36,1614936,31,32,100.00%,21
PE Weight data SPad,36,45787,99,128,78.12%,12
TOP Psum_Rearrange,1,10696,4095,4096,100.00%,8
TOP ifmap BRAM,1,784,783,1024,76.56%,8
```

注意：occupancy 只代表跑過的 pattern，不代表所有資料與所有 layer 都安全。要縮 BRAM depth 前，必須用更多 patterns / layers 驗證。

## Vivado report flow

目前本機沒有 Vivado，因此不能直接重新跑 FPGA implementation。已新增 Tcl script，供有 Vivado 的環境使用：

```bash
vivado -mode batch -source FPGA_design/Vivado/PYNQ_Z2/run_boyu_reports.tcl
```

輸出位置：

```text
FPGA_design/Vivado/PYNQ_Z2/reports_boyu_shunwei/
```

會產生：

```text
utilization_flat.rpt
utilization_hierarchical.rpt
timing_summary.rpt
control_sets.rpt
qor_suggestions.rpt
```

使用建議：

- 用 `utilization_hierarchical.rpt` 確認 BRAM 主要消耗在 PE SPad、GLB SRAM，還是 ROM / memory init。
- 用 `timing_summary.rpt` 確認 critical path，再決定是否改 router mux、PE MAC、controller fanout 或 pipeline。
- 不要在沒有 occupancy 與 utilization hierarchy 的情況下直接縮 BRAM depth 或 bank count。

## 後續優化建議

### BRAM

優先順序：

1. 先取得最新 Vivado hierarchical utilization。
2. 用 Verilator occupancy counter 跑更多 patterns。
3. 確認每個 SRAM / SPad 的最大使用深度。
4. 先做 depth 參數化，再逐步縮 depth。
5. 最後才考慮減 bank count。

不建議一開始就減 bank count，因為這會改變 bandwidth、ready/valid timing 與 controller scheduling。

### Area

可優先檢查：

- PE MAC 是否成功 mapping 到 DSP。
- 常數乘法是否已被簡化成 shift/add。
- 小型 FIFO / buffer 是否可用 distributed RAM 或 SRL。
- Router mux 是否可用 one-hot select 或預解碼降低 mux depth。

### Timing

沒有 Vivado timing report 前，不建議猜 critical path。若未來 report 顯示：

- critical path 在 PE MAC：檢查 DSP mapping 或 pipeline。
- critical path 在 router mux：整理 `Iact_Router` / `Weight_Router` / `Psum_Router` mux。
- critical path 在 control fanout：考慮 local register / buffer。
- critical path 在 `clock_gen`：不需要動 accelerator datapath。

## 系統架構總覽

核心控制模組是 `TOP_controller.v`，針對 LeNet-5 寫死 per-layer FSM。它負責控制 `Cluster_Group`、GLB、PE、Router、im2col、CSC encoder、requantizer、pooling 與 softmax。

```text
TOP_integration_{uart,rom}.v
        |
TOP_interface.v + ROM_sparse_weight
        |
        +-------------------------------+
        |                               |
      TOP.v                       TOP_controller.v
        |
        +-------------+-----------------+----------------+
                      |                                  |
              Cluster_Group                         post-process
              2x2 cluster array                     Quantizer / ReLU
                      |                              Softmax / Pooling
        +-------------+-------------+
        |             |             |
   PE_Cluster    GLB_Cluster   Router_Cluster
   3x3 PEs       iact/psum     iact/weight/psum
                 SRAM banks    routers
```

主要模組：

| 區塊 | 模組 | 功能 |
|---|---|---|
| Top control | `TOP/TOP_controller.v` | LeNet-5 per-layer scheduling FSM |
| Datapath top | `TOP/TOP.v`, `TOP/TOP_interface.v` | 串接 controller、fabric、I/O |
| Compute fabric | `Cluster_Group/*` | 2x2 cluster array |
| PE | `PE_Cluster/PE/*` | MAC datapath、SPad、PE FSM |
| GLB | `GLB_Cluster/*` | iact / psum SRAM banks |
| Router | `Router_Cluster/*` | iact、weight、psum routing |
| Data prep | `im2col_converter/*`, `CSC_encoder/*` | im2col reshape 與 CSC 壓縮 |
| Post-process | `Quantizer/*`, `Activation/*`, `Pooling/*` | requantize、ReLU、Softmax、Max pooling |

## FPGA design overview

此 repository 提供的是 FPGA prototype。ASIC 設計概念相近，但架構細節不同，且不在此專案開源。

FPGA prototype 的限制：

- 沒有 ASIC 版本中的 NoC systolic array。
- PE 沒有 ASIC 版本中的 pipeline。
- Top controller 目前針對 LeNet-5 寫死，若要跑其他模型，需要修改 controller 或增加 software driver。
- Array size 可以手動修改，但原始設計沒有完整參數化自動調整功能。

## 已知限制

CSC implementation 支援第一欄與最後一欄為 0 的矩陣，但不支援連續兩欄全 0 的情況。原始做法會在第二個 zero column 的最後補 `1` 避免錯誤。

## TODO

- 開發 software driver，讓 PS / PL 之間能更彈性地分配資料與控制推論流程。
- 修正 CSC implementation 對連續 zero columns 的限制。
- 將 array size 參數化，降低修改不同模型或不同硬體規模時的維護成本。
- 用最新 Vivado report 驗證 `BOYU_ShunWei` 的 DSP / LUT / BRAM / timing 改善。

## 架構說明

### Top-Level Architecture

![Top Level Architecture](picture/top_level_architecture.png)

原始設計概念是 8x2 cluster array；在 PYNQ-Z2 FPGA 上因資源限制縮小為 2x2 cluster array。每個 cluster 內包含 PE cluster、GLB cluster 與 router cluster。

資料進入 accelerator 後，im2col converter 會將 ifmap 重排成適合 GEMM 的矩陣，再由 CSC encoder 壓縮後存入 GLB。運算完成後，psum 會經過 requantizer、activation、pooling 或 softmax。

### Global Buffer

![Global Buffer Architecture](picture/GLB_architecture.png)

GLB 是外部 DRAM 與 compute fabric 之間的橋接。GLB 內含 iact SRAM banks 與 psum SRAM banks。由於 iact 使用 CSC 壓縮，iact SRAM 會分成 address 與 data count 兩類記憶體，並搭配 LUT / RF 記錄 stream boundary。

### Router

![Router Architecture](picture/router_architecture.png)

Router cluster 參考 Eyeriss v2 的 HM-NoC 概念，包含 iact router、weight router 與 psum router。Router 透過 `data_in_sel` 與 `data_out_sel` 控制資料來源與輸出方向，使用 valid / ready handshake 保持資料傳輸正確。

### PE

![PE Architecture](picture/PE_architecture.png)

每個 PE 包含 address SPad、data SPad、weight SPad、psum SPad 與 MAC datapath。PE 使用 CSC 格式解碼 iact / weight，完成乘加後寫回 psum SPad，或透過 psum path 傳到其他 PE / GLB。

![CSC format](picture/CSC_format.png)

### PE Cluster

![PE Cluster](picture/PE_cluster.png)

PE cluster 是 3x3 PE array。卷積層中，weight 沿 row reuse，iact 沿 column 分配；fully connected layer 中，iact / weight 的進入方向會交換，以符合 FC 的資料流。

### Data Flow

![Data Flow Design](picture/data_flow.png)

本設計結合 im2col、GEMM 與 CSC compression。im2col 提供規則矩陣乘法形狀，CSC 壓縮降低 zero data 的儲存與傳輸成本。資料流混合 weight stationary、input stationary 與 output stationary 的概念，以提高 reuse。

### Scheduling

![Data Scheduling](picture/data_scheduling.png)

系統在 load、compress、compute、psum accumulate、read out、pooling 等階段之間進行 scheduling。由於 im2col 與 CSC encoder 會引入額外 cycle，因此 controller 需要安排各 layer 的資料載入與運算時序。

## FPGA 驗證

![Vivado Report](picture/vivado_report.png)

原始專案曾在 PYNQ-Z2 上完成 FPGA implementation，並透過 UART / GPIO 類似流程進行手寫數字辨識 demo。

![FPGA Demo](picture/FPGA_demo.png)

## 結論

本專案展示了一個以 Eyeriss v2 為基礎、支援 sparse convolution 與 LeNet-5 推論的 FPGA prototype。後續工作重點是降低 BRAM 使用量、改善 LUT/DSP mapping、整理 controller 與 router timing，並用 Vivado report 驗證每一次硬體優化是否有效。

## References

- Chen, Y.-H., Emer, J., & Sze, V. (2019). Eyeriss v2: A Flexible Accelerator for Emerging Deep Neural Networks on Mobile Devices. IEEE Journal on Emerging and Selected Topics in Circuits and Systems, 9(2), 292-308.
