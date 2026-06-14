# ReLU + Pooling Fusion — Cycle 分析報告

> 對應功能說明見 [`relu_pooling_fusion.md`](relu_pooling_fusion.md)（Lswen）。
> 本檔為合併 fusion 前後的 **cycle 效益量測**。

## 測試環境（可重現）

- 模擬：Verilator sim，`make sim ITERS=100`
- 測資：MNIST `GOLDEN_INT4.txt` 前 100 張
- Before（無 fusion）：`90951e2` — feat/hw-analysis 重構分支 tip
- After （含 fusion）：`3fe921a` — develop `fusion ReLU and Pooling`，經 merge `90dc2d2` 整合進重構分支
- cycle 定義：每張影像「餵入 → `result` latch」之推論延遲（sim 各 iter 的 `(N cycles)`）

## 正確性（先確認等價）

| 項目 | Before | After |
|---|---|---|
| 準確率 | 99/100 (99%) | 99/100 (99%) |
| 逐張預測（去除 cycle 欄位後 diff） | — | **完全一致** |

→ 分類結果與準確率不變（那 1 張誤判前後皆同，為既有 miss，非 fusion 造成）。**fusion 屬等價優化。**

## Cycle 效益

| 指標 | Before（無 fusion） | After（fusion） | Δ | 變化 |
|---|---|---|---|---|
| 總 cycles（100 張） | 8,091,410 | 7,649,510 | −441,900 | **−5.46%** |
| 平均 cycles/張 | 80,914.1 | 76,495.1 | −4,419.0 | **−5.46%** |
| 最小/張 | 78,691 | 74,272 | −4,419 | — |
| 最大/張 | 82,246 | 77,827 | −4,419 | — |
| 全距（max−min） | 3,555 | 3,555 | 0 | — |

## 關鍵發現

- **每張影像都剛好省下固定的 4,419 cycles**（100 張的 per-image 差值唯一值＝ −4419）。
- 影像間的延遲變動（全距 3,555）**前後完全不變** → fusion 砍掉的是一段**固定成本**的階段，與資料無關。
- 這與設計相符：原本「ReLU 結果寫回 rearrange buffer → 另開獨立 pooling pass 重讀」的那趟，被融合成「ReLU 輸出直接串流進 streaming pooling」後消失，省下的約 4,419 cycles 即該獨立 pooling pass 的固定延遲。

## 結論

- ✅ 等價：準確率/逐張預測不變。
- ✅ 效益：每張推論固定省 ~4,419 cycles（−5.46%），純由省去獨立 pooling pass 而來。
- 後續若想再壓延遲，可往 per-image 變動的那段（conv 計算，全距 3,555）著手；pooling 這塊已無獨立開銷。
