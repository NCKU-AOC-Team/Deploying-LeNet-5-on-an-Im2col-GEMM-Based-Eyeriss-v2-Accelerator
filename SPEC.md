# BOYU INT4 / INT8 Hardware SPEC

這份文件整理目前 BOYU branch 上針對 INT4 / INT8 共用硬體的修改內容，目標是讓組員能快速理解：

1. 原版 RTL 吃哪些資料。
2. INT4 權重目前如何表示與進入 PE。
3. 各 module 改了什麼。
4. 目前支援哪些 simulation command。
5. 現在做到哪裡、瓶頸在哪裡、後續若要真正加速要怎麼做。

目前重點：**現有版本不是原生 INT4 multiplier，而是 INT4 權重先 sign-extend 成 INT8，再進入原本的 signed INT8 MAC 路徑。**

---

## 1. 原版 RTL / Verilator 使用的資料

Verilator 入口在：

```text
FPGA_design/sim/verilator/
```

原版指令：

```bash
cd FPGA_design/sim/verilator
make clean
make sim ITERS=5
```

實際執行大致等價於：

```bash
./obj_dir/VTOP_integration \
  --iters 5 \
  --start 0 \
  --dram ../../test/tb/TOP_test/MEM/DRAM.txt \
  --golden ../../test/tb/TOP_test/MEM/GOLDEN.txt
```

### 1.1 原版資料來源

| 類別 | 檔案 / module | 說明 |
| --- | --- | --- |
| input image / iact | `FPGA_design/test/tb/TOP_test/MEM/DRAM.txt` | 每張 MNIST image 的 input activation，前 784 bytes 為一張圖 |
| golden label | `FPGA_design/test/tb/TOP_test/MEM/GOLDEN.txt` | 每張圖的 expected class label |
| sparse weight COE | `FPGA_design/Vivado/PYNQ_Z2/PYNQ_Z2.ip_user_files/mem_init_files/ROM_sparse_COE.coe` | 原版 INT8 sparse weight ROM 初始化檔 |
| Verilator runtime ROM | `FPGA_design/sim/verilator/rom_sparse_weight.mem` | Makefile 從 COE 轉成 `$readmemh` 可讀格式，屬於 generated file |
| C++ testbench | `FPGA_design/sim/verilator/sim_main.cpp` | reset DUT、送 DRAM/golden、等待 `final_out_valid`、比對 result |
| RTL top | `FPGA_design/src/TOP/TOP_integration.v` | Verilator top module，Makefile 使用 `--top-module TOP_integration` |
| ROM behavioral model | `FPGA_design/sim/verilator/bram_behavioral.v` | 用 Verilog behavioral BRAM 取代 Vivado IP，含 `ROM_sparse_weight` |

### 1.2 TOP_interface 資料分流

`TOP_interface.v` 用 `MEM_read_addr` 分辨讀 ifmap 還是 weight：

| 條件 | 來源 | 資料 |
| --- | --- | --- |
| `MEM_read_addr < 784` | `DRAM.txt` | input activation / ifmap |
| `MEM_read_addr >= 784` | `ROM_sparse_weight` | sparse weight stream |

可替換的 Makefile 參數：

| 參數 | 用途 |
| --- | --- |
| `DRAM=...` | 換 input image / activation |
| `GOLDEN=...` | 換 golden label |
| `COE_FILE=...` | 換 sparse weight ROM |

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

## 2. Sparse Weight / CSC Stream 格式

原版 weight 不是 dense array，而是 CSC sparse stream。ROM 裡面會依序放各 layer 的：

```text
address stream
data/count stream
```

controller 透過 hard-coded boundary 判斷目前讀到哪一段。

### 2.1 原版 INT8 container

原版資料格式大致是：

```text
Former data entry = {int8_data[7:0], count[4:0]} = 13-bit
Later  data entry = {int8_data[7:0], count[3:0]} = 12-bit
```

在 ROM / bus 中會用 16-bit container 包住這些資料。

### 2.2 INT4 sign-extend as INT8

目前有一條穩定路徑是：

```text
INT8 weight
-> 量化成 signed INT4 [-8, 7]
-> INT4 bit[3] 作為 sign bit
-> sign-extend 成 signed INT8
-> 放回原本 INT8 container / CSC stream
-> PE 仍用 signed INT8 * signed INT8 MAC
```

這條路的重點是：**資料值變成 INT4 範圍，但硬體資料寬度仍看起來像 INT8。**

常用指令：

