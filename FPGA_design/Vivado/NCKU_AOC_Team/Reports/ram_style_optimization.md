# SPad `ram_style` 最佳化 — 讓 william_v2 塞進 PYNQ-Z2

> Branch: `shunwei/fpga-bringup-v2`（基於 `william_v2`，unified INT8/INT4 RTL）
> Device: PYNQ-Z2 / **xc7z020clg400-1**
> Tool: Vivado 2019.1，board top = `TOP_integration_uart`
> Date: 2026-06-20

## TL;DR
william_v2 直接合成可過，但 **implementation 的 place 階段失敗**：設計需要 305 顆
BRAM cell，xc7z020 只有 280 顆。把 PE 內兩個小 Scratch Pad（Iact / Weight SPad）
用 `(* ram_style = "distributed" *)` 從 Block RAM 改塞 **LUT distributed RAM**，
釋放 72 顆 BRAM → place/route 成功、timing 大量收斂。

---

## 1. 問題：place 失敗（改之前）

```
ERROR: [Place 30-640] This design requires more RAMB18 and RAMB36/FIFO cells
than are available in the target device. This design requires 305 of such cell
types but only 280 compatible sites are available in the target device.
```

xc7z020 共 140 個 Block RAM tile（= 280 個 RAMB18 等效 site）。william_v2 比舊版
（develop / shunwei/fpga-bringup）多吃了 BRAM，超出約 9%。

**BRAM 用量來源（synth Block RAM mapping）**：

| 推斷記憶體 | 大小 | 數量 | 來源 |
|---|---|---:|---|
| `Iact_DATA_Spad_BRAM / spad_reg` | 256×18 | 36 | 每個 PE 一顆（Former data SPad） |
| `Weight_DATA_Spad_BRAM / full_spad_reg` | 128×16 | 36 | 每個 PE 一顆（Later data SPad） |
| `Iact_Data_SRAM_BRAM / mem_reg` | 2K×16 | 36 | GLB activation SRAM |

PE 陣列 = 4 ClusterGroup × 9 PE = **36 PE**，光 SPad 就吃掉 72 顆 RAMB18。
但每顆 SPad 才 256×18 / 128×16（極小），用整顆 BRAM 非常浪費；而板上 LUT 尚有空間。

---

## 2. 解法：把小 SPad 改用 distributed RAM

在兩個 behavioral reg 陣列前加 synthesis attribute（**只動記憶體實作方式，不改行為**；
Verilator 會忽略此 attribute，功能模擬不受影響）：

