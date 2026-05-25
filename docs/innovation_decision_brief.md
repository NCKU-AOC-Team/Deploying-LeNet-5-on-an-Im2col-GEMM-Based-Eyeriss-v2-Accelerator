# Innovation 方向決策 Brief

**日期：** 2026-05-25
**作者：** Team (Claude 協助整理)
**目的：** 在 6/21 簡報截止前 4 週，於 5 個 innovation 候選中選定 1 個主攻方向（可選 1 個備援）。
**Grading 對應：** Technical Report 25% × 4 = Writing / System / Result / **Innovation** (25% 是 innovation 直接權重，其餘間接受影響)。

---

## Baseline 現況 (5/25)

| 指標 | 數值 | 來源 |
|---|---|---|
| Verilator 1000-pattern accuracy | **938/1000 = 93.8%** | `make sim ITERS=1000` |
| 1000-pattern wall-clock | **~19 min** | 同上（~79× vs Vivado xsim 25h）|
| Paper 目標 accuracy | ~98% | BoooC Eyeriss-v2 README |
| Accuracy gap | **~4-5%** | D 系列調查中（PE COMBDLY 是首要嫌疑）|
| Vivado LUT/BRAM/DSP/fmax | **TODO (A.2)** | 需重跑 synth |
| Board demo | 已驗證 | PYNQ-Z2 + UART/7-seg |

---

## 候選評估表

| # | 候選 | 工作量 | 風險 | 預期 Result 數字 | Innovation 強度 | 與現架構契合 | Vivado 需重做？ |
|---|---|---|---|---|---|---|---|
| 1 | **Quantitative micro-opt** (剖析 bottleneck + 局部 PPA 改善) | **低** (1-2 wk × 2 人) | **低** | cycle ↓ 10-20% / fmax ↑ / LUT ↓ | 中 (有量化證據但缺新點) | 完全在現架構內 | 是 (需重 synth 比對) |
| 2 | **Sparsity tuning** (CSC encoder 參數 / 壓縮率調整) | 中 (2 wk × 2 人) | 中 (Eyeriss-v2 已內建 CSC，調 tuning 點不一定有收益) | sparsity ratio / GLB hit rate / 能耗代理 | 中-高 (與論文核心題目契合) | 動 CSC_encoder + GLB | 是 |
| 3 | **Low-precision PE** (INT8 → INT4 / mixed precision) | **高** (3 wk × 3 人) | **高** (要重 quantize + 改 PE datapath + accuracy 可能崩) | 面積/能耗 ↓ 顯著、accuracy 可能 ↓ | **高 (最受評審青睞)** | 改 PE datapath + Quantizer + SW retraining | 是 |
| 4 | **MobileNet 移植** (LeNet → MobileNet-v2) | **極高** (4 wk × 4 人) | **極高** (DW conv 不一定能 map 到 Eyeriss row-stationary、im2col 需重寫) | 跑得通本身就是 result | 高 (新模型) | 動到 im2col + Cluster_Group + Router | 是（可能要重畫 NoC partition）|
| 5 | **Dataflow exploration** (row-stationary vs weight-stationary 對比實驗) | 中-高 (3 wk × 3 人) | 中 (需要實作第 2 種 dataflow controller) | cycle / energy proxy / GLB traffic 對照表 | **高 (論文常見題目)** | 大改 PE_Cluster_controller + Router | 是 |

**Workload 換算：** 6 人 × 4 週 ≈ **24 人週** total。需要保留 ~6-8 人週給文件 (E)、報告 (E.4)、簡報 (6/21)、accuracy gap 收尾 (D)，所以 innovation 預算 ≈ **16-18 人週**。

---

## Scoring 對照 (Tech Report 25%×4)

| 候選 | Writing | System | Result | Innovation | 板上 demo 影響 |
|---|---|---|---|---|---|
| 1 Micro-opt | 中 | 中 | 高 | 中 | 不影響 |
| 2 Sparsity | 中 | 中 | 中 | 中-高 | 不影響 |
| 3 Low-prec | 中-高 | 高 | 高 | 最高 | 可能影響 (需重 bitstream) |
| 4 MobileNet | 高 | 最高 | 低 (跑不通拿 0) | 高 | **大概率沒板上 demo 了** |
| 5 Dataflow | 高 | 高 | 中 | 高 | 可能影響 |

---

## 推薦排序與理由

### 主推：**#1 Quantitative micro-opt + #2 Sparsity tuning 組合**

- 兩者疊加總工作量 ≈ 12 人週，留充足緩衝給 D/E 系列
- 都在現有架構內，Vivado parity 風險低，板上 demo 不破壞
- Result 章節可拿出**前後對比的硬數字**（cycle / LUT / fmax / sparsity）— 評審吃這套
- Innovation 章節寫法：定位為「Eyeriss-v2 baseline 的 PPA characterization + targeted optimization」，搭配 roofline 分析（B.3）說服力強

**風險：** Innovation 評分天花板比 #3/#5 低（缺新概念）。對策：在 report 用 roofline + Pareto 圖把「為什麼這些 opt 點是最佳投資」講清楚。

### 備援：**#3 Low-precision PE**（若團隊有人對量化熟）

- Innovation 分數最高
- 但 4 週要從 INT8 → INT4 跑通 + 維持 accuracy，需要至少 1 人全職 quantization、1 人改 PE、1 人改 verification
- 若週末前 SW 端能先在 PyTorch 把 INT4 baseline accuracy 量出來（B.1 延伸），可作為 go/no-go 判斷

### 不建議：**#4 MobileNet**

- 4 週做完整模型移植 + DW conv mapping + 重新驗證，幾乎不可能
- 風險集中在「跑不通 = Result 0 分」
- 若真要做，建議降級為「**MobileNet 第 1 層 DW conv** 跑通 + 寫 feasibility report」

### 可選：**#5 Dataflow exploration**

- Innovation 高但需重寫 controller
- 若團隊有 2-3 人對 dataflow 熟、且願意把 result section 重點放在「對比實驗」而不是「絕對效能」，可考慮
- 否則 #1+#2 更穩

---

## Go/No-Go 檢核點 (Week 1 結束時 = 5/31)

決定後第 1 週要產出的證據：

- **若選 #1+#2：** Bottleneck 報告（哪個模組最慢 / 哪個 cycle 區段最長），決定要 opt 哪 2-3 個點
- **若選 #3：** PyTorch INT4 LeNet accuracy（B.1 延伸），>90% 才繼續
- **若選 #5：** Weight-stationary controller 的 skeleton 是否能 build 過

若 Week 1 結束達不到檢核點，立刻切備援方案，**不要堅持到第 3 週才止損**。

---

## 待團隊會議決議

1. 主方向選 #1+#2 / #3 / #5？
2. 6 人分工：誰負責 innovation、誰維持 D/E 系列、誰寫報告/簡報？
3. 是否啟動 A.3 Gantt（建議由 PM 角色畫，與本 brief 同步）？

---

**相關文件：**
- `FPGA_design/sim/verilator/README.md` — Verilator 流程
- `docs/` (本 folder) — 之後架構圖 / 量測 / 決策紀錄都放這
- `MEMORY.md / aoc-post-mvp-roadmap` — 完整 A-E 工作清單
