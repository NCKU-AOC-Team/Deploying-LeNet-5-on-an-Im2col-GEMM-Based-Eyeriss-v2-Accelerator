# 稀疏 CNN 加速器 FPGA 專案整理

本專案以 Eyeriss v2 類似架構為基礎，實作適合 LeNet-5 推論的稀疏 CNN FPGA accelerator。主要設計包含 `im2col`、GEMM、CSC sparse stream、Router、GLB/PE local storage、ReLU/Softmax、Psum requantizer，以及 TOP controller 排程。

目前這份 README 以 BOYU 分支整理為主，讓組員能快速知道：

1. 原版 RTL / Verilator 到底吃哪些資料。
2. INT8、INT4-as-INT8、真正 INT4 hardware 分別做到哪裡。
3. 每個 BOYU branch 的改動和目前驗證結果。

## Repository 結構

| 路徑 | 內容 |
| --- | --- |
| `FPGA_design/src/` | Verilog RTL，包含 TOP、GLB、Router、Cluster Group、PE、Spad、Pooling、Quantizer。 |
| `FPGA_design/sim/verilator/` | Verilator simulation flow，包含 `Makefile`、`sim_main.cpp`、behavioral BRAM model。 |
| `FPGA_design/test/tb/TOP_test/` | TOP-level 測試資料、DRAM、golden label、layer data、ROM/COE。 |
| `FPGA_design/tools/` | BOYU 分支新增的 INT4 / sparse ROM generator。 |
| `FPGA_design/Vivado/NCKU_AOC_Team/` | **★ FPGA 重現 / 燒板看這裡。** 含建好的 bitstream、建專案腳本與重現指南。 |
| `FPGA_design/Vivado/PYNQ_Z2/` | 原作者 legacy Vivado 專案(flat 結構,**勿用於重現**,詳見該資料夾 README)。 |
| `docs/` | 架構、controller FSM、module reference 等文件。 |
| `host_demo/` | Host demo 程式。 |

