# 模組對照速查表 (Module Reference)

每個 RTL 模組：**一句話職責 / 上游(誰例化或餵它) / 下游(它例化或輸出給誰) / 相關優化工作包**。
工作包代號見 [`pe_utilization_analysis.md`](pe_utilization_analysis.md)：
**A**=權重載入/壓縮、**B**=per-MAC 內迴圈 pipeline、**C**=dataflow/mapping/負載平衡。
控制流程見 [`top_controller_fsm.md`](top_controller_fsm.md)。

> 所有上下游關係取自實際 instantiation（已逐檔核對），非推測。

---

## 例化階層速覽

```
TOP_integration_{uart,rom}  →  TOP_interface  →  TOP_eyeriss (TOP.v)
                                                   ├─ ClusterGroup_array  →  4× ClusterGroup (2×2)
                                                   │     └ ClusterGroup → PE_Cluster / GLB_Cluster / Router_Cluster / Cluster_Group_Controller
                                                   │           ├ PE_Cluster → 9× ProcessingElement + PE_Cluster_controller + PE_Cluster_Connection
                                                   │           │     └ ProcessingElement → Processing_Element_core + _Controller + FIFO×6
                                                   │           │           └ core → Former/Later {addr,data} Spad + Psum_Spad
                                                   │           ├ GLB_Cluster → 9× Iact_SRAM_Bank(→addr/data SRAM) + 4× Psum_SRAM_Bank
                                                   │           └ Router_Cluster → 9× Iact_Router + Weight_Router + Psum_Router
                                                   ├─ im2col_converter
                                                   ├─ CSC_Encoder ×2  (→ CSC_switch_FIFO)
                                                   ├─ psum_SRAM_out_acc
                                                   └─ TOP_controller
```

---

## 0. 頂層 / 整合 (TOP)

| 模組 (檔) | 一句話職責 | 上游 | 下游 | 工作包 |
|---|---|---|---|---|
| `TOP_integration` / `_uart` / `_rom` | 板上/sim 外殼：選 UART 收圖或 ROM 餵圖、接 seg7 顯示 | 頂層 | `TOP_interface`、`uart_module`、`seg7_module` | — |
| `TOP_interface` | 對外腳位封裝 + 接權重 ROM | `TOP_integration*` | `TOP_eyeriss`、`ROM_sparse_weight` | — |
| `TOP_eyeriss` (`TOP.v`) | **資料路徑骨架**：把控制器、運算織體、前後處理全接起來 | `TOP_interface` | `ClusterGroup_array`、`im2col_converter`、`CSC_Encoder`、`psum_SRAM_out_acc`、`TOP_controller` | A/B/C |
| `TOP_controller` | **大腦**：LeNet-5 逐層 FSM（state×9、layer_count）| `TOP_eyeriss` | 控制訊號送往全織體 | A/C |
| `psum_SRAM_out_acc` | FC 層 psum 跨 channel 最終累加 | `TOP_eyeriss` | 量化/輸出 | — |
| `SCNN_shape_info_compiler` | 由層形狀算出排程參數（矩陣高寬等）| TOP/controller | controller 用 | C |
| `psum_rearrange` | psum 寫回/重排 buffer，銜接層間資料 | controller | GLB psum / 下一層輸入 | C |

## 1. 運算織體 (Cluster_Group, 全 repo 最大 9045 行)

| 模組 | 職責 | 上游 | 下游 | 工作包 |
|---|---|---|---|---|
| `ClusterGroup_array` | 2×2 cluster 陣列外殼 | `TOP_eyeriss` | 4× `ClusterGroup` | C |
| `ClusterGroup` | 單一 cluster：把 PE/GLB/Router 三塊綁在一起 | `ClusterGroup_array` | `PE_Cluster`、`GLB_Cluster`、`Router_Cluster`、`Cluster_Group_Controller` | C |
| `Cluster_Group_Controller` | 單 cluster 內的本地時序/握手控制 | `ClusterGroup` | PE/GLB/Router | C |

## 2. PE 陣列 (PE_Cluster)

| 模組 | 職責 | 上游 | 下游 | 工作包 |
|---|---|---|---|---|
| `PE_Cluster` | 3×3 PE 陣列外殼 | `ClusterGroup` | 9× `ProcessingElement`、`PE_Cluster_controller`、`PE_Cluster_Connection` | B/C |
| `PE_Cluster_controller` | 陣列層級控制：iact/weight 怎麼分派到 9 顆 PE | `PE_Cluster` | 各 PE | **C** (負載平衡切入點) |
| `PE_Cluster_Connection` | PE 之間 / PE↔router 的資料接線與 mux | `PE_Cluster` | PE / router | C |
| `ProcessingElement` | 單顆 PE 外殼：包 core + controller + 6 個 FIFO | `PE_Cluster` | `Processing_Element_core`、`_Controller`、`PE_data_FIFO`×4、`PE_psum_FIFO`×2 | B |
| `Processing_Element_core` | **單顆 PE datapath**：PE_state FSM、真正的 MAC | `ProcessingElement` | 5 個 SPad | **B** (per-MAC pipeline 主戰場) |
| `Processing_Element_Controller` | 單顆 PE 控制：驅動 PE_state、SPad 讀寫時序 | `ProcessingElement` | core | **B** |
| `Former/Later_Data_Spad`、`Former/Later_Address_Spad` | PE 內權重/iact 的 scratchpad（CSC data + address）| `Processing_Element_core` | — | A/B |
| `Psum_Spad` | PE 內 psum scratchpad（累加暫存）| `Processing_Element_core` | — | B |
| `PE_data_FIFO` / `PE_psum_FIFO` | PE 輸入(iact/weight) / psum 的握手 FIFO | `ProcessingElement` | core | B |