```bash
make clean
make sim ITERS=5 INT4_REGEN=1 INT4_REQUANT=14_7
```

曾測結果：

```text
make sim ITERS=1000 INT4_REGEN=1 INT4_REQUANT=14_7
=== Summary: 998/1000 passed (99.8%) ===
```

失敗筆數：

| Iter | result | golden |
| --- | ---: | ---: |
| 224 | 7 | 1 |
| 418 | 5 | 8 |

---

## 3. 目前 INT4 / INT8 Hardware 原理

目前 branch 的硬體方向是讓同一份 RTL 可以支援：

1. 原版 INT8 mode。
2. INT4 weight mode。
3. INT4x2 packed storage / partial SIMD experiment。

### 3.1 Runtime control signal

新增概念：

```verilog
input int4_weight_mode;
```

在 TOP 裡面依照 layer 類型分出：

```verilog
int4_former_weight_mode = int4_weight_mode & ctrl_conv_flag;
int4_later_weight_mode  = int4_weight_mode & ctrl_fc_flag;
```

意義：

| mode | 作用 |
| --- | --- |
| `int4_former_weight_mode` | convolution 時 Former Spad 存 weight，所以啟用 Former INT4 decode |
| `int4_later_weight_mode` | FC 時 Later Spad 存 weight，所以啟用 Later INT4 decode |

### 3.2 PE 內部目前是不是原生 INT4？

不是。

目前 PE 內部仍是：

```text
signed INT8 iact * signed INT8 weight
```

INT4 權重會先 decode：

```verilog
{{4{weight_4bit[3]}}, weight_4bit[3:0]}
```

也就是把 INT4 sign-extend 成 signed INT8，再送進乘法器。

### 3.3 SPad 固定格式

目前 SPad 不再依 INT4 / INT8 mode 變大變小，而是固定成能同時容納兩種格式的寬度。

| SPad | 原版寬度 | 目前寬度 | 用途 |
| --- | ---: | ---: | --- |
| Former_Data_Spad | 13-bit | 18-bit | conv 時存 weight；FC/depthwise 時存 iact |
| Later_Data_Spad | 12-bit | 16-bit | conv 時存 iact；FC/depthwise 時存 weight |
| Psum_Spad | 21-bit | 21-bit | psum accumulation，另有 2-bank experimental path |

Former fixed format：

```text
INT8 mode:
[17:13] unused / 0
[12:5]  int8_data
[4:0]   count

INT4x2 mode:
[17:14] int4_w1
[13:9]  count1
[8:5]   int4_w0
[4:0]   count0
```

Later fixed format：

```text
INT8 mode:
[15:12] unused / 0
[11:4]  int8_data
[3:0]   count

INT4x2 mode:
[15:12] int4_w1
[11:8]  count1
[7:4]   int4_w0
[3:0]   count0
```

---

## 4. Module 修改整理

### 4.1 `FPGA_design/sim/verilator/Makefile`

主要改動：

| 改動 | 說明 |
| --- | --- |
| 拆分 trace / no-trace build | `make sim` 不開 VCD trace；`make trace` 才開 trace |
| 新增 INT4 mode flags | `INT4_REGEN`、`INT4_PACKED`、`INT4_PACKED_TWO_LANE`、`INT4_PACKED_SIMD2`、`INT4_PACKED_SIMD2_FULL` |
| 新增 requant define | `INT4_REQUANT=14_7` 會產生 `+define+INT4_REQUANT_14_7` |
| 自動選 COE_FILE | 依照 INT4 mode 選對應 ROM COE |
| runtime mode argument | `INT4_PACKED_SIMD2_FULL=1` 時會傳 `--int4-weight-mode` |

常用指令見第 7 節。

### 4.2 `FPGA_design/sim/verilator/sim_main.cpp`

主要改動：

| 改動 | 說明 |
| --- | --- |
| 支援 `--int4-weight-mode` | Verilator 執行時可打開 RTL 的 `int4_weight_mode` |
| trace guarded by `VM_TRACE` | 避免 no-trace build 仍編譯 trace 物件 |
| 呼叫 `dut->final()` | 讓 Verilator-only debug final block 可以印 occupancy / cycle counters |

### 4.3 `FPGA_design/sim/verilator/bram_behavioral.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| Behavioral ROM / BRAM | Verilator 用行為模型取代 Vivado IP |
| `ROM_sparse_weight` | 從 `rom_sparse_weight.mem` `$readmemh` 載入 sparse weight |
| Verilator-only counters | 可在 `OCC=1` 或 debug mode 下統計 BRAM occupancy，不應進 synthesis |

