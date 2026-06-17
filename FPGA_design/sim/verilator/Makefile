# =============================================================================
# Verilator simulation flow for BoooC's Eyeriss-v2 + LeNet-5.
# Target env: Ubuntu 24.04 + Verilator 5.030 (TA grading Docker).
#
# Layout:
#   sim/verilator/         <- this directory (Makefile, sim_main.cpp, BRAMs)
#   ../../src/             <- author's RTL (untouched)
#   ../../test/tb/TOP_test <- test data (DRAM.txt, GOLDEN.txt)
#
# Targets:
#   make sim                 build + run 5 patterns
#   make sim ITERS=1000      build + run full test set
#   make trace               build + run with VCD dump (open dump.vcd in gtkwave)
#   make trace_public        same as trace, but builds with --public-flat-rw
#   make build               build only
#   make clean               nuke obj_dir variants + waveforms
# =============================================================================

VERILATOR ?= verilator
TOP       := TOP_integration

# PUBLIC_FLAT_RW=1 enables Verilator's --public-flat-rw and uses a separate
# build directory so the normal fast model and public-flat model do not mix.
# TRACE=1 enables VCD tracing. Keep normal sim trace-free for faster builds.
# OCC=1 prints Verilator-only BRAM occupancy counters at simulation final.
PUBLIC_FLAT_RW ?= 0
PUBLIC_FLAT_RW_ON := $(filter 1 yes true on,$(PUBLIC_FLAT_RW))
PUBLIC_FLAT_RW_FLAG := $(if $(PUBLIC_FLAT_RW_ON),--public-flat-rw,)
TRACE ?= 0
TRACE_ON := $(filter 1 yes true on,$(TRACE))
TRACE_FLAG := $(if $(TRACE_ON),--trace,)
OCC ?= 0
OCC_ON := $(filter 1 yes true on,$(OCC))
OCC_FLAG := $(if $(OCC_ON),+define+BRAM_OCCUPANCY,)
INT4_REGEN ?= 0
INT4_REGEN_ON := $(filter 1 yes true on,$(INT4_REGEN))
INT4_PACKED ?= 0
INT4_PACKED_ON := $(filter 1 yes true on,$(INT4_PACKED))
INT4_PACKED_TWO_LANE ?= 0
INT4_PACKED_TWO_LANE_ON := $(filter 1 yes true on,$(INT4_PACKED_TWO_LANE))
INT4_PACKED_SIMD2 ?= 0
INT4_PACKED_SIMD2_ON := $(filter 1 yes true on,$(INT4_PACKED_SIMD2))
INT4_PACKED_SIMD2_FULL ?= 0
INT4_PACKED_SIMD2_FULL_ON := $(filter 1 yes true on,$(INT4_PACKED_SIMD2_FULL))
INT4_PACKED_SPAD ?= 0
INT4_PACKED_SPAD_ON := $(filter 1 yes true on,$(INT4_PACKED_SPAD))
INT4_MODE_ON := $(filter 1 yes true on,$(INT4_REGEN) $(INT4_PACKED) $(INT4_PACKED_TWO_LANE) $(INT4_PACKED_SIMD2) $(INT4_PACKED_SIMD2_FULL))
INT4_REGEN_FLAG := $(if $(INT4_MODE_ON),+define+INT4_AS_INT8_REGEN,)
INT4_PACKED_FLAG := $(if $(INT4_PACKED_SIMD2_FULL_ON),+define+INT4_PACKED_SIMD2_FULL,$(if $(INT4_PACKED_SIMD2_ON),+define+INT4_PACKED_SIMD2,$(if $(INT4_PACKED_TWO_LANE_ON),+define+INT4_PACKED_TWO_LANE,$(if $(INT4_PACKED_ON),+define+INT4_PACKED_SINGLE_LANE,))))
INT4_PACKED_SPAD_FLAG := $(if $(INT4_PACKED_SPAD_ON),+define+INT4_PACKED_SPAD_STORAGE,)
INT4_LANE_SEL ?= 0
INT4_LANE1_ON := $(filter 1 yes true on,$(INT4_LANE_SEL))
INT4_LANE_FLAG := $(if $(INT4_LANE1_ON),+define+INT4_LANE1,)
INT4_REQUANT ?= 14_7
INT4_REQUANT_FLAG := $(if $(INT4_MODE_ON),+define+INT4_REQUANT_$(INT4_REQUANT),)
INT4_RUNTIME_MODE_ARG := $(if $(INT4_PACKED_SIMD2_FULL_ON),--int4-weight-mode,)
BUILD_DIR := obj_dir$(if $(PUBLIC_FLAT_RW_ON),_public,)$(if $(TRACE_ON),_trace,)$(if $(OCC_ON),_occ,)$(if $(INT4_REGEN_ON),_int4_$(INT4_REQUANT),)$(if $(INT4_PACKED_ON),_int4_packed_$(INT4_REQUANT),)$(if $(INT4_PACKED_TWO_LANE_ON),_int4_two_lane_$(INT4_REQUANT)_lane$(INT4_LANE_SEL),)$(if $(INT4_PACKED_SIMD2_ON),_int4_simd2_$(INT4_REQUANT),)$(if $(INT4_PACKED_SIMD2_FULL_ON),_int4_simd2_full_$(INT4_REQUANT),)$(if $(INT4_PACKED_SPAD_ON),_spad4,)

