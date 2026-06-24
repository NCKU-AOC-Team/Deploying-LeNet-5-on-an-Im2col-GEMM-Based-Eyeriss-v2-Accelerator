# Processing Element (PE) FSM 與 Lane0/Lane1 Data Dependency 解法

`Processing_Element_core.v`（total line : 583）是單顆 PE 的 datapath 核心，實作一條 **11-state pipeline FSM**
負責將 CSC 稀疏矩陣的運算元取出、做 MAC、以及寫回 partial sum。

在 INT4 packed SIMD2 模式下，一筆 weight 資料同時攜帶兩組權重（lane0 + lane1），
兩條 lane 共享同一筆 activation（former data）但產出兩個不同的 psum。若無 banked psum spad，
兩條 lane 對同一 spad 的 read-modify-write 會產生 **data dependency / bank conflict**——
這就是 lane0/lane1 雙通道與 banked Psum_Spad 要解決的核心問題。

> 模組上下游關係見 [`module_reference.md`](module_reference.md)；瓶頸分析見
> [`pe_utilization_analysis.md`](pe_utilization_analysis.md)。

---

## 1. PE Core 架構總覽

```
                    ┌──────────────────────────────────────────┐
  former_address ──►│ Former_Address_Spad (12×8b)              │
  former_data    ──►│ Former_Data_Spad    (200×18b)             │
                    │                                          │
  later_address  ──►│ Later_Address_Spad  (32×7b)   ──┐       │
  later_data     ──►│ Later_Data_Spad     (100×16b) ──┤       │
                    │                                 │       │
                    │   ┌─────────────────────────┐   │       │
  psum_in ──────────┼──►│   Psum_Spad_Banked      │◄──┤       │
                    │   │  ┌─────────┬─────────┐   │   │       │
                    │   │  │ bank0   │ bank1   │   │   │       │
                    │   │  │(16×21b) │(16×21b) │   │   │       │
                    │   │  └────▲────┴────▲────┘   │   │       │
                    │   │       │         │        │   │       │
                    │   │  lane0  wr/rd  lane1     │   │       │
                    │   │  (always)    (parallel   │   │       │
                    │   │              or serial)  │   │       │
                    │   └─────────────────────────┘   │       │
                    │                                 ▼       │
                    │         ┌──────────────┐                 │
  psum_out ◄────────┼─────────┤  MAC + Acc   │◄────────────────┘
                    │         └──────────────┘
                    └──────────────────────────────────────────┘
```

**Psum_Spad_Banked** 是整顆 PE 的關鍵優化：將 32-entry psum scratchpad 拆成兩個獨立 bank
（bank0 存偶數位址、bank1 存奇數位址），讓 lane0 與 lane1 在「不同 bank」時可以**同一 cycle 並行讀寫**。

---

## 2. FSM 狀態機（11-state pipeline）

