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
PUBLIC_FLAT_RW ?= 0
PUBLIC_FLAT_RW_ON := $(filter 1 yes true on,$(PUBLIC_FLAT_RW))
PUBLIC_FLAT_RW_FLAG := $(if $(PUBLIC_FLAT_RW_ON),--public-flat-rw,)
BUILD_DIR := $(if $(PUBLIC_FLAT_RW_ON),obj_dir_public,obj_dir)

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
COE_FILE := ../../Vivado/PYNQ_Z2/PYNQ_Z2.ip_user_files/mem_init_files/ROM_sparse_COE.coe
MEM_FILE := rom_sparse_weight.mem

VFLAGS := --cc --exe --build -j 0 \
          --top-module $(TOP) \
          --Mdir $(BUILD_DIR) \
          --trace \
          $(PUBLIC_FLAT_RW_FLAG) \
          -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CASEINCOMPLETE \
          -Wno-INITIALDLY -Wno-LATCH -Wno-UNUSED \
          -Wno-MULTIDRIVEN -Wno-BLKANDNBLK \
          -Wno-IMPLICIT -Wno-PINMISSING \
          -Wno-WIDTHCONCAT -Wno-UNSIGNED -Wno-COMBDLY

ITERS  ?= 5
DRAM   ?= $(TEST_DIR)/DRAM.txt
GOLDEN ?= $(TEST_DIR)/GOLDEN.txt

.PHONY: all build build_public sim sim_public trace trace_public clean help

all: sim

help:
	@grep -E '^[a-zA-Z_-]+:.*##' Makefile | sort | awk 'BEGIN{FS=":.*## "};{printf "  %-12s %s\n", $$1, $$2}'

build: $(BUILD_DIR)/V$(TOP) ## Build only (normal fast mode by default)

build_public: ## Build with --public-flat-rw enabled
	$(MAKE) build PUBLIC_FLAT_RW=1

$(BUILD_DIR)/V$(TOP): $(RTL_SRCS) $(BEHAV_SRCS) $(CPP_SRCS) $(MEM_FILE) Makefile
	@echo "[verilator] $(words $(RTL_SRCS)) RTL files + $(words $(BEHAV_SRCS)) behavioral + $(words $(CPP_SRCS)) C++"
	@echo "[mode] PUBLIC_FLAT_RW=$(PUBLIC_FLAT_RW) BUILD_DIR=$(BUILD_DIR)"
	$(VERILATOR) $(VFLAGS) $(RTL_SRCS) $(BEHAV_SRCS) $(CPP_SRCS)

# Strip COE header (lines 1-2) and trailing commas/semicolons, leaving one hex
# value per line — the $readmemh format ROM_sparse_weight expects.
$(MEM_FILE): $(COE_FILE)
	@echo "[coe->mem] $(notdir $(COE_FILE)) -> $(MEM_FILE)"
	@tail -n +3 $< | tr -d ',;' | tr -d ' \t' | grep -v '^$$' > $@
	@echo "  $$(wc -l < $@) entries"

sim: build ## Run sim (default ITERS=5; override: make sim ITERS=10)
	./$(BUILD_DIR)/V$(TOP) --iters $(ITERS) --dram $(DRAM) --golden $(GOLDEN)

sim_public: ## Run sim with --public-flat-rw enabled
	$(MAKE) sim PUBLIC_FLAT_RW=1 ITERS=$(ITERS) DRAM=$(DRAM) GOLDEN=$(GOLDEN)

trace: build ## Same as sim but dumps dump.vcd
	./$(BUILD_DIR)/V$(TOP) --iters $(ITERS) --dram $(DRAM) --golden $(GOLDEN) --trace
	@echo "Waveform: $(CURDIR)/dump.vcd"

trace_public: ## Same as trace, but builds with --public-flat-rw enabled
	$(MAKE) trace PUBLIC_FLAT_RW=1 ITERS=$(ITERS) DRAM=$(DRAM) GOLDEN=$(GOLDEN)

clean: ## Remove obj_dir variants, *.vcd, generated .mem
	rm -rf obj_dir obj_dir_public *.vcd $(MEM_FILE)