注意：debug counter 包在 `ifdef VERILATOR` 或相關 define 內，正式 Vivado synthesis 前應確認沒有定義這些 debug macro。

### 4.4 `FPGA_design/src/TOP/TOP_integration.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| 新增 `int4_weight_mode` | 從 Verilator / top-level 傳進 `TOP_interface` |

### 4.5 `FPGA_design/src/TOP/TOP_interface.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| 新增 `int4_weight_mode` input | 控制 INT4 decode mode |
| 新增 `BOYU_TOP_WEIGHT_STREAM_RANGE` | weight stream container 可用 macro 控制寬度 |
| INT4 ROM unpack | 依照 `INT4_PACKED_*` mode 解出 lane0/lane1 或 sign-extend value |
| boundary parameters | 為不同 ROM 格式提供不同 `ROM_WEIGHT_*_END` boundary |
| `weight_data_in` 寬度擴充 | 支援 INT4 packed container 進 TOP |

重要限制：

目前真正要做 conv INT4x2 packed stream 時，Former 需要 18-bit entry。單純改 TOP_interface 不夠，還必須把 TOP/GLB/router/PE weight data path 一路支援到 18-bit。

### 4.6 `FPGA_design/src/TOP/TOP.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| 新增 `int4_weight_mode` input | 從 top 傳進 controller/cluster/PE path |
| 產生 mode wire | `int4_former_weight_mode = int4_weight_mode & ctrl_conv_flag`，`int4_later_weight_mode = int4_weight_mode & ctrl_fc_flag` |
| 傳遞到 PE cluster | 讓 PE 知道目前 Former/Later 哪邊是 INT4 weight |
| Verilator cycle counters | 統計 load/MAC/output/mem_read 等區段 cycle |

Verilator-only cycle breakdown 範例：

```text
[cycle_breakdown] ifmap_load=784 glb_load=34374 pe_load_weight_iact=38 conv_mac=31678 fc1_mac=2111 fc2_mac=552 fc3_mac=155 psum_acc=560 output=9431 mem_read=27844
```

### 4.7 `FPGA_design/src/TOP/TOP_controller.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| 低風險 arithmetic cleanup | 部分常數乘法改成 shift/add |
| 重複條件簡化 | 移除結果相同的 ternary |
| Verilator cycle counters | 加入區段 cycle 統計，幫助分析瓶頸 |

沒有改動的高風險區域：

| 未改區域 | 原因 |
| --- | --- |
| FSM transition | 改錯會直接影響 layer schedule |
| read/write address schedule | 會影響 sparse stream boundary |
| `csc_en` / `csc_en_fin` timing | 之前已證明容易導致 timeout / 全 0 result |

### 4.8 `FPGA_design/src/Cluster_Group/Cluster_Group.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| 支援 `BOYU_LATER_STREAM_RANGE` | Iact/Later-related data path 可擴到 16-bit |
| 傳遞 widened data | 配合 Later INT4x2 fixed format |
| router / GLB / PE connection cleanup | 讓資料寬度較一致 |

目前 weight router path 仍有不少 13-bit weight data 宣告；若要完整 conv 18-bit path，這部分仍要繼續擴。

### 4.9 `FPGA_design/src/Cluster_Group/Cluster_Group_array.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| 產生式 / wiring cleanup | 配合 ShunWei branch 的 cluster array cleanup |
| 傳遞 int4 mode signal | 讓 cluster/PE 可以知道 INT4 Former/Later mode |
| 支援 widened Later stream | 配合 `BOYU_LATER_STREAM_RANGE` |

### 4.10 `FPGA_design/src/GLB_Cluster/GLB_Cluster.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| Iact path 支援 `BOYU_LATER_STREAM_RANGE` | 因 conv 時 Later side 是 iact，所以 Later data path 需要能支援固定 16-bit |
| weight path pass-through | GLB weight address/data 保持 handshake |

注意：GLB weight data path 目前仍多處是 13-bit，完整 conv 18-bit packed stream 仍需擴這條 path。

### 4.11 `FPGA_design/src/GLB_Cluster/Iact_SRAM_Bank.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| Iact data bus macro 化 | 使用 `BOYU_LATER_STREAM_RANGE` 支援 16-bit Later stream |

### 4.12 `FPGA_design/src/GLB_Cluster/Iact_data_SRAM.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| SRAM data width macro 化 | 使用 `BOYU_LATER_STREAM_RANGE` |
| Verilator behavioral RAM 同步寬度 | 避免 simulation truncation |

