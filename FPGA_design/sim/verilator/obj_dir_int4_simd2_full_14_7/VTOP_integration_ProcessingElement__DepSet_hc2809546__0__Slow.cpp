// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_ProcessingElement.h"

VL_ATTR_COLD void VTOP_integration_ProcessingElement___ctor_var_reset(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_in_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_in = VL_RAND_RESET_I(21);
    vlSelf->__PVT__psum_out_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_out = VL_RAND_RESET_I(21);
    vlSelf->__PVT__iact_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_address_in = VL_RAND_RESET_I(8);
    vlSelf->__PVT__iact_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_data_in = VL_RAND_RESET_I(13);
    vlSelf->__PVT__weight_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__weight_address_in = VL_RAND_RESET_I(7);
    vlSelf->__PVT__weight_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__weight_data_in = VL_RAND_RESET_I(16);
    vlSelf->__PVT__iact_address_write_fin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_data_write_fin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_add_fin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_enq_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__do_load_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cal_fin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iact_write_fin_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__weight_write_fin_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__all_write_fin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PSUM_DEPTH = VL_RAND_RESET_I(5);
    vlSelf->__PVT__psum_spad_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int4_former_weight_mode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int4_later_weight_mode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PE_pad_cal_fin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PE_pad_psum_in_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PE_pad_later_address_write_fin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PE_pad_later_data_write_fin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__FIFO_former_address_out = VL_RAND_RESET_I(8);
    vlSelf->__PVT__FIFO_former_data_out = VL_RAND_RESET_I(13);
    vlSelf->__PVT__FIFO_later_address_out = VL_RAND_RESET_I(7);
    vlSelf->__PVT__FIFO_later_data_out = VL_RAND_RESET_I(16);
    vlSelf->__PVT__FIFO_out_psum_in_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__former_addr_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__former_data_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__later_addr_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__later_data_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_Controller_inst__DOT__PE_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__Processing_Element_Controller_inst__DOT__next_PE_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num = VL_RAND_RESET_I(7);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__PE_state = VL_RAND_RESET_I(4);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__next_PE_state = VL_RAND_RESET_I(4);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg = VL_RAND_RESET_I(4);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__product_reg = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__product_lane1_reg = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__psum_load_reg = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__psum_load_state = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events = VL_RAND_RESET_I(32);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg = VL_RAND_RESET_I(1);
    vlSelf->Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb = VL_RAND_RESET_I(21);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake = VL_RAND_RESET_I(1);
    vlSelf->Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count = VL_RAND_RESET_I(8);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg = VL_RAND_RESET_I(18);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra = VL_RAND_RESET_I(7);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count = VL_RAND_RESET_I(7);
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__former_addr_FIFO__DOT__buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__former_addr_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__former_addr_FIFO__DOT__buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__former_addr_FIFO__DOT__buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__former_addr_FIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__former_addr_FIFO__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__former_addr_FIFO__DOT__read_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__former_data_FIFO__DOT__buffer[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->__PVT__former_data_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__former_data_FIFO__DOT__buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__former_data_FIFO__DOT__buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__former_data_FIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__former_data_FIFO__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__former_data_FIFO__DOT__read_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__later_addr_FIFO__DOT__buffer[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->__PVT__later_addr_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__later_addr_FIFO__DOT__buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__later_addr_FIFO__DOT__buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__later_addr_FIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__later_addr_FIFO__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__later_addr_FIFO__DOT__read_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__later_data_FIFO__DOT__buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__later_data_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__later_data_FIFO__DOT__buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__later_data_FIFO__DOT__buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__later_data_FIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__later_data_FIFO__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__later_data_FIFO__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_in_FIFO__DOT__buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__psum_in_FIFO__DOT__buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__psum_in_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_in_FIFO__DOT__data_in_shake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_in_FIFO__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_out_FIFO__DOT__buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__psum_out_FIFO__DOT__buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->__PVT__psum_out_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_out_FIFO__DOT__data_in_shake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__psum_out_FIFO__DOT__write_en = VL_RAND_RESET_I(1);
}
