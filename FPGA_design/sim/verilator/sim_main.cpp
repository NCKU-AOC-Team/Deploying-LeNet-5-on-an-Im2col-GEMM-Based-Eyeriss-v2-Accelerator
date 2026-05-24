// =============================================================================
// Verilator harness for BoooC's Eyeriss-v2 + LeNet-5 (TOP_integration).
//
// Mirrors test/tb/TOP_test/TOP_integration_tb.v: for each test pattern, hold
// reset, wait 4096 cycles, stream 784 bytes (28x28 MNIST image) into the
// internal ifmap BRAM via ifmap_BRAM_wr_in/dina_in, then wait for `result` to
// latch a class index (0-9) and compare against the golden label.
//
// Completion detection: TOP_integration sets `result <= 4'hf` on reset and
// `result <= final_out` when final_out_valid pulses. LeNet output is always
// 0-9, so result != 0xf means inference finished. Avoids needing to expose
// the internal final_out_valid signal (would require --public-flat-rw).
//
// Usage: VTOP_integration [--iters N] [--dram path] [--golden path] [--trace]
// =============================================================================
#include "VTOP_integration.h"
#include <verilated.h>
#include <verilated_vcd_c.h>

#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace {

vluint64_t g_sim_time = 0;
VerilatedVcdC* g_tfp = nullptr;

void tick(VTOP_integration* dut) {
    dut->clock = 0;
    dut->eval();
    if (g_tfp) g_tfp->dump(g_sim_time++);
    dut->clock = 1;
    dut->eval();
    if (g_tfp) g_tfp->dump(g_sim_time++);
}

// Parse $readmemh-style file: hex tokens separated by whitespace, with //
// line comments. Returns one byte (or 4-bit value, host-side just sees uint8)
// per token.
std::vector<uint8_t> read_hex_bytes(const std::string& path) {
    std::ifstream in(path);
    if (!in) {
        std::cerr << "ERROR: cannot open " << path << "\n";
        std::exit(2);
    }
    std::vector<uint8_t> out;
    std::string line;
    while (std::getline(in, line)) {
        if (auto pos = line.find("//"); pos != std::string::npos) line.erase(pos);
        std::istringstream iss(line);
        std::string tok;
        while (iss >> tok) {
            try {
                out.push_back(static_cast<uint8_t>(std::stoul(tok, nullptr, 16) & 0xFF));
            } catch (...) {
                // skip unparseable tokens
            }
        }
    }
    return out;
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    int iters = 5;
    std::string dram_path = "../../test/tb/TOP_test/MEM/DRAM.txt";
    std::string golden_path = "../../test/tb/TOP_test/MEM/GOLDEN.txt";
    bool trace = false;

    for (int i = 1; i < argc; ++i) {
        std::string a = argv[i];
        if (a == "--iters" && i + 1 < argc) iters = std::atoi(argv[++i]);
        else if (a == "--dram" && i + 1 < argc) dram_path = argv[++i];
        else if (a == "--golden" && i + 1 < argc) golden_path = argv[++i];
        else if (a == "--trace") trace = true;
        else if (a == "--help" || a == "-h") {
            std::cout << "Usage: " << argv[0]
                      << " [--iters N] [--dram path] [--golden path] [--trace]\n";
            return 0;
        }
    }

    auto dram = read_hex_bytes(dram_path);
    auto golden = read_hex_bytes(golden_path);

    constexpr int IMG_BYTES = 784;
    if (static_cast<int>(dram.size()) < IMG_BYTES * iters) {
        std::cerr << "ERROR: DRAM has " << dram.size() << " bytes, need "
                  << IMG_BYTES * iters << " for " << iters << " patterns\n";
        return 2;
    }
    if (static_cast<int>(golden.size()) < iters) {
        std::cerr << "ERROR: GOLDEN has " << golden.size() << " labels, need "
                  << iters << "\n";
        return 2;
    }

    auto* dut = new VTOP_integration;

    if (trace) {
        Verilated::traceEverOn(true);
        g_tfp = new VerilatedVcdC;
        dut->trace(g_tfp, 99);
        g_tfp->open("dump.vcd");
        std::cout << "Tracing -> dump.vcd\n";
    }

    constexpr int TIMEOUT_CYCLES = 250000;  // per-pattern; original Vivado TB sets per-pattern
                                             // END_CYCLE=200000 (CYCLES counter resets each iter),
                                             // 250k gives 25% safety margin over author's choice.
    int errors = 0;

    for (int iter = 0; iter < iters; ++iter) {
        dut->ifmap_BRAM_wr_in = 0;
        dut->ifmap_BRAM_dina_in = 0;
        dut->reset = 0;
        for (int i = 0; i < 3; ++i) tick(dut);
        dut->reset = 1;
        for (int i = 0; i < 3; ++i) tick(dut);
        dut->reset = 0;

        // result is now 0xf (set on reset); next non-0xf value = inference done
        for (int i = 0; i < 4096; ++i) tick(dut);

        for (int i = 0; i < IMG_BYTES; ++i) {
            dut->ifmap_BRAM_wr_in = 1;
            dut->ifmap_BRAM_dina_in = dram[iter * IMG_BYTES + i];
            tick(dut);
        }
        dut->ifmap_BRAM_wr_in = 0;

        int waited = 0;
        while (waited < TIMEOUT_CYCLES && dut->result == 0xf) {
            tick(dut);
            ++waited;
        }
        for (int i = 0; i < 2; ++i) tick(dut);

        unsigned got = dut->result & 0xf;
        unsigned exp = golden[iter] & 0xf;
        bool fail = (waited >= TIMEOUT_CYCLES) || (got != exp);

        std::cout << "Iter " << iter
                  << ": result=" << got
                  << " golden=" << exp
                  << " (" << waited << " cycles)";
        if (waited >= TIMEOUT_CYCLES) std::cout << " TIMEOUT";
        else if (got != exp)          std::cout << " FAIL";
        else                          std::cout << " OK";
        std::cout << "\n";

        if (fail) ++errors;

        for (int i = 0; i < 100; ++i) tick(dut);
    }

    double acc = 100.0 * (iters - errors) / iters;
    std::cout << "\n=== Summary: " << (iters - errors) << "/" << iters
              << " passed (" << acc << "%) ===\n";

    if (g_tfp) { g_tfp->close(); delete g_tfp; }
    delete dut;
    return errors ? 1 : 0;
}
