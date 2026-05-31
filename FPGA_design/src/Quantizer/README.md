# 量化器 RTL 說明

## Psum_Requantizer.v

`Psum_Requantizer.v` 將一個 21 位元有符號 psum 轉換回 8 位元有符號啟動精確度。軟體 GEMM 流程使用 `quan_scale = 1024`，因此硬體透過右移 10 位元來保持相同的 Q10 縮放比例。

之前的實作使用了：

```verilog

assign data_out = data_in[17:10];

```

這會選擇右移後的 8 位元字段，但溢出時會發生迴繞。較大的正 psum 值可能會變成負的 int8 值，而較大的負 psum 值可能會迴繞成不相關的值。這可能會改變 ReLU 的行為以及後續層的稀疏性。

實作已更新為：

- 使用有符號算術移位：`data_in >>> 10`。

- 將移位後的結果限制在有符號 int8 的範圍內，即 `-128` 到 `127`。

- 保留原始 Q10 縮放意圖，同時避免溢出。

當前行為等效於具有飽和功能的定點重量化器：

```verilog

wire signed [20:0] scaled_data = data_in >>> 10;

assign data_out = (scaled_data > 21'sd127) ? 8'sd127 :

(scaled_data < -21'sd128) ? -8'sd128 :

scaled_data[7:0];

```