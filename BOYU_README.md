# BOYU 分支整理與資料格式說明

這份文件是給 BOYU 相關分支使用的整理版 README。原本 GitHub 的 `README.md` 保持不動，這裡主要補充：

1. 原版 RTL / Verilator flow 吃哪些資料。
2. label、weight、Iact 分別在哪裡。
3. INT8、INT4-as-INT8、INT4 packed、INT4 hardware 的檔案格式差異。
4. BOYU 各分支目前做了什麼、做到哪裡。
5. 原版專案 README 的精簡整理。

---

## 1. 檔案格式與資料來源

### 1.1 原版 Verilator flow

原版 Verilator 入口：

```bash
cd FPGA_design/sim/verilator
make sim ITERS=5
```

預設會跑：

```bash
./obj_dir/VTOP_integration \
  --iters 5 \
  --start 0 \
  --dram ../../test/tb/TOP_test/MEM/DRAM.txt \
  --golden ../../test/tb/TOP_test/MEM/GOLDEN.txt
```

### 1.2 原版 RTL / TB 吃的檔案

| 類型 | 檔案 / module | 說明 |
| --- | --- | --- |
| Verilator harness | `FPGA_design/sim/verilator/sim_main.cpp` | C++ testbench，負責 reset、餵 ifmap、等待 `final_out_valid`、讀 `result`、比對 golden。 |
| RTL top | `FPGA_design/src/TOP/TOP_integration.v` | Verilator top module，Makefile 使用 `--top-module TOP_integration`。 |
| Behavioral BRAM | `FPGA_design/sim/verilator/bram_behavioral.v` | 用 behavioral Verilog 取代 Vivado Block Memory Generator，讓 RTL 可以在 Verilator 跑。 |
| Iact / input image | `FPGA_design/test/tb/TOP_test/MEM/DRAM.txt` | 每筆測資的 input activation。LeNet/MNIST 一筆通常讀 784 bytes。 |
| Golden label | `FPGA_design/test/tb/TOP_test/MEM/GOLDEN.txt` | 每筆測資的 expected class label，用來比對 RTL 的 `result`。 |
| Weight COE source | `FPGA_design/Vivado/PYNQ_Z2/PYNQ_Z2.ip_user_files/mem_init_files/ROM_sparse_COE.coe` | 原版 sparse weight ROM 來源。 |
| Weight runtime mem | `FPGA_design/sim/verilator/rom_sparse_weight.mem` | Makefile 由 COE 轉出的 Verilator `$readmemh` 檔案，屬於 generated file。 |
| Weight ROM module | `ROM_sparse_weight` in `bram_behavioral.v` | Verilator 用的 sparse weight ROM，接到 `TOP_interface.v` 的 `ROM_weight_inst`。 |

### 1.3 TOP_interface 的資料選擇

`TOP_interface.v` 會依照 `MEM_read_addr` 決定目前讀 Iact 還是 weight：

| 條件 | 來源 | 內容 |
| --- | --- | --- |
| `MEM_read_addr < 784` | DRAM / ifmap | input activation。 |
| `MEM_read_addr >= 784` | ROM_sparse_weight | sparse weight stream。 |

因此：

| 你想換什麼 | 要改哪裡 |
| --- | --- |
| 換 input image / Iact | 改 `DRAM=...` |
| 換 golden label | 改 `GOLDEN=...` |
| 換 weight | 改 `COE_FILE=...`，Makefile 會重新產生 `rom_sparse_weight.mem` |

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

---

## 2. Weight / CSC / INT4 檔案格式

原版 weight 不是 dense weight array，而是 CSC sparse stream。ROM 裡面包含 address、count、data 相關資訊，controller 會依照 boundary / counter 讀出 sparse weight。

### 2.1 格式總覽

| 格式 | 目的 | 說明 |
| --- | --- | --- |
| INT8 sparse container | 原版 RTL 使用 | weight data 是 signed 8-bit，搭配 CSC address / count stream。 |
| INT4 sign-extend as INT8 | 不大改 RTL 的 INT4 嘗試 | 先把 INT8 weight 量化成 signed INT4 `[-8, 7]`，INT4 bit[3] 是 sign bit，再 sign-extend 成 signed 8-bit container。 |
| INT4 scaled as INT8 | 測試數值尺度 | 把 INT4 code decode 後乘 scale，例如 `q4 * 16`，再放進 8-bit container。 |
| INT4 packed single-lane | 真 INT4 ROM 初版 | ROM data 低 4 bit 放 INT4 weight，進 RTL weight path 前再 sign-extend。 |
| INT4x2 storage-only | Spad hardware 初版 | Spad 內部可容納兩個 INT4 lane，但目前 PE core 只讀 lane0。 |

### 2.2 INT4 檔案位置

| 檔案 / 資料夾 | 內容 |
| --- | --- |
| `FPGA_design/test/tb/TOP_test/MEM/int4_as_int8_regen/` | INT4 sign-extend / scaled as INT8 container ROM。 |
| `FPGA_design/test/tb/TOP_test/MEM/int4_packed/` | INT4 packed single-lane ROM。 |
| `FPGA_design/tools/generate_int4_as_int8_sparse_rom_from_txt.py` | 產生 INT4-as-INT8 ROM 的 script。 |
| `FPGA_design/tools/generate_int4_packed_sparse_rom_from_txt.py` | 產生 INT4 packed ROM 的 script。 |

### 2.3 為什麼 INT4 COE 看起來不是 4-bit？

例如：

```text
0019,
002f,
0046,
005f,
```

這些是 ROM word，不是單一 weight。ROM word 裡仍然包含 sparse stream / address / count / container 欄位。INT4 weight 通常只佔其中某些 bit，例如低 4 bit，其餘 bit 是 CSC stream 或 RTL 需要的資訊。

---

## 3. 常用 Verilator 指令

| 目的 | 指令 |
| --- | --- |
| 原版 INT8 baseline | `make clean && make sim ITERS=5` |
| 從第 N 筆開始 trace | `make trace START=32` |
| INT4 sign-extend + `[14:7]` requant | `make clean && make sim ITERS=5 INT4_REGEN=1 INT4_REQUANT=14_7` |
| INT4 packed single-lane | `make clean && make sim ITERS=5 INT4_PACKED=1 INT4_REQUANT=14_7` |
| INT4 packed + Spad storage | `make clean && make sim ITERS=5 INT4_PACKED=1 INT4_PACKED_SPAD=1 INT4_REQUANT=14_7` |

備註：

- `make sim` 預設不開 VCD trace，速度比較快。
- `make trace` 才會開 VCD。
- `rom_sparse_weight.mem` 是 Makefile 產生的中間檔，不建議 commit。

---

## 4. BOYU 分支整理

### 4.1 BOYU_ShunWei

來源：從 `origin/feat/hw-analysis` 開出來，目標是用 ShunWei 較乾淨、較好跑的 RTL 作為 BOYU 後續基準。