RTL_DIR  := ../../src
TEST_DIR := ../../test/tb/TOP_test/MEM

# All .v under src/ except board-demo modules (UART, display, alternate TOPs,
# clock_gen / debounce / interrupt — board IO only, no role in sim).
RTL_SRCS := $(shell find $(RTL_DIR) -name '*.v' \
            ! -path '*/UART/*' \
            ! -path '*/display/*' \
            ! -name 'TOP_integration_uart.v' \
            ! -name 'TOP_integration_rom.v' \
            ! -name 'clock_gen.v' \
            ! -name 'debouncing.v' \
            ! -name 'interrupt_gen.v' \
            ! -name 'SCNN_shape_info_compiler.v' \
            ! -name 'CSC_encoderr_FIFO.v')

BEHAV_SRCS := bram_behavioral.v
CPP_SRCS   := sim_main.cpp

# LeNet weight ROM: convert Vivado COE to $readmemh format at build time.
# The behavioral ROM_sparse_weight module reads this on sim start.
COE_FILE ?= $(if $(INT4_PACKED_SIMD2_FULL_ON),../../test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED_SIMD2_FULL.coe,$(if $(INT4_PACKED_SIMD2_ON),../../test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED_SAME_COUNT_SIMD2.coe,$(if $(INT4_PACKED_TWO_LANE_ON),../../test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED_TWO_LANE_FC_SIDEBAND.coe,$(if $(INT4_PACKED_ON),../../test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED_SINGLE_LANE.coe,$(if $(INT4_REGEN_ON),../../test/tb/TOP_test/MEM/int4_as_int8_regen/ROM_sparse_INT4_SIGNEXT_AS_INT8.coe,../../Vivado/PYNQ_Z2/PYNQ_Z2.ip_user_files/mem_init_files/ROM_sparse_COE.coe)))))
MEM_FILE := rom_sparse_weight.mem

VFLAGS := --cc --exe --build -j 0 \
          --top-module $(TOP) \
          --Mdir $(BUILD_DIR) \
          $(TRACE_FLAG) \
          $(PUBLIC_FLAT_RW_FLAG) \
          $(OCC_FLAG) \
          $(INT4_REGEN_FLAG) \
          $(INT4_PACKED_FLAG) \
          $(INT4_PACKED_SPAD_FLAG) \
          $(INT4_LANE_FLAG) \
          $(INT4_REQUANT_FLAG) \
          -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CASEINCOMPLETE \
          -Wno-INITIALDLY -Wno-LATCH -Wno-UNUSED \
          -Wno-MULTIDRIVEN -Wno-BLKANDNBLK \
          -Wno-IMPLICIT -Wno-PINMISSING \
          -Wno-WIDTHCONCAT -Wno-UNSIGNED -Wno-COMBDLY

ITERS  ?= 5
DRAM   ?= $(TEST_DIR)/DRAM.txt
GOLDEN ?= $(TEST_DIR)/GOLDEN.txt

.PHONY: all build build_public sim sim_public trace run_trace trace_public clean help

all: sim

help:
	@grep -E '^[a-zA-Z_-]+:.*##' Makefile | sort | awk 'BEGIN{FS=":.*## "};{printf "  %-12s %s\n", $$1, $$2}'

build: $(BUILD_DIR)/V$(TOP) ## Build only (normal fast mode by default)

build_public: ## Build with --public-flat-rw enabled
	$(MAKE) build PUBLIC_FLAT_RW=1

$(BUILD_DIR)/V$(TOP): $(RTL_SRCS) $(BEHAV_SRCS) $(CPP_SRCS) $(MEM_FILE) Makefile
	@echo "[verilator] $(words $(RTL_SRCS)) RTL files + $(words $(BEHAV_SRCS)) behavioral + $(words $(CPP_SRCS)) C++"
	@echo "[mode] PUBLIC_FLAT_RW=$(PUBLIC_FLAT_RW) TRACE=$(TRACE) BUILD_DIR=$(BUILD_DIR)"
	$(VERILATOR) $(VFLAGS) $(RTL_SRCS) $(BEHAV_SRCS) $(CPP_SRCS)