## 3. 片上記憶體 (GLB_Cluster)

| 模組 | 職責 | 上游 | 下游 | 工作包 |
|---|---|---|---|---|
| `GLB_Cluster` | GLB 外殼：9 個 iact bank + 4 個 psum bank | `ClusterGroup` | `Iact_SRAM_Bank`×9、`Psum_SRAM_Bank`×4 | A |
| `Iact_SRAM_Bank` | 一組 iact bank：CSC 壓縮資料分址址表+資料兩塊 SRAM | `GLB_Cluster` | `iact_addr_SRAM`、`iact_data_SRAM` | A |
| `iact_addr_SRAM` | 存 CSC 位址(LUT，記每組起訖位址) | `Iact_SRAM_Bank` | — | A |
| `iact_data_SRAM` | 存 CSC 壓縮後的 iact 資料 | `Iact_SRAM_Bank` | — | A |
| `Psum_SRAM_Bank` | 存中間 psum | `GLB_Cluster` | — | A |

> 注意：GLB **沒有** 權重專用 SRAM，權重走 weight-stationary 直接進 PE 內 SPad。

## 4. NoC (Router_Cluster, HM-NoC)

| 模組 | 職責 | 上游 | 下游 | 工作包 |
|---|---|---|---|---|
| `Router_Cluster` | 路由器叢集外殼 | `ClusterGroup` | 9× `Iact_Router` + `Weight_Router` + `Psum_Router` | A/C |
| `Iact_Router` | iact 在 cluster 間/內的繞送（3-way handshake, in_sel/routing_mode）| `Router_Cluster` | PE / GLB | C |
| `Weight_Router` | **權重繞送**（ROM→PE SPad 的路徑）| `Router_Cluster` | PE SPad | **A** |
| `Psum_Router` | psum 繞送 | `Router_Cluster` | GLB / PE | C |

## 5. 資料前處理

| 模組 | 職責 | 上游 | 下游 | 工作包 |
|---|---|---|---|---|
| `im2col_converter` | 影像重排成 column（im2col），餵給 GEMM | `TOP_eyeriss` | `CSC_Encoder` | C |
| `CSC_Encoder` | CSC 稀疏壓縮（跳零）| `TOP_eyeriss` (×2 例化) | `CSC_switch_FIFO` / GLB | **A** |
| `CSCSwitcher` / `CSC_switch_FIFO` | CSC 通道切換 + 緩衝 FIFO | `CSC_Encoder` | — | A |

## 6. 後處理

| 模組 | 職責 | 上游 | 下游 | 工作包 |
|---|---|---|---|---|
| `Psum_Requantizer` | psum 21-bit → 8-bit 量化 | controller/READ_OUT | 下一層輸入 | — |
| `ReLU` | conv 層啟動函數（同時製造稀疏）| READ_OUT_PSUM | 量化/pool | — |
| `softmax` | 最終分類輸出 | FC3 後 | 顯示 | — |
| `Max_pooling` | 2×2 最大池化（僅 conv）| LAYER_POOLING | psum_rearrange | — |

## 7. I/O / 顯示 / 時脈

| 模組 | 職責 | 上游 | 下游 | 工作包 |
|---|---|---|---|---|
| `uart_module` | UART 收發外殼 | `TOP_integration_uart` | `uart_rx_module`、`uart_tx_module` | — |
| `uart_rx_module` / `uart_tx_module` | UART 收 / 送（內含 band_gen + ctl）| `uart_module` | — | — |
| `H2L_detect` (`start_en_detect`) | 偵測啟動邊緣 | UART/IO | controller | — |
| `seg7_module` | 七段顯示外殼 | `TOP_integration` | `seg7_scan`、`seg7_encoder` | — |
| `clock_gen` / `debouncing` / `interrupt_gen` | 時脈產生 / 按鍵去彈跳 / 中斷產生 | 頂層 | — | — |

---

### 怎麼用這張表
- 想改某個優化方向 → 看「工作包」欄篩出相關模組，再順「上游/下游」追資料流。
- **A** 集中在 GLB / Weight_Router / CSC / PSUM_ACC↔LOAD_GLB 迴圈。
- **B** 集中在單顆 PE：`Processing_Element_core` + `_Controller` + SPad/FIFO。
- **C** 集中在 `PE_Cluster_controller`、routers、im2col、controller 的 routing_mode。