| 類別 | 改動 |
| --- | --- |
| Verilator build | 拆分 `make sim` / `make trace`，一般 simulation 不再預設開 trace。 |
| Router cleanup | `Iact_Router.v`、`Weight_Router.v`、`Psum_Router.v` 共用 select decode wire，減少重複 comparator / case。 |
| Psum_Router 修正 | 修正 `internal_data` 為 signed `[20:0]`，避免 psum data 被隱含截成 1-bit。 |
| PE / FIFO hint | PE MAC 加 `use_dsp` hint，小 FIFO 加 distributed RAM hint。 |
| TOP_controller cleanup | 抽出部分重複算式，例如 psum index boundary，降低重複邏輯。 |

驗證：

```text
make sim ITERS=20
=== Summary: 20/20 passed (100%) ===
```

### 4.2 BOYU_INT4

目標：不大改 RTL，先用 INT4-as-INT8 container 驗證 INT4 weight 的可行性。

| 項目 | 狀態 | 說明 |
| --- | --- | --- |
| INT4 sign-extend ROM | 已完成 | INT8 dense weight 量化成 signed INT4，再 sign-extend 成 signed 8-bit container。 |
| CSC stream 保持原版格式 | 已完成 | 維持原本一筆 address 對一筆 data/count 的 sparse stream。 |
| Requantizer sweep | 已完成 | `[14:7]` 目前效果最好。 |
| 1000 筆測試 | 已完成 | `998/1000 passed (99.8%)`。 |

目前重要結果：

```text
make sim ITERS=1000 INT4_REGEN=1 INT4_REQUANT=14_7
=== Summary: 998/1000 passed (99.8%) ===
```

錯誤筆數：

| Iter | result | golden |
| --- | ---: | ---: |
| 224 | 7 | 1 |
| 418 | 5 | 8 |

### 4.3 BOYU_INT4_HARDWARE

目標：從 INT4-as-INT8 container 逐步往真正 INT4 hardware 前進。

| 項目 | 目前做法 | 狀態 | 驗證結果 |
| --- | --- | --- | --- |
| INT8 baseline | 保留原本 INT8 ROM / CSC / PE datapath | 已完成 | `make sim ITERS=5`，5/5 passed |
| INT4 packed ROM single-lane | ROM data 低 4 bit 放 INT4 weight，進 GLB weight path 前 sign-extend | 已完成 | `make sim ITERS=5 INT4_PACKED=1 INT4_REQUANT=14_7` 可跑 |
| Later_Data_Spad 16-bit storage-only | INT4 mode 內部格式 `{w1[3:0], count1[3:0], w0[3:0], count0[3:0]}`，目前 lane1 = 0，PE 只讀 lane0 | 已完成 | `make sim ITERS=5 INT4_PACKED=1 INT4_PACKED_SPAD=1 INT4_REQUANT=14_7`，5/5 passed |
| Former_Data_Spad 18-bit storage-only | INT4 mode 內部格式 `{w1[3:0], count1[4:0], w0[3:0], count0[4:0]}`，目前 lane1 = 0，PE 只讀 lane0 | 已完成 | 同上，5/5 passed |
| INT4x2 lane0 fallback | Spad 內部可容納兩個 INT4 lane，但目前只輸出 lane0 | 已完成 | 同上，5/5 passed |
| lane select single-lane | 加 `lane_sel` 選 lane0/lane1，但一次只算一個 MAC | 暫停 | 目前 generator 仍是 single-lane，lane1 沒有真實資料 |
| Later / FC pseudo-SIMD | 若 `count0 == count1`，做 `psum += iact*w0 + iact*w1` | 暫停 | 現有 CSC stream 幾乎沒有 adjacent same-count pair，效益很低 |

新增進度：

| 項目 | 內容 | 結果 |
| --- | --- | --- |
| two-lane FC sideband generator | `generate_int4_packed_sparse_rom_from_txt.py` 新增 `--two-lane-fc-sideband`，對 count-width-4 的 FC/Later data word 產生 `{w1[3:0], count1[3:0], w0[3:0], count0[3:0]}`。stream 長度與 lane0 內容保持不變。 | 產生 `ROM_sparse_INT4_PACKED_TWO_LANE_FC_SIDEBAND.txt/.coe`，words = 51263，boundary 不變。 |
| lane1 payload 檢查 | 檢查 FC/Later data entries 的 lane1 是否有有效資料。 | `37765` 筆 FC/Later entries 中，`36529` 筆有 lane1 payload，比例約 `96.7271%`。 |
| TOP_interface lane select | 新增 `INT4_PACKED_TWO_LANE` 與 `INT4_LANE_SEL`。預設 `INT4_LANE_SEL=0` 使用 lane0；`INT4_LANE_SEL=1` 可選 lane1 debug path。 | `make sim ITERS=5 INT4_PACKED_TWO_LANE=1 INT4_REQUANT=14_7`，5/5 passed。 |

目前 INT4 hardware 的重點：

- 現在還不是完整 SIMD。
- 目前只是讓 Spad 內部格式可以容納 INT4x2。
- PE core 仍維持原本單 lane MAC。
- two-lane FC sideband generator 已讓 lane1 有有效 weight/count，但 lane1 還沒有納入 golden regression。
- 要真的做到 SIMD2，還需要修改 PE accumulate / psum timing，而不是只改 ROM。

建議下一步：

1. 先定義 lane1 的驗證方式。單獨選 lane1 跑分類不會對原 golden，因為 lane0 被跳過。
2. 若要做 pseudo-SIMD，需要在 PE 中同 cycle 做 `iact*w0 + iact*w1`，並確認 `count0/count1` 對應的 psum index。
3. 最後再評估是否壓縮 stream 長度；目前 sideband 版本不改 stream 長度，所以主要是資料格式驗證。

### 4.4 PE SIMD2 可行性檢查

目前不建議直接把 PE 改成：

```verilog
psum += iact*w0 + iact*w1;
```

原因如下：

| 問題 | 說明 |
| --- | --- |
| sideband 版本沒有縮短 stream | 目前 `ROM_sparse_INT4_PACKED_TWO_LANE_FC_SIDEBAND.coe` 是把「下一筆 logical weight」放到 lane1，但下一筆仍然保留在 stream 裡。如果 PE 直接加 `iact*w1`，下一個 cycle 仍會再算一次 w1，結果 double count。 |
| `count0 != count1` 需要不同 psum index | PE 目前一次 MAC 只會產生一個 `psum_write_idx_wire`，由 `later_matrix_row_wire` 決定。如果 lane0/lane1 的 count 不同，就需要兩個不同 psum index。 |
| Psum_Spad 目前是單 write path | `WRITE_BACK` 一次只寫一個 `Psum_Spad_write_idx` 與一個 `Psum_Spad_psum_in`。若 lane0/lane1 對不同 psum，就不能在同一 cycle 安全寫兩個位置。 |
| same-count pair 幾乎沒有效益 | 先前檢查 adjacent same-count pair 幾乎為 0，所以只支援 `count0 == count1` 的 SIMD2 對目前資料幫助很小。 |

比較安全的下一版做法不是直接改 PE，而是先改 generator / stream：