### 4.13 `FPGA_design/src/Router_Cluster/Iact_Router.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| data width macro 化 | 使用 `BOYU_LATER_STREAM_RANGE` |
| mux cleanup | 共用 `data_in_sel` / `data_out_sel` decode wire |
| valid / ready cleanup | 將重複 case 改成較簡單的 continuous assignment |

### 4.14 `FPGA_design/src/Router_Cluster/Weight_Router.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| select decode cleanup | 新增 `select_horiz_in_wire`、`route_hor_cast_wire` |
| mux cleanup | 減少重複比較 |

目前限制：

```text
Weight_Router data path 目前仍是 [12:0]
```

若要讓 conv Former INT4x2 使用 18-bit packed data，這個 module 也要改成 parameterized width 或 macro width。

### 4.15 `FPGA_design/src/Router_Cluster/Psum_Router.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| select decode cleanup | 共用 mux select 判斷 |
| 修正 internal data width | `internal_data` 改為 signed `[20:0]`，避免 psum data 被隱含截成 1-bit |

### 4.16 `FPGA_design/src/Router_Cluster/Router_Cluster.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| Iact path widened | 配合 `BOYU_LATER_STREAM_RANGE` |
| router connection cleanup | 支援 widened Iact/Later stream |

目前限制：

```text
weight data path still mostly [12:0]
```

這是 conv 18-bit Former SIMD2 的主要阻礙之一。

### 4.17 `FPGA_design/src/PE_Cluster/PE_Cluster.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| weight data input widened for Later path | 使用 `BOYU_LATER_STREAM_RANGE` 傳入 PE weight/Later data |
| 傳遞 `int4_former_weight_mode` | conv weight mode |
| 傳遞 `int4_later_weight_mode` | FC weight mode |

### 4.18 `FPGA_design/src/PE_Cluster/PE/Processing_Element.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| Later FIFO data width 改為 16-bit | 支援 Later INT4x2 fixed format |
| 傳遞 int4 mode 到 PE core | `int4_former_weight_mode` / `int4_later_weight_mode` |
| 保持 Former FIFO 13-bit input | 目前 Former 18-bit 是在 core 寫入 Former Spad 時補上高位 |

注意：若要完整 conv 18-bit packed stream，Former FIFO / interface 也要重新檢查，不能只在 core 補高位。

### 4.19 `FPGA_design/src/PE_Cluster/PE/Processing_Element_core.v`

這是 INT4 hardware 的主要修改點。

主要改動：

| 改動 | 說明 |
| --- | --- |
| 新增 `int4_former_weight_mode` / `int4_later_weight_mode` | runtime 決定 Former/Later 是否用 INT4 decode |
| Former decode | INT4 mode 下從 Former Spad entry 解出 4-bit weight 並 sign-extend 成 INT8 |
| Later decode | INT4x2 mode 下從 Later Spad entry 解出 lane0/lane1 weight/count |
| MAC path | 目前仍是 signed INT8 multiplier；INT4 先 sign-extend 成 INT8 |
| lane1 path | `INT4_PACKED_SIMD2_FULL` 下支援 lane1 product / psum index |
| 2-bank Psum support | 若 lane0/lane1 psum bank 不衝突，可平行處理；衝突時 serial fallback |
| Verilator counters | 統計 lane1 serial / bank conflict / parallel events |

目前 MAC 概念：

```text
lane0_weight_4bit -> sign extend -> signed INT8
lane1_weight_4bit -> sign extend -> signed INT8
former/later iact  -> signed INT8

product0 = iact * lane0_weight
product1 = iact * lane1_weight
```

目前不是原生：

```text
INT8 multiplier split into two INT4 lanes
```

而是：

```text
INT4 values are sign-extended and use INT8-style multiplication path
```

### 4.20 `FPGA_design/src/PE_Cluster/PE/SPad/Former_data_Spad.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| data entry 固定 18-bit | 支援 INT8 / INT4x2 兩種格式 |
| 新增 `int4_weight_mode` | runtime 決定解碼語意 |
| behavioral RAM 寬度同步 | simulation 不截斷資料 |

格式：

```text
INT8 mode:
[17:13] unused
[12:5]  int8_data
[4:0]   count

INT4x2 mode:
[17:14] w1
[13:9]  count1
[8:5]   w0
[4:0]   count0
```