原始 demo 影片：[YouTube](https://www.youtube.com/watch?v=wLz8Di9vdas&ab_channel=BOCHUNChen)

## FPGA 板上重現 / 燒板

要把設計燒到 PYNQ-Z2 驗證,請看 **[`FPGA_design/Vivado/NCKU_AOC_Team/README.md`](FPGA_design/Vivado/NCKU_AOC_Team/README.md)**。
該指南提供兩條路徑:

- **快速(推薦驗收)**：直接燒已附的 bitstream `build/eyeriss_develop.runs/impl_1/TOP_integration_uart.bit`,免重跑合成、與 Vivado 版本無關。
- **完整重建**：用 `setup_project.tcl` 依 develop 現況重建專案後跑 synth/impl/bitstream(專案為 Vivado 2019.1,`xc7z020clg400`)。

## 原版 Verilator Flow 吃的資料

Verilator 入口在：

```bash
cd FPGA_design/sim/verilator
make sim ITERS=5
```

等價於執行：

```bash
./obj_dir/VTOP_integration \
  --iters 5 \
  --start 0 \
  --dram ../../test/tb/TOP_test/MEM/DRAM.txt \
  --golden ../../test/tb/TOP_test/MEM/GOLDEN.txt
```

### 原版資料來源

| 類型 | 預設檔案 / module | 用途 |
| --- | --- | --- |
| Verilator harness | `FPGA_design/sim/verilator/sim_main.cpp` | C++ test harness，負責 reset、餵 ifmap、讀 result、比對 golden。 |
| RTL top | `FPGA_design/src/TOP/TOP_integration.v` | Verilator top module，Makefile 使用 `--top-module TOP_integration`。 |
| Behavioral BRAM | `FPGA_design/sim/verilator/bram_behavioral.v` | 取代 Vivado Block Memory Generator，讓 RTL 能在 Verilator 跑。 |
| Iact / input image | `FPGA_design/test/tb/TOP_test/MEM/DRAM.txt` | 每筆 pattern 讀 784 bytes，透過 `ifmap_BRAM_wr_in` / `ifmap_BRAM_dina_in` 餵入 ifmap BRAM。 |
| Golden label | `FPGA_design/test/tb/TOP_test/MEM/GOLDEN.txt` | 每筆 pattern 的 expected class label，用來比對 `dut->result`。 |
| Weight COE source | `FPGA_design/test/tb/TOP_test/MEM/high_sparsity/ROM_sparse_COE.coe` | 原版 sparse weight ROM 來源(Makefile 預設 `COE_FILE`;與 IP `.xci` 引用同一份)。 |
| Weight runtime mem | `FPGA_design/sim/verilator/rom_sparse_weight.mem` | Makefile 由 COE 轉出的 Verilator `$readmemh` 檔案，`make clean` 會刪掉後重建。 |
| Weight ROM module | `ROM_sparse_weight` in `bram_behavioral.v` | Verilator 用的 sparse weight ROM，接到 `TOP_interface.v` 的 `ROM_weight_inst`。 |

### TOP_interface 的資料切換

| 條件 | 讀取來源 | 說明 |
| --- | --- | --- |
| `MEM_read_addr < 784` | DRAM / ifmap | 讀 input activation。 |
| `MEM_read_addr >= 784` | ROM_sparse_weight | 讀 sparse weight stream。 |

所以：

- 換 input image / golden：改 `DRAM=...` 和 `GOLDEN=...`。
- 換 weight：改 `COE_FILE=...`，Makefile 會重新產生 `rom_sparse_weight.mem`。

範例：

```bash
make sim ITERS=5 \
  DRAM=../../test/tb/TOP_test/MEM/Test/DRAM_INT4.txt \
  GOLDEN=../../test/tb/TOP_test/MEM/Test/GOLDEN_INT4.txt
```

```bash
make sim ITERS=5 \
  COE_FILE=../../test/tb/TOP_test/MEM/int4_as_int8_regen/ROM_sparse_INT4_SIGNEXT_AS_INT8.coe
```

## Sparse Weight / CSC 格式

原版 ROM 不是單純 dense weight array，而是 CSC sparse stream。概念上是一串 address / data-count / data 相關資訊，controller 依照 boundary 與 counter 去讀。

| 格式 | 內容 |
| --- | --- |
| INT8 sparse container | 原版 RTL 預期 weight data 是 signed 8-bit，並搭配 count/address stream。 |
| INT4 sign-extend as INT8 | 先把 INT8 權重量化成 signed INT4 `[-8, 7]`，INT4 bit[3] 是 sign bit，再 sign-extend 回 signed 8-bit container。CSC stream 形狀盡量維持原版一筆 addr 對一筆 data。 |
| INT4 scaled as INT8 | 把 signed INT4 code decode 後乘 scale，例如 `q4 * 16`，再放回 8-bit container。這比較像調整數值尺度，不是真正省 storage。 |
| INT4 packed single-lane | ROM data 低 4 bit 放 INT4 weight，進 RTL weight path 前 sign-extend 給原本 PE 使用。 |
| INT4x2 storage-only | Spad 內部格式先能放兩個 INT4 lane，但目前 PE core 仍只讀 lane0。 |

目前已知：

- `INT4_REQUANT=14_7` 是目前 INT4 sign-extend flow 最穩定的 requantizer slice。
- `make sim ITERS=1000 INT4_REGEN=1 INT4_REQUANT=14_7` 曾跑到 `998/1000 passed (99.8%)`。
- 錯誤筆數：`Iter 224`、`Iter 418`。

## 常用 Verilator 指令

| 目的 | 指令 |
| --- | --- |
| 原版 INT8 baseline | `make clean && make sim ITERS=5` |
| 指定從第 N 筆開始 | `make trace START=32` |
| INT4 sign-extend + `[14:7]` requant | `make clean && make sim ITERS=5 INT4_REGEN=1 INT4_REQUANT=14_7` |
| INT4 packed single-lane | `make clean && make sim ITERS=5 INT4_PACKED=1 INT4_REQUANT=14_7` |
| INT4 packed + Spad storage mode | `make clean && make sim ITERS=5 INT4_PACKED=1 INT4_PACKED_SPAD=1 INT4_REQUANT=14_7` |

`make sim` 預設不開 trace；`make trace` 才會開 VCD，避免一般 simulation build 太慢。

## Branch 整理

### BOYU_ShunWei

來源：從 `origin/feat/hw-analysis` 開出來，目的是拿 ShunWei 較乾淨、較好跑的 RTL 作為 BOYU 後續基準。

主要內容：

| 類別 | 改動 |
| --- | --- |
| Verilator build | 將 `make sim` 與 `make trace` 拆開，`make sim` 不再預設開 VCD trace。 |
| Router cleanup | `Iact_Router.v`、`Weight_Router.v`、`Psum_Router.v` 共用 select decode wire，減少重複 comparator / case。 |
| Psum_Router 修正 | 修正 `internal_data` 為 signed `[20:0]`，避免 psum data 被隱含截成 1-bit。 |
| PE / FIFO hint | PE MAC 加 `use_dsp` hint，小 FIFO 加 distributed RAM hint。 |
| TOP_controller cleanup | 抽出部分重複算式，例如 psum index boundary，降低重複邏輯。 |

驗證：

```text
make sim ITERS=20
=== Summary: 20/20 passed (100%) ===
```

### BOYU_INT4

目標：不大改 RTL，先用 INT4-as-INT8 container 驗證 INT4 weight 的可行性。

主要內容：

| 項目 | 狀態 | 說明 |
| --- | --- | --- |
| INT4 sign-extend ROM | 已完成 | 由 INT8 dense weight txt 量化成 signed INT4，再 sign-extend 成 RTL 原本能吃的 signed 8-bit container。 |
| CSC stream 保持原版格式 | 已完成 | 盡量維持原本一筆 address 對一筆 data/count 的 sparse stream。 |
| Requantizer sweep | 已完成 | `[14:7]` 目前效果最好。 |
| 1000 筆測試 | 已完成 | `998/1000 passed (99.8%)`。 |

重要檔案：

| 檔案 | 說明 |
| --- | --- |
| `FPGA_design/tools/generate_int4_as_int8_sparse_rom_from_txt.py` | 從 dense txt 產生 INT4-as-INT8 sparse ROM。 |
| `FPGA_design/test/tb/TOP_test/MEM/int4_as_int8_regen/ROM_sparse_INT4_SIGNEXT_AS_INT8.coe` | INT4 sign-extend as INT8 container 的 COE。 |
| `FPGA_design/test/tb/TOP_test/MEM/int4_as_int8_regen/ROM_sparse_INT4_SCALED_AS_INT8.coe` | INT4 scaled as INT8 container 的 COE。 |

### BOYU_INT4_HARDWARE

目前所在分支。目標是從「INT4 權重放進 INT8 container」逐步往真正 INT4 hardware 前進。

已完成 / 進度表：

| 項目 | 目前做法 | 狀態 | 驗證結果 | 備註 |
| --- | --- | --- | --- | --- |
| INT8 baseline | 保留原本 INT8 ROM / CSC / PE datapath | 已完成 | `make sim ITERS=5`，5/5 passed | 確認 INT4 修改沒有破壞原本流程。 |
| INT4 packed ROM single-lane | ROM data 低 4 bit 放 INT4 weight，進 GLB weight path 前 sign-extend | 已完成 | `make sim ITERS=5 INT4_PACKED=1 INT4_REQUANT=14_7` 可跑 | PE core 不改。 |
| Later_Data_Spad 16-bit storage-only | INT4 mode 內部格式 `{w1[3:0], count1[3:0], w0[3:0], count0[3:0]}`，目前 lane1 = 0，PE 只讀 lane0 | 已完成 | `make sim ITERS=5 INT4_PACKED=1 INT4_PACKED_SPAD=1 INT4_REQUANT=14_7`，5/5 passed | 對外還原成原本 `{signed 8-bit data, 4-bit count}`。 |
| Former_Data_Spad 18-bit storage-only | INT4 mode 內部格式 `{w1[3:0], count1[4:0], w0[3:0], count0[4:0]}`，目前 lane1 = 0，PE 只讀 lane0 | 已完成 | 同上，5/5 passed | Former 原始 entry 是 `{data[12:5], count[4:0]}`，lane0 INT4 weight 對應 `dina[8:5]`。 |
| INT4x2 lane0 fallback | Spad 內部可容納兩個 INT4 lane，但目前只輸出 lane0 | 已完成 | 同上，5/5 passed | 只確認 storage format 不 timeout，還不是 SIMD 加速。 |
| lane select single-lane | 加 `lane_sel` 選 lane0/lane1，但一次只算一個 MAC | 暫停 | 尚未測 | 目前 generator 仍是 single-lane，lane1 沒有真實資料。 |
| Later / FC pseudo-SIMD | 若 `count0 == count1`，做 `psum += iact*w0 + iact*w1` | 暫停 | 尚未測 | 目前分析過 adjacent same-count pair 幾乎為 0，效益很低。 |

目前 INT4 hardware 的重點觀念：

- 現在不是完整 SIMD。
- 目前是先讓 Spad 內部格式可以容納 INT4x2。
- PE core 仍維持原本一個 MAC lane。
- 要真的做到 SIMD2，必須先有真正 two-lane packed generator，讓 lane1 有有效 weight/count。

建議下一步：

1. 先做真正 two-lane INT4 packed generator。
2. 再做 lane select single-lane，分別驗證 lane0 / lane1。
3. 最後再評估 pseudo-SIMD 或 SIMD2 MAC，避免太早改 psum accumulate、finish timing、controller schedule。

## INT4 權重檔案說明

如果要把 INT4 相關檔案給組員，建議給以下資料夾：

| 資料夾 / 檔案 | 說明 |
| --- | --- |
| `FPGA_design/test/tb/TOP_test/MEM/int4_as_int8_regen/` | INT4 sign-extend / scaled as INT8 container 的 ROM。適合給原本 RTL 或 BOYU_INT4 flow 使用。 |
| `FPGA_design/test/tb/TOP_test/MEM/int4_packed/` | 真 INT4 packed single-lane ROM。適合 BOYU_INT4_HARDWARE flow 使用。 |
| `FPGA_design/tools/generate_int4_as_int8_sparse_rom_from_txt.py` | 產生 INT4-as-INT8 ROM 的 script。 |
| `FPGA_design/tools/generate_int4_packed_sparse_rom_from_txt.py` | 產生 INT4 packed ROM 的 script。 |

`ROM_sparse_INT4_PACKED_SINGLE_LANE.coe` 看起來像 `0019`、`002f` 這種 16-bit hex，是因為整個 ROM word 還包含 sparse stream 的 address/count/data container，不代表每個 word 都只有 4 bit。INT4 weight 通常只佔其中低 4 bit，其他 bit 仍是 CSC stream 或 RTL container 需要的欄位。

## FPGA utilization 目前已知數據

目前已知一次 Vivado utilization 摘要：

| Resource | 使用量 |
| --- | --- |
| Slice LUTs | `39537 / 53200 = 74.32%` |
| Slice Registers | `51828 / 106400 = 48.71%` |
| BRAM | `134.5 / 140 = 96.07%` |
| DSP | `0 / 220 = 0.00%` |

判斷：

- BRAM 使用率接近滿，後續若要上板或加功能，BRAM 是最大壓力。
- DSP 使用量為 0，代表原本乘法可能被合成到 LUT，理論上可以用 DSP mapping 降低 LUT / timing 壓力，但需要 Vivado report 驗證。
- 沒有 Vivado timing report 前，不建議大改 PE pipeline 或 controller schedule。

## 注意事項

- 不要直接把 `BOYU_INT4_HARDWARE` 的實驗 RTL merge 到穩定 branch，除非對 INT8 baseline 和 INT4 flow 都做過 regression。
- `record.md` 是 BOYU 分支的詳細操作紀錄。
- Verilator log、VCD、`obj_dir*`、generated `.mem` 屬於中間產物，不建議 commit。
- `make sim` 只驗證 cycle-level functional result，不代表 Vivado timing / area 一定改善。
## BOYU INT4 two-lane packed 進度摘要

這段是 BOYU 分支目前 INT4 hardware 實驗的補充紀錄，詳細整理請看 `BOYU_README.md`。

| 項目 | 內容 | 狀態 |
| --- | --- | --- |
| two-lane FC sideband generator | `FPGA_design/tools/generate_int4_packed_sparse_rom_from_txt.py` 新增 `--two-lane-fc-sideband`，對 FC/Later count-width-4 data word 產生 `{w1[3:0], count1[3:0], w0[3:0], count0[3:0]}`。 | 已完成 |
| 產生檔案 | `FPGA_design/test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED_TWO_LANE_FC_SIDEBAND.txt` 與 `.coe`。 | 已完成 |
| lane1 payload | FC/Later data entries 共 `37765` 筆，其中 `36529` 筆有 lane1 payload，比例約 `96.7271%`。 | 已確認 |
| TOP_interface lane select | 新增 `INT4_PACKED_TWO_LANE` 與 `INT4_LANE_SEL`。預設 lane0，`INT4_LANE_SEL=1` 可選 lane1 debug path。 | 已完成 |
| 功能驗證 | `make sim ITERS=5 INT4_PACKED_TWO_LANE=1 INT4_REQUANT=14_7`。 | 5/5 passed |

注意：目前 two-lane sideband 不改 stream 長度，也不代表已經完成 SIMD。lane0 保持原本行為以確保 regression 通過；lane1 已有有效資料，但尚未納入 PE SIMD accumulate 與 golden regression。

PE SIMD2 目前先暫停直接修改。原因是 sideband 版本只是把下一筆 logical weight 放到 lane1，但下一筆仍然存在於 stream 中；若 PE 直接做 `psum += iact*w0 + iact*w1`，下一個 cycle 會再次處理同一個 w1，造成 double count。另外若 `count0 != count1`，lane0/lane1 會對應到不同 psum index，而目前 `Psum_Spad` 一次 `WRITE_BACK` 只能寫一個 index。後續若要做真正 SIMD2，應先做會同步更新 address / boundary 的 packed stream，再修改 PE accumulate。

### BOYU INT4 same-count SIMD2 初版

已新增保守版 SIMD2 flow：

| 項目 | 結果 |
| --- | --- |
| generator | `generate_int4_packed_sparse_rom_from_txt.py --same-count-simd2` |
| 新 ROM | `FPGA_design/test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED_SAME_COUNT_SIMD2.coe` |
| packed stream | 會合併同一 column 且 `count0 == count1` 的兩筆 weight，並重算 address / boundary |
| 實際 pack 數量 | `packed_same_count_pairs=0`，目前資料沒有可合併 pair |
| RTL | `TOP_interface.v` 新增 `INT4_PACKED_SIMD2`；`Processing_Element_core.v` 新增 guarded `former*w0 + former*w1` datapath |
| 驗證 | `make sim ITERS=5 INT4_PACKED_SIMD2=1 INT4_REQUANT=14_7`，5/5 passed |

結論：這版修正了 sideband 可能 double count 的問題，也把 PE SIMD2 datapath 放進 RTL；但因目前資料沒有 same-count pair，實際效果仍等同 single-lane fallback，還不會帶來速度提升。

### BOYU INT4 count0 != count1 SIMD2 設計摘要

若要支援 `count0 != count1`，不能只改 PE 乘法器。原因是目前 FC/Later data path 是 12-bit，只能表示：

```text
{weight[7:0], count[3:0]}
```

真正不同 count 的 INT4x2 需要 16-bit：

```text
{w1[3:0], count1[3:0], w0[3:0], count0[3:0]}
```

因此後續應採用最低風險的「第二個 write-back cycle」架構：

| 階段 | 內容 |
| --- | --- |
| 1 | 新增 `INT4_PACKED_SIMD2_FULL`，只在此模式下擴 FC/Later weight data path 到 16-bit。 |
| 2 | `Later_Data_Spad` 在 SIMD2 full mode 儲存完整 16-bit packed word。 |
| 3 | PE core 解出 `w0/count0` 與 `w1/count1`。 |
| 4 | lane0 先用原本 write-back 寫 `psum[count0]`。 |
| 5 | 若 lane1 valid，進入額外 state，再讀 `psum[count1]`、計算 `iact*w1`、寫回 `psum[count1]`。 |

暫時不建議先做雙 port / banked Psum_Spad，因為會改 memory 結構與 collision 行為，風險比第二個 write-back cycle 高很多。
