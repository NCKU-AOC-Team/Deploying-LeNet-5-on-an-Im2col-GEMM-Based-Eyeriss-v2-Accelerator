這份是基於 BOYU 去改的
改了 Makefile 可以秀出 最大、平均、最小 cycle 以及 優化了 Processing_Element_core.v &　Later_data_Spad.v
(有時間再更新細節...)

在 sim/verilator 下執行 : make sim ITERS=1000 INT4_PACKED_SIMD2_FULL=1 INT4_REQUANT=14_7

```
=== Summary: 965/1000 passed (96.5%) ===
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=87 bank_conflict_events=29 parallel_events=96
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=114 bank_conflict_events=38 parallel_events=103
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=93 bank_conflict_events=31 parallel_events=92
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=108 bank_conflict_events=36 parallel_events=68
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=114 bank_conflict_events=38 parallel_events=80
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=78 bank_conflict_events=26 parallel_events=75
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=93 bank_conflict_events=31 parallel_events=76
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=72 bank_conflict_events=24 parallel_events=101
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=72 bank_conflict_events=24 parallel_events=86
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=111 bank_conflict_events=37 parallel_events=98
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=84 bank_conflict_events=28 parallel_events=116
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=132 bank_conflict_events=44 parallel_events=83
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=105 bank_conflict_events=35 parallel_events=82
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=78 bank_conflict_events=26 parallel_events=88
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=60 bank_conflict_events=20 parallel_events=85
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=84 bank_conflict_events=28 parallel_events=89
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=66 bank_conflict_events=22 parallel_events=89
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=99 bank_conflict_events=33 parallel_events=94
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=54 bank_conflict_events=18 parallel_events=72
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=75 bank_conflict_events=25 parallel_events=73
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=69 bank_conflict_events=23 parallel_events=56
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=87 bank_conflict_events=29 parallel_events=65
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=81 bank_conflict_events=27 parallel_events=77
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=66 bank_conflict_events=22 parallel_events=66
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=18 bank_conflict_events=6 parallel_events=35
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=30 bank_conflict_events=10 parallel_events=42
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=27 bank_conflict_events=9 parallel_events=36
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=75 bank_conflict_events=25 parallel_events=60
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=48 bank_conflict_events=16 parallel_events=83
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=81 bank_conflict_events=27 parallel_events=53
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=69 bank_conflict_events=23 parallel_events=66
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=78 bank_conflict_events=26 parallel_events=92
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=54 bank_conflict_events=18 parallel_events=68
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=33 bank_conflict_events=11 parallel_events=33
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=42 bank_conflict_events=14 parallel_events=40
[pe_lane1] TOP.TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=36 bank_conflict_events=12 parallel_events=34

========== Cycle Statistics (1000 patterns) ==========
  Avg    : 71780.87 cycles
  Min    : 67281 cycles
  Max    : 250000 cycles
  StdDev : 5765.45 cycles
====================================================
make: *** [Makefile:153: sim] Error 1
```


未來會嘗試把tool folder 下的 python code 修好 使我們可以用自己的weight 用在SIMD format 上面 
以及去解決TIMEOUT問題