```
                            ┌──────┐
                            │ IDLE │ (4'd0)
                            └──┬───┘
                               │ mac_en
                               ▼
                     ┌─────────────────────┐
                     │ READ_FORMER_ADDRESS │ (4'd1)
                     └─────────┬───────────┘
                               │ ~former_zero_col
                               ▼
                     ┌─────────────────────┐
                     │ READ_FORMER_DATA    │ (4'd2)   ←── 前矩陣 (activation) 讀取與計數
                     └─────────┬───────────┘
                               │ ~read_fin
                               ▼
                     ┌─────────────────────┐
                     │ READ_LATER_ADDRESS  │ (4'd3)
                     └─────────┬───────────┘
                               │ ~later_zero_col
                               ▼
                     ┌─────────────────────┐
                     │ READ_LATER_DATA_1   │ (4'd4)   ←── 後矩陣 (weight) 讀取
                     └─────────┬───────────┘
                               │
                               ▼
                     ┌─────────────────────┐
                     │ READ_LATER_DATA_2   │ (4'd5)   ←── SRAM read latency (1 cycle wait)
                     └─────────┬───────────┘
                               │
                               ▼
                     ┌─────────────────────┐
                     │ DO_MAC              │ (4'd6)   ←── lane0 乘法 + psum 累加 (1 cycle)
                     └─────────┬───────────┘
                               │
                               ▼
                     ┌─────────────────────┐
                     │ WRITE_BACK          │ (4'd7)   ←── 寫回 lane0 psum
                     └───┬───────┬─────────┘
                         │       │
            no conflict  │       │  bank conflict (lane0/lane1 撞同一 bank)
               (回主迴圈) │       ▼
                         │  ┌──────────────────┐
                         │  │ READ_LANE1_PSUM  │ (4'd8)   ←── 讀 lane1 對應的舊 psum
                         │  └────────┬─────────┘
                         │           │
                         │           ▼
                         │  ┌──────────────────┐
                         │  │ DO_MAC_LANE1     │ (4'd9)   ←── lane1 乘法 + 累加
                         │  └────────┬─────────┘
                         │           │
                         │           ▼
                         │  ┌──────────────────┐
                         │  │ WRITE_BACK_LANE1 │ (4'd10)  ←── 寫回 lane1 psum
                         │  └────────┬─────────┘
                         │           │
                         └───┬───────┘
                             │
                             ▼
              former_data_read_done? ──► IDLE
              later_data not done?  ──► READ_LATER_DATA_2 (下一筆 weight)
              former col done?      ──► READ_FORMER_ADDRESS (下一欄 activation)
              else                  ──► READ_FORMER_DATA
```

### 狀態說明

| State (值) | 做什麼 | 週期 | 關鍵產出 |
|---|---|---|---|
| **IDLE** (0) | 等待 `mac_en` | — | — |
| **READ_FORMER_ADDRESS** (1) | 讀 former address spad，判定是否為 zero column | 1 | `former_zero_col_wire` |
| **READ_FORMER_DATA** (2) | 讀 former data spad，解出 activation 值與 row index | 1 | `former_matrix_row_wire`, `former_matrix_data_wire` |
| **READ_LATER_ADDRESS** (3) | 讀 later address spad，判定是否為 zero column | 1 | `later_zero_col_wire` |
| **READ_LATER_DATA_1** (4) | 讀 later data spad（觸發 BRAM read） | 1 | — |
| **READ_LATER_DATA_2** (5) | 等待 BRAM read latency | 1 | `later_matrix_data_wire`, `later_matrix_data_lane1_wire` (BRAM output stable) |
| **DO_MAC** (6) | 乘法 (`iact * weight_lane0`) + 讀 psum spad | 1 | `product_reg`, `product_lane1_reg`, `psum_load_reg` |
| **WRITE_BACK** (7) | 寫回 lane0 psum；**判斷 lane1 是否可並行或需序列化** | 1 | 決定進入 lane1 serial 或回主迴圈 |
| **READ_LANE1_PSUM** (8) | 序列化路徑：讀 lane1 對應的舊 psum | 1 | `psum_load_lane1_reg` |
| **DO_MAC_LANE1** (9) | 序列化路徑：lane1 乘法 + 累加 | 1 | `product_reg` (lane1 乘積) |
| **WRITE_BACK_LANE1** (10) | 序列化路徑：寫回 lane1 psum | 1 | — |

---

## 3. Data Dependency 問題

### 問題根源

在 INT4 packed SIMD2 模式中，一筆 16-bit weight 攜帶兩組 INT4 權重：

```
later_data[15:12] = lane1 INT4 weight
later_data[11:8]  = lane1 row/count
later_data[7:4]   = lane0 INT4 weight
later_data[3:0]   = lane0 row/count
```

兩個 lane 共享同一筆 `former_matrix_data_wire`（activation），但：
- Lane0 產出 psum 位址 = `psum_write_idx_wire`
- Lane1 產出 psum 位址 = `psum_write_idx_lane1_wire`

若直接讓兩個 lane 同時對單一埠的 psum spad 做 read-modify-write，會出現 **RAW (read-after-write)** hazard：
lane0 正在寫回 psum[X] 時，lane1 需要讀 psum[Y]（或反過來，甚至 X==Y）。

### 解法：Banked Psum_Spad + 雙模式排程

