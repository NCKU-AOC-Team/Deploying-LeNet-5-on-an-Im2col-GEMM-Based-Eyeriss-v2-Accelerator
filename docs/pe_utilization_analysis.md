# PE 使用率與逐層 Cycle 分析 (Eyeriss-v2 + LeNet-5)

**問題(對應工作項 C.4 / C.3):** Cycle 到底花在哪?這顆加速器是 compute-bound 還是
data-movement-bound?答案直接決定創新方向值不值得做。

**方法:** `make trace_public ITERS=1`(跑一張 MNIST,`--public-flat-rw` 把內部訊號
匯出)→ `analyze_pe_vcd.py dump.vcd`。逐 cycle 讀兩組現成 FSM:**PE core datapath**
(`Processing_Element_core.PE_state`,9 顆 PE)看真實 MAC 活動,**TOP controller**
(`state` + `layer_count`)看每層 phase。**未改動任何 RTL。**

**樣本:** 1 張影像,共 **93,388 cycles**;9 顆 PE → 840,492 PE-cycles。
> 單一 pattern 快照——結構性結論很穩,確切比例待用更多 pattern(含一筆 fail case)再確認。

---

## 結論 1 — PE 陣列幾乎都沒在算(MAC 只佔 2.8%)

每個 PE-cycle 花在哪(datapath core FSM,9 顆 PE 加總):

```
IDLE        84.5%  ##################################################  (含 spad 載入)
fetch        9.9%  ######    讀運算元(addr + data)
WRITE_BACK   2.8%  ##        psum 累加 / 寫回
DO_MAC       2.8%  ##        <-- 真正的乘法
```

- **真實計算效率 = DO_MAC / 全部 PE-cycles = 2.8%。**
- PE active(非 idle)只有 15.5%——而且**就算在 active 區間裡面**:

```
active(15.5%)之中:   fetch 64%  ############### | MAC 18% ##### | write-back 18% #####
```

- **每個 MAC 約 5.5 拍,其中只有 1 拍在乘。** 每個 MAC 要走
  `RD_LAT_ADDR → RD_LAT_DAT1 → RD_LAT_DAT2(SRAM 等待)→ DO_MAC → WRITE_BACK`。
- 整張影像只做了 **23,650 個 MAC**,而 dense LeNet-5 是*數十萬*級 → **CSC 跳零 +
  MNIST 輸入本身稀疏 + ReLU 已經砍掉 >90% 的乘法。** 所以 DO_MAC% 低,一半是稀疏功能
  正常發揮、一半是 per-MAC overhead。

> 解碼正確性驗證:`RD_LAT_DAT1 = RD_LAT_DAT2 = DO_MAC = WRITE_BACK`(一條無分支的
> 4 拍鏈),且 core IDLE(84.5%)≈ controller IDLE+LOAD(84.5%)。完全自洽。

---

## 結論 2 — 逐層:FC 層被權重載入吃滿

| 層 | 類型 | 佔全程 | 主導 phase |
|------:|------|---------:|----------------|
| 0 | conv1 | 36.5% | **CAL 62%**(計算為主) |
| 1 | conv2 | 23.9% | CAL 51% / LOAD_GLB 39% |
| 2 | FC1   | 29.1% | **LOAD_GLB 87%**(載權重) |
| 3 | FC2   |  9.3% | **LOAD_GLB 90%**(載權重) |
| 4 | FC3   |  1.2% | LOAD_GLB 69% |

全域 phase 分佈(整個 run):

```
load     45.0%  #############     <-- 最大單一開銷(FC 權重)
compute  39.6%  ############
output    5.3%  ##
other     5.4%  ##  (含啟動:reset + 784B 影像載入)
pool      4.8%  #
```

FC 權重矩陣載入一次只用一次、幾乎沒重用 → **memory-bound**。

---

## 結論 3 — 3×3 PE 陣列負載不均

各 PE 的 MAC 數從 **1,668(pe10)到 4,471(pe02)——差 2.7×**;第 0 列明顯比 1、2 列
忙。共享的 `iact`(former)讀取各 PE 一致,所以不均來自**權重/稀疏分佈與 GEMM mapping**。

---

## 總結:overhead / 資料搬移 bound——不是 compute bound

三層相疊的浪費:

1. **巨觀:** 全程 45% 在載資料(FC 權重主導)。
2. **中觀:** 連名義上的計算階段,陣列也只有 ~40% 在動。
3. **微觀:** 每個真實 MAC 要 ~5.5 拍(讀運算元 + SRAM 延遲)。

→ 有效 MAC 利用率 ≈ **2.8%**。乘法器基本上從來不是瓶頸。

### 對創新方向的意義

| 候選方向 | 判決 | 理由 |
|-----------|:------:|-----|
| 更快 / 低精度乘法器(#1 乘法器、#3) | ❌ | 乘法器只忙 2.8%,加速它幾乎沒幫助 |
| **權重載入 / 壓縮(尤其 FC)** | ✅✅ | FC 層 87~90% 時間在載權重 |
| **per-MAC 內迴圈 pipeline**(fetch 與 MAC 重疊、消掉 SRAM 等待拍) | ✅ | 5.5 拍/MAC 砍下來直接縮短計算 |
| **dataflow / mapping / 負載平衡** | ✅ | CAL 階段 <40% active;PE 間差 2.7× |
| 加強 activation 稀疏(#2 對啟動值) | ⚠️ | 已砍掉 >90% MAC,headroom 不大 |

**一句話結論:** 瓶頸是*餵資料給陣列*(FC 權重)+ *per-MAC 固定 overhead* + *陣列利用率*
——不是算力。創新應鎖定 dataflow / 權重處理 / 內迴圈 pipeline,**不要碰乘法器精度**。

---

### 重現方式
```bash
cd FPGA_design/sim/verilator
make trace_public ITERS=1
python3 analyze_pe_vcd.py dump.vcd
```