### 4.21 `FPGA_design/src/PE_Cluster/PE/SPad/Later_data_Spad.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| data entry 固定 16-bit | 支援 INT8 / INT4x2 兩種格式 |
| 新增 `int4_weight_mode` | runtime 決定 decode |
| behavioral RAM 寬度同步 | simulation 不截斷資料 |

格式：

```text
INT8 mode:
[15:12] unused
[11:4]  int8_data
[3:0]   count

INT4x2 mode:
[15:12] w1
[11:8]  count1
[7:4]   w0
[3:0]   count0
```

### 4.22 `FPGA_design/src/PE_Cluster/PE/SPad/Psum_Spad.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| 保留原本 `Psum_Spad` | INT8 / fallback path 可繼續用 |
| 新增 `Psum_Spad_Banked` | INT4x2 experiment 使用 2-bank psum |
| bank mapping | `bank = psum_idx[0]`，`addr = psum_idx[4:1]` |
| conflict fallback | lane0/lane1 同 bank 時走 serial fallback |

目的：

```text
若 lane0/lane1 寫不同 psum bank，可以同 cycle write back。
若 bank conflict，維持正確性，分 cycle 寫回。
```

### 4.23 `FPGA_design/src/PE_Cluster/PE/PE_data_FIFO.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| `ram_style = "distributed"` | 希望小 FIFO 使用 LUTRAM / distributed RAM，降低 FF/LUT 壓力 |

### 4.24 `FPGA_design/src/PE_Cluster/PE/PE_psum_FIFO.v`

主要改動：

| 改動 | 說明 |
| --- | --- |
| `ram_style = "distributed"` | 同上，小 FIFO synthesis hint |

---

## 5. Generator / ROM 檔案

### 5.1 INT4-as-INT8 generator

```text
FPGA_design/tools/generate_int4_as_int8_sparse_rom_from_txt.py
```

用途：

```text
INT8 dense weight txt
-> quantize to signed INT4
-> sign-extend / scale back into INT8 container
-> regenerate CSC sparse ROM
```

### 5.2 INT4 packed generator

```text
FPGA_design/tools/generate_int4_packed_sparse_rom_from_txt.py
```

支援模式：

| flag | 說明 |
| --- | --- |
| default | single-lane INT4，ROM data 只放 lane0 |
| `--two-lane-fc-sideband` | FC/Later lane1 sideband，不縮短 stream |
| `--same-count-simd2` | 只 pack count 相同的 Later entries |
| `--adjacent-simd2-full` | pack adjacent Later entries，count0/count1 可不同 |

目前重要限制：

```text
count_width == 5 的 Former / conv path 仍多數保持 single-lane
```

原因：

```text
Former INT4x2 需要 18-bit:
{w1[3:0], count1[4:0], w0[3:0], count0[4:0]}

現有 ROM word 原本是 16-bit。
```

---

## 6. 目前驗證結果

### 6.1 INT8 baseline

```bash
make clean
make sim ITERS=5
```

曾測：

```text
=== Summary: 5/5 passed (100%) ===
```

### 6.2 INT4 sign-extend as INT8

```bash
make clean
make sim ITERS=1000 INT4_REGEN=1 INT4_REQUANT=14_7
```

曾測：

```text
=== Summary: 998/1000 passed (99.8%) ===
```

### 6.3 INT4 packed SIMD2 full

```bash
make clean
make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7
```

曾測：

```text
=== Summary: 5/5 passed (100%) ===
```

使用者曾測 100 筆：

```bash
make sim ITERS=100 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7
```

在某一版 pruning / packed stream 下：

```text
93/100 passed
average cycle ~= 79,685
```

失敗 iter：

```text
18, 29, 42, 54, 70, 80, 96
```

cycle breakdown 平均：

| 區段 | 平均 cycle | 說明 |
| --- | ---: | --- |
| ifmap load | 784 | 每張圖固定 input 784 bytes |
| GLB load | 34,374 | 最大固定成本之一 |
| PE load weight/iact | 38 | 很小 |
| conv MAC | 31,678 | 主要運算瓶頸 |
| fc1 MAC | 2,111 | FC 佔比小 |
| fc2 MAC | 552 | FC 佔比小 |
| fc3 MAC | 155 | FC 佔比小 |
| psum accumulate | 560 | 固定成本 |
| output | 9,431 | 固定成本 |
| mem read | 27,844 | ROM/DRAM 讀取成本 |

結論：

```text
目前瓶頸仍是 GLB load / mem_read / conv MAC。
只優化 FC / Later SIMD 對總 cycle 幫助有限。
```

---

## 7. 常用 command

