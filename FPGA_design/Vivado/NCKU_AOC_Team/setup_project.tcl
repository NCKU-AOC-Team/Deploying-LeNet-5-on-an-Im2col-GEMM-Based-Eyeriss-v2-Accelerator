# =============================================================================
# setup_project.tcl  —  GUI 用：把 develop 的 RTL 組成一個可直接合成的 Vivado 專案
#   只負責「建專案 + 加 src/IP/約束 + 設 top」，組好就停，剩下你在 GUI 按鈕跑。
#   ★ 跑一次就生出 build/eyeriss_develop.xpr；之後就「開它、點按鈕」，跟開作者 .xpr 一樣。
#
#   Board     : PYNQ-Z2  (xc7z020clg400-1)
#   Board top : TOP_integration_uart  (clock/reset/rx_pin_in -> result[3:0]/seg_7[6:0])
#
#   GUI 用法（擇一）：
#     A. 選單 Tools -> Run Tcl Script... -> 選本檔
#     B. Tcl Console 輸入：source <本檔完整路徑>
#   跑完專案會直接開在 GUI；接著用左側 Flow Navigator：
#     Run Synthesis -> Run Implementation -> Generate Bitstream -> Open Hardware Manager
#
#   注意：另建 NCKU_AOC_Team/build/ 專案，完全不動原作者 committed 的 PYNQ_Z2/；
#         IP 就地引用 PYNQ_Z2/ 的 .xci（其 .coe 相對路徑只在原位置解析得到，故不複製）。
#         重跑前若 build/ 專案已開在 GUI，請先 File -> Close Project（否則資料夾被鎖刪不掉）。
# =============================================================================

# ---- 0. 由「本腳本所在位置」推導 repo 根目錄（不依賴 cwd，GUI/批次都正確）-------
#   本檔位於  <ROOT>/FPGA_design/Vivado/NCKU_AOC_Team/  → 往上三層即 ROOT
set THIS_DIR [file dirname [file normalize [info script]]]
set ROOT     [file dirname [file dirname [file dirname $THIS_DIR]]]
if {![file exists "$ROOT/FPGA_design/src/TOP/TOP_integration_uart.v"]} {
    error "推導出的 repo 根目錄不對：$ROOT（找不到 FPGA_design/src/TOP/TOP_integration_uart.v）"
}

set PART      xc7z020clg400-1
set TOP       TOP_integration_uart
set PROJ      eyeriss_develop
set PROJ_DIR  $ROOT/FPGA_design/Vivado/NCKU_AOC_Team/build
set SRC_DIR   $ROOT/FPGA_design/src
set IP_DIR    $ROOT/FPGA_design/Vivado/PYNQ_Z2/PYNQ_Z2.srcs/sources_1/ip
set XDC       $ROOT/FPGA_design/constraints/constraints.xdc

# 板上 top 用到的 BRAM/ROM IP（就地引用原作者 .xci；processing_system7_0 是殘留、不收）
set IP_LIST {
    IP_Iact_Addr_SRAM_BRAM
    IP_Iact_DATA_Spad_BRAM
    IP_Iact_Data_SRAM_BRAM
    IP_Psum_DATA_Spad_BRAM
    IP_Psum_Data_SRAM_BRAM
    IP_Psum_Rearrange_BRAM
    IP_Weight_DATA_Spad_BRAM
    IP_ifmap_BRAM
    ROM_ifmap
    ROM_sparse_weight
}

# ---- 1. 開全新專案（-force 蓋掉舊的 build/，不碰 committed 專案）---------------
file delete -force $PROJ_DIR
create_project $PROJ $PROJ_DIR -part $PART -force

