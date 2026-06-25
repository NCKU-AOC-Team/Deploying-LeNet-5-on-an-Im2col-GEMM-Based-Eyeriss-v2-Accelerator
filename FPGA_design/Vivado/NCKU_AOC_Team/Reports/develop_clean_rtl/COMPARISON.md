# 合成/實作結果比較：原作者 vs 乾淨 RTL(develop + SV + 優化)

比較目標板 PYNQ-Z2(`xc7z020clg400-1`)、頂層 `TOP_integration_uart`、時脈 **125 MHz(period 8.000 ns)**。

- **原作者(Original)**:`FPGA_design/Vivado/PYNQ_Z2/PYNQ_Z2.runs/impl_1/`(flat 結構舊 RTL)。
- **本次(Clean RTL)**:develop 原始 RTL,經 `setup_project.tcl` 以 SystemVerilog 解析多維訊號 + 套面積/抗擁塞優化(`AreaOptimized_high`、`control_set_opt_threshold=16`、`Congestion_SpreadLogic_high`、`phys_opt`)合成。
- **功能**:已上板以 `host_demo/fpga_uart_demo.py` 經 UART 驗證,推論行為與 demo 一致(功能等價)。

## 資源用量(utilization_placed)

| 項目 | 原作者 | 本次(乾淨 RTL) | 變化 |
|---|---|---|---|
| Slice LUTs | 39,537 (74.32%) | 37,077 (69.69%) | **−2,460(−6.2%)** |
| └ LUT as Logic | 39,198 (73.68%) | 36,746 (69.07%) | −2,452 |
| └ LUT as Memory | 339 (1.95%) | 331 (1.90%) | −8 |
| Slice Registers (FF) | 51,828 (48.71%) | 52,274 (49.13%) | +446 |
| F7 Muxes | 3,281 | 3,622 | +341 |
| F8 Muxes | 720 | 727 | +7 |
| Slice(已佔用) | 13,292 (99.94%) | 13,293 (99.95%) | ≈ 持平(幾乎滿) |
| Block RAM Tile | 134.5 (96.07%) | 134.5 (96.07%) | 相同 |
| **DSPs** | **0 (0%)** | **73 (33.18%)** | **+73** |
| Bonded IOB | 14 | 14 | 相同 |
| Total control sets | 5,138 | 5,663 | +525 |

## 時序(timing_summary_routed)

| 項目 | 原作者 | 本次(乾淨 RTL) |
|---|---|---|
| 目標時脈 | 125 MHz(8.000 ns) | 125 MHz(8.000 ns) |
| WNS (ns) | 6.108 | **6.542** |
| TNS (ns) | 0.000 | 0.000 |
| WHS (ns) | 0.266 | 0.290 |
| THS (ns) | 0.000 | 0.000 |
| 時序收斂 | ✅ 全部 met | ✅ 全部 met |

## 觀察

1. **LUT 降低、改用 DSP**:本次把乘法映射到 **73 顆 DSP**(原作者為 0),連帶 LUT 少了約 6.2%。這正符合原作者 README 的推測——「DSP 使用量為 0,乘法被合成到 LUT,理論上可用 DSP mapping 降低 LUT / timing 壓力」。本次的乾淨 RTL + 合成設定實現了這點。
2. **時序更寬裕**:WNS 由 6.108 → 6.542 ns,兩者皆在 125 MHz 下 met,本次餘裕略大。
3. **Slice 仍接近滿載**:兩版 Slice 佔用都約 99.95%,瓶頸仍在 Slice 佔用(control set 偏多導致 slice 塞不滿又佔滿);抗擁塞策略讓本次在此前提下仍順利 route 且收斂。
4. **BRAM 完全相同**(134.5 / 96.07%),代表記憶體架構未變。
5. **功能等價**:資源映射雖不同(尤其 DSP),但上板推論結果與 demo 一致,屬「同功能、不同實作映射」。

## 結論

乾淨 RTL(develop 原碼)搭配 SystemVerilog 解析與面積/抗擁塞優化,在**不改 RTL** 的前提下達成:LUT 更省、時序更寬、功能與原作者一致,並驗證了多維訊號 workaround 確實可被 SV 選項取代。

---
*資料來源:`utilization_placed.rpt` / `timing_summary_routed.rpt` / `control_sets_placed.rpt`(本資料夾與 `PYNQ_Z2.runs/impl_1/`)。*
