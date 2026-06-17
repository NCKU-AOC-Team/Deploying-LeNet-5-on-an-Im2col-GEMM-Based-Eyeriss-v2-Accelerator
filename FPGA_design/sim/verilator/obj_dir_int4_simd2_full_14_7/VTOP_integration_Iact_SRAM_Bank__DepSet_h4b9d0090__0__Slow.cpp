// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_Iact_SRAM_Bank.h"

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___ctor_var_reset(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_address_in = VL_RAND_RESET_I(7);
    vlSelf->__PVT__iact_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_data_in = VL_RAND_RESET_I(16);
    vlSelf->__PVT__iact_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_address_out = VL_RAND_RESET_I(7);
    vlSelf->__PVT__iact_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_data_out = VL_RAND_RESET_I(16);
    vlSelf->__PVT__iact_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_write_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_read_addr = VL_RAND_RESET_I(10);
    vlSelf->__PVT__iact_read_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_read_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_iact_read_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iact_write_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_iact_write_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__addr_SRAM_write_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_SRAM_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_SRAM_read_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_SRAM_write_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_SRAM_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_SRAM_read_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_done_both = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_done_both = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__read_zero_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__write_zero_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx = VL_RAND_RESET_I(10);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx = VL_RAND_RESET_I(10);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx = VL_RAND_RESET_I(10);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__read_done_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra = VL_RAND_RESET_I(9);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb = VL_RAND_RESET_I(7);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__read_zero_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__write_zero_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx = VL_RAND_RESET_I(11);
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__stream_read_idx = VL_RAND_RESET_I(11);
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx = VL_RAND_RESET_I(11);
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__read_shake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__read_done_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = VL_RAND_RESET_I(2);
    vlSelf->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = VL_RAND_RESET_I(1);
}
