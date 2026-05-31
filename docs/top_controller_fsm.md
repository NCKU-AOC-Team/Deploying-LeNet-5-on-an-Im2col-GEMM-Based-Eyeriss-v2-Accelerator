# TOP_controller 逐 State 流程圖 (LeNet-5 排程脊椎)

`TOP_controller.v`（2148 行）是整顆加速器的大腦——LeNet-5 的逐層排程**寫死在這裡**。
任何「換模型 / 改 dataflow / 改權重載入」都從這個檔開刀。轉移表本體在
`TOP_controller.v:1010-1021`，下列行號皆對應該檔。

> 配合 `docs/pe_utilization_analysis.md`（瓶頸分析）一起讀：那份說「優化什麼」，
> 這份說「在 FSM 哪個 state 改」。

---

## 1. 層的對應（先記這個）

```
layer_count: 0      1      2     3     4
層        : conv1  conv2  FC1   FC2   FC3
旗標      : conv_flag(0,1)        fc_flag(2,3,4)        (L662-663)
```

---

## 2. 主狀態機（一張影像的一生）

```
        ┌──────┐  system_enable
        │ IDLE │ ───────────────►┐
        └──────┘                 │
            ▲                     ▼
            │            ┌─────────────────────┐
            │            │ LAYER_LOAD_IFMAP     │  ← 只在 layer0 走一次！
            │            │ 收 784B 影像→im2col→ │     (之後每層從 LOAD_GLB 進)
            │            │ CSC→寫 psum_rearrange │
            │            └─────────┬───────────┘
            │            ifmap_load_fin (MEM_addr≥783 & psum_wr<289, L669)
            │                      ▼
            │     ┌───────►┌─────────────────────┐
            │     │        │ LAYER_LOAD_GLB       │  載 iact / FC權重(從ROM)進GLB
            │     │        └─────────┬───────────┘  ~all_GLB_load_en (L670,1013)
            │     │                  ▼
            │     │        ┌─────────────────────┐
            │     │        │ LAYER_LOAD_PE        │  權重 stationary 寫進 PE 內 SPad
            │     │        └─────────┬───────────┘  ~all_PE_weight_load_en (L671,1014)
            │     │                  ▼
            │     │        ┌─────────────────────┐
            │     │        │ LAYER_CAL            │  ★ PE 陣列真正 MAC
            │     │        └─────────┬───────────┘  all_cal_fin = 4 cluster 全完(L672)
            │     │                  ▼
            │     │        ┌─────────────────────┐
            │     │  psum_ │ LAYER_PSUM_ACC       │  跨 batch/channel 累加 psum
            │     └────────┤                      │
            │   acc_fin    └───┬─────────────┬───┘
            │ (還有權重batch)   │             │ layer_iter_fin (L726,1016)
            │ →回去載下一批     │             ▼
            │ ★FC瓶頸迴圈       │     ┌─────────────────────┐
            │                   │     │ LAYER_READ_OUT_PSUM  │ 讀psum→ReLU/量化
            │                   │     └───┬─────────────┬───┘  (conv) / SRAM_acc(fc)
            │                   │  conv_flag│             │fc_flag
            │                   │           ▼             │  all_GLB_psum_read_out_done
            │                   │   ┌──────────────┐      │        (L688,1017)
            │                   │   │ LAYER_POOLING│      │
            │                   │   └──────┬───────┘      │
            │                   │  pool_fin│(L714)        │
            │                   │          ▼              ▼
            │   layer_done_fin  │      ┌─────────────────────┐
            └───────────────────┴──────┤ LAYER_DONE          │
              (layer_count++,L2142;    └─────────┬───────────┘
               下一層回 LOAD_GLB,L1019)           │ layer4_flag
                                                  ▼
                                              ┌──────┐
                                              │ DONE │ (terminal)
                                              └──────┘
```

---

## 3. 逐 state 速查表

| State | 做什麼 | 驅動的子模組 | 退出條件 | 優化工作包 |
|---|---|---|---|---|
| **IDLE** | 等啟動 | — | `system_enable` | — |
| **LOAD_IFMAP** | 收影像→im2col→CSC壓縮→寫入 rearrange buffer（`ifmap_in_en` L675、`im2col_enable` L766）| `im2col_converter`、`CSC_encoder`、`Psum_rearrange` | `ifmap_load_fin` (L669) | C |
| **LOAD_GLB** | 把 iact / **FC 權重(從 ROM)** 載入 GLB（`psum_spad_clear` L732）| `GLB_Cluster`、`ROM_sparse_weight` | `~all_GLB_load_en` (L670) | **A** |
| **LOAD_PE** | 權重 stationary 寫進**每顆 PE 內部 SPad** | `Weight_Router`→PE `Spad` | `~all_PE_weight_load_en` (L671) | **A** |
| **CAL** | ★ PE 陣列跑 MAC（`weight_write_fin_clear` L745）| `PE_Cluster` / `Processing_Element_core` | `all_cal_fin`＝4 cluster 皆完 (L672) | **B / C** |
| **PSUM_ACC** | 跨 batch/channel 累加 psum；**權重沒載完就跳回 LOAD_GLB** | `Psum_SRAM_out_acc`、GLB psum bank | `layer_iter_fin`→READ_OUT；否則 `psum_acc_fin`→回 LOAD_GLB (L1016) | **A** |
| **READ_OUT_PSUM** | 讀 psum→`ReLU_en`(conv)/量化(fc, `psum_SRAM_out_acc_en` L659)| `ReLU`/`Softmax`、`Quantizer` | `all_GLB_psum_read_out_done` (L688)；conv→POOL，fc→DONE | — |
| **POOLING** | 2×2 max pool（`pool_enable` L990，僅 conv）| `Max_pooling` | `pool_fin` (L714) | — |
| **DONE** | 收尾，`layer_count++`；非最後層回 LOAD_GLB | — | `layer4_flag`→DONE；否則 `layer_done_fin`→LOAD_GLB (L1019) | — |

工作包代號見 `docs/pe_utilization_analysis.md`：
**A** = 權重載入/壓縮（FC 主導，最大宗）、**B** = per-MAC 內迴圈 pipeline、**C** = dataflow/mapping/負載平衡。

---

## 4. 看這張圖要帶走的三個關鍵洞察

1. **`PSUM_ACC → LOAD_GLB` 的回邊就是 FC 瓶頸**（L1016）。FC 權重太大，一次只載一批、
   算完又跳回去載下一批 → 全程 45% 卡在這條迴圈。**工作包 A 主戰場**：減少重載、權重壓縮、
   或載入與計算重疊。

2. **`LOAD_IFMAP` 一輩子只走一次**（layer0）。之後每層從 `LOAD_GLB` 重進（L1019 回 LOAD_GLB
   而非 LOAD_IFMAP）——conv2/FC 的輸入靠上一層 psum 留在 buffer，不是重新收圖。改 dataflow
   （工作包 C）要顧到這個層間銜接。

3. **`CAL` 退出是 `all_cal_fin = 四個 cluster AND`**（L672）→ 最慢的 cluster 拖累全體，
   正好對上「PE 間負載差 2.7×」。**工作包 B/C 的成效會直接反映在縮短 CAL→PSUM_ACC 的時間。**

---

### 重現/驗證
```bash
cd FPGA_design/sim/verilator
make trace_public ITERS=1
python3 analyze_pe_vcd.py dump.vcd   # 逐 cycle 讀 TOP_controller.state + layer_count
```