| 步驟 | 內容 | 目的 |
| --- | --- | --- |
| 1 | 做真正 packed stream，將兩筆 logical weight 合併成一筆，並同步更新 address / boundary。 | 避免 lane1 被 double count。 |
| 2 | 若 `count0 == count1`，PE 可做 `psum += iact*w0 + iact*w1`。 | 單 psum index，可維持一個 write-back。 |
| 3 | 若 `count0 != count1`，需要兩個 write-back cycle 或雙 accumulator / 雙 write port。 | 正確處理不同 psum index。 |
| 4 | 每一步都先跑 `make sim ITERS=5`，再擴大到 100 / 1000 筆。 | 避免 controller schedule 被破壞。 |

目前結論：PE SIMD2 不是不能做，但必須先改 packed stream 與 address/boundary，不能只在 PE 裡把兩個乘法加起來。

### 4.5 same-count SIMD2 packed stream 初版

已完成一版保守的 same-count SIMD2 flow：

| 項目 | 內容 | 結果 |
| --- | --- | --- |
| true packed stream generator | `generate_int4_packed_sparse_rom_from_txt.py` 新增 `--same-count-simd2`。只在同一 column 內遇到相同 count 的兩筆 logical weight 時，才合併成一筆 `{w1[3:0], count[3:0], w0[3:0], count[3:0]}`，並重新計算 address / boundary。 | generator 可執行。 |
| 新增 ROM | `ROM_sparse_INT4_PACKED_SAME_COUNT_SIMD2.txt/.coe` | words = `51263`，boundary = `7,149,203,1300,1354,2428,10588,38449,41095,50204,50468,51263`。 |
| 實際 pack 數量 | 只允許同 column 且同 count 的 pair。 | `packed_same_count_pairs=0`。目前資料沒有可合併 pair。 |
| TOP_interface | 新增 `INT4_PACKED_SIMD2`，FC/Later 會把 ROM word 轉成 PE Later path 的 `{w1[3:0], w0[3:0], count[3:0]}`。 | 已完成。 |
| PE core | `INT4_PACKED_SIMD2` 且 `int4_later_weight_mode` 時，Later data 解析成 w0/w1，計算 `former*w0 + former*w1`。若 w1=0，退回 single-lane 行為。 | 已完成。 |
| Verilator smoke test | `make sim ITERS=5 INT4_PACKED_SIMD2=1 INT4_REQUANT=14_7` | `5/5 passed`。 |

目前這版的意義：

- RTL 已有 guarded SIMD2 datapath。
- generator 已能重算 address / boundary，避免 sideband double count 問題。
- 但目前資料中 same-count pair 為 0，所以實際執行仍等同 single-lane fallback。

若要得到真正 SIMD2 效益，下一步不能只限制 `count0 == count1`。必須支援 `count0 != count1`，也就是需要第二個 write-back cycle、雙 accumulator，或雙 write port / banked Psum_Spad。

### 4.6 count0 != count1 SIMD2 設計

這一步不能只改 PE MAC。原因是目前 PE 的 Later data path 是 12-bit：

```text
{weight[7:0], count[3:0]}
```

same-count SIMD2 可以塞成：

```text
{w1[3:0], w0[3:0], count[3:0]} = 12-bit
```

但 `count0 != count1` 必須同時保存兩個 count：

```text
{w1[3:0], count1[3:0], w0[3:0], count0[3:0]} = 16-bit
```

因此若要正確支援不同 count，必須先擴充 FC/Later weight data path，而不是只改乘法器。

| 現有路徑 | 目前寬度 | count0 != count1 需要 |
| --- | ---: | ---: |
| `TOP_interface.v weight_data_in` | 13-bit container | 至少 16-bit FC/Later packed container |
| `TOP.v / Cluster_Group_array.v / Cluster_Group.v` weight data path | 多數為 13-bit | 需要條件式支援 16-bit |
| `GLB_Cluster.v weight_data_in/out` | 13-bit | 需要條件式支援 16-bit |
| `PE_Cluster.v weight_data_in` | 12-bit Later data | 需要 16-bit Later packed data |
| `Processing_Element.v later_data FIFO` | 12-bit | 需要 16-bit |
| `Later_Data_Spad.v data_in/out` | 12-bit | INT4 SIMD2 mode 需要 16-bit |

建議採用最低風險架構：**第二個 write-back cycle**，不要先做雙 port Psum_Spad。

#### 建議資料格式

只針對 FC/Later weight mode：

```text
Later INT4 SIMD2 full format = 16-bit
[15:12] = w1[3:0]
[11:8]  = count1[3:0]
[7:4]   = w0[3:0]
[3:0]   = count0[3:0]
```

conv / Former count-width-5 暫時維持 single-lane，因為完整格式會是 18-bit：

```text
{w1[3:0], count1[4:0], w0[3:0], count0[4:0]} = 18-bit
```

#### 建議 RTL 流程

| 步驟 | 做法 | 原因 |
| --- | --- | --- |
| 1 | 新增 `INT4_PACKED_SIMD2_FULL` define。 | 與目前 INT8 / INT4 single-lane / same-count SIMD2 隔離。 |
| 2 | 將 FC/Later weight data path 條件式擴成 16-bit。 | 讓 count0/count1 都能送到 PE。 |
| 3 | `Later_Data_Spad` 在 SIMD2 full mode 儲存 16-bit 原始 packed word。 | 不要在進 Spad 前壓回 12-bit，否則 count1 會消失。 |
| 4 | PE core 解出 `w0/count0` 與 `w1/count1`。 | 建立兩個 psum index。 |
| 5 | lane0 先照原本流程 MAC + write-back。 | 保持原本行為作為 baseline。 |
| 6 | 若 lane1 valid，進入額外 state 讀 lane1 psum、MAC、write-back。 | 用第二個 write-back cycle 支援不同 psum index。 |
| 7 | lane1 完成後才前進到下一個 later entry。 | 避免跳過或重複處理。 |

#### PE FSM 建議新增狀態

目前 PE FSM 是 3-bit，已用滿 0 到 7。建議改成 4-bit，新增：

```text
READ_LANE1_PSUM
DO_MAC_LANE1
WRITE_BACK_LANE1
```

概念流程：

```text
READ_LATER_DATA_2
  -> DO_MAC              // lane0
  -> WRITE_BACK          // write psum[count0]
  -> READ_LANE1_PSUM     // if lane1_valid
  -> DO_MAC_LANE1        // lane1
  -> WRITE_BACK_LANE1    // write psum[count1]
  -> 原本下一個 state
```

#### 為什麼不先做雙 write port / banked Psum_Spad

| 做法 | 風險 |
| --- | --- |
| 第二個 write-back cycle | 最低風險，沿用原本單 port Psum_Spad，只增加 cycle。 |
| 雙 accumulator | 中等風險，需要確認 psum_load_reg / product_reg / psum index timing。 |
| 雙 write port Psum_Spad | 最高風險，會改 memory 結構、BRAM 推論、collision 行為。 |
| banked Psum_Spad | 高風險，需要保證 count0/count1 不落同 bank 或處理 bank conflict。 |

#### 建議測試順序

| 階段 | 指令 | 通過條件 |
| --- | --- | --- |
| bus width only | `make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7` | 5/5 passed，PE 仍只讀 lane0。 |
| lane1 disabled fallback | 同上，但 generator 先讓 lane1 全 0 | 5/5 passed。 |
| lane1 second write-back | 使用真正 packed stream | 先跑 5 筆，確認不 timeout、不 double count。 |
| regression | `ITERS=100` / `ITERS=1000` | 與 INT4 baseline 比較準確率與 cycle。 |