# Strip COE header (lines 1-2) and trailing commas/semicolons, leaving one hex
# value per line — the $readmemh format ROM_sparse_weight expects.
#
# Always force-regenerate because COE_FILE changes with INT4 mode flags;
# make's timestamp-based check cannot detect that a previously-built
# rom_sparse_weight.mem came from a different COE_FILE.
.PHONY: _force_mem
$(MEM_FILE): _force_mem $(COE_FILE)
	@echo "[coe->mem] $(notdir $(COE_FILE)) -> $(MEM_FILE)"
	@tail -n +3 $(COE_FILE) | tr -d ',;' | tr -d ' \t' | grep -v '^$$' > $@
	@echo "  $$(wc -l < $@) entries"

#sim: build ## Run sim (default ITERS=5; override: make sim ITERS=10)
#./$(BUILD_DIR)/V$(TOP) --iters $(ITERS) --dram $(DRAM) --golden $(GOLDEN) $(INT4_RUNTIME_MODE_ARG)


sim: build ## Run sim (default ITERS=5; override: make sim ITERS=10)
	@{ ./$(BUILD_DIR)/V$(TOP) --iters $(ITERS) --dram $(DRAM) --golden $(GOLDEN) $(INT4_RUNTIME_MODE_ARG); echo "EXIT:$$?"; } \
	| tee /tmp/sim_run.log \
	| grep -oP '\(\K\d+(?= cycles\))' \
	| awk '{ sum+=$$1; n++; if(n==1||$$1<mn)mn=$$1; if($$1>mx)mx=$$1; v[n]=$$1 } \
	  END { if(n==0) exit; avg=sum/n; \
	    for(i=1;i<=n;i++) sq+=(v[i]-avg)^2; \
	    printf "\n========== Cycle Statistics (%d patterns) ==========\n",n; \
	    printf "  Avg    : %.2f cycles\n",avg; \
	    printf "  Min    : %d cycles\n",mn; \
	    printf "  Max    : %d cycles\n",mx; \
	    printf "  StdDev : %.2f cycles\n",sqrt(sq/n); \
	    printf "====================================================\n" }'; \
	grep -q "FAIL" /tmp/sim_run.log && exit 1 || exit 0

sim: build ## Run sim (default ITERS=5; override: make sim ITERS=10)
	./$(BUILD_DIR)/V$(TOP) --iters $(ITERS) --dram $(DRAM) --golden $(GOLDEN) $(INT4_RUNTIME_MODE_ARG) \
	2>&1 | tee /tmp/sim_run.log; \
	grep -oP '\(\K\d+(?= cycles\))' /tmp/sim_run.log | awk \
	'{ sum+=$$1; n++; if(n==1||$$1<mn)mn=$$1; if($$1>mx)mx=$$1; v[n]=$$1 } \
	END { if(n==0) exit; avg=sum/n; \
	  for(i=1;i<=n;i++) sq+=(v[i]-avg)^2; \
	  printf "\n========== Cycle Statistics (%d patterns) ==========\n",n; \
	  printf "  Avg    : %.2f cycles\n",avg; \
	  printf "  Min    : %d cycles\n",mn; \
	  printf "  Max    : %d cycles\n",mx; \
	  printf "  StdDev : %.2f cycles\n",sqrt(sq/n); \
	  printf "====================================================\n" }'; \
	grep -q "FAIL" /tmp/sim_run.log && exit 1 || exit 0
    
sim_public: ## Run sim with --public-flat-rw enabled
	$(MAKE) sim PUBLIC_FLAT_RW=1 ITERS=$(ITERS) DRAM=$(DRAM) GOLDEN=$(GOLDEN) OCC=$(OCC)

trace: ## Same as sim but dumps dump.vcd
	$(MAKE) run_trace TRACE=1 PUBLIC_FLAT_RW=$(PUBLIC_FLAT_RW) ITERS=$(ITERS) DRAM=$(DRAM) GOLDEN=$(GOLDEN) OCC=$(OCC)

run_trace: build
	./$(BUILD_DIR)/V$(TOP) --iters $(ITERS) --dram $(DRAM) --golden $(GOLDEN) $(INT4_RUNTIME_MODE_ARG) --trace
	@echo "Waveform: $(CURDIR)/dump.vcd"

trace_public: ## Same as trace, but builds with --public-flat-rw enabled
	$(MAKE) trace PUBLIC_FLAT_RW=1 ITERS=$(ITERS) DRAM=$(DRAM) GOLDEN=$(GOLDEN)

clean: ## Remove obj_dir variants, *.vcd, generated .mem
	rm -rf obj_dir obj_dir_trace obj_dir_public obj_dir_public_trace obj_dir_occ obj_dir_trace_occ obj_dir_public_occ obj_dir_public_trace_occ obj_dir_int4* *.vcd $(MEM_FILE)
