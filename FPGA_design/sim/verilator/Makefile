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
#   make build               build only
#   make clean               nuke obj_dir + waveforms
# =============================================================================

VERILATOR ?= verilator
TOP       := TOP_integration
BUILD_DIR := obj_dir

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
          --trace \
          --public-flat-rw \
          -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CASEINCOMPLETE \
          -Wno-INITIALDLY -Wno-LATCH -Wno-UNUSED \
          -Wno-MULTIDRIVEN -Wno-BLKANDNBLK \
          -Wno-IMPLICIT -Wno-PINMISSING \
          -Wno-WIDTHCONCAT -Wno-UNSIGNED -Wno-COMBDLY

ITERS  ?= 5
DRAM   ?= $(TEST_DIR)/DRAM.txt
GOLDEN ?= $(TEST_DIR)/GOLDEN.txt

.PHONY: all build sim trace clean help

all: sim

help:
	@grep -E '^[a-zA-Z_-]+:.*##' Makefile | sort | awk 'BEGIN{FS=":.*## "};{printf "  %-12s %s\n", $$1, $$2}'

build: $(BUILD_DIR)/V$(TOP) ## Build only (verilator + g++)

$(BUILD_DIR)/V$(TOP): $(RTL_SRCS) $(BEHAV_SRCS) $(CPP_SRCS) $(MEM_FILE)
	@echo "[verilator] $(words $(RTL_SRCS)) RTL files + $(words $(BEHAV_SRCS)) behavioral + $(words $(CPP_SRCS)) C++"
	$(VERILATOR) $(VFLAGS) $(RTL_SRCS) $(BEHAV_SRCS) $(CPP_SRCS)

# Strip COE header (lines 1-2) and trailing commas/semicolons, leaving one hex
# value per line — the $readmemh format ROM_sparse_weight expects.
$(MEM_FILE): $(COE_FILE)
	@echo "[coe->mem] $(notdir $(COE_FILE)) -> $(MEM_FILE)"
	@tail -n +3 $< | tr -d ',;' | tr -d ' \t' | grep -v '^$$' > $@
	@echo "  $$(wc -l < $@) entries"

sim: build ## Run sim (default ITERS=5; override: make sim ITERS=10)
	./$(BUILD_DIR)/V$(TOP) --iters $(ITERS) --dram $(DRAM) --golden $(GOLDEN)

trace: build ## Same as sim but dumps dump.vcd
	./$(BUILD_DIR)/V$(TOP) --iters $(ITERS) --dram $(DRAM) --golden $(GOLDEN) --trace
	@echo "Waveform: $(CURDIR)/dump.vcd"

clean: ## Remove obj_dir/, *.vcd, generated .mem
	rm -rf $(BUILD_DIR) *.vcd $(MEM_FILE)
