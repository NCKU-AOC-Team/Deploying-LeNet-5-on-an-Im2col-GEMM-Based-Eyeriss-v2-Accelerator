# 同步 develop 並驗證

每當 `develop` 有新的 PR 被 merge 進去，你要把這些最新改動同步進**自己的分支**，並確認：合併沒衝突 / 衝突有解對、而且**沒把你分支原本的模擬行為弄壞**。

> **驗證核心：合併「前」「後」各跑一次模擬，各自存成 `.log`，再 `diff` 比對。**
> 兩份一致 → 這次合併沒有改變任何一筆分類結果與 cycle 數，代表合併乾淨。
> 判準是「**跟你自己合併前的基準一致**」，不是去對某個固定的準確率數字（通過數會隨 RTL 改動而變，不能寫死）。

全程在 **TA Docker**（Ubuntu 24.04 + Verilator 5.030）內操作。所有 `make` 指令都在 `FPGA_design/sim/verilator/` 目錄下跑。

---

## 注意（測資路徑防呆）

- `make sim` **預設**就吃對的測資（`../../test/tb/TOP_test/MEM/DRAM.txt` + `GOLDEN.txt`）。直接跑就好，**不要自己指定別的路徑**。
- ⚠️ **不要**手動帶 `DRAM=.../MEM/Test/...` 那套：那是還沒接完的 int4 半成品測資，結果會異常偏低，是預期的假象、不是你弄壞了。

---

## 快速版

```bash
git fetch origin
git switch <你的分支>
cd FPGA_design/sim/verilator
make sim ITERS=100 | tee before_merge.log                          # ① 合併前基準
git merge origin/develop                                           # ② 有衝突 → 解完 git add → git merge --continue
make sim ITERS=100 | tee after_merge.log                           # ③ 合併後
diff <(grep Iter before_merge.log) <(grep Iter after_merge.log)    # ④ 無輸出 = 行為一致
git push origin <你的分支>                                          # ⑤ 一致再推（要併回 develop 時才另外發 PR）
rm -f before_merge.log after_merge.log                             # ⑥ 清暫存
```

---

## 詳細版

### 0. 確認工作區乾淨
```bash
git status
```
有未提交的改動 → 先 `git commit` 或 `git stash` 再往下做。

### 1. 抓最新遠端狀態
```bash
git fetch origin
```

### 2. 切到自己分支，先建立「合併前」基準
```bash
git switch <你的分支>            # 例：git switch feat/hw-analysis
cd FPGA_design/sim/verilator
make sim ITERS=100 | tee before_merge.log
```
這份 `before_merge.log` 就是你的基準——驗證的對象，不是任何固定數字。

### 3. 合併 develop
```bash
git merge origin/develop
```
- **沒衝突** → 跳出 commit message 編輯器，存檔即可（預設訊息就夠；想補一句中文說明「為何同步」也行）。
- **有衝突** → 見下面「解衝突」。

#### 解衝突
```bash
git status                       # 看哪些檔衝突
# 手動編輯，處理 <<<<<<< ======= >>>>>>> 區塊
git add <已解決的檔>
git merge --continue
# 想整個放棄重來：git merge --abort
```

### 4. 跑「合併後」結果
```bash
make sim ITERS=100 | tee after_merge.log
```
> 第一次 build 會編譯整個設計、較久（數分鐘）；之後增量編譯很快。
> 若 build 行為怪（例如改到的 RTL 沒被重編），先 `make clean` 再跑一次。

### 5. 比對 before / after
```bash
diff <(grep Iter before_merge.log) <(grep Iter after_merge.log)
```

| diff 結果 | 意義 | 該怎麼辦 |
|---|---|---|
| **無輸出** | 每筆 result + cycle 完全相同 | ✅ 合併沒改變行為，乾淨，可以 push |
| **有差異** | 某些 result 或 cycle 變了 | ⚠️ 先確認差異是否來自這次 develop **本來就帶的改動**（看被合併的 PR 說明，例如某 PR 就是要改 cycle/結果）。對得上 → 正常；對不上、或分類結果（OK/FAIL）變差 → 衝突可能解錯，**別 push，先查** |

> 若你已知這次 develop 本來就會改 cycle（例如效能優化 PR），只想比分類結果、忽略 cycle 差異：
> ```bash
> diff <(awk '/Iter/{print $1,$2,$3,$4,$NF}' before_merge.log) \
>      <(awk '/Iter/{print $1,$2,$3,$4,$NF}' after_merge.log)
> ```

### 6. 通過後 push
```bash
git push origin <你的分支>
```
**（選做）發 PR：** 只有在「這支分支的工作已完成、要併回 develop」時，才到 GitHub 發 PR：`<你的分支>` → `develop`。若只是同步 develop、之後還要繼續開發，push 完即可，不必發 PR。

### 7. 清掉暫存 log
這些是 untracked 暫存產物，**不要 commit 進 repo**：
```bash
rm -f before_merge.log after_merge.log
```

---

## 常見狀況 FAQ

- **想看這次合併帶進哪些 commit**：`git log --oneline origin/<你的分支>..HEAD`
- **未追蹤的 `.log` 切分支時跟著我**：正常，untracked 檔不屬於任何分支，驗證完 `rm` 掉即可，不影響任何操作。
- **要更保險**：重大合併或 final 交件前，把 `ITERS=100` 換成 `ITERS=1000` 跑全量（約 19 分鐘；100 筆約 2–3 分鐘），抓差異更準。
- **跑出結果異常偏低**：你大概手動指到 `MEM/Test/` 那套 int4 測資了。改用預設 `make sim` 即可。