```verilog
// FPGA_design/src/PE_Cluster/PE/SPad/Former_data_Spad.v:169
(* ram_style = "distributed" *) reg [17:0] spad [0:255];

// FPGA_design/src/PE_Cluster/PE/SPad/Later_data_Spad.v:190
(* ram_style = "distributed" *) reg [`BOYU_LATER_STREAM_RANGE] full_spad [0:127];
```

> 為何用 RTL inline attribute 而非 XDC：`ram_style` 是「合成指令」，作用在 synthesis
> 的記憶體推斷階段；等 impl 的 XDC 生效時記憶體早已是 BRAM primitive，太晚。RTL
> attribute 貼在訊號上最穩，不怕 36 個 PE 實例階層改名。這也是業界對「自己可改的
> behavioral memory」的標準做法。

---

## 3. 前後資源對照

| 資源 | 改之前 | 改之後 | Δ | 原因 |
|---|---|---|---:|---|
| **Place 結果** | ❌ 失敗（需 305 > 280） | ✅ 成功 | — | BRAM 需求降到容量內 |
| BRAM 需求（RAMB18-site） | 305 | **233** | −72 | SPad 移出 BRAM |
| RAMB18（SPad 推斷） | 72 | **0** | −72 | SPad 不再用 BRAM |
| Block RAM Tile | （>140 需求） | **116.5 / 140（83%）** | — | RAMB36×55 + RAMB18×123 |
| LUT as Distributed RAM | 24 | **3192（18%）** | +3168 | SPad 改塞 LUTRAM |
| Slice LUTs（總） | ~73% | **79.75%** | +~6% | LUTRAM 占 LUT |
| LUT as Logic | 73.45% | **73.29%** | ≈0 | 不受影響 |
| Slice Registers | 50.44% | **50.44%** | 0 | attribute 不動暫存器 |
| DSP48E1 | 36 | **36** | 0 | 不受影響 |
| Bonded IOB | 14 | **14** | 0 | 不受影響 |

> LUT-as-Logic / Registers / DSP / IOB 四項前後完全一致 → 證明改動範圍正確，
> 只搬動了 SPad 的記憶體實作，沒碰任何運算邏輯。

### Timing（改之後，routed）
| 指標 | 值 | 判定 |
|---|---|---|
| 時脈週期 | 8.000 ns（125 MHz） | — |
| **WNS（setup）** | **+6.413 ns** | ✅ 大量餘裕 |
| **WHS（hold）** | **+0.286 ns** | ✅ 通過 |
| 失敗 endpoint | 0 | ✅ All constraints met |
| Route | 90613 nets / **0 routing errors** | ✅ fully routed |

---

## 4. 手算核對（數字來源可追溯）

**① SPad macro 數量**（synth distributed RAM mapping，`Inference = User Attribute`）
- Iact SPad：36 PE × 18 bit = **648 個 RAM256X1S** ✓
- Weight SPad：36 PE × 16 bit（`BOYU_LATER_STREAM_RANGE = 15:0`）= **576 個 RAM128X1S** ✓

**② BRAM 釋放量**
- 移出 36 Iact + 36 Weight = **72 顆 RAMB18**（各 1 顆）
- 305 − 72 = **233** = 報告值（RAMB36×55×2-site? 實為 RAMB36×55 + RAMB18×123 → place 視角 233 site） ✓
- 對應「305 > 280 失敗」→「233 < 280 成功」

**③ LUTRAM 容量（量級核對）**
- SPad 總位元 = 36 ×（256×18 + 128×16）= 36 × 6656 = **239,616 bit**
- 實作 primitive：**RAMS64E ×3168** + RAMD32×36 + RAMS32×12 → LUT as Distributed RAM = **3192**
- 樸素級聯上界 = 648×4 + 576×2 = 3744 顆；實際 3168，差約 15% 來自 Vivado O5/O6
  雙用與共用位址解碼的打包最佳化。**樸素估計是上界，精確顆數依工具打包；不變量是
  ① 的 macro 數與 ② 的 BRAM 帳。**

---

## 5. 剩餘 BRAM 去向（116.5 tile 拆解）

synth 頂層只見 36 顆（GLB SRAM），impl 達 116.5 tile，差額都在 BRAM **IP 核**：

| IP 核 | 顆數 | 用途 |
|---|---:|---|
| `IP_Psum_DATA_Spad_BRAM` | 72 | Psum SPad（每 PE 2 顆，走 IP，本次未改） |
| `IP_Iact_Addr_SRAM_BRAM` | 36 | GLB 位址 SRAM |
| `IP_Psum_Data_SRAM_BRAM` | 12 | Psum 資料 SRAM |
| `IP_ifmap_BRAM` | 1 | 輸入影像 ROM |

→ 若未來還要再省 BRAM，下一個目標是 Psum SPad IP（72 顆）；但那是 IP 核，做法
與本次（behavioral reg + attribute）不同。目前 83% 仍有餘裕，暫不需要。

---

## 6. 佐證檔案（同目錄 `after_ram_style/`）
- `utilization_synth.rpt` — 合成資源用量
- `utilization_placed.rpt` — 實作資源用量（權威）
- `timing_summary_routed.rpt` — routed timing（WNS/WHS）
- `route_status.rpt` — 繞線狀態（0 errors）