`Psum_Spad_Banked` 將 32-entry spad 以 **位址 bit[0]** 拆分為兩個 bank：

```
bank0: write_idx[0] = 0 (偶數 entry)
bank1: write_idx[0] = 1 (奇數 entry)
```

根據 lane0 與 lane1 的 psum 位址是否落在不同 bank，有兩種執行路徑：

---

## 4. Lane0/Lane1 雙路徑排程

### 關鍵判斷訊號

位於 `Processing_Element_core.v:286-288`：

```verilog
wire later_lane1_bank_conflict_wire = later_lane1_valid_wire
                                    & (psum_write_idx_wire[0] == psum_write_idx_lane1_wire[0]);
wire later_lane1_parallel_valid_wire = later_lane1_valid_wire & ~later_lane1_bank_conflict_wire;
wire later_lane1_serial_valid_wire   = later_lane1_valid_wire &  later_lane1_bank_conflict_wire;
```

- `later_lane1_valid_wire`：lane1 weight 非零且 INT4 mode 啟用
- `parallel_valid`：兩 lane 的 psum 位址落在**不同 bank** → 可並行
- `serial_valid`：兩 lane 的 psum 位址落在**相同 bank** → 需序列化

### 路徑 A：Parallel（並行，無 bank conflict）

當 `later_lane1_parallel_valid_wire = 1`：

```
READ_LATER_DATA_2 ──► DO_MAC ──► WRITE_BACK ──► (回主迴圈)
                                    │
                          ┌─────────┴─────────┐
                          │ lane0: write      │  bank0 (eg. addr=0)
                          │ lane1: write      │  bank1 (eg. addr=1)
                          │   via lane1_en=1  │
                          └───────────────────┘
```

- **DO_MAC 狀態**：`Psum_Spad_lane1_en = 1`，同時讀出 lane0 psum（`Psum_Spad_psum_out`）和 lane1 psum（`Psum_Spad_psum_out_lane1`），每個 bank 各出一筆。
- **WRITE_BACK 狀態**：lane0 寫回 bankX，lane1 透過 `psum_in_lane1` 同時寫回 bankY。**無需額外 cycle**。

關鍵程式碼（`Processing_Element_core.v:364`）：
```verilog
assign Psum_Spad_lane1_en = later_lane1_parallel_valid_wire
                          & (READ_LATER_DATA_2_wire | DO_MAC_wire | WRITE_BACK_wire);
```

`Psum_Spad_Banked` 內部（`Psum_Spad.v:107`）：
```verilog
wire lane1_safe_en = lane1_en & (lane0_bank != lane1_bank);
```

### 路徑 B：Serial（序列化，有 bank conflict）

當 `later_lane1_serial_valid_wire = 1`：

```
DO_MAC ──► WRITE_BACK ──► READ_LANE1_PSUM ──► DO_MAC_LANE1 ──► WRITE_BACK_LANE1 ──► (回主迴圈)
              │                                                                    ▲
              │  lane0 write bankX                                                 │
              │  lane1 pending                                                     │
              └────────────────────────────────────────────────────────────────────┘
                               +3 cycles overhead
```

- **WRITE_BACK 狀態**：先寫回 lane0 psum。lane1 被標記為 pending。
- **READ_LANE1_PSUM**：讀出 lane1 對應位址的舊 psum（`psum_load_lane1_reg`）。
- **DO_MAC_LANE1**：lane1 乘法 + 與舊 psum 累加。
- **WRITE_BACK_LANE1**：寫回 lane1 psum。

FSM 轉移判斷（`Processing_Element_core.v:419`）：
```verilog
WRITE_BACK: next_PE_state = later_lane1_serial_valid_wire ? READ_LANE1_PSUM :
                             former_data_read_done_wire    ? IDLE             :
                             ~later_data_read_done         ? READ_LATER_DATA_2 :
                             former_one_col_read_done      ? READ_FORMER_ADDRESS : READ_FORMER_DATA;
```

### cal_fin 防護

序列化未完成時不得宣告 `cal_fin`，否則上層控制器會誤判計算完成（`Processing_Element_core.v:306,344`）：

