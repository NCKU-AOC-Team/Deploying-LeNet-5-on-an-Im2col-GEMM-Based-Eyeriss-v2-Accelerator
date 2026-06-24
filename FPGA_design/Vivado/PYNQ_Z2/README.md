# PYNQ_Z2/ — 原作者 legacy Vivado 專案（請勿用於重現）

這個資料夾是**原作者**很久以前 flat 檔案結構的 Vivado 專案,**僅供參考保留**。

> ⚠️ **不要開這裡的 `PYNQ_Z2.xpr` 來重現結果。**
> develop 分支已把 `src/` 重構成巢狀資料夾並重新命名,直接開作者的 `.xpr` 會出現約 53 個
> file-not-found,而且即使燒得起來也**不是我們最終的 RTL**。

## 要重現 / 燒板,請改去：

➡️ **`FPGA_design/Vivado/NCKU_AOC_Team/README.md`**

那份說明同時提供:
- **快速路徑**:直接燒已附的 `.bit`(免重建、與 Vivado 版本無關)。
- **完整重建**:用 `setup_project.tcl` 依 develop 現況重新組專案後再跑 synth/impl/bitstream。
