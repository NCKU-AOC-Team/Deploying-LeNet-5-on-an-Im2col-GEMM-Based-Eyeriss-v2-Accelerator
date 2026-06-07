# PE SIMD x2 與 True Dual-Port BRAM 修改

本文件整理目前 SIMD 版本與原始版本的 cycle 差異，並記錄後續把 `Later_Data_Spad` 從 duplicate storage 改成 true dual-port BRAM 的結果。這次修改集中在 PE 內部的 `Later_Data_Spad -> Processing_Element_core -> Psum_Spad` 路徑，目標是讓同一筆 former data 可以同時計算兩筆 later data 的乘法，同時不要因為第二讀口額外複製一份 BRAM。

## 版本

| 版本 | 路徑 | 說明 |
| --- | --- | --- |
| Baseline | `/home/LAB505/projects/Deploying-VGG-16-on-an-Im2col-GEMM-Based-Eyeriss-v2-Accelerator` | 原始 `Lswen` 分支，PE 每次只處理 1 筆 later data |
| SIMD x2 + TDP BRAM | `/home/LAB505/projects/Deploying-VGG-16-on-an-Im2col-GEMM-Based-Eyeriss-v2-Accelerator_Lswen_SIMD` | PE 同一個 `DO_MAC` 週期計算 lane0/lane1 兩個 product，later-data SPad 用單一 true dual-port BRAM 供應兩個同步讀口 |

## 量測方式

量測使用 Verilator model，跑前 10 筆 `DRAM.txt` / `GOLDEN.txt` 測資，10 筆皆通過。

cycle 統計口徑與 `FPGA_design/sim/verilator/sim_main.cpp` 的 `waited` 相同：

1. reset 後等待 4096 cycles。
2. 寫入 784 筆 28x28 ifmap。
3. 從 ifmap 寫完後開始計 cycle。
4. 當 `result != 4'hf` 時停止。

layer-level cycle 是每個 cycle 讀取 `TOP_controller.state` 與 `ctrl_layer_count` 後分類統計。`Total waited` 會包含開始時的一個 `IDLE` cycle；各 layer total 則只統計該 layer 在 `LAYER_LOAD_IFMAP` 到 `LAYER_DONE` 的 cycles。

## True Dual-Port BRAM 驗證結果

本次把 `Later_Data_Spad` 的兩份 `Weight_DATA_Spad_BRAM` 改成一份 `Weight_DATA_Spad_TDP_BRAM`。port A 在 load/clear 時寫入，在 compute 時讀 lane0；port B 同步讀 lane1，也就是 `read_addr + 1`。外部 CSC 資料格式仍是 `{8-bit data, 4-bit count}`，所以 `.mem` 權重檔和 software packing 不需要改。

驗證結果如下：

| 測試 | 結果 |
| --- | --- |
| `make sim ITERS=5` | 5/5 passed，前 5 筆全對 |
| `make sim ITERS=100` | 99/100 passed，平均 `80914.10` cycles |
| fail case | iter 80：`result=5`、`golden=9`，`81003` cycles |
| A/B 對照 | 暫時切回 duplicate single-port 對 iter 80 重跑，結果同樣是 `result=5 golden=9` |

因此 true dual-port BRAM 版本的記憶體行為和 duplicate 版本對齊；目前不能宣稱整體模型 100% golden correct，因為 SIMD x2 架構本身在第 80 筆已有一個分類不一致案例。不過這個不一致不是 TDP BRAM 造成的。

## BRAM 用量估算

PYNQ-Z2 使用的 XC7Z020 在既有 Vivado report 中可用 `140` 個 Block RAM Tile，原始實作已經使用 `134.5 / 140 = 96.07%`。duplicate SIMD 版本因為每個 PE 多複製一份 later-data SPad，會額外增加 `36` 顆 RAMB18，也就是 `18` 個 Block RAM Tile。

| 版本 | Later-data SPad 實作 | 估計 BRAM tile | PYNQ-Z2 使用率 | 結論 |
| --- | --- | ---: | ---: | --- |
| 原始 / non-duplicate | 每 PE 一份 weight/later-data SPad | 134.5 | 96.07% | 勉強放得下 |
| SIMD x2 duplicate | 每 PE 兩份 single-port SPad | 152.5 | 108.93% | 放不下 |
| SIMD x2 TDP | 每 PE 一份 true dual-port SPad | 134.5 | 96.07% | BRAM 估算可放下 |

TDP 版把 duplicate 造成的 `18` tiles 拿回來，PYNQ-Z2 理論上還剩 `5.5` tiles。這裡是根據 RTL instance 與既有 utilization report 推估；最後仍需要跑 Vivado synth/implementation 確認，因為目前整體 Slice 使用率原本也已經非常緊。

## 10 筆 Total Cycle

| Iter | Baseline | SIMD x2 | 減少 cycles | 減少比例 |
| ---: | ---: | ---: | ---: | ---: |
| 0 | 88400 | 81184 | 7216 | 8.16% |
| 1 | 88440 | 81104 | 7336 | 8.29% |
| 2 | 85152 | 79874 | 5278 | 6.20% |
| 3 | 87474 | 81097 | 6377 | 7.29% |
| 4 | 87722 | 81270 | 6452 | 7.36% |
| 5 | 89108 | 81462 | 7646 | 8.58% |
| 6 | 86444 | 80771 | 5673 | 6.56% |
| 7 | 89842 | 81649 | 8193 | 9.12% |
| 8 | 83716 | 79535 | 4181 | 4.99% |
| 9 | 87639 | 81086 | 6553 | 7.48% |
| Average | 87393.7 | 80903.2 | 6490.5 | 7.43% |

## 每層平均 Cycle

