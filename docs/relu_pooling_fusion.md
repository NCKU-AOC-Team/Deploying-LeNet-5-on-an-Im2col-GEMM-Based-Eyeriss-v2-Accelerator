# ReLU 與 Pooling 融合

## 目的

原始的 convolution 輸出路徑會經過兩次獨立處理：

```text
GLB psum -> requantizer -> ReLU -> psum_rearrange
psum_rearrange -> 2x2 max pooling -> psum_rearrange
```

融合版本則是在 ReLU 結果讀出的同時，直接完成 pooling：

```text
GLB psum -> requantizer -> ReLU -> streaming 2x2 max pooling -> psum_rearrange
```

這樣就能移除原本 pooling state 需要對整張 feature map 再讀一次的流程。

## 資料流流程圖

### 原始版本資料流

```text
                    conv psum 讀出
                           |
                           v
                   +-----------------+
                   | Psum_Requantizer|
                   +-----------------+
                           |
                           v
                       +-------+
                       | ReLU  |
                       +-------+
                           |
                           v
                  先寫回完整 conv ofmap
                           |
                           v
                 +-------------------+
                 | psum_rearrange    |
                 | (儲存 24x24/8x8)  |
                 +-------------------+
                           |
                           v
                   進入 LAYER_POOLING
                           |
                           v
                 每個 2x2 視窗重讀 4 個值
                           |
                           v
                     +-----------+
                     |Max_pooling|
                     +-----------+
                           |
                           v
                    再把 pooling 結果寫回
                           |
                           v
                 +-------------------+
                 | psum_rearrange    |
                 | (儲存 12x12/4x4)  |
                 +-------------------+
                           |
                           v
                    下一層再讀作輸入
```

### Fusion 版本資料流

```text
                    conv psum 讀出
                           |
                           v
                   +-----------------+
                   | Psum_Requantizer|
                   +-----------------+
                           |
                           v
                       +-------+
                       | ReLU  |
                       +-------+
                           |
                           v
                  直接用 raster order 串流輸入
                           |
                           v
              +----------------------------+
              | Streaming_Max_pooling      |
              | line buffer + 2x2 比較器   |
              +----------------------------+
                           |
                           v
                    只寫回 pooled output
                           |
                           v
                 +-------------------+
                 | psum_rearrange    |
                 | (儲存 12x12/4x4)  |
                 +-------------------+
                           |
                           v
                 保留短暫 cleanup 的
                    LAYER_POOLING 狀態
                           |
                           v
                    下一層再讀作輸入
```

### 兩者核心差異

```text
原始版本:
ReLU 結果 -> 先存完整 feature map -> 再整張重讀 -> pooling -> 再存 pooled map

Fusion 版本:
ReLU 結果 -> 資料流當下直接 pooling -> 只存 pooled map
```

## 實作內容

### Streaming pooling

`Streaming_Max_pooling.v` 內部使用：

- 一條 24-entry 的 signed INT8 line buffer
- 上一列與當前列左側資料的暫存器
- row counter 與 column counter
- 三級比較器完成 2x2 最大值計算

對 layer0 而言，輸入寬度是 24，輸出寬度是 12。對 layer1 而言，輸入寬度是 8，輸出寬度是 4。當輸入資料的位置同時落在奇數 row 與奇數 col 時，代表一個 2x2 視窗已湊齊，此時輸出結果才會有效。

### Controller 修改

在 `LAYER_READ_OUT_PSUM` 期間，有效的 ReLU 輸出會直接送入 streaming pooling 模組。只有在 `pool_data_valid` 為 1 時，pooling 結果才會被寫入 `psum_rearrange`。

原始設計在 layer0 只會寫入 863 筆 pooling 結果，而不是理論上的 864 筆。融合版本為了保持與目前 reference design 及 golden data 的 bit-level 相容性，會刻意 suppress layer0 的 address 863 寫入行為，保留原本的記憶體語意。

### Cleanup state

`LAYER_POOLING` 狀態仍然保留，但它不再負責讀寫整張 feature map。現在它只持續 32 個 cycle，專門保留原設計中必要的 cleanup 語意：

- `CSC_encoder_iact_clear_iact_SRAM` 仍然保持有效
- 透過兩個 zero end marker 將 GLB activation stream 的 write index 重設
- 讓 CSC 與 GLB 的控制 pipeline 在進入下一層之前有足夠時間排空

前一次的實驗曾經把 `LAYER_POOLING` 完全移除，結果只通過 20 筆中的 17 筆。原因是 layer1 可能會在 layer0 的 sparse activation stream 尚未完整結束前就開始啟動。保留一個短暫的 cleanup state 之後，這個跨層時序相依問題就被修正了。

## 修改檔案

- `FPGA_design/src/Pooling/Streaming_Max_pooling.v`
- `FPGA_design/src/TOP/TOP.v`
- `FPGA_design/src/TOP/TOP_controller.v`

原本的 `Max_pooling.v` 仍然保留在 repository 中，但 `TOP.v` 已經不再實例化它。

## 驗證

執行指令：

```bash
cd FPGA_design/sim/verilator
make sim ITERS=20
```

結果：

```text
20/20 passed (100%)
```

| Iter | Baseline cycles | Fusion cycles | 減少 |
|---:|---:|---:|---:|
| 0 | 81,184 | 76,765 | 4,419 |
| 1 | 81,104 | 76,685 | 4,419 |
| 2 | 79,874 | 75,455 | 4,419 |
| 3 | 81,097 | 76,678 | 4,419 |
| 4 | 81,270 | 76,851 | 4,419 |
| 5 | 81,462 | 77,043 | 4,419 |
| 6 | 80,771 | 76,352 | 4,419 |
| 7 | 81,649 | 77,230 | 4,419 |
| 8 | 79,535 | 75,116 | 4,419 |
| 9 | 81,086 | 76,667 | 4,419 |
| 10 | 81,676 | 77,257 | 4,419 |
| 11 | 78,766 | 74,347 | 4,419 |
| 12 | 81,663 | 77,244 | 4,419 |
| 13 | 81,277 | 76,858 | 4,419 |
| 14 | 78,894 | 74,475 | 4,419 |
| 15 | 81,533 | 77,114 | 4,419 |
| 16 | 79,882 | 75,463 | 4,419 |
| 17 | 81,768 | 77,349 | 4,419 |
| 18 | 80,251 | 75,832 | 4,419 |
| 19 | 81,085 | 76,666 | 4,419 |

## 效能整理

| 指標 | Baseline | Fusion | 改善 |
|---|---:|---:|---:|
| 平均 cycles | 80,791.35 | 76,372.35 | 4,419 cycles |
| Cycle 降低比例 | - | - | 5.4696% |
| 功能測試 | 20/20 | 20/20 | 未觀察到功能回歸 |

固定減少的 4,419 cycles 與影像稀疏度無關，因為這次移除的是 controller 主導的 pooling 掃描流程，而不是資料相依的 MAC 計算量。

## 硬體成本與後續工作

新增的硬體主要是 24 個 signed INT8 暫存位置，也就是 192 bits，再加上一些小型 counter 與 comparator logic。這些內容理論上通常會落在 registers 或 LUTRAM，而不是 BRAM，但目前還沒有透過 Vivado synthesis 正式確認。

Verilator 只能驗證功能與 cycle 行為，還不能代表 FPGA 上的實際 implementation 已完全確認。如果要把這個優化視為 FPGA 可交付版本，下一步仍應執行 Vivado synthesis 與 implementation，確認 LUT/FF 使用量、推論出的 memory type、setup timing，以及實際可達到的最高時脈。