# ---- 2. 加入 develop RTL（遞迴收 src/ 底下所有 .v）-----------------------------
#   只收 src/ → 不會撈到 sim/verilator/bram_behavioral.v 或 IP 的 *_stub.v（避免撞名）
proc collect_v {dir} {
    set out {}
    foreach f [lsort [glob -nocomplain -directory $dir *]] {
        if {[file isdirectory $f]} {
            set out [concat $out [collect_v $f]]
        } elseif {[string match *.v $f]} {
            lappend out $f
        }
    }
    return $out
}
set RTL [collect_v $SRC_DIR]
puts "== 收到 [llength $RTL] 個 .v from src/ =="
add_files -norecurse $RTL

# ---- 2.5 多維 packed array（[i][j]/genvar 索引）需以 SystemVerilog 解析 --------
#   .v 預設被當 Verilog-2001 → 多維 packed 索引報 Synth 8-1008 "is not a memory"。
#   下列檔用到多維 packed array，設為 SV 即可正常索引（已掃過無 SV 保留字衝突）。
foreach b {Cluster_Group.v Cluster_Group_array.v Router_Cluster.v \
           GLB_Cluster.v PE_Cluster.v TOP.v TOP_controller.v} {
    set ff [get_files -quiet */$b]
    if {[llength $ff]} { set_property file_type SystemVerilog $ff }
}

# ---- 3. 加入 BRAM/ROM IP -----------------------------------------------------
foreach ip $IP_LIST {
    set xci $IP_DIR/$ip/$ip.xci
    if {![file exists $xci]} { error "缺 IP: $xci" }
    read_ip $xci
}
# IP 原生於 2019.1；若你的 Vivado 較新，upgrade_ip 會自動升版（同版則為 no-op）
catch { upgrade_ip [get_ips] }
generate_target all [get_ips]

# ---- 4. 約束（只用對應 uart top 腳位的這份；其它三份是 ROM/按鈕/BD 版會撞 port）--
add_files -fileset constrs_1 -norecurse $XDC

# ---- 5. 指定頂層 ------------------------------------------------------------
set_property top $TOP [current_fileset]
update_compile_order -fileset sources_1

# ---- 5.5 合成/實作優化（解 7z020 ~99.9% Slice 邊緣的擁塞、收斂問題）-----------
#   背景：本設計 LUT 只用 ~69% 但 Slice 佔到 99.86%，瓶頸在「control set 太碎
#         (5663 組) → slice 塞不滿又佔滿」。預設 synth/impl 在這種邊緣很容易
#         route 卡死（曾凍結 2h+）。下列設定壓面積 + 合併 control set + 抗擁塞。
#   注意：這些是設在 run 的「策略/參數」上，GUI 按 Run Synthesis/Implementation
#         會自動沿用；headless 的 build_bitstream.tcl 也會沿用。
if {[llength [get_runs -quiet synth_1]]} {
    # 合成：面積優先 directive；提高 control_set 合併門檻以降低 unique control sets
    set_property STEPS.SYNTH_DESIGN.ARGS.DIRECTIVE AreaOptimized_high      [get_runs synth_1]
    set_property STEPS.SYNTH_DESIGN.ARGS.CONTROL_SET_OPT_THRESHOLD 16      [get_runs synth_1]
    set_property STEPS.SYNTH_DESIGN.ARGS.FLATTEN_HIERARCHY rebuilt         [get_runs synth_1]
    puts "== synth_1：已套用 AreaOptimized_high + control_set_opt_threshold=16 =="
}
if {[llength [get_runs -quiet impl_1]]} {
    # 實作：抗擁塞策略（place=AltSpreadLogic_high、route=Explore 等）+ 開 phys_opt
    set_property strategy Congestion_SpreadLogic_high                      [get_runs impl_1]
    set_property STEPS.PHYS_OPT_DESIGN.IS_ENABLED true                     [get_runs impl_1]
    puts "== impl_1：已套用 Congestion_SpreadLogic_high + phys_opt =="
}

puts "==================================================================="
puts " 專案已就緒：$PROJ_DIR/$PROJ.xpr   top = $TOP"
puts " 接下來用 Flow Navigator：Run Synthesis -> Run Implementation"
puts "                          -> Generate Bitstream -> Open Hardware Manager"
puts "==================================================================="
