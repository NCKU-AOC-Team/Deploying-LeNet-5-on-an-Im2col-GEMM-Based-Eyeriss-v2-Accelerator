# BOYU_ShunWei Vivado report flow.
# Run from the repository root with:
#   vivado -mode batch -source FPGA_design/Vivado/PYNQ_Z2/run_boyu_reports.tcl
#
# This script does not change RTL. It reruns implementation and writes reports
# used to decide BRAM/LUT/DSP/timing optimization targets.

set script_dir [file dirname [info script]]
set project_file [file normalize [file join $script_dir PYNQ_Z2.xpr]]
set report_dir [file normalize [file join $script_dir reports_boyu_shunwei]]

file mkdir $report_dir

open_project $project_file

reset_run synth_1
launch_runs impl_1 -to_step write_bitstream -jobs 8
wait_on_run impl_1

open_run impl_1

report_utilization -file [file join $report_dir utilization_flat.rpt]
report_utilization -hierarchical -file [file join $report_dir utilization_hierarchical.rpt]
report_timing_summary -max_paths 20 -file [file join $report_dir timing_summary.rpt]
report_control_sets -verbose -file [file join $report_dir control_sets.rpt]
report_qor_suggestions -file [file join $report_dir qor_suggestions.rpt]

puts "BOYU_ShunWei reports written to: $report_dir"
