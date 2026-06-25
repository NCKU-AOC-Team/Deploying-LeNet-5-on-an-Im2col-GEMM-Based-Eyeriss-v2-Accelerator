# =============================================================================
# build_bitstream.tcl  —  選用：一鍵 headless（建專案 + synth + impl + bitstream）
#   GUI 使用者不需要這支。GUI 請 source setup_project.tcl 後用 Flow Navigator 按鈕。
#   這支是給「想用一道指令從頭重生 bitstream」（重現性 / 交付 / CI）時用。
#
#   執行（在 repo 根目錄 Deploying-VGG-16-...）：
#     vivado -mode batch -source FPGA_design/Vivado/NCKU_AOC_Team/build_bitstream.tcl -nojournal -log build.log
# =============================================================================

# 先 source 同資料夾的 setup（會建好專案、加 src/IP/約束、設好 top，並定義 PROJ/PROJ_DIR）
set THIS_DIR [file dirname [file normalize [info script]]]
source [file join $THIS_DIR setup_project.tcl]

# ---- 跑完整 flow：合成 -> 實作 -> 產 bitstream -------------------------------
launch_runs synth_1 -jobs 4
wait_on_run synth_1
if {[get_property PROGRESS [get_runs synth_1]] ne "100%"} {
    error "Synthesis 失敗，看 $PROJ_DIR/$PROJ.runs/synth_1 的 log"
}

launch_runs impl_1 -to_step write_bitstream -jobs 4
wait_on_run impl_1
if {[get_property PROGRESS [get_runs impl_1]] ne "100%"} {
    error "Implementation / write_bitstream 失敗，看 $PROJ_DIR/$PROJ.runs/impl_1 的 log"
}

set BIT [glob -nocomplain $PROJ_DIR/$PROJ.runs/impl_1/*.bit]
puts "==================================================================="
puts " DONE. Bitstream: $BIT"
puts "==================================================================="