目前結論：`count0 != count1` 可行，但必須先擴 16-bit FC/Later data path，再做 PE 第二 write-back cycle。這不是單一 PE MAC patch。

### 4.7 INT4_PACKED_SIMD2_FULL 初版

目標：支援 `count0 != count1` 的 INT4x2 FC/Later packed weight。這版不做雙 accumulator，也不做雙 write port，而是用第二個 write-back cycle 保守完成。

#### 資料格式

只針對 FC/Later weight section 使用 16-bit packed entry：

```text
[15:12] = w1[3:0]
[11:8]  = count1[3:0]
[7:4]   = w0[3:0]
[3:0]   = count0[3:0]
```

conv / Former count-width-5 section 仍維持 single-lane unpack，因為完整 two-lane 格式需要 18-bit，不能直接塞進目前 16-bit ROM word。

#### 已完成修改

| 類別 | 內容 |
| --- | --- |
| Makefile | 新增 `INT4_PACKED_SIMD2_FULL=1` 模式，使用獨立 build directory `obj_dir_int4_simd2_full_14_7`，預設 COE 改成 `ROM_sparse_INT4_PACKED_SIMD2_FULL.coe`。 |
| Generator | `generate_int4_packed_sparse_rom_from_txt.py` 新增 `--adjacent-simd2-full`，把 FC/Later count-width-4 section 內相鄰兩筆 logical weight 合成一筆 `{w1,count1,w0,count0}`，並重新計算 address / boundary。 |
| ROM data | 新增 `ROM_sparse_INT4_PACKED_SIMD2_FULL.txt/.coe`。產生結果：`words=34314`，boundaries = `7,149,203,1300,1354,2428,10588,25968,28614,33622,33886,34314`。 |
| TOP_interface | 新增 `INT4_PACKED_SIMD2_FULL` 專用 compressed ROM boundary。FC sections 保持 16-bit packed raw word；conv / layer2 former/later 仍做原本 5-bit count unpack。 |
| 16-bit FC/Later path | 在 `INT4_PACKED_SIMD2_FULL` 下，從 `TOP_interface`、`TOP`、`Cluster_Group_array`、`Cluster_Group`、`GLB_Cluster`、`Iact_data_SRAM`、`Iact_Router`、`Router_Cluster`、`PE_Cluster`、`Processing_Element` 到 `Later_Data_Spad` 的 FC/Later physical path 條件式擴成 16-bit。 |
| Later Spad | `INT4_PACKED_SIMD2_FULL` 下以 16-bit behavioral storage 保存 `{w1,count1,w0,count0}`。 |
| PE core | `Processing_Element_core.v` 新增 lane1 decode 與第二個 write-back cycle：lane0 寫 `psum[count0]`；若 lane1 valid，下一輪讀 `psum[count1]`、算 `iact*w1`、寫回 `psum[count1]`。 |

#### PE FSM 新增狀態

```text
WRITE_BACK          // lane0 write-back
READ_LANE1_PSUM     // lane1 psum read index
DO_MAC_LANE1        // lane1 multiply
WRITE_BACK_LANE1    // lane1 write-back
```

這版用單一 Psum_Spad write path，所以不同 count 的兩個 lane 會分兩個 cycle 寫回。優點是風險低；缺點是 cycle 會增加，還不是最高效 SIMD2。

#### Debug 中遇到的問題

| 問題 | 修正 |
| --- | --- |
| controller 可能在 lane1 write-back 前看到 `cal_fin` | 在 `INT4_PACKED_SIMD2_FULL` 下加入 `lane1_pending` guard，lane1 還沒完成時不宣告 `cal_fin`。 |
| full packed ROM 長度比 INT4-as-INT8 短，但 TOP_interface 還用舊 boundary | 新增 `INT4_PACKED_SIMD2_FULL` boundary，對齊 `34314` words 的 compressed ROM。 |
| 誤判 `ROM_weight_data_2_later` 為 4-bit count path | 已確認 generator 中 layer2 later 仍是 count-width-5，因此維持原本 5-bit unpack；真正 16-bit packed 只套用 FC1/FC2/FC3 section。 |

#### 驗證

```bash
cd FPGA_design/sim/verilator
make clean
make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7
```

結果：

```text
Iter 0: result=5 golden=5 (105009 cycles) OK
Iter 1: result=0 golden=0 (105760 cycles) OK
Iter 2: result=4 golden=4 (100059 cycles) OK
Iter 3: result=1 golden=1 (104691 cycles) OK
Iter 4: result=9 golden=9 (104791 cycles) OK

=== Summary: 5/5 passed (100%) ===
```

目前結論：

- `count0 != count1` 的 full packed stream 已能跑完前 5 筆且結果正確。
- 這版有壓縮 FC weight stream 長度，避免 sideband double count。
- 目前只完成 functional smoke test；若要評估準確率與 cycle，下一步要跑 `ITERS=100` / `ITERS=1000`。
- 若要進一步減少 cycle，才考慮雙 accumulator 或 banked / dual-write Psum_Spad。

#### 100 筆測試初步 cycle 比較

使用者已回報兩組 `ITERS=100` 測試都可通過，以下先記錄前幾筆 cycle 觀察：

| 模式 | 指令 | 前幾筆 cycle 範例 | 初步觀察 |
| --- | --- | --- | --- |
| INT4 sign-extend baseline | `make sim ITERS=100 INT4_REGEN=1 INT4_REQUANT=14_7` | Iter 0: `122774`、Iter 1: `125922`、Iter 2: `119673`、Iter 3: `122648`、Iter 4: `124045` | baseline 約 12 萬 cycles / image。 |
| INT4 packed SIMD2 full | `make sim ITERS=100 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7` | Iter 0: `105009`、Iter 1: `105760`、Iter 2: `100059`、Iter 3: `104691`、Iter 4: `104791`、Iter 5: `106613` | full packed 後約 10 萬 cycles / image，前幾筆比 baseline 少約 15% 左右。 |

判斷：

- 目前 full packed stream 雖然 lane1 需要第二個 write-back cycle，但因為 FC weight stream 長度被壓縮，整體 cycle 仍有下降。
- 這仍不是理想的同 cycle SIMD2；它是「compressed stream + second write-back」的保守版本。
- 若後續要繼續降 cycle，應先確認目前 PE 是否被 synthesis 成兩個 multiplier；因為目前 lane0/lane1 是不同 cycle 執行，理論上可以共用一個 multiplier。

---

## 5. FPGA Utilization 目前已知數據

目前一次 Vivado utilization 摘要：

| Resource | 使用量 |
| --- | --- |
| Slice LUTs | `39537 / 53200 = 74.32%` |
| Slice Registers | `51828 / 106400 = 48.71%` |
| BRAM | `134.5 / 140 = 96.07%` |
| DSP | `0 / 220 = 0.00%` |

判斷：

- BRAM 使用率接近滿，後續如果要上板或加功能，BRAM 是最大壓力。
- DSP 使用量為 0，代表乘法可能被合成到 LUT。理論上可以用 DSP mapping 降 LUT / timing 壓力，但需要 Vivado report 驗證。
- 沒有 Vivado timing report 前，不建議大改 PE pipeline 或 controller schedule。

