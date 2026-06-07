# 啟動 RTL 說明

## Softmax.v

`Softmax.v` 用作分類 argmax 模組。它不會計算指數 softmax 機率；它掃描最後 10 個 logits 並輸出最大值的索引。當最終預測使用 `argmax`、`topk(1)` 或 `np.argmax` 獲得時，這與軟體推理一致，因為 `argmax(softmax(logits))` 與 `argmax(logits)` 相同。

為了使 argmax 的行為更安全，實作已更新：

- 內部最大值現在重設為真正的 21 位元有符號最小值 `-21'sd1048576`，而不是 `21'b1_1111_1111_1111_1111_1111`（在 21 位元有符號表示中為 `-1`）。

- 僅當第 10 個 logit 的 `en & data_in_valid` 為真時才產生輸出。先前的版本僅使用 `data_idx == 9`，因此有效的氣泡可能會導致提前輸出。

- 在發出 `data_out` 之前，第 10 個輸入值會包含在最終比較中。

此變更保持了硬體架構為 argmax，但使其與軟體端的預測路徑更加一致。