| Layer | 類型 | Baseline avg | SIMD x2 avg | 減少 cycles | 減少比例 |
| ---: | --- | ---: | ---: | ---: | ---: |
| 0 | Conv | 28262.5 | 24865.7 | 3396.8 | 12.02% |
| 1 | Conv | 22243.5 | 19837.9 | 2405.6 | 10.81% |
| 2 | FC | 27053.7 | 26561.2 | 492.5 | 1.82% |
| 3 | FC | 8829.2 | 8667.1 | 162.1 | 1.84% |
| 4 | FC | 1003.8 | 970.3 | 33.5 | 3.34% |

## 減少集中在哪裡

這次修改沒有改 GLB、Router、CSC packing、Psum_Requantizer、Pooling，也沒有改 `Psum_Spad` 為雙寫 port。因此大部分 state 的 cycle 不會變，減少主要集中在 `LAYER_CAL`。

| Layer | Baseline CAL avg | SIMD x2 CAL avg | CAL 減少 cycles | CAL 減少比例 |
| ---: | ---: | ---: | ---: | ---: |
| 0 | 20250.5 | 16853.7 | 3396.8 | 16.77% |
| 1 | 11213.5 | 8807.9 | 2405.6 | 21.45% |
| 2 | 2861.7 | 2369.2 | 492.5 | 17.21% |
| 3 | 834.2 | 672.1 | 162.1 | 19.43% |
| 4 | 236.8 | 203.3 | 33.5 | 14.15% |

每層 total 減少量等於該層 `LAYER_CAL` 減少量，表示目前 SIMD x2 的效益完全來自 PE 計算階段。

## 目前 SIMD x2 做到的事情

原本 PE 的流程是一筆 former data 對一筆 later data：

```text
READ_LATER_DATA_1 -> READ_LATER_DATA_2 -> DO_MAC -> WRITE_BACK
```

現在 `Later_Data_Spad` 會同時輸出兩筆 later data：

```text
data_out      = current later entry
data_out_next = current later entry + 1
```

目前這兩筆資料來自同一份 true dual-port BRAM，而不是兩份內容相同的 BRAM。這是為了保留 SIMD x2 的第二讀口，同時避免 BRAM 用量超過 PYNQ-Z2。

`Processing_Element_core` 會在同一個 `DO_MAC` 週期計算兩個 product：

```text
lane0 product = former_data * later_data_current
lane1 product = former_data * later_data_next
```

psum 寫回仍然使用原本單 write port，所以會分成兩個狀態：

```text
WRITE_BACK       -> 寫 lane0 psum
WRITE_BACK_LANE1 -> 寫 lane1 psum
```

因此目前是 PE 內部乘法計算 x2，但還不是完整的每 cycle 雙 psum 寫回架構。

## 與原版相比更改內容

### `SPad/Later_data_Spad.v`

- 新增 `data_out_next`，輸出下一筆 later data。
- 新增 `index_inc_by_2`，lane1 有效時讓 `column_num` 一次前進 2。
- 將 duplicate single-port BRAM 改成 `Weight_DATA_Spad_TDP_BRAM`，用同一份 memory 同步讀 lane0 / lane1。
- 使用 `(* ram_style = "block" *)` 讓 Vivado 優先推成 BRAM。
- reset 後清完整 128-depth physical memory，避免 lane1 讀 `addr + 1` 時看到未初始化尾端。
- 外部資料格式仍維持原本 `{8-bit data, 4-bit count}`，所以 `.mem` 和 CSC packing 暫時不用改。

### `Processing_Element_core.v`

- 新增 `SIMD_LANE2_ENABLE`。
- FSM 從 3-bit 擴成 4-bit。
- 新增 `WRITE_BACK_LANE1` 狀態。
- 新增 lane1 later data decode。
- 新增 `product_lane1_reg`。
- 新增 lane0/lane1 各自的 psum write index。
- 新增 `simd_lane1_valid_wire`，避免 lane1 跨 column 或吃到 zero terminator。
- `DO_MAC` 同時計算 lane0/lane1 product。
- `WRITE_BACK` 寫 lane0，`WRITE_BACK_LANE1` 寫 lane1。

## 為什麼 total 只下降約 7.43%

雖然 PE 內部可以同時計算兩個 product，但整體系統還有其他固定開銷：

- `LOAD_GLB` 和 `LOAD_PE` 沒有變寬。
- CSC / im2col 資料格式沒有改。
- Router bus 沒有變成雙 lane。
- `Psum_Spad` 仍是單 write port，lane0/lane1 psum 需要分兩拍寫。
- ReLU、read-out psum、pooling、softmax 都沒有變。
- 只有 later data 連續且 lane1 valid 時，`column_num` 才能一次前進 2。

所以目前 SIMD x2 是一個安全的第一版 prototype：它確實降低 `LAYER_CAL` cycle，但還沒有把整個 memory path 和 psum path 完整 SIMD 化。

## 若要做完整 SIMD，還需要大改的地方

1. 權重與 activation packing 格式。
2. CSC encoder/decoder 的多 lane nonzero stream。
3. GLB SRAM output 與 Router bus width。
4. PE input FIFO 與 SPad banking。
5. `Psum_Spad` dual write port 或 banked psum writeback。
6. Controller 的 lane valid、index +N、跨 column 結束控制。
7. software 端 `.mem` 產生流程與 golden 對齊。

目前版本先保留原本 `.mem` 格式，用 true dual-port later-data SPad 取得第二讀口，因此可以在不重做權重檔的情況下驗證 SIMD x2 的功能與 cycle 改善。下一步若要把 99/100 提升到完全 golden 對齊，應先追第 80 筆在 SIMD x2 的 lane1 合併、psum 寫回順序、或量化臨界值是否改變分類。