```verilog
wire lane1_pending_wire = later_lane1_serial_valid_wire
                        & (WRITE_BACK_wire | READ_LANE1_PSUM_wire | DO_MAC_LANE1_wire | WRITE_BACK_LANE1_wire);
wire cal_fin_guard_wire = ~lane1_pending_wire;
assign cal_fin = Iact_Data_Spad_read_fin_wire & ~IDLE_wire & cal_fin_guard_wire;
```

---

## 5. Psum_Spad_Banked 內部架構

```
                   lane0 path                        lane1 path (parallel only)
              ┌─────────────────┐              ┌─────────────────┐
  write_idx ──┤ bank select [0] │   write_idx  │ bank select [0] │
  read_idx  ──┤ bank select [0] │   _lane1 ────┤ bank select [0] │
              └───────┬─────────┘              └───────┬─────────┘
                      │                                │
         ┌────────────┴────────────┐      ┌────────────┴────────────┐
         │                         │      │                         │
    ┌────▼────┐              ┌─────▼─────┐┌────▼────┐          ┌────▼────┐
    │ bank0   │              │  bank1    ││ bank0   │          │ bank1   │
    │ (evens) │              │  (odds)   ││ (evens) │          │ (odds)  │
    │ 16×21b  │              │  16×21b   ││ 16×21b  │          │ 16×21b  │
    └────┬────┘              └─────┬─────┘└────┬────┘          └────┬────┘
         │                         │           │                    │
         └─────────┬───────────────┘           └─────────┬──────────┘
                   │                                     │
              psum_out                              psum_out_lane1
```

Bank 選擇邏輯（`Psum_Spad.v:106-107`）：
```verilog
wire lane0_bank = write_idx[0];           // lane0 寫入目標 bank
wire lane1_bank = write_idx_lane1[0];     // lane1 寫入目標 bank
wire lane1_safe_en = lane1_en & (lane0_bank != lane1_bank);  // 不同 bank 才允許並行
```

- 當 `lane1_safe_en = 1`：讀取時 bank0 出 lane0/lane1 其中一筆（看 `read_idx[0]`），bank1 出另一筆。
- 當 `lane1_safe_en = 0`（bank conflict）：lane1 不參與並行讀寫，改走 serial 路徑。

---

## 6. 效能分析

### Per-MAC cycle 成本

| 情境 | States 序列 | Cycles/MAC | 說明 |
|---|---|---|---|
| **INT8 / lane1 disabled** | IDLE→RD_FADDR→RD_FDATA→RD_LADDR→RD_LD1→RD_LD2→MAC→WB | 5 (from RD_LADDR) | 標準 5-stage pipeline |
| **INT4 parallel (無 conflict)** | RD_LD2→MAC→WB | 3 | lane0 + lane1 同時完成，無額外 cycle |
| **INT4 serial (bank conflict)** | RD_LD2→MAC→WB→RD_L1PSUM→MAC_L1→WB_L1 | 6 | lane0 3 cycles + lane1 3 extra cycles |

### Bank conflict 機率

32-entry psum spad，分兩 bank（各 16 entry）。給定隨機的 lane0/lane1 psum 位址：
- **Parallel** 機率（不同 bank）：~50%（實際因矩陣結構而異）
- **Serial** 機率（同 bank）：~50%

若矩陣內 lane0 與 lane1 產生的 psum 位址趨近（例如 row 相鄰時常落同一 bank），conflict 率會偏高。


## 7. 與上層控制器的介面

PE 對外的 FSM 由 `Processing_Element_Controller.v` 管理，是一個簡潔的 3-state FSM：

```
IDLE ──(top_do_load_en)──► LOAD ──(top_write_fin)──► CAL ──(cal_fin)──► IDLE
```

- **LOAD**：weight stationary 寫入 PE 內部四個 SPad（former/later address + data）
- **CAL**：驅動 `mac_en=1`，啟動 PE core 內的 11-state pipeline
- cal_fin 由 PE core (`Processing_Element_core`) 產出，並受 `cal_fin_guard_wire` 保護（lane1 序列化未完成前不拉高）