---

## 6. 原版 GitHub README 精簡整理

本專案是以 Eyeriss v2 架構為基礎修改而成的稀疏 CNN accelerator。設計重點包含：

- `im2col`
- GEMM
- CSC sparse compression
- Router dataflow
- GLB / PE local storage
- Psum accumulation / requantization
- LeNet-5 推論流程

原始 repository 主要提供：

| 類別 | 路徑 |
| --- | --- |
| Verilog RTL | `FPGA_design/src/` |
| Verilator simulation | `FPGA_design/sim/verilator/` |
| TOP-level 測試資料 | `FPGA_design/test/tb/TOP_test/` |
| Vivado project | `FPGA_design/Vivado/PYNQ_Z2/` |
| 文件 | `docs/` |
| host demo | `host_demo/` |
| 圖片 | `picture/` |

Demo 影片：[YouTube](https://www.youtube.com/watch?v=wLz8Di9vdas&ab_channel=BOCHUNChen)

---

## 7. 注意事項

- `README.md` 保留原版 / GitHub 主 README；BOYU 相關整理放在本檔 `BOYU_README.md`。
- `record.md` 是 BOYU 實驗過程紀錄。
- Verilator log、VCD、`obj_dir*`、generated `.mem` 屬於中間產物，不建議 commit。
- `make sim` 只代表 functional simulation 通過，不代表 Vivado timing / area 一定改善。
- `BOYU_INT4_HARDWARE` 仍是實驗分支，不建議直接 merge 到穩定 branch。
---

## 附錄：2026-06-11 共享 multiplier 嘗試結果

目前 `INT4_PACKED_SIMD2_FULL` 的 PE core 仍保留 two-multiplier 寫法：

```text
lane0 product = iact * w0
lane1 product = iact * w1
product_mux   = DO_MAC_LANE1 ? lane1_product : lane0_product
```

我有嘗試把 lane0 / lane1 改成共用一個 selected-weight multiplier：

```text
selected_weight = DO_MAC_LANE1 ? w1 : w0
product         = iact * selected_weight
```

這個方向理論上比較符合「一個 8x8 乘法器支援 INT8 與 INT4 lane0/lane1」的目標，但直接改寫後 regression 失敗：

```text
make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7
=== Summary: 1/5 passed (20%) ===
```

我測過幾種寫法：continuous selected-weight、加 `$signed(...)`、在 `product_reg` 內分支計算、以及手動 sign-extension operand，結果都一樣失敗。因此這版沒有採用共享 multiplier，已回復到可通過的 two-multiplier baseline。

回復後確認：

```text
make clean
make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7

Iter 0: result=5 golden=5 (105009 cycles) OK
Iter 1: result=0 golden=0 (105760 cycles) OK
Iter 2: result=4 golden=4 (100059 cycles) OK
Iter 3: result=1 golden=1 (104691 cycles) OK
Iter 4: result=9 golden=9 (104791 cycles) OK

=== Summary: 5/5 passed (100%) ===
```

結論：共享 multiplier 的方向仍然可以研究，但不能直接把 lane0/lane1 用 mux 選 weight 後替換。下一步若要繼續，應先用 waveform 比對 `DO_MAC`、`DO_MAC_LANE1`、`product_reg`、`Psum_Spad_write_idx` 的 cycle 對齊，再決定是否加入 operand register 或更明確的 lane pipeline。
## BOYU_IN4_IN8_hardware：固定 SPad、runtime INT8 / INT4x2 decode

這個分支從既有 INT4 hardware flow 繼續往下做，核心目標是：**同一份硬體固定 SPad 寬度，同時支援 INT8 與 INT4x2，不再用 `ifdef` 讓 INT8/INT4 變成不同 SPad 硬體。**

### 固定資料格式

| SPad | 固定 entry 寬度 | INT8 mode decode | INT4x2 mode decode |
| --- | ---: | --- | --- |
| Later Data SPad | 16-bit | `[15:12] unused`, `[11:4] int8_weight`, `[3:0] count` | `[15:12] w1`, `[11:8] count1`, `[7:4] w0`, `[3:0] count0` |
| Former Data SPad | 18-bit | `[17:13] unused`, `[12:5] int8_weight`, `[4:0] count` | `[17:14] w1`, `[13:9] count1`, `[8:5] w0`, `[4:0] count0` |

### Runtime control

| 訊號 / 檔案 | 用途 |
| --- | --- |
| `int4_weight_mode` in `TOP_integration.v` | top-level runtime input，決定現在用 INT8 decode 還是 INT4x2 decode |
| `int4_weight_mode` in `TOP_interface.v` | 傳入 `TOP_eyeriss` |
| `int4_former_weight_mode_wire` in `TOP.v` | `int4_weight_mode & ctrl_conv_flag` |
| `int4_later_weight_mode_wire` in `TOP.v` | `int4_weight_mode & ctrl_fc_flag` |
| `--int4-weight-mode` in `sim_main.cpp` | Verilator runtime argument |
| `INT4_RUNTIME_MODE_ARG` in `Makefile` | `INT4_PACKED_SIMD2_FULL=1` 時自動傳 `--int4-weight-mode` |

一開始錯誤地把 `ctrl_conv_flag` / `ctrl_fc_flag` 直接當 INT4 mode，結果 default INT8 也被當成 INT4 decode，`make sim ITERS=5` 會全部 timeout。現在已改成先經過 `int4_weight_mode` gate，INT8 baseline 會固定走 INT8 decode。

### 驗證結果

| 測試 | 指令 | 結果 |
| --- | --- | --- |
| INT8 baseline | `make clean && make sim ITERS=5` | `5/5 passed (100%)` |
| INT4x2 packed full | `make clean && make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7` | `5/5 passed (100%)` |

INT4x2 packed full 前 5 筆結果：

```text
Iter 0: result=5 golden=5 (105009 cycles) OK
Iter 1: result=0 golden=0 (105760 cycles) OK
Iter 2: result=4 golden=4 (100059 cycles) OK
Iter 3: result=1 golden=1 (104691 cycles) OK
Iter 4: result=9 golden=9 (104791 cycles) OK

=== Summary: 5/5 passed (100%) ===
```

### 雙 accumulator 判斷

目前 PE 已經有 lane1 的第二個 write-back cycle：lane0 先讀/算/寫 `psum[count0]`，lane1 下一輪再讀/算/寫 `psum[count1]`。這能保守支援 `count0 != count1`。

真正雙 accumulator 若要同 cycle 處理 `count0 != count1`，需要同 cycle 讀兩個 psum index 並寫回兩個 psum index。但目前 `Psum_Spad` 只有：

| Psum_Spad 資源 | 目前狀態 |
| --- | --- |
| read index | 1 個 |
| write index | 1 個 |
| data input | 1 組 |
| data output | 1 組 |

所以不能只在 PE core 加兩個 accumulator 就完成雙 accumulator。要做真正雙 accumulator，下一步需要改成下列其中一種架構：

| 方案 | 代價 / 風險 |
| --- | --- |
| Psum_Spad dual read / dual write | 面積上升，BRAM/LUTRAM inference 需重驗 |
| banked Psum_Spad | 要處理 bank conflict，controller timing 也要重驗 |
| 保留現在兩次 write-back | cycle 較多，但功能風險最低，目前已通過 regression |

### INT4 pruning + profitable packed stream

因為先前已確認 `count0 == count1` 幾乎沒有可用 pair，same-count SIMD2 無法帶來實際加速。本階段改成從資料端降低 cycle：

1. 先把小 INT4 weight prune 成 0。
2. CSC encoder 會跳過 0，因此 sparse stream 變短。
3. `INT4_PACKED_SIMD2_FULL` 只保留真正能減少 logical entry 數量的 adjacent pair，並重新計算 address / boundary。

#### Threshold sweep

| threshold | ROM words | 5 筆結果 | cycle 摘要 |
| ---: | ---: | --- | --- |
| 0.0 | 34314 | 5/5 passed | 約 100k-106k cycles |
| 0.75 | 27111 | 5/5 passed | 約 79k-84k cycles |
| 0.85 | 27077 | 5/5 passed | 約 79k-84k cycles |
| 0.9 | 27060 | 5/5 passed | 約 77k-81k cycles |
| 0.95 | 26718 | 4/5 passed | 第 1 筆錯 |
| 1.0 | 26280 | 4/5 passed | 第 1 筆錯 |

目前採用 `threshold=0.9`。原因是它是目前前 5 筆全部正確、cycle 最低的點。

#### 目前使用的 boundary

`INT4_PACKED_SIMD2_FULL` 目前對應的 ROM boundary：

```text
7,91,145,832,886,1497,9657,20276,22922,26464,26728,27060
```

這組 boundary 已同步寫入 `TOP_interface.v` 的 `INT4_PACKED_SIMD2_FULL` parameter。

#### Cycle 改善

| 版本 | Iter 0 | Iter 1 | Iter 2 | Iter 3 | Iter 4 | 平均 |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| pruning 前 `INT4_PACKED_SIMD2_FULL` | 105009 | 105760 | 100059 | 104691 | 104791 | 約 104062 |
| pruning 後 threshold=0.9 | 81009 | 80539 | 77782 | 79798 | 80226 | 約 79871 |

目前前 5 筆平均 cycle 約下降 `23%`。ROM words 從 `34314` 降到 `27060`，約減少 `21%`。

驗證指令：

```bash
cd FPGA_design/sim/verilator
make clean
make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7
```

結果：

```text
Iter 0: result=5 golden=5 (81009 cycles) OK
Iter 1: result=0 golden=0 (80539 cycles) OK
Iter 2: result=4 golden=4 (77782 cycles) OK
Iter 3: result=1 golden=1 (79798 cycles) OK
Iter 4: result=9 golden=9 (80226 cycles) OK

=== Summary: 5/5 passed (100%) ===
```

注意：`threshold=0.9` 目前只做 5 筆 smoke test。若要拿去報告，建議下一步跑 `ITERS=100`，確認準確率與平均 cycle。
## BOYU_IN4_IN8_hardware：INT4x2 2-bank Psum_Spad 初版

### 為什麼要做 banked Psum

目前 `INT4_PACKED_SIMD2_FULL` 已經能把兩筆 INT4 weight pack 成一筆 ROM/SPad entry，但如果 `count0 != count1`，lane0 和 lane1 要累加到不同的 psum index。原本 `Psum_Spad` 只有一組 read/write port，所以 lane1 必須多跑一段 serial write-back：

```text
READ_LANE1_PSUM -> DO_MAC_LANE1 -> WRITE_BACK_LANE1
```

這會讓 packed INT4 的 cycle 改善被吃掉。因此這一版先做 2-bank Psum：若 lane0/lane1 的 psum index 不在同一個 bank，就同 cycle 寫回；若衝突，仍保留 serial fallback。

### packed ROM bank conflict 統計

目前使用的 ROM：

```text
FPGA_design/test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED_SIMD2_FULL.txt
```

目前 boundary：

```text
7,91,145,832,886,1497,9657,20276,22922,26464,26728,27060
```

| range | total entries | lane1 valid | 2-bank conflict | 2-bank conflict | 4-bank conflict |
| --- | ---: | ---: | ---: | ---: | ---: |
| conv1 data | 84 | 0 | 0 | 0.00% | 0.00% |
| conv2 later data | 611 | 0 | 0 | 0.00% | 0.00% |
| fc1 data | 10619 | 5775 | 1473 | 25.51% | 0.00% |
| fc2 data | 3542 | 1946 | 419 | 21.53% | 0.00% |
| fc3 data | 332 | 157 | 35 | 22.29% | 0.00% |
| all | 15188 | 7878 | 1927 | 24.46% | 0.00% |

結論：2-bank 已經能讓約 75.54% 的有效 lane1 避免 serial write-back。4-bank 雖然在這份資料中衝突率是 0%，但硬體成本較高，所以第一版先採用 2-bank。

### RTL 變更

| 檔案 | 變更 |
| --- | --- |
| `FPGA_design/src/PE_Cluster/PE/SPad/Psum_Spad.v` | 新增 `Psum_Spad_Banked`，保留原本 `Psum_Spad`。 |
| `FPGA_design/src/PE_Cluster/PE/Processing_Element_core.v` | 在 `INT4_PACKED_SIMD2_FULL` 下改用 banked Psum path。 |

2-bank mapping：

```text
bank = psum_idx[0]
addr = psum_idx[4:1]
```

行為：

| 情況 | 行為 |
| --- | --- |
| lane1 無效 | 只寫 lane0，等同原本行為 |
| lane1 有效且 bank 不衝突 | lane0/lane1 同 cycle 寫回兩個 bank |
| lane1 有效但 bank 衝突 | 保留原本 serial lane1 write-back fallback |
| default INT8 mode | 繼續走原本 `Psum_Spad` |

### 驗證結果

指令：

```bash
cd FPGA_design/sim/verilator
make clean
make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7
```

結果：

```text
Iter 0: result=5 golden=5 (80572 cycles) OK
Iter 1: result=0 golden=0 (80123 cycles) OK
Iter 2: result=4 golden=4 (77333 cycles) OK
Iter 3: result=1 golden=1 (79347 cycles) OK
Iter 4: result=9 golden=9 (79798 cycles) OK

=== Summary: 5/5 passed (100%) ===
```

與 2-bank 前 threshold=0.9 版本比較：

| iter | before banked | after 2-bank Psum | saved cycles |
| ---: | ---: | ---: | ---: |
| 0 | 81009 | 80572 | 437 |
| 1 | 80539 | 80123 | 416 |
| 2 | 77782 | 77333 | 449 |
| 3 | 79798 | 79347 | 451 |
| 4 | 80226 | 79798 | 428 |

目前改善幅度有限，原因是總 cycle 仍包含資料載入、convolution、controller overhead；2-bank 只會省掉「lane1 有效且 bank 不衝突」的 serial write-back cycle。
## Cycle breakdown：目前瓶頸分析

這段是為了確認 `INT4_PACKED_SIMD2_FULL` 為什麼 cycle 沒有大幅下降。新增的計數器都包在 `ifdef VERILATOR` 裡，不會進 Vivado synthesis。

> 注意：cycle breakdown 計數器只用來 debug / 分析瓶頸。最後要交 Vivado 或做面積比較前，必須確認這些計數器沒有進 synthesis；最保守作法是把 `TOP_controller.v` 與 `Processing_Element_core.v` 裡的 `ifdef VERILATOR` debug counter 區塊刪掉或保留但確認 Vivado 沒有定義 `VERILATOR` macro。

### 統計位置

| 檔案 | 統計內容 |
| --- | --- |
| `FPGA_design/src/TOP/TOP_controller.v` | ifmap load、GLB load、PE load、conv/fc MAC、psum acc、output cycles |
| `FPGA_design/src/PE_Cluster/PE/Processing_Element_core.v` | lane1 serial fallback、bank conflict、banked parallel event |

### 測試指令

```bash
cd FPGA_design/sim/verilator
make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7
```

結果：

```text
=== Summary: 5/5 passed (100%) ===
```

### TOP-level cycle breakdown

| iter | ifmap load | GLB load | PE load weight/iact | conv MAC | fc1 MAC | fc2 MAC | fc3 MAC | psum acc | output | total |
| ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| 0 | 784 | 34374 | 38 | 32589 | 2183 | 463 | 148 | 560 | 9431 | 80572 |
| 1 | 784 | 34374 | 38 | 32156 | 2099 | 526 | 153 | 560 | 9431 | 80123 |
| 2 | 784 | 34374 | 38 | 29448 | 1965 | 562 | 169 | 560 | 9431 | 77333 |
| 3 | 784 | 34374 | 38 | 31133 | 2252 | 605 | 168 | 560 | 9431 | 79347 |
| 4 | 784 | 34374 | 38 | 31817 | 2117 | 552 | 123 | 560 | 9431 | 79798 |

補充：

- `mem_read=27844`，代表從 sparse weight ROM 讀資料的 cycles。
- `GLB load=34374` 是目前固定且很大的 overhead。
- `conv MAC` 約 29k-32k cycles，是另一個主要瓶頸。
- FC MAC 加總只有約 2.6k-3.0k cycles，單純優化 FC SIMD 很難讓總 cycle 少 1/4 或 1/2。

### lane1 / banked Psum 統計

iter0、36 個 PE instance 聚合：

```text
lane1_serial_cycles=2721
bank_conflict_events=907
lane1_parallel_events=2679
```

iter4、36 個 PE instance 聚合：

```text
lane1_serial_cycles=2541
bank_conflict_events=847
lane1_parallel_events=2690
```

### 結論

目前 2-bank Psum 的確有讓部分 lane1 不用 serial write-back，但 lane1 fallback 不是總 cycle 的最大宗。若報告目標是顯著 cycle 下降，下一步要優先處理：

1. `GLB load`，目前約 34k cycles。
2. `conv MAC`，目前約 29k-32k cycles。
3. sparse ROM read / data movement，`mem_read` 約 27.8k cycles。

也就是說，若只做 FC/Later INT4 SIMD，cycle 改善會被整體 load 與 conv 主流程稀釋。要有顯著下降，SIMD 需要擴展到 convolution 或資料載入 schedule 也要同步減少。

### 下一步優化優先順序

| 優先順序 | 方向 | 為什麼優先 | 準確率風險 | 面積風險 |
| ---: | --- | --- | --- | --- |
| 1 | 減少 `GLB load` / `mem_read` cycles | 目前固定吃約 34k / 27.8k cycles，是最大瓶頸之一 | 低，只要資料格式等價 | 低到中 |
| 2 | 將 INT4x2 packing 擴展到 convolution weight path | `conv MAC` 約 29k-32k cycles，比 FC 大很多，SIMD 才會有明顯效果 | 中，需要確認 conv 的 former/later 角色與 count width | 中 |
| 3 | 讓 packed ROM / controller schedule 真的少讀一半 logical weight | 如果只 PE 多算，但 ROM/GLB/controller 還是走原本流程，cycle 不會大降 | 低到中 | 低 |
| 4 | 保留 2-bank Psum 作為 FC / later lane1 加速 | 已驗證可行，但只省約 400 cycles/iter | 低 | 中 |
| 5 | pruning / threshold | cycle 會降，但 100 筆已掉到 96%，不適合作為主結果 | 高 | 低 |

目前比較值得做的是第 1 和第 2 點：先處理資料載入與 convolution 主流程。若要在報告中說「因為 SIMD 所以 cycle 顯著下降」，SIMD 必須影響 `conv MAC` 或 `mem_read/GLB load`，不能只影響 FC 的 lane1 fallback。

## Packed INT4 read reduction 與 conv SIMD 可行性檢查

### packed INT4 是否真的減少 ROM / GLB read

目前 `INT4_PACKED_SIMD2_FULL` 使用 threshold=0.9 的 packed/pruned ROM：

```text
ROM words = 27060
boundary = 7,91,145,832,886,1497,9657,20276,22922,26464,26728,27060
```

cycle breakdown：

```text
mem_read = 27844 = ROM words 27060 + ifmap 784
GLB load = 34374
```

所以 packed/pruned ROM 的確會降低 `mem_read`。相較 no-prune `INT4_PACKED_SIMD2_FULL` 的 `34314` words，目前少：

```text
34314 - 27060 = 7254 words
```

但要注意：這個下降包含 pruning 的效果；100 筆測試曾掉到 `96/100`，所以不適合作為「準確率不變」的主結果。

### conv weight path 的限制

目前 conv / FC 對 Former/Later 的角色由 runtime mode 決定：

```verilog
int4_former_weight_mode_wire = int4_weight_mode & ctrl_conv_flag;
int4_later_weight_mode_wire  = int4_weight_mode & ctrl_fc_flag;
```

也就是：

| layer type | weight path |
| --- | --- |
| convolution | Former path |
| fully-connected | Later path |

Former path 的 count width 是 5-bit，所以完整 INT4x2 entry 應該是：

```text
{w1[3:0], count1[4:0], w0[3:0], count0[4:0]} = 18-bit
```

但是目前 sparse ROM word 是 16-bit。實際統計目前 ROM：

| section | entries | max count | count > 15 | 判斷 |
| --- | ---: | ---: | ---: | --- |
| conv1 data | 84 | 15 | 0 | 理論上可塞入 16-bit，但資料量太小 |
| conv2 former data | 687 | 24 | 226 | 需要 5-bit count，不能安全塞入 16-bit |
| conv2 later data | 611 | 24 | 215 | 需要 5-bit count，不能安全塞入 16-bit |

結論：不能直接在現有 16-bit ROM word 下，把 conv Former weight path 改成完整 INT4x2。若硬壓成 4-bit count，會截掉 count[4]，導致 psum index 錯誤。

### 若要繼續做 conv SIMD，可能方向

| 方案 | 說明 | 優點 | 風險 |
| --- | --- | --- | --- |
| ROM width 16 -> 18 | ROM sparse weight 改成 18-bit，完整承載 Former INT4x2 | 格式最乾淨，正確性最好控 | Vivado ROM IP / COE / TOP_interface / generator 都要同步改，area 可能增加 |
| 兩個 16-bit word 承載一筆 18-bit packed conv entry | 不改 ROM width，但用兩個 word 裝一筆 packed entry | 少改 ROM IP | 不一定減少 mem_read，controller schedule 更複雜 |
| 混合格式：count <= 15 才 pack | count 可放 4-bit 時 pack，count > 15 fallback | 保留 16-bit ROM | 需要 tag/格式判斷，效益可能有限 |

目前不建議直接硬改 conv RTL；要先決定是否接受 ROM width 擴到 18-bit，否則很容易為了 SIMD 破壞正確性。

### 本次相容性修正

修正 `Processing_Element_core.v`：非 `INT4_PACKED_SIMD2_FULL` 編譯模式補上 default lane1 control wires，避免其他模式找不到 `later_lane1_serial_valid_wire`。

主模式驗證：

```bash
cd FPGA_design/sim/verilator
make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7
```

結果：

```text
Iter 0: result=5 golden=5 (80572 cycles) OK
Iter 1: result=0 golden=0 (80123 cycles) OK
Iter 2: result=4 golden=4 (77333 cycles) OK
Iter 3: result=1 golden=1 (79347 cycles) OK
Iter 4: result=9 golden=9 (79798 cycles) OK

=== Summary: 5/5 passed (100%) ===
```
## 2026-06-12 INT4_PACKED_SIMD2_FULL cycle 分析

本次分析來源是 `make sim ITERS=100 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7` 的中斷前 log。結果顯示目前 INT4 支援已經能降低部分 cycle，但主要效益來自 pruning / sparse stream 變短，不是完整 SIMD2 帶來的加速。

| 項目 | 統計 |
| --- | --- |
| 測試筆數 | 100 |
| 通過 | 93 |
| 失敗 | 7 |
| 平均 cycle | 79,685 |
| 最小 / 最大 cycle | 74,062 / 82,548 |
| 失敗 iter | 18, 29, 42, 54, 70, 80, 96 |

cycle breakdown 平均值如下：

| 區段 | 平均 cycle | 說明 |
| --- | ---: | --- |
| ifmap load | 784 | 每張圖固定 784 byte input |
| GLB load | 34,374 | 固定成本，仍是最大瓶頸之一 |
| PE load weight/iact | 38 | 很小，不是瓶頸 |
| conv MAC | 31,678 | 主要運算瓶頸，隨 input sparsity 變動 |
| fc1 MAC | 2,111 | FC 佔比小 |
| fc2 MAC | 552 | FC 佔比小 |
| fc3 MAC | 155 | FC 佔比小 |
| psum accumulate | 560 | 固定成本 |
| output | 9,431 | 固定成本，仍佔一段 cycle |
| mem read | 27,844 | 固定讀取量，表示目前 ROM stream 長度仍沒有足夠下降 |

結論：

1. 目前 cycle 沒有明顯優於 develop，主因是瓶頸在 `GLB load`、`mem_read`、`conv MAC`，不是 FC。
2. 目前 INT4 SIMD2 主要動到 FC / Later path，但 FC 總共只有約 2.8k cycle，因此即使 FC 完全加速，總 cycle 下降也有限。
3. threshold pruning 讓 cycle 接近 8 萬，但 100 筆準確率降到 93%，不能作為最終準確版本。
4. 如果要有報告上明顯的 cycle 改善，下一步必須處理 convolution weight path 或資料載入流程，而不是只改 FC PE。
5. 若目標是多張圖片 throughput，可以考慮 weight persistent / preload once：weight 不要每張圖都重新從 ROM 載入。這可能大幅降低每張圖的 `mem_read` / `GLB load`，但這是 throughput 改善，不一定是單張 latency 改善。
6. 若目標是單張 inference latency，必須讓 INT4x2 packing 真正減少 convolution sparse stream 與 controller schedule。這需要處理 Former path 的 18-bit 格式或重新設計 ROM stream 格式。
## 2026-06-12 conv INT4x2 packed stream 可行性檢查

目標是讓單張 inference latency 明顯下降，因此評估把 `INT4_PACKED_SIMD2_FULL` 從 FC / Later path 擴展到 convolution / Former weight path。

### 檢查結果

| 項目 | 結論 |
| --- | --- |
| 18-bit Former packed entry | 格式本身可行：`{w1[3:0], count1[4:0], w0[3:0], count0[4:0]}` |
| 16-bit ROM 是否足夠 | 不足。Former count 是 5-bit，兩個 INT4 lane 需要 18-bit |
| 單純 ROM 16 -> 18 是否會直接降 cycle | 不會。它只解決資料格式，還要 controller / PE schedule 真的少走 logical weight |
| 是否能像 FC 一樣直接 `iact*w0 + iact*w1` | 不能直接套用。conv 時 Former 是 weight，Former count 會決定要讀哪個 Later/iact |
| count0 != count1 時 | 通常代表 w0 / w1 需要不同 iact。若只有一個 Later read port，仍需要第二次讀 iact 或 serial fallback |
| area 風險 | ROM/GLB/router/Former FIFO/Former Spad data path 都要從 13/16-bit 擴到 18-bit，area 會增加 |

### 重要判斷

目前 FC / Later INT4x2 可以共用同一個 iact，是因為 packed 的兩個 weight 都在 Later weight path，psum index 主要由 `count0/count1` 控制。

但 convolution path 不同：

- conv 時 `Former` 存 weight。
- `Later` 存 iact。
- Former 的 `count[4:0]` 會影響 Later data 的讀取位置。
- 因此若 packed 的 `count0 != count1`，lane0 / lane1 通常不是共用同一個 iact。

所以若要真正讓 conv INT4x2 降低 cycle，有三種可能：

| 方案 | cycle 潛力 | area 風險 | 說明 |
| --- | ---: | ---: | --- |
| 只 pack `count0 == count1` | 很低 | 低 | 同一 column 內通常不會有重複 count，幾乎沒有 pair |
| 兩個 cycle 讀 Later/iact | 中低 | 低中 | ROM/GLB load 可能少，但 MAC 仍接近 serial，cycle 不一定大降 |
| 雙 Later read port / banked Later Spad | 高 | 高 | 才能同 cycle 取兩個 iact，真正支援 conv SIMD2，但會增加 area 與 timing 風險 |

### 目前建議

不要只做 `ROM width 16 -> 18` 後就宣稱 SIMD 加速。這只會讓格式正確，cycle 不一定下降。

若要符合「準確率不要掉、area 不要惡化太多、cycle 明顯下降」，下一步應先量化：

1. conv Former stream 內可被安全 packing 的比例。
2. `count0 == count1` pair 數量。
3. 若允許 `count0 != count1`，需要額外 Later read 的比例。
4. 雙 Later read / banked Later Spad 可能增加多少 storage / mux / control。

只有在 packing 後能真的少掉 controller schedule 中的 logical weight 處理，才有機會讓單張 latency 明顯下降。
## SPEC 文件入口

目前 INT4 / INT8 hardware 的完整整理請先看 [`SPEC.md`](SPEC.md)。該文件用比較適合組員閱讀的方式整理了資料格式、module 修改、simulation 指令、目前驗證結果與後續瓶頸。