以下指令都在：

```bash
cd FPGA_design/sim/verilator
```

### 7.1 原版 INT8 baseline

```bash
make clean
make sim ITERS=5
```

### 7.2 指定從第 N 筆開始 trace

```bash
make trace START=32
```

會產生：

```text
dump.vcd
```

### 7.3 INT4 sign-extend as INT8

```bash
make clean
make sim ITERS=5 INT4_REGEN=1 INT4_REQUANT=14_7
```

100 / 1000 筆：

```bash
make sim ITERS=100 INT4_REGEN=1 INT4_REQUANT=14_7
make sim ITERS=1000 INT4_REGEN=1 INT4_REQUANT=14_7
```

### 7.4 INT4 packed single-lane

```bash
make clean
make sim ITERS=5 INT4_PACKED=1 INT4_REQUANT=14_7
```

### 7.5 INT4 packed SIMD2 full

```bash
make clean
make sim ITERS=5 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7
```

100 筆：

```bash
make sim ITERS=100 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7
```

如果要保留 log：

```bash
set -o pipefail
make sim ITERS=100 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7 2>&1 | tee int4_simd2_full_100.log
```

### 7.6 BRAM occupancy / debug counter

```bash
make clean
make sim ITERS=1 OCC=1 > occ_iter1.log 2>&1
python3 summarize_occ.py occ_iter1.log
```

注意：這些 debug counters 只應該用在 Verilator 分析，正式 synthesis 前要確認沒有被 Vivado 編進硬體。

---

## 8. 目前困境與下一步

### 8.1 為什麼 INT4 目前沒有明顯加速？

目前 INT4 支援主要做到：

```text
INT4 weight storage / stream format
INT4 -> INT8 sign extension
FC / Later path partial SIMD experiment
```

但 cycle 大頭在：

```text
GLB load
mem read
conv MAC
```

FC 只佔約 2k~3k cycles，所以只加速 FC 幫助有限。

### 8.2 為什麼 conv INT4x2 比 FC 難？

FC / Later path 裡，兩個 packed weight 可以比較直接用同一個 iact。

但 conv path 不同：

```text
conv 時 Former 存 weight
conv 時 Later 存 iact
Former count 會影響 Later / iact 的讀取位置
```

因此：

```text
count0 != count1
```

通常代表 lane0 / lane1 需要不同 iact。這時不能直接：

```text
iact * w0 + iact * w1
```

除非確認兩個 lane 對應同一個 iact。

### 8.3 若要單張 latency 大幅下降，真正要做什麼？

可能方向：

| 方向 | 說明 | 風險 |
| --- | --- | --- |
| 18-bit Former packed ROM | 支援 `{w1,count1,w0,count0}` | ROM/TOP/GLB/router/PE bus 都要擴 |
| controller boundary/schedule 更新 | 被 pack 到 lane1 的 logical weight 不應下一 cycle 又被處理 | 很容易造成 timeout 或錯誤 |
| dual Later read / banked Later Spad | count0/count1 不同時可同 cycle 讀兩個 iact | area/timing 風險高 |
| Psum banked / dual write | lane0/lane1 寫不同 psum index 時可平行 write-back | area 增加 |
| weight persistent / preload once | 多張圖共用 weight load，改善 throughput | 改善 throughput，不一定改善單張 latency |

目前最保守的下一步：

```text
先統計 conv Former stream：
1. total logical weights
2. count0 == count1 pair 數量
3. count0 != count1 pair 數量
4. 若做 banked Later Spad，bank conflict rate
5. packing 後可少掉多少 ROM words / controller cycles
```

如果統計結果顯示可 pack 比例高，才值得繼續做 18-bit conv SIMD2。

---

## 9. 給組員的重點摘要

1. 目前 PE 不是原生 INT4 multiplier。
2. INT4 weight 會先 sign-extend 成 INT8，再進 signed INT8 MAC。
3. Former Spad 已固定擴成 18-bit，Later Spad 已固定擴成 16-bit。
4. 目前 INT4 packed SIMD2 對 FC path 有實驗，但 cycle 大頭在 conv 和 load。
5. 要讓單張 latency 明顯下降，必須把 INT4x2 packing 推到 conv path。
6. conv path 需要處理 18-bit Former format、不同 iact read、boundary/controller schedule。
7. 單純把 ROM width 從 16 改成 18 不會自動加速；它只是支援正確格式的前置條件。
8. 正式 Vivado synthesis 前，要移除或確認 Verilator-only debug counter 不會被編進硬體。

