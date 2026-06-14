# docs／文件索引

本資料夾收錄這顆 Im2col-GEMM Eyeriss-v2 加速器的架構速查、FSM 流程與各項分析／優化報告。

## 架構參考
| 檔案 | 內容 |
|---|---|
| [`module_reference.md`](module_reference.md) | 模組對照速查表：每個 RTL 模組的一句話職責 / 上下游 / 相關優化工作包 |
| [`top_controller_fsm.md`](top_controller_fsm.md) | `TOP_controller.v` 逐 state 流程圖——LeNet-5 排程脊椎（排程寫死於此） |

## 分析報告
| 檔案 | 內容 |
|---|---|
| [`pe_utilization_analysis.md`](pe_utilization_analysis.md) | PE 使用率與逐層 cycle 分析：cycle 花在哪、compute-bound 或 memory-bound |

## 優化：ReLU + Pooling 融合
| 檔案 | 內容 |
|---|---|
| [`relu_pooling_fusion.md`](relu_pooling_fusion.md) | 功能說明：為何把 ReLU 與 pooling 融成單一 streaming pass |
| [`relu_pooling_fusion_cycle_report.md`](relu_pooling_fusion_cycle_report.md) | 融合前後 cycle 量測：100 張 sim，準確率不變、每張固定省 ~4,419 cycles（−5.46%） |
