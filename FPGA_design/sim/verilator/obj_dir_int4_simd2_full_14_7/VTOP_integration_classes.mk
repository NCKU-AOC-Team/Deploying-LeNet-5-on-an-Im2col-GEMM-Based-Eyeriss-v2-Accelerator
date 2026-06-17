# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTOP_integration.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTOP_integration \
	VTOP_integration___024root__DepSet_hd459c431__0 \
	VTOP_integration___024root__DepSet_h645e0d36__0 \
	VTOP_integration_ClusterGroup__DepSet_hab2a6c11__0 \
	VTOP_integration_ClusterGroup__DepSet_h25cf752f__0 \
	VTOP_integration_ClusterGroup__DepSet_h0534a6c8__0 \
	VTOP_integration_ClusterGroup__DepSet_hc4f14f45__0 \
	VTOP_integration_Iact_SRAM_Bank__DepSet_hd64f0f90__0 \
	VTOP_integration_Iact_SRAM_Bank__DepSet_hd64f0f90__1 \
	VTOP_integration_Iact_SRAM_Bank__DepSet_hd64f0f90__2 \
	VTOP_integration_ProcessingElement__DepSet_hb6f0b4eb__0 \
	VTOP_integration_ProcessingElement__DepSet_hb6f0b4eb__1 \
	VTOP_integration_ProcessingElement__DepSet_hb6f0b4eb__2 \
	VTOP_integration_ProcessingElement__DepSet_hb6f0b4eb__3 \
	VTOP_integration_ProcessingElement__DepSet_hb6f0b4eb__4 \
	VTOP_integration_ProcessingElement__DepSet_hb6f0b4eb__5 \
	VTOP_integration_ProcessingElement__DepSet_hb6f0b4eb__6 \
	VTOP_integration_ProcessingElement__DepSet_hb6f0b4eb__7 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTOP_integration__ConstPool_0 \
	VTOP_integration___024root__Slow \
	VTOP_integration___024root__DepSet_hd459c431__0__Slow \
	VTOP_integration___024root__DepSet_h645e0d36__0__Slow \
	VTOP_integration_ClusterGroup__Slow \
	VTOP_integration_ClusterGroup__DepSet_h350426d4__0__Slow \
	VTOP_integration_ClusterGroup__DepSet_h8a7c467b__0__Slow \
	VTOP_integration_ClusterGroup__DepSet_hab2a6c11__0__Slow \
	VTOP_integration_Iact_SRAM_Bank__Slow \
	VTOP_integration_Iact_SRAM_Bank__DepSet_h4b9d0090__0__Slow \
	VTOP_integration_Iact_SRAM_Bank__DepSet_hd64f0f90__0__Slow \
	VTOP_integration_ProcessingElement__Slow \
	VTOP_integration_ProcessingElement__DepSet_hc2809546__0__Slow \
	VTOP_integration_ProcessingElement__DepSet_hb6f0b4eb__0__Slow \
	VTOP_integration_ProcessingElement__DepSet_hb6f0b4eb__1__Slow \
	VTOP_integration_ProcessingElement__DepSet_hb6f0b4eb__2__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTOP_integration__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
