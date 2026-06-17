// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_ProcessingElement.h"
#include "VTOP_integration__Syms.h"

extern const VlUnpacked<CData/*1:0*/, 32> VTOP_integration__ConstPool__TABLE_h45c4e01a_0;

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__FIFO_former_address_out_valid;
    __PVT__FIFO_former_address_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_former_data_out_valid;
    __PVT__FIFO_former_data_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_later_address_out_valid;
    __PVT__FIFO_later_address_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_later_data_out_valid;
    __PVT__FIFO_later_data_out_valid = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc;
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc = 0;
    CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire;
    __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire = 0;
    CData/*3:0*/ Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0;
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en = 0;
    CData/*4:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_spad_clear) 
           | (IData)(vlSymsp->TOP.reset));
    if (vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((0xf0U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                               >> 7U)))) 
                                  << 4U)) | (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                              >> 4U))));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                           >> 0xfU)))) 
                         << 4U)) | (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                            >> 0xcU)));
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                        >> 4U));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0U;
    }
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [1U][2U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [1U]
                                                [2U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [1U][2U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [1U]
                                               [2U]));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [1U][2U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [1U]
                                                  [2U]));
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [1U]
                                               [2U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [1U][2U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [1U][2U]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [1U]
                                                 [2U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [1U][2U]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [1U][2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__iact_data_write_fin = ((0U == (IData)(vlSelfRef.__PVT__FIFO_former_data_out)) 
                                            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire 
        = (0xffU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_former_weight_mode_wire)
                     ? ((0xf0U & ((- (IData)((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)) 
                                               & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                  >> 8U))))) 
                                  << 4U)) | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                              ? 0U : 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                 >> 5U))))
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                         ? 0U : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                 >> 5U))));
    vlSelfRef.__PVT__iact_address_write_fin = ((0U 
                                                == (IData)(vlSelfRef.__PVT__FIFO_former_address_out)) 
                                               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__PE_pad_later_address_write_fin 
        = ((0U == (IData)(vlSelfRef.__PVT__FIFO_later_address_out)) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__PE_pad_later_data_write_fin = 
        ((0U == (IData)(vlSelfRef.__PVT__FIFO_later_data_out)) 
         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag) 
           | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire 
        = (0x1fffffU & VL_MULS_III(21, (0x1fffffU & 
                                        VL_EXTENDS_II(21,8, (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
           & (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en 
        = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire) 
            & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               | ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                  | (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
              != (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en 
        = (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)) 
            & (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) {
        Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0U;
        vlSelfRef.__PVT__PE_pad_cal_fin = ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                           & (~ ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire) 
                                                 & ((7U 
                                                     == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                    | ((8U 
                                                        == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                       | ((9U 
                                                           == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                          | (0xaU 
                                                             == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))))));
    } else {
        Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 
            = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                ? (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                    | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                    ? 1U : 2U) : 5U);
        vlSelfRef.__PVT__PE_pad_cal_fin = 0U;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc 
        = (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
               & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) 
           | ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire)) 
              & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))
                     : ((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num)
                         : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr))));
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
               & ((0xffU != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                  | (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire))))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state 
        = ((8U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? ((4U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0U : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                         : ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0xaU : 9U))) : ((4U 
                                                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)
                                                      ? 8U
                                                      : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 6U
                                                     : 5U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)
                                                       ? 1U
                                                       : 2U)
                                                      : 4U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
                                                      ? 0U
                                                      : 3U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                                                      & (0xffU 
                                                         == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)))
                                                      ? 1U
                                                      : 2U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))
                                                      ? 1U
                                                      : 0U)))));
    __Vtableidx15 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [1U][2U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx15];
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__PE_pad_cal_fin)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr)
            ? ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr 
        = (0xffU & ((IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc)
                     ? (((0U == ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                  ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg)) 
                         & (IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)))
                     : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire 
            = (0x1fU & vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg);
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr));
    }
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__3(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    // Body
    vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready) 
           & (IData)(vlSelfRef.__PVT__psum_out_valid));
    vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en = 
        ((~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
          [1U][2U]) & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc;
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc = 0;
    CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire;
    __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    CData/*3:0*/ Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0;
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en = 0;
    CData/*4:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire 
        = (0xffU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_former_weight_mode_wire)
                     ? ((0xf0U & ((- (IData)((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)) 
                                               & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                  >> 8U))))) 
                                  << 4U)) | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                              ? 0U : 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                 >> 5U))))
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                         ? 0U : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                 >> 5U))));
    if (vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((0xf0U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                               >> 7U)))) 
                                  << 4U)) | (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                              >> 4U))));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                           >> 0xfU)))) 
                         << 4U)) | (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                            >> 0xcU)));
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                        >> 4U));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0U;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
           & (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire 
        = (0x1fffffU & VL_MULS_III(21, (0x1fffffU & 
                                        VL_EXTENDS_II(21,8, (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
            ? 0U : (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                     | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                     ? (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                         | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                         ? 1U : 2U) : 5U));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en 
        = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire) 
            & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               | ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                  | (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
              != (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state 
        = ((8U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? ((4U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0U : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                         : ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0xaU : 9U))) : ((4U 
                                                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)
                                                      ? 8U
                                                      : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 6U
                                                     : 5U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)
                                                       ? 1U
                                                       : 2U)
                                                      : 4U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
                                                      ? 0U
                                                      : 3U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                                                      & (0xffU 
                                                         == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)))
                                                      ? 1U
                                                      : 2U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))
                                                      ? 1U
                                                      : 0U)))));
    vlSelfRef.__PVT__PE_pad_cal_fin = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) 
                                       & ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                          & (~ ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire) 
                                                & ((7U 
                                                    == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                   | ((8U 
                                                       == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                      | ((9U 
                                                          == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                         | (0xaU 
                                                            == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))))))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en 
        = (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)) 
            & (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1));
    __Vtableidx16 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [2U][0U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx16];
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc 
        = (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
               & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) 
           | ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire)) 
              & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__PE_pad_cal_fin)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))
                     : ((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num)
                         : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr))));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
               & ((0xffU != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                  | (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire))))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) 
           | (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake)) 
              | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
                 & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) 
           | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
              & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx) 
                 | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr)
            ? ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr 
        = (0xffU & ((IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc)
                     ? (((0U == ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                  ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg)) 
                         & (IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)))
                     : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr)
            : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__FIFO_out_psum_in_ready = (1U & 
                                               ((~ 
                                                 (((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_read_addr) 
                                                   == (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr)) 
                                                  & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full))) 
                                                | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
                                                [2U]
                                                [0U]));
    vlSelfRef.__PVT__PE_pad_psum_in_ready = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state) 
                                             & (IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready));
    vlSelfRef.__PVT__psum_in_ready = (1U & ((~ (((IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_read_addr) 
                                                 == (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr)) 
                                                & (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full))) 
                                            | (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire = 0;
    // Body
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid
           [2U][0U]);
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready 
        = ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | ((9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready)) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid));
    vlSelfRef.__PVT__psum_out_valid = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready) 
                                       & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid)) 
                                          & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) 
           | (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake)) 
              | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
                 & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) 
           | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
              & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx) 
                 | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__2(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__psum_out = (0x1fffffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state)
                                               ? (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
                                                  + 
                                                  vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_in
                                                  [2U]
                                                  [0U])
                                               : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg 
                                                  + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid)
            ? vlSelfRef.__PVT__psum_out : 0U);
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    // Body
    vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready) 
           & (IData)(vlSelfRef.__PVT__psum_out_valid));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en = 
        ((~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
          [2U][0U]) & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__psum_in_ready) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid
           [2U][0U]);
    vlSelfRef.__PVT__psum_in_FIFO__DOT__write_en = 
        ((~ (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready)) 
         & (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles = 0;
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events = 0;
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0;
    CData/*0:0*/ __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 0;
    CData/*0:0*/ __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr = 0;
    CData/*7:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr = 0;
    CData/*7:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count = 0;
    CData/*1:0*/ __Vdly__former_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__former_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__former_data_FIFO__DOT__buffer_write_addr;
    __Vdly__former_data_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__former_data_FIFO__DOT__buffer_read_addr;
    __Vdly__former_data_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__later_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__later_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__later_data_FIFO__DOT__buffer_write_addr;
    __Vdly__later_data_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__later_data_FIFO__DOT__buffer_read_addr;
    __Vdly__later_data_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__psum_in_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_in_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__psum_out_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_out_FIFO__DOT__buffer_write_addr = 0;
    IData/*20:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    CData/*3:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    IData/*17:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*7:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 0;
    CData/*6:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    SData/*15:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*6:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__former_addr_FIFO__DOT__buffer__v0;
    __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 0;
    CData/*7:0*/ __VdlyVal__former_addr_FIFO__DOT__buffer__v4;
    __VdlyVal__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__former_addr_FIFO__DOT__buffer__v4;
    __VdlyDim0__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_addr_FIFO__DOT__buffer__v4;
    __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_data_FIFO__DOT__buffer__v0;
    __VdlySet__former_data_FIFO__DOT__buffer__v0 = 0;
    SData/*12:0*/ __VdlyVal__former_data_FIFO__DOT__buffer__v4;
    __VdlyVal__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__former_data_FIFO__DOT__buffer__v4;
    __VdlyDim0__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_data_FIFO__DOT__buffer__v4;
    __VdlySet__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_addr_FIFO__DOT__buffer__v0;
    __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 0;
    CData/*6:0*/ __VdlyVal__later_addr_FIFO__DOT__buffer__v4;
    __VdlyVal__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__later_addr_FIFO__DOT__buffer__v4;
    __VdlyDim0__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_addr_FIFO__DOT__buffer__v4;
    __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_data_FIFO__DOT__buffer__v0;
    __VdlySet__later_data_FIFO__DOT__buffer__v0 = 0;
    SData/*15:0*/ __VdlyVal__later_data_FIFO__DOT__buffer__v4;
    __VdlyVal__later_data_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__later_data_FIFO__DOT__buffer__v4;
    __VdlyDim0__later_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_data_FIFO__DOT__buffer__v4;
    __VdlySet__later_data_FIFO__DOT__buffer__v4 = 0;
    // Body
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_data_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__later_data_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    __Vdly__former_data_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr;
    __Vdly__former_data_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0U;
    __Vdly__psum_in_FIFO__DOT__buffer_write_addr = vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_out_FIFO__DOT__buffer_write_addr = vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr;
    __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 0U;
    __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 0U;
    __VdlySet__later_data_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__later_data_FIFO__DOT__buffer__v4 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0U;
    __VdlySet__former_data_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__former_data_FIFO__DOT__buffer__v4 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr) {
        __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                ? 0U : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1
                         : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in));
        __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra;
        __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr) {
        __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                ? 0U : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1
                         : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in));
        __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra;
        __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset) {
        __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb = 0U;
    } else {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb;
        if ((0x1fU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag = 0U;
        }
        if ((0x1fU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem
            [(0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                        ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                        : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx), 1U)))];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem
            [(0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                        ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                        : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx), 1U)))];
    }
    vlSelfRef.__PVT__former_addr_write_fin_reg = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ 
                                                          vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear
                                                          [2U]
                                                          [0U])) 
                                                      && ((IData)(vlSelfRef.__PVT__iact_address_write_fin) 
                                                          | (IData)(vlSelfRef.__PVT__former_addr_write_fin_reg))));
    vlSelfRef.__PVT__former_data_write_fin_reg = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ 
                                                          vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear
                                                          [2U]
                                                          [0U])) 
                                                      && ((IData)(vlSelfRef.__PVT__iact_data_write_fin) 
                                                          | (IData)(vlSelfRef.__PVT__former_data_write_fin_reg))));
    vlSelfRef.__PVT__later_addr_write_fin_reg = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__PVT__all_write_fin) 
                                                          & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear
                                                          [2U]
                                                          [0U]))) 
                                                     && ((IData)(vlSelfRef.__PVT__PE_pad_later_address_write_fin) 
                                                         | (IData)(vlSelfRef.__PVT__later_addr_write_fin_reg))));
    vlSelfRef.__PVT__later_data_write_fin_reg = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__PVT__all_write_fin) 
                                                          & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear
                                                          [2U]
                                                          [0U]))) 
                                                     && ((IData)(vlSelfRef.__PVT__PE_pad_later_data_write_fin) 
                                                         | (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr) {
            __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                    ? 0U : (IData)(vlSelfRef.__PVT__FIFO_later_data_out));
            __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra;
            __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake))) {
            __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                    ? (IData)(vlSelfRef.__PVT__FIFO_former_data_out)
                    : 0U);
            __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra;
            __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__former_addr_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__later_addr_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__former_addr_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__later_addr_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__later_data_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__later_data_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr = 0U;
        __Vdly__former_data_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__former_data_FIFO__DOT__buffer_read_addr = 0U;
        __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 1U;
        __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 1U;
        __Vdly__psum_in_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__psum_out_FIFO__DOT__buffer_write_addr = 0U;
        __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 1U;
        __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 1U;
        __VdlySet__later_data_FIFO__DOT__buffer__v0 = 1U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count = 0U;
        __VdlySet__former_data_FIFO__DOT__buffer__v0 = 1U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles = 0U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events = 0U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 1U;
        __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg = 1U;
        __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num = 0U;
        __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg = 0U;
        vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_read_addr = 0U;
        vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_read_addr = 0U;
        vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state = 0U;
    } else {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
                = ((IData)(vlSelfRef.__PVT__iact_address_write_fin)
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr))));
            vlSelfRef.Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0 
                = vlSelfRef.__PVT__FIFO_former_address_out;
            if ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr))) {
                __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 
                    = vlSelfRef.Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0;
                __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 
                    = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
                __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 1U;
            }
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__PE_pad_later_address_write_fin)
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr))));
            __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 
                = vlSelfRef.__PVT__FIFO_later_address_out;
            __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
            __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 1U;
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__PE_pad_later_data_write_fin)
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))));
        }
        if (vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en) {
            __Vdly__former_addr_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en) {
            __Vdly__later_addr_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en) {
            __Vdly__former_addr_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en) {
            __Vdly__later_addr_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__later_data_FIFO__DOT__write_en) {
            __Vdly__later_data_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__iact_data_write_fin)
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr))));
        }
        if (vlSelfRef.__PVT__later_data_FIFO__DOT__read_en) {
            __Vdly__later_data_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
                = (((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))));
        }
        if (vlSelfRef.__PVT__former_data_FIFO__DOT__write_en) {
            __Vdly__former_data_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__former_data_FIFO__DOT__read_en) {
            __Vdly__former_data_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__psum_in_FIFO__DOT__write_en) {
            __Vdly__psum_in_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr)));
            vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready))) 
                   && (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake));
        }
        if (vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en) {
            __Vdly__psum_out_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr)));
            vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full 
                = ((1U & (~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
                          [2U][0U])) && (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
        }
        if (((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
             [2U][0U])) {
            __VdlyVal__former_addr_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                [2U][0U];
            __VdlyDim0__former_addr_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr;
            __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
             [2U][0U])) {
            __VdlyVal__later_addr_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                [2U][0U];
            __VdlyDim0__later_addr_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr;
            __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
             [2U][0U])) {
            __VdlyVal__later_data_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                [2U][0U];
            __VdlyDim0__later_data_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr;
            __VdlySet__later_data_FIFO__DOT__buffer__v4 = 1U;
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
                = ((0xc7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
                = ((0x63U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))));
        }
        if (((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
             [2U][0U])) {
            __VdlyVal__former_data_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                [2U][0U];
            __VdlyDim0__former_data_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr;
            __VdlySet__former_data_FIFO__DOT__buffer__v4 = 1U;
        }
        if ((((8U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
             | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles);
        }
        if (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
        }
        if (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events);
        }
        if ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg))) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
                = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire) 
                            - ((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                               & ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire)) 
                                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))));
        } else if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
                = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr))));
        }
        if (((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en))) {
            __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg));
        } else if ((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 0U;
        }
        if ((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((2U == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state)) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg));
        } else if ((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg));
        } else if (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                    & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire));
        }
        if (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
                = ((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire))
                    ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
                   [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
        } else if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
                = (((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc))
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))));
        }
        if (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en
            [2U][0U]) {
            __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg 
                = (0xfU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                                          + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg))));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out;
        if (((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                   [2U][0U]);
        }
        if (((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                   [2U][0U]);
        }
        if (((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                   [2U][0U]);
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg)
                ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
                : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
        if (((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                   [2U][0U]);
        }
        if ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                = ((0xfU == (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                     >> 8U))) ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire);
        }
        if (((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg 
                = (((9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (0xfU == (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                         >> 8U))) : 
                    (0xfU == (0xfU & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))))
                    ? 0U : (0x1fffffU & VL_EXTENDS_II(21,21, 
                                                      (0x1fffffU 
                                                       & ((9U 
                                                           == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                           ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire
                                                           : 
                                                          VL_MULS_III(21, 
                                                                      (0x1fffffU 
                                                                       & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire))), 
                                                                      (0x1fffffU 
                                                                       & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))))))));
        }
        if ((0x63U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag = 0U;
        }
        if ((0xc7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state 
            = vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state;
        if ((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg 
                = (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__psum_add_fin))) 
            && (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en
                [2U][0U] | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg 
        = ((1U & (~ (IData)(vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset))) 
           && (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg 
        = ((1U & (~ (IData)(vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset))) 
           && (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr 
        = __Vdly__former_addr_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr 
        = __Vdly__later_addr_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr 
        = __Vdly__later_data_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr 
        = __Vdly__former_data_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[1U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[2U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[3U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[4U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[5U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[6U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[7U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[8U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[9U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0xaU] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0xbU] = 0U;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[__VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr 
        = __Vdly__psum_in_FIFO__DOT__buffer_write_addr;
    vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr 
        = __Vdly__psum_out_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__former_addr_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__former_addr_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[__VdlyDim0__former_addr_FIFO__DOT__buffer__v4] 
            = __VdlyVal__former_addr_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr 
        = __Vdly__former_addr_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__later_addr_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__later_addr_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[__VdlyDim0__later_addr_FIFO__DOT__buffer__v4] 
            = __VdlyVal__later_addr_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr 
        = __Vdly__later_addr_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__later_data_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__later_data_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[__VdlyDim0__later_data_FIFO__DOT__buffer__v4] 
            = __VdlyVal__later_data_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr 
        = __Vdly__later_data_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__former_data_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__former_data_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[__VdlyDim0__former_data_FIFO__DOT__buffer__v4] 
            = __VdlyVal__former_data_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr 
        = __Vdly__former_data_FIFO__DOT__buffer_write_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg 
        = __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg 
        = __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num 
        = __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[1U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[2U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[3U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[4U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[5U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[6U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[7U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[8U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[9U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xaU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xbU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xcU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xdU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xeU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xfU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x10U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x11U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x12U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x13U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x14U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x15U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x16U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x17U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x18U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x19U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1aU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1bU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1cU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1dU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1eU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1fU] = 0x7fU;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[__VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg 
        = __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad[__VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    }
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__later_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)));
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    if (__VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad[__VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__FIFO_former_address_out_valid;
    __PVT__FIFO_former_address_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_former_data_out_valid;
    __PVT__FIFO_former_data_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_later_address_out_valid;
    __PVT__FIFO_later_address_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_later_data_out_valid;
    __PVT__FIFO_later_data_out_valid = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc;
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc = 0;
    CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire;
    __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire = 0;
    CData/*3:0*/ Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0;
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en = 0;
    CData/*4:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_spad_clear) 
           | (IData)(vlSymsp->TOP.reset));
    if (vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((0xf0U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                               >> 7U)))) 
                                  << 4U)) | (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                              >> 4U))));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                           >> 0xfU)))) 
                         << 4U)) | (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                            >> 0xcU)));
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                        >> 4U));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0U;
    }
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [2U][0U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [2U]
                                                [0U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [2U][0U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [2U]
                                               [0U]));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [2U][0U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [2U]
                                                  [0U]));
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [2U]
                                               [0U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [2U][0U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [2U][0U]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [2U]
                                                 [0U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [2U][0U]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [2U][0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__iact_data_write_fin = ((0U == (IData)(vlSelfRef.__PVT__FIFO_former_data_out)) 
                                            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire 
        = (0xffU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_former_weight_mode_wire)
                     ? ((0xf0U & ((- (IData)((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)) 
                                               & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                  >> 8U))))) 
                                  << 4U)) | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                              ? 0U : 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                 >> 5U))))
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                         ? 0U : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                 >> 5U))));
    vlSelfRef.__PVT__iact_address_write_fin = ((0U 
                                                == (IData)(vlSelfRef.__PVT__FIFO_former_address_out)) 
                                               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__PE_pad_later_address_write_fin 
        = ((0U == (IData)(vlSelfRef.__PVT__FIFO_later_address_out)) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__PE_pad_later_data_write_fin = 
        ((0U == (IData)(vlSelfRef.__PVT__FIFO_later_data_out)) 
         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag) 
           | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire 
        = (0x1fffffU & VL_MULS_III(21, (0x1fffffU & 
                                        VL_EXTENDS_II(21,8, (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
           & (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en 
        = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire) 
            & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               | ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                  | (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
              != (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en 
        = (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)) 
            & (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) {
        Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0U;
        vlSelfRef.__PVT__PE_pad_cal_fin = ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                           & (~ ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire) 
                                                 & ((7U 
                                                     == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                    | ((8U 
                                                        == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                       | ((9U 
                                                           == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                          | (0xaU 
                                                             == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))))));
    } else {
        Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 
            = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                ? (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                    | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                    ? 1U : 2U) : 5U);
        vlSelfRef.__PVT__PE_pad_cal_fin = 0U;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc 
        = (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
               & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) 
           | ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire)) 
              & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))
                     : ((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num)
                         : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr))));
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
               & ((0xffU != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                  | (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire))))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state 
        = ((8U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? ((4U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0U : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                         : ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0xaU : 9U))) : ((4U 
                                                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)
                                                      ? 8U
                                                      : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 6U
                                                     : 5U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)
                                                       ? 1U
                                                       : 2U)
                                                      : 4U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
                                                      ? 0U
                                                      : 3U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                                                      & (0xffU 
                                                         == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)))
                                                      ? 1U
                                                      : 2U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))
                                                      ? 1U
                                                      : 0U)))));
    __Vtableidx16 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [2U][0U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx16];
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__PE_pad_cal_fin)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr)
            ? ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr 
        = (0xffU & ((IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc)
                     ? (((0U == ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                  ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg)) 
                         & (IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)))
                     : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire 
            = (0x1fU & vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg);
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr));
    }
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__3(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    // Body
    vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready) 
           & (IData)(vlSelfRef.__PVT__psum_out_valid));
    vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en = 
        ((~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
          [2U][0U]) & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc;
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc = 0;
    CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire;
    __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    CData/*3:0*/ Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0;
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en = 0;
    CData/*4:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire 
        = (0xffU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_former_weight_mode_wire)
                     ? ((0xf0U & ((- (IData)((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)) 
                                               & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                  >> 8U))))) 
                                  << 4U)) | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                              ? 0U : 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                 >> 5U))))
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                         ? 0U : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                 >> 5U))));
    if (vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((0xf0U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                               >> 7U)))) 
                                  << 4U)) | (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                              >> 4U))));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                           >> 0xfU)))) 
                         << 4U)) | (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                            >> 0xcU)));
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                        >> 4U));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0U;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
           & (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire 
        = (0x1fffffU & VL_MULS_III(21, (0x1fffffU & 
                                        VL_EXTENDS_II(21,8, (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
            ? 0U : (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                     | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                     ? (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                         | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                         ? 1U : 2U) : 5U));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en 
        = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire) 
            & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               | ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                  | (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
              != (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state 
        = ((8U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? ((4U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0U : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                         : ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0xaU : 9U))) : ((4U 
                                                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)
                                                      ? 8U
                                                      : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 6U
                                                     : 5U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)
                                                       ? 1U
                                                       : 2U)
                                                      : 4U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
                                                      ? 0U
                                                      : 3U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                                                      & (0xffU 
                                                         == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)))
                                                      ? 1U
                                                      : 2U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))
                                                      ? 1U
                                                      : 0U)))));
    vlSelfRef.__PVT__PE_pad_cal_fin = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) 
                                       & ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                          & (~ ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire) 
                                                & ((7U 
                                                    == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                   | ((8U 
                                                       == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                      | ((9U 
                                                          == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                         | (0xaU 
                                                            == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))))))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en 
        = (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)) 
            & (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1));
    __Vtableidx17 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [2U][1U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx17];
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc 
        = (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
               & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) 
           | ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire)) 
              & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__PE_pad_cal_fin)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))
                     : ((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num)
                         : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr))));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
               & ((0xffU != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                  | (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire))))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) 
           | (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake)) 
              | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
                 & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) 
           | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
              & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx) 
                 | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr)
            ? ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr 
        = (0xffU & ((IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc)
                     ? (((0U == ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                  ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg)) 
                         & (IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)))
                     : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr)
            : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__FIFO_out_psum_in_ready = (1U & 
                                               ((~ 
                                                 (((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_read_addr) 
                                                   == (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr)) 
                                                  & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full))) 
                                                | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
                                                [2U]
                                                [1U]));
    vlSelfRef.__PVT__PE_pad_psum_in_ready = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state) 
                                             & (IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready));
    vlSelfRef.__PVT__psum_in_ready = (1U & ((~ (((IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_read_addr) 
                                                 == (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr)) 
                                                & (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full))) 
                                            | (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire = 0;
    // Body
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid
           [2U][1U]);
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready 
        = ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | ((9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready)) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid));
    vlSelfRef.__PVT__psum_out_valid = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready) 
                                       & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid)) 
                                          & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) 
           | (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake)) 
              | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
                 & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) 
           | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
              & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx) 
                 | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__2(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__psum_out = (0x1fffffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state)
                                               ? (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
                                                  + 
                                                  vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_in
                                                  [2U]
                                                  [1U])
                                               : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg 
                                                  + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid)
            ? vlSelfRef.__PVT__psum_out : 0U);
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    // Body
    vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready) 
           & (IData)(vlSelfRef.__PVT__psum_out_valid));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en = 
        ((~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
          [2U][1U]) & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__psum_in_ready) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid
           [2U][1U]);
    vlSelfRef.__PVT__psum_in_FIFO__DOT__write_en = 
        ((~ (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready)) 
         & (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles = 0;
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events = 0;
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0;
    CData/*0:0*/ __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 0;
    CData/*0:0*/ __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr = 0;
    CData/*7:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr = 0;
    CData/*7:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count = 0;
    CData/*1:0*/ __Vdly__former_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__former_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__former_data_FIFO__DOT__buffer_write_addr;
    __Vdly__former_data_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__former_data_FIFO__DOT__buffer_read_addr;
    __Vdly__former_data_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__later_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__later_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__later_data_FIFO__DOT__buffer_write_addr;
    __Vdly__later_data_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__later_data_FIFO__DOT__buffer_read_addr;
    __Vdly__later_data_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__psum_in_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_in_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__psum_out_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_out_FIFO__DOT__buffer_write_addr = 0;
    IData/*20:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    CData/*3:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    IData/*17:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*7:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 0;
    CData/*6:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    SData/*15:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*6:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__former_addr_FIFO__DOT__buffer__v0;
    __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 0;
    CData/*7:0*/ __VdlyVal__former_addr_FIFO__DOT__buffer__v4;
    __VdlyVal__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__former_addr_FIFO__DOT__buffer__v4;
    __VdlyDim0__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_addr_FIFO__DOT__buffer__v4;
    __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_data_FIFO__DOT__buffer__v0;
    __VdlySet__former_data_FIFO__DOT__buffer__v0 = 0;
    SData/*12:0*/ __VdlyVal__former_data_FIFO__DOT__buffer__v4;
    __VdlyVal__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__former_data_FIFO__DOT__buffer__v4;
    __VdlyDim0__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_data_FIFO__DOT__buffer__v4;
    __VdlySet__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_addr_FIFO__DOT__buffer__v0;
    __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 0;
    CData/*6:0*/ __VdlyVal__later_addr_FIFO__DOT__buffer__v4;
    __VdlyVal__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__later_addr_FIFO__DOT__buffer__v4;
    __VdlyDim0__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_addr_FIFO__DOT__buffer__v4;
    __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_data_FIFO__DOT__buffer__v0;
    __VdlySet__later_data_FIFO__DOT__buffer__v0 = 0;
    SData/*15:0*/ __VdlyVal__later_data_FIFO__DOT__buffer__v4;
    __VdlyVal__later_data_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__later_data_FIFO__DOT__buffer__v4;
    __VdlyDim0__later_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_data_FIFO__DOT__buffer__v4;
    __VdlySet__later_data_FIFO__DOT__buffer__v4 = 0;
    // Body
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_data_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__later_data_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    __Vdly__former_data_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr;
    __Vdly__former_data_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0U;
    __Vdly__psum_in_FIFO__DOT__buffer_write_addr = vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_out_FIFO__DOT__buffer_write_addr = vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr;
    __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 0U;
    __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 0U;
    __VdlySet__later_data_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__later_data_FIFO__DOT__buffer__v4 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0U;
    __VdlySet__former_data_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__former_data_FIFO__DOT__buffer__v4 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr) {
        __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                ? 0U : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1
                         : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in));
        __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra;
        __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr) {
        __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                ? 0U : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1
                         : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in));
        __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra;
        __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset) {
        __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb = 0U;
    } else {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb;
        if ((0x1fU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag = 0U;
        }
        if ((0x1fU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem
            [(0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                        ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                        : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx), 1U)))];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem
            [(0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                        ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                        : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx), 1U)))];
    }
    vlSelfRef.__PVT__former_addr_write_fin_reg = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ 
                                                          vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear
                                                          [2U]
                                                          [1U])) 
                                                      && ((IData)(vlSelfRef.__PVT__iact_address_write_fin) 
                                                          | (IData)(vlSelfRef.__PVT__former_addr_write_fin_reg))));
    vlSelfRef.__PVT__former_data_write_fin_reg = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ 
                                                          vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear
                                                          [2U]
                                                          [1U])) 
                                                      && ((IData)(vlSelfRef.__PVT__iact_data_write_fin) 
                                                          | (IData)(vlSelfRef.__PVT__former_data_write_fin_reg))));
    vlSelfRef.__PVT__later_addr_write_fin_reg = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__PVT__all_write_fin) 
                                                          & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear
                                                          [2U]
                                                          [1U]))) 
                                                     && ((IData)(vlSelfRef.__PVT__PE_pad_later_address_write_fin) 
                                                         | (IData)(vlSelfRef.__PVT__later_addr_write_fin_reg))));
    vlSelfRef.__PVT__later_data_write_fin_reg = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__PVT__all_write_fin) 
                                                          & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear
                                                          [2U]
                                                          [1U]))) 
                                                     && ((IData)(vlSelfRef.__PVT__PE_pad_later_data_write_fin) 
                                                         | (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr) {
            __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                    ? 0U : (IData)(vlSelfRef.__PVT__FIFO_later_data_out));
            __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra;
            __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake))) {
            __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                    ? (IData)(vlSelfRef.__PVT__FIFO_former_data_out)
                    : 0U);
            __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra;
            __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__former_addr_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__later_addr_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__former_addr_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__later_addr_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__later_data_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__later_data_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr = 0U;
        __Vdly__former_data_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__former_data_FIFO__DOT__buffer_read_addr = 0U;
        __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 1U;
        __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 1U;
        __Vdly__psum_in_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__psum_out_FIFO__DOT__buffer_write_addr = 0U;
        __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 1U;
        __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 1U;
        __VdlySet__later_data_FIFO__DOT__buffer__v0 = 1U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count = 0U;
        __VdlySet__former_data_FIFO__DOT__buffer__v0 = 1U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles = 0U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events = 0U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 1U;
        __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg = 1U;
        __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num = 0U;
        __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg = 0U;
        vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_read_addr = 0U;
        vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_read_addr = 0U;
        vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state = 0U;
    } else {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
                = ((IData)(vlSelfRef.__PVT__iact_address_write_fin)
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr))));
            vlSelfRef.Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0 
                = vlSelfRef.__PVT__FIFO_former_address_out;
            if ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr))) {
                __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 
                    = vlSelfRef.Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0;
                __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 
                    = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
                __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 1U;
            }
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__PE_pad_later_address_write_fin)
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr))));
            __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 
                = vlSelfRef.__PVT__FIFO_later_address_out;
            __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
            __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 1U;
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__PE_pad_later_data_write_fin)
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))));
        }
        if (vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en) {
            __Vdly__former_addr_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en) {
            __Vdly__later_addr_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en) {
            __Vdly__former_addr_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en) {
            __Vdly__later_addr_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__later_data_FIFO__DOT__write_en) {
            __Vdly__later_data_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__iact_data_write_fin)
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr))));
        }
        if (vlSelfRef.__PVT__later_data_FIFO__DOT__read_en) {
            __Vdly__later_data_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
                = (((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))));
        }
        if (vlSelfRef.__PVT__former_data_FIFO__DOT__write_en) {
            __Vdly__former_data_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__former_data_FIFO__DOT__read_en) {
            __Vdly__former_data_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__psum_in_FIFO__DOT__write_en) {
            __Vdly__psum_in_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr)));
            vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready))) 
                   && (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake));
        }
        if (vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en) {
            __Vdly__psum_out_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr)));
            vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full 
                = ((1U & (~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
                          [2U][1U])) && (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
        }
        if (((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
             [2U][1U])) {
            __VdlyVal__former_addr_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                [2U][1U];
            __VdlyDim0__former_addr_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr;
            __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
             [2U][1U])) {
            __VdlyVal__later_addr_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                [2U][1U];
            __VdlyDim0__later_addr_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr;
            __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
             [2U][1U])) {
            __VdlyVal__later_data_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                [2U][1U];
            __VdlyDim0__later_data_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr;
            __VdlySet__later_data_FIFO__DOT__buffer__v4 = 1U;
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
                = ((0xc7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
                = ((0x63U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))));
        }
        if (((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
             [2U][1U])) {
            __VdlyVal__former_data_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                [2U][1U];
            __VdlyDim0__former_data_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr;
            __VdlySet__former_data_FIFO__DOT__buffer__v4 = 1U;
        }
        if ((((8U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
             | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles);
        }
        if (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
        }
        if (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events);
        }
        if ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg))) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
                = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire) 
                            - ((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                               & ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire)) 
                                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))));
        } else if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
                = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr))));
        }
        if (((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en))) {
            __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg));
        } else if ((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 0U;
        }
        if ((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((2U == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state)) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg));
        } else if ((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg));
        } else if (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                    & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire));
        }
        if (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
                = ((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire))
                    ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
                   [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
        } else if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
                = (((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc))
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))));
        }
        if (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en
            [2U][1U]) {
            __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg 
                = (0xfU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                                          + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg))));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out;
        if (((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                   [2U][1U]);
        }
        if (((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                   [2U][1U]);
        }
        if (((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                   [2U][1U]);
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg)
                ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
                : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
        if (((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                   [2U][1U]);
        }
        if ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                = ((0xfU == (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                     >> 8U))) ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire);
        }
        if (((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg 
                = (((9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (0xfU == (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                         >> 8U))) : 
                    (0xfU == (0xfU & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))))
                    ? 0U : (0x1fffffU & VL_EXTENDS_II(21,21, 
                                                      (0x1fffffU 
                                                       & ((9U 
                                                           == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                           ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire
                                                           : 
                                                          VL_MULS_III(21, 
                                                                      (0x1fffffU 
                                                                       & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire))), 
                                                                      (0x1fffffU 
                                                                       & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))))))));
        }
        if ((0x63U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag = 0U;
        }
        if ((0xc7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state 
            = vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state;
        if ((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg 
                = (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__psum_add_fin))) 
            && (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en
                [2U][1U] | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg 
        = ((1U & (~ (IData)(vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset))) 
           && (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg 
        = ((1U & (~ (IData)(vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset))) 
           && (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr 
        = __Vdly__former_addr_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr 
        = __Vdly__later_addr_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr 
        = __Vdly__later_data_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr 
        = __Vdly__former_data_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[1U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[2U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[3U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[4U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[5U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[6U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[7U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[8U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[9U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0xaU] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0xbU] = 0U;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[__VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr 
        = __Vdly__psum_in_FIFO__DOT__buffer_write_addr;
    vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr 
        = __Vdly__psum_out_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__former_addr_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__former_addr_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[__VdlyDim0__former_addr_FIFO__DOT__buffer__v4] 
            = __VdlyVal__former_addr_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr 
        = __Vdly__former_addr_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__later_addr_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__later_addr_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[__VdlyDim0__later_addr_FIFO__DOT__buffer__v4] 
            = __VdlyVal__later_addr_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr 
        = __Vdly__later_addr_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__later_data_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__later_data_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[__VdlyDim0__later_data_FIFO__DOT__buffer__v4] 
            = __VdlyVal__later_data_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr 
        = __Vdly__later_data_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__former_data_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__former_data_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[__VdlyDim0__former_data_FIFO__DOT__buffer__v4] 
            = __VdlyVal__former_data_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr 
        = __Vdly__former_data_FIFO__DOT__buffer_write_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg 
        = __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg 
        = __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num 
        = __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[1U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[2U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[3U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[4U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[5U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[6U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[7U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[8U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[9U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xaU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xbU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xcU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xdU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xeU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xfU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x10U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x11U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x12U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x13U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x14U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x15U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x16U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x17U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x18U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x19U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1aU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1bU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1cU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1dU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1eU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1fU] = 0x7fU;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[__VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg 
        = __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad[__VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    }
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__later_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)));
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    if (__VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad[__VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__FIFO_former_address_out_valid;
    __PVT__FIFO_former_address_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_former_data_out_valid;
    __PVT__FIFO_former_data_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_later_address_out_valid;
    __PVT__FIFO_later_address_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_later_data_out_valid;
    __PVT__FIFO_later_data_out_valid = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc;
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc = 0;
    CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire;
    __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire = 0;
    CData/*3:0*/ Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0;
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en = 0;
    CData/*4:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_spad_clear) 
           | (IData)(vlSymsp->TOP.reset));
    if (vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((0xf0U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                               >> 7U)))) 
                                  << 4U)) | (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                              >> 4U))));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                           >> 0xfU)))) 
                         << 4U)) | (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                            >> 0xcU)));
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                        >> 4U));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0U;
    }
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [2U][1U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [2U]
                                                [1U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [2U][1U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [2U]
                                               [1U]));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [2U][1U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [2U]
                                                  [1U]));
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [2U]
                                               [1U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [2U][1U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [2U][1U]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [2U]
                                                 [1U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [2U][1U]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [2U][1U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][1U]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][1U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][1U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][1U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__iact_data_write_fin = ((0U == (IData)(vlSelfRef.__PVT__FIFO_former_data_out)) 
                                            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire 
        = (0xffU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_former_weight_mode_wire)
                     ? ((0xf0U & ((- (IData)((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)) 
                                               & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                  >> 8U))))) 
                                  << 4U)) | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                              ? 0U : 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                 >> 5U))))
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                         ? 0U : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                 >> 5U))));
    vlSelfRef.__PVT__iact_address_write_fin = ((0U 
                                                == (IData)(vlSelfRef.__PVT__FIFO_former_address_out)) 
                                               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__PE_pad_later_address_write_fin 
        = ((0U == (IData)(vlSelfRef.__PVT__FIFO_later_address_out)) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__PE_pad_later_data_write_fin = 
        ((0U == (IData)(vlSelfRef.__PVT__FIFO_later_data_out)) 
         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag) 
           | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire 
        = (0x1fffffU & VL_MULS_III(21, (0x1fffffU & 
                                        VL_EXTENDS_II(21,8, (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
           & (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en 
        = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire) 
            & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               | ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                  | (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
              != (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en 
        = (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)) 
            & (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) {
        Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0U;
        vlSelfRef.__PVT__PE_pad_cal_fin = ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                           & (~ ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire) 
                                                 & ((7U 
                                                     == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                    | ((8U 
                                                        == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                       | ((9U 
                                                           == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                          | (0xaU 
                                                             == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))))));
    } else {
        Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 
            = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                ? (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                    | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                    ? 1U : 2U) : 5U);
        vlSelfRef.__PVT__PE_pad_cal_fin = 0U;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc 
        = (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
               & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) 
           | ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire)) 
              & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))
                     : ((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num)
                         : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr))));
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
               & ((0xffU != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                  | (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire))))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state 
        = ((8U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? ((4U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0U : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                         : ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0xaU : 9U))) : ((4U 
                                                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)
                                                      ? 8U
                                                      : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 6U
                                                     : 5U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)
                                                       ? 1U
                                                       : 2U)
                                                      : 4U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
                                                      ? 0U
                                                      : 3U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                                                      & (0xffU 
                                                         == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)))
                                                      ? 1U
                                                      : 2U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))
                                                      ? 1U
                                                      : 0U)))));
    __Vtableidx17 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [2U][1U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx17];
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__PE_pad_cal_fin)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr)
            ? ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr 
        = (0xffU & ((IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc)
                     ? (((0U == ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                  ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg)) 
                         & (IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)))
                     : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire 
            = (0x1fU & vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg);
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr));
    }
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__3(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    // Body
    vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready) 
           & (IData)(vlSelfRef.__PVT__psum_out_valid));
    vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en = 
        ((~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
          [2U][1U]) & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc;
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc = 0;
    CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire;
    __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    CData/*3:0*/ Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0;
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en = 0;
    CData/*4:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire 
        = (0xffU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_former_weight_mode_wire)
                     ? ((0xf0U & ((- (IData)((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)) 
                                               & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                  >> 8U))))) 
                                  << 4U)) | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                              ? 0U : 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                 >> 5U))))
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                         ? 0U : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                 >> 5U))));
    if (vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((0xf0U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                               >> 7U)))) 
                                  << 4U)) | (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                              >> 4U))));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                           >> 0xfU)))) 
                         << 4U)) | (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                            >> 0xcU)));
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                        >> 4U));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0U;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
           & (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire 
        = (0x1fffffU & VL_MULS_III(21, (0x1fffffU & 
                                        VL_EXTENDS_II(21,8, (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
            ? 0U : (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                     | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                     ? (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                         | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                         ? 1U : 2U) : 5U));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en 
        = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire) 
            & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               | ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                  | (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
              != (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state 
        = ((8U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? ((4U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0U : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                         : ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0xaU : 9U))) : ((4U 
                                                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)
                                                      ? 8U
                                                      : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 6U
                                                     : 5U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)
                                                       ? 1U
                                                       : 2U)
                                                      : 4U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
                                                      ? 0U
                                                      : 3U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                                                      & (0xffU 
                                                         == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)))
                                                      ? 1U
                                                      : 2U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))
                                                      ? 1U
                                                      : 0U)))));
    vlSelfRef.__PVT__PE_pad_cal_fin = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) 
                                       & ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                          & (~ ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire) 
                                                & ((7U 
                                                    == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                   | ((8U 
                                                       == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                      | ((9U 
                                                          == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                         | (0xaU 
                                                            == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))))))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en 
        = (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)) 
            & (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1));
    __Vtableidx18 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [2U][2U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx18];
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc 
        = (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
               & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) 
           | ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire)) 
              & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__PE_pad_cal_fin)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))
                     : ((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num)
                         : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr))));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
               & ((0xffU != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                  | (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire))))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) 
           | (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake)) 
              | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
                 & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) 
           | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
              & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx) 
                 | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr)
            ? ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr 
        = (0xffU & ((IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc)
                     ? (((0U == ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                  ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg)) 
                         & (IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)))
                     : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr)
            : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__FIFO_out_psum_in_ready = (1U & 
                                               ((~ 
                                                 (((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_read_addr) 
                                                   == (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr)) 
                                                  & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full))) 
                                                | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
                                                [2U]
                                                [2U]));
    vlSelfRef.__PVT__PE_pad_psum_in_ready = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state) 
                                             & (IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready));
    vlSelfRef.__PVT__psum_in_ready = (1U & ((~ (((IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_read_addr) 
                                                 == (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr)) 
                                                & (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full))) 
                                            | (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire = 0;
    // Body
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid
           [2U][2U]);
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready 
        = ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | ((9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready)) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid));
    vlSelfRef.__PVT__psum_out_valid = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready) 
                                       & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid)) 
                                          & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) 
           | (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake)) 
              | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
                 & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) 
           | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
              & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx) 
                 | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__2(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__psum_out = (0x1fffffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state)
                                               ? (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
                                                  + 
                                                  vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_in
                                                  [2U]
                                                  [2U])
                                               : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg 
                                                  + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid)
            ? vlSelfRef.__PVT__psum_out : 0U);
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    // Body
    vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready) 
           & (IData)(vlSelfRef.__PVT__psum_out_valid));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en = 
        ((~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
          [2U][2U]) & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__psum_in_ready) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid
           [2U][2U]);
    vlSelfRef.__PVT__psum_in_FIFO__DOT__write_en = 
        ((~ (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready)) 
         & (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles = 0;
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events = 0;
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0;
    CData/*0:0*/ __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 0;
    CData/*0:0*/ __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr = 0;
    CData/*7:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr = 0;
    CData/*7:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count = 0;
    CData/*1:0*/ __Vdly__former_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__former_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__former_data_FIFO__DOT__buffer_write_addr;
    __Vdly__former_data_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__former_data_FIFO__DOT__buffer_read_addr;
    __Vdly__former_data_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__later_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__later_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__later_data_FIFO__DOT__buffer_write_addr;
    __Vdly__later_data_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__later_data_FIFO__DOT__buffer_read_addr;
    __Vdly__later_data_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__psum_in_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_in_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__psum_out_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_out_FIFO__DOT__buffer_write_addr = 0;
    IData/*20:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    CData/*3:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    IData/*17:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*7:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 0;
    CData/*6:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    SData/*15:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*6:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__former_addr_FIFO__DOT__buffer__v0;
    __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 0;
    CData/*7:0*/ __VdlyVal__former_addr_FIFO__DOT__buffer__v4;
    __VdlyVal__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__former_addr_FIFO__DOT__buffer__v4;
    __VdlyDim0__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_addr_FIFO__DOT__buffer__v4;
    __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_data_FIFO__DOT__buffer__v0;
    __VdlySet__former_data_FIFO__DOT__buffer__v0 = 0;
    SData/*12:0*/ __VdlyVal__former_data_FIFO__DOT__buffer__v4;
    __VdlyVal__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__former_data_FIFO__DOT__buffer__v4;
    __VdlyDim0__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_data_FIFO__DOT__buffer__v4;
    __VdlySet__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_addr_FIFO__DOT__buffer__v0;
    __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 0;
    CData/*6:0*/ __VdlyVal__later_addr_FIFO__DOT__buffer__v4;
    __VdlyVal__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__later_addr_FIFO__DOT__buffer__v4;
    __VdlyDim0__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_addr_FIFO__DOT__buffer__v4;
    __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_data_FIFO__DOT__buffer__v0;
    __VdlySet__later_data_FIFO__DOT__buffer__v0 = 0;
    SData/*15:0*/ __VdlyVal__later_data_FIFO__DOT__buffer__v4;
    __VdlyVal__later_data_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__later_data_FIFO__DOT__buffer__v4;
    __VdlyDim0__later_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_data_FIFO__DOT__buffer__v4;
    __VdlySet__later_data_FIFO__DOT__buffer__v4 = 0;
    // Body
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_data_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__later_data_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    __Vdly__former_data_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr;
    __Vdly__former_data_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0U;
    __Vdly__psum_in_FIFO__DOT__buffer_write_addr = vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_out_FIFO__DOT__buffer_write_addr = vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr;
    __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 0U;
    __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 0U;
    __VdlySet__later_data_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__later_data_FIFO__DOT__buffer__v4 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0U;
    __VdlySet__former_data_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__former_data_FIFO__DOT__buffer__v4 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr) {
        __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                ? 0U : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1
                         : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in));
        __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra;
        __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr) {
        __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                ? 0U : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1
                         : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in));
        __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra;
        __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset) {
        __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb = 0U;
    } else {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb;
        if ((0x1fU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag = 0U;
        }
        if ((0x1fU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem
            [(0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                        ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                        : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx), 1U)))];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem
            [(0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                        ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                        : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx), 1U)))];
    }
    vlSelfRef.__PVT__former_addr_write_fin_reg = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ 
                                                          vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear
                                                          [2U]
                                                          [2U])) 
                                                      && ((IData)(vlSelfRef.__PVT__iact_address_write_fin) 
                                                          | (IData)(vlSelfRef.__PVT__former_addr_write_fin_reg))));
    vlSelfRef.__PVT__former_data_write_fin_reg = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ 
                                                          vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear
                                                          [2U]
                                                          [2U])) 
                                                      && ((IData)(vlSelfRef.__PVT__iact_data_write_fin) 
                                                          | (IData)(vlSelfRef.__PVT__former_data_write_fin_reg))));
    vlSelfRef.__PVT__later_addr_write_fin_reg = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__PVT__all_write_fin) 
                                                          & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear
                                                          [2U]
                                                          [2U]))) 
                                                     && ((IData)(vlSelfRef.__PVT__PE_pad_later_address_write_fin) 
                                                         | (IData)(vlSelfRef.__PVT__later_addr_write_fin_reg))));
    vlSelfRef.__PVT__later_data_write_fin_reg = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__PVT__all_write_fin) 
                                                          & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear
                                                          [2U]
                                                          [2U]))) 
                                                     && ((IData)(vlSelfRef.__PVT__PE_pad_later_data_write_fin) 
                                                         | (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr) {
            __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                    ? 0U : (IData)(vlSelfRef.__PVT__FIFO_later_data_out));
            __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra;
            __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake))) {
            __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                    ? (IData)(vlSelfRef.__PVT__FIFO_former_data_out)
                    : 0U);
            __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra;
            __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__former_addr_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__later_addr_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__former_addr_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__later_addr_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__later_data_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__later_data_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr = 0U;
        __Vdly__former_data_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__former_data_FIFO__DOT__buffer_read_addr = 0U;
        __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 1U;
        __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 1U;
        __Vdly__psum_in_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__psum_out_FIFO__DOT__buffer_write_addr = 0U;
        __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 1U;
        __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 1U;
        __VdlySet__later_data_FIFO__DOT__buffer__v0 = 1U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count = 0U;
        __VdlySet__former_data_FIFO__DOT__buffer__v0 = 1U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles = 0U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events = 0U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 1U;
        __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg = 1U;
        __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num = 0U;
        __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg = 0U;
        vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_read_addr = 0U;
        vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_read_addr = 0U;
        vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state = 0U;
    } else {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
                = ((IData)(vlSelfRef.__PVT__iact_address_write_fin)
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr))));
            vlSelfRef.Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0 
                = vlSelfRef.__PVT__FIFO_former_address_out;
            if ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr))) {
                __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 
                    = vlSelfRef.Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0;
                __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 
                    = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
                __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 1U;
            }
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__PE_pad_later_address_write_fin)
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr))));
            __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 
                = vlSelfRef.__PVT__FIFO_later_address_out;
            __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
            __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 1U;
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__PE_pad_later_data_write_fin)
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))));
        }
        if (vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en) {
            __Vdly__former_addr_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en) {
            __Vdly__later_addr_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en) {
            __Vdly__former_addr_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en) {
            __Vdly__later_addr_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__later_data_FIFO__DOT__write_en) {
            __Vdly__later_data_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__iact_data_write_fin)
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr))));
        }
        if (vlSelfRef.__PVT__later_data_FIFO__DOT__read_en) {
            __Vdly__later_data_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
                = (((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))));
        }
        if (vlSelfRef.__PVT__former_data_FIFO__DOT__write_en) {
            __Vdly__former_data_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__former_data_FIFO__DOT__read_en) {
            __Vdly__former_data_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__psum_in_FIFO__DOT__write_en) {
            __Vdly__psum_in_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr)));
            vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready))) 
                   && (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake));
        }
        if (vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en) {
            __Vdly__psum_out_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr)));
            vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full 
                = ((1U & (~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
                          [2U][2U])) && (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
        }
        if (((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
             [2U][2U])) {
            __VdlyVal__former_addr_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                [2U][2U];
            __VdlyDim0__former_addr_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr;
            __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
             [2U][2U])) {
            __VdlyVal__later_addr_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                [2U][2U];
            __VdlyDim0__later_addr_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr;
            __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
             [2U][2U])) {
            __VdlyVal__later_data_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                [2U][2U];
            __VdlyDim0__later_data_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr;
            __VdlySet__later_data_FIFO__DOT__buffer__v4 = 1U;
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
                = ((0xc7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
                = ((0x63U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))));
        }
        if (((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
             [2U][2U])) {
            __VdlyVal__former_data_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                [2U][2U];
            __VdlyDim0__former_data_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr;
            __VdlySet__former_data_FIFO__DOT__buffer__v4 = 1U;
        }
        if ((((8U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
             | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles);
        }
        if (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
        }
        if (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events);
        }
        if ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg))) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
                = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire) 
                            - ((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                               & ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire)) 
                                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))));
        } else if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
                = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr))));
        }
        if (((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en))) {
            __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg));
        } else if ((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 0U;
        }
        if ((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((2U == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state)) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg));
        } else if ((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg));
        } else if (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                    & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire));
        }
        if (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
                = ((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire))
                    ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
                   [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
        } else if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
                = (((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc))
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))));
        }
        if (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en
            [2U][2U]) {
            __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg 
                = (0xfU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                                          + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg))));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out;
        if (((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                   [2U][2U]);
        }
        if (((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                   [2U][2U]);
        }
        if (((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                   [2U][2U]);
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg)
                ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
                : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
        if (((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                   [2U][2U]);
        }
        if ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                = ((0xfU == (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                     >> 8U))) ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire);
        }
        if (((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg 
                = (((9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (0xfU == (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                         >> 8U))) : 
                    (0xfU == (0xfU & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))))
                    ? 0U : (0x1fffffU & VL_EXTENDS_II(21,21, 
                                                      (0x1fffffU 
                                                       & ((9U 
                                                           == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                           ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire
                                                           : 
                                                          VL_MULS_III(21, 
                                                                      (0x1fffffU 
                                                                       & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire))), 
                                                                      (0x1fffffU 
                                                                       & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))))))));
        }
        if ((0x63U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag = 0U;
        }
        if ((0xc7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state 
            = vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state;
        if ((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg 
                = (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__psum_add_fin))) 
            && (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en
                [2U][2U] | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg 
        = ((1U & (~ (IData)(vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset))) 
           && (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg 
        = ((1U & (~ (IData)(vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset))) 
           && (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr 
        = __Vdly__former_addr_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr 
        = __Vdly__later_addr_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr 
        = __Vdly__later_data_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr 
        = __Vdly__former_data_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[1U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[2U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[3U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[4U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[5U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[6U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[7U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[8U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[9U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0xaU] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0xbU] = 0U;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[__VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr 
        = __Vdly__psum_in_FIFO__DOT__buffer_write_addr;
    vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr 
        = __Vdly__psum_out_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__former_addr_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__former_addr_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[__VdlyDim0__former_addr_FIFO__DOT__buffer__v4] 
            = __VdlyVal__former_addr_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr 
        = __Vdly__former_addr_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__later_addr_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__later_addr_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[__VdlyDim0__later_addr_FIFO__DOT__buffer__v4] 
            = __VdlyVal__later_addr_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr 
        = __Vdly__later_addr_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__later_data_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__later_data_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[__VdlyDim0__later_data_FIFO__DOT__buffer__v4] 
            = __VdlyVal__later_data_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr 
        = __Vdly__later_data_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__former_data_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__former_data_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[__VdlyDim0__former_data_FIFO__DOT__buffer__v4] 
            = __VdlyVal__former_data_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr 
        = __Vdly__former_data_FIFO__DOT__buffer_write_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg 
        = __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg 
        = __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num 
        = __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[1U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[2U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[3U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[4U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[5U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[6U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[7U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[8U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[9U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xaU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xbU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xcU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xdU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xeU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xfU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x10U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x11U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x12U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x13U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x14U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x15U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x16U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x17U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x18U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x19U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1aU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1bU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1cU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1dU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1eU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1fU] = 0x7fU;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[__VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg 
        = __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad[__VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    }
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__later_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)));
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    if (__VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad[__VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__FIFO_former_address_out_valid;
    __PVT__FIFO_former_address_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_former_data_out_valid;
    __PVT__FIFO_former_data_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_later_address_out_valid;
    __PVT__FIFO_later_address_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_later_data_out_valid;
    __PVT__FIFO_later_data_out_valid = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc;
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc = 0;
    CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire;
    __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire = 0;
    CData/*3:0*/ Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0;
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en = 0;
    CData/*4:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_spad_clear) 
           | (IData)(vlSymsp->TOP.reset));
    if (vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((0xf0U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                               >> 7U)))) 
                                  << 4U)) | (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                              >> 4U))));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                           >> 0xfU)))) 
                         << 4U)) | (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                            >> 0xcU)));
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                        >> 4U));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0U;
    }
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [2U][2U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [2U]
                                                [2U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [2U][2U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [2U]
                                               [2U]));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [2U][2U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [2U]
                                                  [2U]));
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [2U]
                                               [2U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [2U][2U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [2U][2U]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [2U]
                                                 [2U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [2U][2U]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [2U][2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][2U]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][2U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][2U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][2U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__iact_data_write_fin = ((0U == (IData)(vlSelfRef.__PVT__FIFO_former_data_out)) 
                                            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire 
        = (0xffU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_former_weight_mode_wire)
                     ? ((0xf0U & ((- (IData)((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)) 
                                               & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                  >> 8U))))) 
                                  << 4U)) | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                              ? 0U : 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                 >> 5U))))
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                         ? 0U : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                 >> 5U))));
    vlSelfRef.__PVT__iact_address_write_fin = ((0U 
                                                == (IData)(vlSelfRef.__PVT__FIFO_former_address_out)) 
                                               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__PE_pad_later_address_write_fin 
        = ((0U == (IData)(vlSelfRef.__PVT__FIFO_later_address_out)) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__PE_pad_later_data_write_fin = 
        ((0U == (IData)(vlSelfRef.__PVT__FIFO_later_data_out)) 
         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag) 
           | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire 
        = (0x1fffffU & VL_MULS_III(21, (0x1fffffU & 
                                        VL_EXTENDS_II(21,8, (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
           & (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en 
        = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire) 
            & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               | ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                  | (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
              != (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en 
        = (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)) 
            & (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) {
        Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0U;
        vlSelfRef.__PVT__PE_pad_cal_fin = ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                           & (~ ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire) 
                                                 & ((7U 
                                                     == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                    | ((8U 
                                                        == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                       | ((9U 
                                                           == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                          | (0xaU 
                                                             == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))))));
    } else {
        Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 
            = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                ? (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                    | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                    ? 1U : 2U) : 5U);
        vlSelfRef.__PVT__PE_pad_cal_fin = 0U;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc 
        = (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
               & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) 
           | ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire)) 
              & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))
                     : ((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num)
                         : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr))));
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
               & ((0xffU != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                  | (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire))))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state 
        = ((8U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? ((4U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0U : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                         : ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0xaU : 9U))) : ((4U 
                                                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)
                                                      ? 8U
                                                      : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 6U
                                                     : 5U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)
                                                       ? 1U
                                                       : 2U)
                                                      : 4U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
                                                      ? 0U
                                                      : 3U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                                                      & (0xffU 
                                                         == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)))
                                                      ? 1U
                                                      : 2U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))
                                                      ? 1U
                                                      : 0U)))));
    __Vtableidx18 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [2U][2U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx18];
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__PE_pad_cal_fin)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr)
            ? ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr 
        = (0xffU & ((IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc)
                     ? (((0U == ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                  ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg)) 
                         & (IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)))
                     : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire 
            = (0x1fU & vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg);
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr));
    }
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__3(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    // Body
    vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready) 
           & (IData)(vlSelfRef.__PVT__psum_out_valid));
    vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en = 
        ((~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
          [2U][2U]) & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc;
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc = 0;
    CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire;
    __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    CData/*3:0*/ Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0;
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en = 0;
    CData/*4:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire 
        = (0xffU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_former_weight_mode_wire)
                     ? ((0xf0U & ((- (IData)((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)) 
                                               & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                  >> 8U))))) 
                                  << 4U)) | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                              ? 0U : 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                 >> 5U))))
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                         ? 0U : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                 >> 5U))));
    if (vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((0xf0U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                               >> 7U)))) 
                                  << 4U)) | (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                              >> 4U))));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                           >> 0xfU)))) 
                         << 4U)) | (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                            >> 0xcU)));
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                        >> 4U));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0U;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
           & (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire 
        = (0x1fffffU & VL_MULS_III(21, (0x1fffffU & 
                                        VL_EXTENDS_II(21,8, (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
            ? 0U : (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                     | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                     ? (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                         | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                         ? 1U : 2U) : 5U));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en 
        = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire) 
            & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               | ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                  | (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
              != (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state 
        = ((8U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? ((4U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0U : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                         : ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0xaU : 9U))) : ((4U 
                                                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)
                                                      ? 8U
                                                      : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 6U
                                                     : 5U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)
                                                       ? 1U
                                                       : 2U)
                                                      : 4U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
                                                      ? 0U
                                                      : 3U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                                                      & (0xffU 
                                                         == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)))
                                                      ? 1U
                                                      : 2U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))
                                                      ? 1U
                                                      : 0U)))));
    vlSelfRef.__PVT__PE_pad_cal_fin = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) 
                                       & ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                          & (~ ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire) 
                                                & ((7U 
                                                    == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                   | ((8U 
                                                       == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                      | ((9U 
                                                          == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                         | (0xaU 
                                                            == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))))))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en 
        = (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)) 
            & (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1));
    __Vtableidx19 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [0U][0U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx19];
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc 
        = (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
               & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) 
           | ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire)) 
              & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__PE_pad_cal_fin)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))
                     : ((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num)
                         : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr))));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
               & ((0xffU != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                  | (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire))))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) 
           | (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake)) 
              | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
                 & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) 
           | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
              & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx) 
                 | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr)
            ? ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr 
        = (0xffU & ((IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc)
                     ? (((0U == ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                  ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg)) 
                         & (IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)))
                     : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr)
            : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__FIFO_out_psum_in_ready = (1U & 
                                               ((~ 
                                                 (((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_read_addr) 
                                                   == (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr)) 
                                                  & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full))) 
                                                | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
                                                [0U]
                                                [0U]));
    vlSelfRef.__PVT__PE_pad_psum_in_ready = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state) 
                                             & (IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready));
    vlSelfRef.__PVT__psum_in_ready = (1U & ((~ (((IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_read_addr) 
                                                 == (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr)) 
                                                & (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full))) 
                                            | (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire = 0;
    // Body
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid
           [0U][0U]);
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready 
        = ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | ((9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready)) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid));
    vlSelfRef.__PVT__psum_out_valid = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready) 
                                       & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid)) 
                                          & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) 
           | (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake)) 
              | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
                 & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) 
           | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
              & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx) 
                 | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__2(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__psum_out = (0x1fffffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state)
                                               ? (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
                                                  + 
                                                  vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_in
                                                  [0U]
                                                  [0U])
                                               : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg 
                                                  + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid)
            ? vlSelfRef.__PVT__psum_out : 0U);
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    // Body
    vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready) 
           & (IData)(vlSelfRef.__PVT__psum_out_valid));
    vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__psum_in_ready) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid
           [0U][0U]);
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en = 
        ((~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
          [0U][0U]) & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
    vlSelfRef.__PVT__psum_in_FIFO__DOT__write_en = 
        ((~ (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready)) 
         & (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles = 0;
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events = 0;
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0;
    CData/*0:0*/ __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 0;
    CData/*0:0*/ __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr = 0;
    CData/*7:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr = 0;
    CData/*7:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count = 0;
    CData/*1:0*/ __Vdly__former_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__former_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__former_data_FIFO__DOT__buffer_write_addr;
    __Vdly__former_data_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__former_data_FIFO__DOT__buffer_read_addr;
    __Vdly__former_data_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__later_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__later_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__later_data_FIFO__DOT__buffer_write_addr;
    __Vdly__later_data_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__later_data_FIFO__DOT__buffer_read_addr;
    __Vdly__later_data_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__psum_in_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_in_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__psum_out_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_out_FIFO__DOT__buffer_write_addr = 0;
    IData/*20:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    CData/*3:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    IData/*17:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*7:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 0;
    CData/*6:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    SData/*15:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*6:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__former_addr_FIFO__DOT__buffer__v0;
    __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 0;
    CData/*7:0*/ __VdlyVal__former_addr_FIFO__DOT__buffer__v4;
    __VdlyVal__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__former_addr_FIFO__DOT__buffer__v4;
    __VdlyDim0__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_addr_FIFO__DOT__buffer__v4;
    __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_data_FIFO__DOT__buffer__v0;
    __VdlySet__former_data_FIFO__DOT__buffer__v0 = 0;
    SData/*12:0*/ __VdlyVal__former_data_FIFO__DOT__buffer__v4;
    __VdlyVal__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__former_data_FIFO__DOT__buffer__v4;
    __VdlyDim0__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_data_FIFO__DOT__buffer__v4;
    __VdlySet__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_addr_FIFO__DOT__buffer__v0;
    __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 0;
    CData/*6:0*/ __VdlyVal__later_addr_FIFO__DOT__buffer__v4;
    __VdlyVal__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__later_addr_FIFO__DOT__buffer__v4;
    __VdlyDim0__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_addr_FIFO__DOT__buffer__v4;
    __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_data_FIFO__DOT__buffer__v0;
    __VdlySet__later_data_FIFO__DOT__buffer__v0 = 0;
    SData/*15:0*/ __VdlyVal__later_data_FIFO__DOT__buffer__v4;
    __VdlyVal__later_data_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__later_data_FIFO__DOT__buffer__v4;
    __VdlyDim0__later_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_data_FIFO__DOT__buffer__v4;
    __VdlySet__later_data_FIFO__DOT__buffer__v4 = 0;
    // Body
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_data_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__later_data_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    __Vdly__former_data_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr;
    __Vdly__former_data_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0U;
    __Vdly__psum_in_FIFO__DOT__buffer_write_addr = vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_out_FIFO__DOT__buffer_write_addr = vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr;
    __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 0U;
    __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 0U;
    __VdlySet__later_data_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__later_data_FIFO__DOT__buffer__v4 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0U;
    __VdlySet__former_data_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__former_data_FIFO__DOT__buffer__v4 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr) {
        __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                ? 0U : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1
                         : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in));
        __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra;
        __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr) {
        __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                ? 0U : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1
                         : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in));
        __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra;
        __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset) {
        __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb = 0U;
    } else {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb;
        if ((0x1fU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag = 0U;
        }
        if ((0x1fU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem
            [(0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                        ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                        : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx), 1U)))];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem
            [(0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                        ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                        : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx), 1U)))];
    }
    vlSelfRef.__PVT__former_addr_write_fin_reg = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ 
                                                          vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear
                                                          [0U]
                                                          [0U])) 
                                                      && ((IData)(vlSelfRef.__PVT__iact_address_write_fin) 
                                                          | (IData)(vlSelfRef.__PVT__former_addr_write_fin_reg))));
    vlSelfRef.__PVT__former_data_write_fin_reg = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ 
                                                          vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear
                                                          [0U]
                                                          [0U])) 
                                                      && ((IData)(vlSelfRef.__PVT__iact_data_write_fin) 
                                                          | (IData)(vlSelfRef.__PVT__former_data_write_fin_reg))));
    vlSelfRef.__PVT__later_addr_write_fin_reg = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__PVT__all_write_fin) 
                                                          & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear
                                                          [0U]
                                                          [0U]))) 
                                                     && ((IData)(vlSelfRef.__PVT__PE_pad_later_address_write_fin) 
                                                         | (IData)(vlSelfRef.__PVT__later_addr_write_fin_reg))));
    vlSelfRef.__PVT__later_data_write_fin_reg = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__PVT__all_write_fin) 
                                                          & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear
                                                          [0U]
                                                          [0U]))) 
                                                     && ((IData)(vlSelfRef.__PVT__PE_pad_later_data_write_fin) 
                                                         | (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr) {
            __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                    ? 0U : (IData)(vlSelfRef.__PVT__FIFO_later_data_out));
            __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra;
            __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake))) {
            __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                    ? (IData)(vlSelfRef.__PVT__FIFO_former_data_out)
                    : 0U);
            __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra;
            __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__former_addr_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__later_addr_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__former_addr_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__later_addr_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__later_data_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__later_data_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr = 0U;
        __Vdly__former_data_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__former_data_FIFO__DOT__buffer_read_addr = 0U;
        __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 1U;
        __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 1U;
        __Vdly__psum_in_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__psum_out_FIFO__DOT__buffer_write_addr = 0U;
        __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 1U;
        __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 1U;
        __VdlySet__later_data_FIFO__DOT__buffer__v0 = 1U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count = 0U;
        __VdlySet__former_data_FIFO__DOT__buffer__v0 = 1U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles = 0U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events = 0U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 1U;
        __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg = 1U;
        __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num = 0U;
        __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg = 0U;
        vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_read_addr = 0U;
        vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_read_addr = 0U;
        vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state = 0U;
    } else {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
                = ((IData)(vlSelfRef.__PVT__iact_address_write_fin)
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr))));
            vlSelfRef.Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0 
                = vlSelfRef.__PVT__FIFO_former_address_out;
            if ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr))) {
                __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 
                    = vlSelfRef.Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0;
                __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 
                    = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
                __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 1U;
            }
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__PE_pad_later_address_write_fin)
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr))));
            __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 
                = vlSelfRef.__PVT__FIFO_later_address_out;
            __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
            __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 1U;
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__PE_pad_later_data_write_fin)
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))));
        }
        if (vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en) {
            __Vdly__former_addr_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en) {
            __Vdly__later_addr_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en) {
            __Vdly__former_addr_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en) {
            __Vdly__later_addr_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__later_data_FIFO__DOT__write_en) {
            __Vdly__later_data_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__iact_data_write_fin)
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr))));
        }
        if (vlSelfRef.__PVT__later_data_FIFO__DOT__read_en) {
            __Vdly__later_data_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
                = (((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))));
        }
        if (vlSelfRef.__PVT__former_data_FIFO__DOT__write_en) {
            __Vdly__former_data_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__former_data_FIFO__DOT__read_en) {
            __Vdly__former_data_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__psum_in_FIFO__DOT__write_en) {
            __Vdly__psum_in_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr)));
            vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready))) 
                   && (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake));
        }
        if (vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en) {
            __Vdly__psum_out_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr)));
            vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full 
                = ((1U & (~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
                          [0U][0U])) && (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
        }
        if (((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
             [0U][0U])) {
            __VdlyVal__former_addr_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                [0U][0U];
            __VdlyDim0__former_addr_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr;
            __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
             [0U][0U])) {
            __VdlyVal__later_addr_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                [0U][0U];
            __VdlyDim0__later_addr_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr;
            __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
             [0U][0U])) {
            __VdlyVal__later_data_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                [0U][0U];
            __VdlyDim0__later_data_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr;
            __VdlySet__later_data_FIFO__DOT__buffer__v4 = 1U;
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
                = ((0xc7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
                = ((0x63U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))));
        }
        if (((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
             [0U][0U])) {
            __VdlyVal__former_data_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                [0U][0U];
            __VdlyDim0__former_data_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr;
            __VdlySet__former_data_FIFO__DOT__buffer__v4 = 1U;
        }
        if ((((8U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
             | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles);
        }
        if (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
        }
        if (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events);
        }
        if ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg))) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
                = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire) 
                            - ((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                               & ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire)) 
                                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))));
        } else if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
                = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr))));
        }
        if (((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en))) {
            __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg));
        } else if ((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 0U;
        }
        if ((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((2U == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state)) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg));
        } else if ((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg));
        } else if (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                    & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire));
        }
        if (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
                = ((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire))
                    ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
                   [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
        } else if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
                = (((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc))
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))));
        }
        if (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en
            [0U][0U]) {
            __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg 
                = (0xfU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                                          + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg))));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out;
        if (((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                   [0U][0U]);
        }
        if (((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                   [0U][0U]);
        }
        if (((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                   [0U][0U]);
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg)
                ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
                : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
        if (((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                   [0U][0U]);
        }
        if ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                = ((0xfU == (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                     >> 8U))) ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire);
        }
        if (((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg 
                = (((9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (0xfU == (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                         >> 8U))) : 
                    (0xfU == (0xfU & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))))
                    ? 0U : (0x1fffffU & VL_EXTENDS_II(21,21, 
                                                      (0x1fffffU 
                                                       & ((9U 
                                                           == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                           ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire
                                                           : 
                                                          VL_MULS_III(21, 
                                                                      (0x1fffffU 
                                                                       & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire))), 
                                                                      (0x1fffffU 
                                                                       & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))))))));
        }
        if ((0x63U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag = 0U;
        }
        if ((0xc7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state 
            = vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state;
        if ((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg 
                = (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__psum_add_fin))) 
            && (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en
                [0U][0U] | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg 
        = ((1U & (~ (IData)(vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset))) 
           && (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg 
        = ((1U & (~ (IData)(vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset))) 
           && (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr 
        = __Vdly__former_addr_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr 
        = __Vdly__later_addr_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr 
        = __Vdly__later_data_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr 
        = __Vdly__former_data_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[1U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[2U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[3U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[4U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[5U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[6U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[7U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[8U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[9U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0xaU] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0xbU] = 0U;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[__VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr 
        = __Vdly__psum_in_FIFO__DOT__buffer_write_addr;
    vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr 
        = __Vdly__psum_out_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__former_addr_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__former_addr_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[__VdlyDim0__former_addr_FIFO__DOT__buffer__v4] 
            = __VdlyVal__former_addr_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr 
        = __Vdly__former_addr_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__later_addr_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__later_addr_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[__VdlyDim0__later_addr_FIFO__DOT__buffer__v4] 
            = __VdlyVal__later_addr_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr 
        = __Vdly__later_addr_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__later_data_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__later_data_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[__VdlyDim0__later_data_FIFO__DOT__buffer__v4] 
            = __VdlyVal__later_data_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr 
        = __Vdly__later_data_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__former_data_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__former_data_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[__VdlyDim0__former_data_FIFO__DOT__buffer__v4] 
            = __VdlyVal__former_data_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr 
        = __Vdly__former_data_FIFO__DOT__buffer_write_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg 
        = __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg 
        = __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num 
        = __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[1U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[2U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[3U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[4U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[5U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[6U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[7U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[8U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[9U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xaU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xbU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xcU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xdU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xeU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xfU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x10U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x11U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x12U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x13U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x14U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x15U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x16U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x17U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x18U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x19U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1aU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1bU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1cU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1dU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1eU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1fU] = 0x7fU;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[__VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg 
        = __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad[__VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    }
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__later_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)));
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    if (__VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad[__VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__FIFO_former_address_out_valid;
    __PVT__FIFO_former_address_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_former_data_out_valid;
    __PVT__FIFO_former_data_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_later_address_out_valid;
    __PVT__FIFO_later_address_out_valid = 0;
    CData/*0:0*/ __PVT__FIFO_later_data_out_valid;
    __PVT__FIFO_later_data_out_valid = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc;
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc = 0;
    CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire;
    __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire = 0;
    CData/*3:0*/ Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0;
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en = 0;
    CData/*4:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_spad_clear) 
           | (IData)(vlSymsp->TOP.reset));
    if (vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((0xf0U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                               >> 7U)))) 
                                  << 4U)) | (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                              >> 4U))));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                           >> 0xfU)))) 
                         << 4U)) | (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                            >> 0xcU)));
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                        >> 4U));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0U;
    }
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [0U][0U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [0U]
                                                [0U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [0U][0U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [0U]
                                               [0U]));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [0U][0U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [0U]
                                                  [0U]));
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [0U]
                                               [0U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [0U][0U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [0U][0U]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [0U]
                                                 [0U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [0U][0U]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [0U][0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][0U]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][0U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][0U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][0U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__iact_data_write_fin = ((0U == (IData)(vlSelfRef.__PVT__FIFO_former_data_out)) 
                                            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire 
        = (0xffU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_former_weight_mode_wire)
                     ? ((0xf0U & ((- (IData)((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)) 
                                               & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                  >> 8U))))) 
                                  << 4U)) | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                              ? 0U : 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                 >> 5U))))
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                         ? 0U : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                 >> 5U))));
    vlSelfRef.__PVT__iact_address_write_fin = ((0U 
                                                == (IData)(vlSelfRef.__PVT__FIFO_former_address_out)) 
                                               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__PE_pad_later_address_write_fin 
        = ((0U == (IData)(vlSelfRef.__PVT__FIFO_later_address_out)) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__PE_pad_later_data_write_fin = 
        ((0U == (IData)(vlSelfRef.__PVT__FIFO_later_data_out)) 
         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag) 
           | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire 
        = (0x1fffffU & VL_MULS_III(21, (0x1fffffU & 
                                        VL_EXTENDS_II(21,8, (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
           & (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en 
        = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire) 
            & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               | ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                  | (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
              != (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en 
        = (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)) 
            & (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) {
        Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0U;
        vlSelfRef.__PVT__PE_pad_cal_fin = ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                           & (~ ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire) 
                                                 & ((7U 
                                                     == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                    | ((8U 
                                                        == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                       | ((9U 
                                                           == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                          | (0xaU 
                                                             == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))))));
    } else {
        Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 
            = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                ? (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                    | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                    ? 1U : 2U) : 5U);
        vlSelfRef.__PVT__PE_pad_cal_fin = 0U;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc 
        = (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
               & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) 
           | ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire)) 
              & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))
                     : ((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num)
                         : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr))));
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
               & ((0xffU != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                  | (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire))))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state 
        = ((8U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? ((4U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0U : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                         : ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0xaU : 9U))) : ((4U 
                                                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)
                                                      ? 8U
                                                      : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 6U
                                                     : 5U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)
                                                       ? 1U
                                                       : 2U)
                                                      : 4U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
                                                      ? 0U
                                                      : 3U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                                                      & (0xffU 
                                                         == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)))
                                                      ? 1U
                                                      : 2U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))
                                                      ? 1U
                                                      : 0U)))));
    __Vtableidx19 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [0U][0U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx19];
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__PE_pad_cal_fin)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr)
            ? ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr 
        = (0xffU & ((IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc)
                     ? (((0U == ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                  ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg)) 
                         & (IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)))
                     : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire 
            = (0x1fU & vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg);
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr));
    }
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__3(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    // Body
    vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready) 
           & (IData)(vlSelfRef.__PVT__psum_out_valid));
    vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__psum_in_ready) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid
           [0U][0U]);
    vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en = 
        ((~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
          [0U][0U]) & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    vlSelfRef.__PVT__psum_in_FIFO__DOT__write_en = 
        ((~ (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready)) 
         & (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc;
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc = 0;
    CData/*7:0*/ __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire;
    __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire;
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    CData/*3:0*/ Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0;
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en = 0;
    CData/*4:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire 
        = (0xffU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_former_weight_mode_wire)
                     ? ((0xf0U & ((- (IData)((1U & 
                                              ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)) 
                                               & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                  >> 8U))))) 
                                  << 4U)) | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                              ? 0U : 
                                             (0xfU 
                                              & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                                 >> 5U))))
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                         ? 0U : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
                                 >> 5U))));
    if (vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((0xf0U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                               >> 7U)))) 
                                  << 4U)) | (0xfU & 
                                             ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                              >> 4U))));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                           >> 0xfU)))) 
                         << 4U)) | (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                            >> 0xcU)));
    } else {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire 
            = (0xffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                        >> 4U));
        __PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire = 0U;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
           & (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire 
        = (0x1fffffU & VL_MULS_III(21, (0x1fffffU & 
                                        VL_EXTENDS_II(21,8, (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
            ? 0U : (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                     | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                     ? (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                         | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire))
                         ? 1U : 2U) : 5U));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en 
        = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire) 
            & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               | ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                  | (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))))) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
              != (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state 
        = ((8U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? ((4U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0U : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                         : ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                             ? 0xaU : 9U))) : ((4U 
                                                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)
                                                      ? 8U
                                                      : (IData)(Processing_Element_core_inst__DOT____VdfgExtracted_h2df383f4__0))
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 6U
                                                     : 5U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)
                                                       ? 1U
                                                       : 2U)
                                                      : 4U)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)
                                                      ? 0U
                                                      : 3U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                     ? 
                                                    (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                                                      & (0xffU 
                                                         == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)))
                                                      ? 1U
                                                      : 2U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))
                                                      ? 1U
                                                      : 0U)))));
    vlSelfRef.__PVT__PE_pad_cal_fin = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) 
                                       & ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                          & (~ ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire) 
                                                & ((7U 
                                                    == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                   | ((8U 
                                                       == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                      | ((9U 
                                                          == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                                                         | (0xaU 
                                                            == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))))))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en 
        = (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire)) 
            & (7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1 
        = ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)) 
           & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__lane1_safe_en) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1));
    __Vtableidx20 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [0U][1U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx20];
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc 
        = (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
               & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) 
           | ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire)) 
              & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__PE_pad_cal_fin)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr 
        = (0x7fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)
                     ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))
                     : ((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num)
                         : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr))));
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    __PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc 
        = (((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg)) 
               & ((0xffU != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                  | (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire))))) 
           | (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
               & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire))) 
              | (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                  & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire)) 
                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire))) 
                 | ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) 
           | (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake)) 
              | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
                 & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) 
           | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
              & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx) 
                 | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)
                     : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                         : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx), 1U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr)
            ? ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr 
        = (0xffU & ((IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc)
                     ? (((0U == ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                                  ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg)) 
                         & (IData)(__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)))
                     : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr)
            : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag)
                ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__FIFO_out_psum_in_ready = (1U & 
                                               ((~ 
                                                 (((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_read_addr) 
                                                   == (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr)) 
                                                  & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full))) 
                                                | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
                                                [0U]
                                                [1U]));
    vlSelfRef.__PVT__PE_pad_psum_in_ready = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state) 
                                             & (IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready));
    vlSelfRef.__PVT__psum_in_ready = (1U & ((~ (((IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_read_addr) 
                                                 == (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr)) 
                                                & (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full))) 
                                            | (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready)));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready = 0;
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire = 0;
    // Body
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid
           [0U][1U]);
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready 
        = ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | ((9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake 
        = ((~ (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready)) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid));
    vlSelfRef.__PVT__psum_out_valid = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out_ready) 
                                       & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid)) 
                                          & (IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_valid_wire)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) 
           | (((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)) 
               & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake)) 
              | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
                 & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) 
           | ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__data_in_shake) 
              & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx) 
                 | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__2(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__psum_out = (0x1fffffU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state)
                                               ? (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
                                                  + 
                                                  vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_in
                                                  [0U]
                                                  [1U])
                                               : (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg 
                                                  + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid)
            ? vlSelfRef.__PVT__psum_out : 0U);
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire;
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire = 0;
    // Body
    vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__FIFO_out_psum_in_ready) 
           & (IData)(vlSelfRef.__PVT__psum_out_valid));
    vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake 
        = ((IData)(vlSelfRef.__PVT__psum_in_ready) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid
           [0U][1U]);
    __PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire 
        = ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en)) 
            & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)) 
           | (((0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                         - (IData)(1U))) == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg)) 
              & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)));
    vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en = 
        ((~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
          [0U][1U]) & (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
    vlSelfRef.__PVT__psum_in_FIFO__DOT__write_en = 
        ((~ (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready)) 
         & (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake));
    vlSelfRef.__PVT__psum_add_fin = ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire) 
                                     & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx)
                     : (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                         & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))
                         ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
                         : ((IData)(__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_fin_wire)
                             ? 0U : ((IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))
                                      : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg))))));
}

VL_INLINE_OPT void VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles = 0;
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events = 0;
    IData/*31:0*/ __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0;
    CData/*0:0*/ __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 0;
    CData/*0:0*/ __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr = 0;
    CData/*3:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr = 0;
    CData/*7:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr = 0;
    CData/*7:0*/ __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr = 0;
    CData/*4:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num = 0;
    CData/*6:0*/ __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count = 0;
    CData/*1:0*/ __Vdly__former_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__former_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__former_data_FIFO__DOT__buffer_write_addr;
    __Vdly__former_data_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__former_data_FIFO__DOT__buffer_read_addr;
    __Vdly__former_data_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__later_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__later_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__later_data_FIFO__DOT__buffer_write_addr;
    __Vdly__later_data_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__later_data_FIFO__DOT__buffer_read_addr;
    __Vdly__later_data_FIFO__DOT__buffer_read_addr = 0;
    CData/*1:0*/ __Vdly__psum_in_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_in_FIFO__DOT__buffer_write_addr = 0;
    CData/*1:0*/ __Vdly__psum_out_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_out_FIFO__DOT__buffer_write_addr = 0;
    IData/*20:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    CData/*3:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0;
    IData/*17:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*7:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 0;
    CData/*6:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    CData/*4:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0;
    SData/*15:0*/ __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*6:0*/ __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__former_addr_FIFO__DOT__buffer__v0;
    __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 0;
    CData/*7:0*/ __VdlyVal__former_addr_FIFO__DOT__buffer__v4;
    __VdlyVal__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__former_addr_FIFO__DOT__buffer__v4;
    __VdlyDim0__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_addr_FIFO__DOT__buffer__v4;
    __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_data_FIFO__DOT__buffer__v0;
    __VdlySet__former_data_FIFO__DOT__buffer__v0 = 0;
    SData/*12:0*/ __VdlyVal__former_data_FIFO__DOT__buffer__v4;
    __VdlyVal__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__former_data_FIFO__DOT__buffer__v4;
    __VdlyDim0__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__former_data_FIFO__DOT__buffer__v4;
    __VdlySet__former_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_addr_FIFO__DOT__buffer__v0;
    __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 0;
    CData/*6:0*/ __VdlyVal__later_addr_FIFO__DOT__buffer__v4;
    __VdlyVal__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__later_addr_FIFO__DOT__buffer__v4;
    __VdlyDim0__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_addr_FIFO__DOT__buffer__v4;
    __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_data_FIFO__DOT__buffer__v0;
    __VdlySet__later_data_FIFO__DOT__buffer__v0 = 0;
    SData/*15:0*/ __VdlyVal__later_data_FIFO__DOT__buffer__v4;
    __VdlyVal__later_data_FIFO__DOT__buffer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__later_data_FIFO__DOT__buffer__v4;
    __VdlyDim0__later_data_FIFO__DOT__buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__later_data_FIFO__DOT__buffer__v4;
    __VdlySet__later_data_FIFO__DOT__buffer__v4 = 0;
    // Body
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr;
    __Vdly__former_addr_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_addr_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr;
    __Vdly__later_data_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    __Vdly__later_data_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    __Vdly__former_data_FIFO__DOT__buffer_write_addr 
        = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr;
    __Vdly__former_data_FIFO__DOT__buffer_read_addr 
        = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 0U;
    __Vdly__psum_in_FIFO__DOT__buffer_write_addr = vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr;
    __Vdly__psum_out_FIFO__DOT__buffer_write_addr = vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr;
    __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 0U;
    __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 0U;
    __VdlySet__later_data_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__later_data_FIFO__DOT__buffer__v4 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 0U;
    __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 0U;
    __VdlySet__former_data_FIFO__DOT__buffer__v0 = 0U;
    __VdlySet__former_data_FIFO__DOT__buffer__v4 = 0U;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg 
        = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr) {
        __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag)
                ? 0U : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                         ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1
                         : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in));
        __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__addra;
        __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr) {
        __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag)
                ? 0U : ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                         ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1
                         : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in));
        __VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__addra;
        __VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset) {
        __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb = 0U;
    } else {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count)));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb;
        if ((0x1fU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_flag = 0U;
        }
        if ((0x1fU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem
            [(0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_write_lane1)
                        ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                        : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx), 1U)))];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem
            [(0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_write_lane1)
                        ? VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1), 1U)
                        : VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx), 1U)))];
    }
    vlSelfRef.__PVT__former_addr_write_fin_reg = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ 
                                                          vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear
                                                          [0U]
                                                          [1U])) 
                                                      && ((IData)(vlSelfRef.__PVT__iact_address_write_fin) 
                                                          | (IData)(vlSelfRef.__PVT__former_addr_write_fin_reg))));
    vlSelfRef.__PVT__former_data_write_fin_reg = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.reset))) 
                                                  && ((1U 
                                                       & (~ 
                                                          vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear
                                                          [0U]
                                                          [1U])) 
                                                      && ((IData)(vlSelfRef.__PVT__iact_data_write_fin) 
                                                          | (IData)(vlSelfRef.__PVT__former_data_write_fin_reg))));
    vlSelfRef.__PVT__later_addr_write_fin_reg = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__PVT__all_write_fin) 
                                                          & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear
                                                          [0U]
                                                          [1U]))) 
                                                     && ((IData)(vlSelfRef.__PVT__PE_pad_later_address_write_fin) 
                                                         | (IData)(vlSelfRef.__PVT__later_addr_write_fin_reg))));
    vlSelfRef.__PVT__later_data_write_fin_reg = ((1U 
                                                  & (~ (IData)(vlSymsp->TOP.reset))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.__PVT__all_write_fin) 
                                                          & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear
                                                          [0U]
                                                          [1U]))) 
                                                     && ((IData)(vlSelfRef.__PVT__PE_pad_later_data_write_fin) 
                                                         | (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__wr) {
            __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag)
                    ? 0U : (IData)(vlSelfRef.__PVT__FIFO_later_data_out));
            __VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra;
            __VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0 = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake))) {
            __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake)
                    ? (IData)(vlSelfRef.__PVT__FIFO_former_data_out)
                    : 0U);
            __VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra;
            __VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0 = 1U;
        }
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__former_addr_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__later_addr_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__former_addr_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__later_addr_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__later_data_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr = 0U;
        __Vdly__later_data_FIFO__DOT__buffer_read_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr = 0U;
        __Vdly__former_data_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__former_data_FIFO__DOT__buffer_read_addr = 0U;
        __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0 = 1U;
        __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0 = 1U;
        __Vdly__psum_in_FIFO__DOT__buffer_write_addr = 0U;
        __Vdly__psum_out_FIFO__DOT__buffer_write_addr = 0U;
        __VdlySet__former_addr_FIFO__DOT__buffer__v0 = 1U;
        __VdlySet__later_addr_FIFO__DOT__buffer__v0 = 1U;
        __VdlySet__later_data_FIFO__DOT__buffer__v0 = 1U;
        __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count = 0U;
        __VdlySet__former_data_FIFO__DOT__buffer__v0 = 1U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles = 0U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events = 0U;
        __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events = 0U;
        __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr = 0U;
        __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 1U;
        __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg = 1U;
        __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num = 0U;
        __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg = 0U;
        vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_read_addr = 0U;
        vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_read_addr = 0U;
        vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state = 0U;
    } else {
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
                = ((IData)(vlSelfRef.__PVT__iact_address_write_fin)
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr))));
            vlSelfRef.Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0 
                = vlSelfRef.__PVT__FIFO_former_address_out;
            if ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr))) {
                __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 
                    = vlSelfRef.Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT____Vlvbound_h06c2d223__0;
                __VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 
                    = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
                __VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12 = 1U;
            }
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__PE_pad_later_address_write_fin)
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr))));
            __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 
                = vlSelfRef.__PVT__FIFO_later_address_out;
            __VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 
                = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
            __VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32 = 1U;
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__PE_pad_later_data_write_fin)
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr))));
        }
        if (vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en) {
            __Vdly__former_addr_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en) {
            __Vdly__later_addr_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en) {
            __Vdly__former_addr_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en) {
            __Vdly__later_addr_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__later_data_FIFO__DOT__write_en) {
            __Vdly__later_data_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
                = ((IData)(vlSelfRef.__PVT__iact_data_write_fin)
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr))));
        }
        if (vlSelfRef.__PVT__later_data_FIFO__DOT__read_en) {
            __Vdly__later_data_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
                = (((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_idx_inc))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))));
        }
        if (vlSelfRef.__PVT__former_data_FIFO__DOT__write_en) {
            __Vdly__former_data_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
        }
        if (vlSelfRef.__PVT__former_data_FIFO__DOT__read_en) {
            __Vdly__former_data_FIFO__DOT__buffer_read_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr)));
        }
        if (vlSelfRef.__PVT__psum_in_FIFO__DOT__write_en) {
            __Vdly__psum_in_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr)));
            vlSelfRef.__PVT__psum_in_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__PE_pad_psum_in_ready))) 
                   && (IData)(vlSelfRef.__PVT__psum_in_FIFO__DOT__data_in_shake));
        }
        if (vlSelfRef.__PVT__psum_out_FIFO__DOT__write_en) {
            __Vdly__psum_out_FIFO__DOT__buffer_write_addr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr)));
            vlSelfRef.__PVT__psum_out_FIFO__DOT__maybe_full 
                = ((1U & (~ vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready
                          [0U][1U])) && (IData)(vlSelfRef.__PVT__psum_out_FIFO__DOT__data_in_shake));
        }
        if (((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
             [0U][1U])) {
            __VdlyVal__former_addr_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                [0U][1U];
            __VdlyDim0__former_addr_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr;
            __VdlySet__former_addr_FIFO__DOT__buffer__v4 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
             [0U][1U])) {
            __VdlyVal__later_addr_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                [0U][1U];
            __VdlyDim0__later_addr_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr;
            __VdlySet__later_addr_FIFO__DOT__buffer__v4 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
             [0U][1U])) {
            __VdlyVal__later_data_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                [0U][1U];
            __VdlyDim0__later_data_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr;
            __VdlySet__later_data_FIFO__DOT__buffer__v4 = 1U;
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
                = ((0xc7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))));
        }
        if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
                = ((0x63U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))));
        }
        if (((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
             [0U][1U])) {
            __VdlyVal__former_data_FIFO__DOT__buffer__v4 
                = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                [0U][1U];
            __VdlyDim0__former_data_FIFO__DOT__buffer__v4 
                = vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr;
            __VdlySet__former_data_FIFO__DOT__buffer__v4 = 1U;
        }
        if ((((8U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
             | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles);
        }
        if (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_parallel_valid_wire))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
        }
        if (((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_lane1_serial_valid_wire))) {
            __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
                = ((IData)(1U) + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events);
        }
        if ((((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
              | (3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
             & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg))) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
                = (0x1fU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire) 
                            - ((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
                               & ((0U != (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire)) 
                                  & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))));
        } else if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
                = (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr))));
        }
        if (((2U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en))) {
            __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg));
        } else if ((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg = 0U;
        }
        if ((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((2U == (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state)) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg));
        } else if ((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg));
        } else if (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_write_back_read_en) 
                    & (~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Iact_Data_Spad_read_fin_wire)))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg 
                = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire) 
                   | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire));
        }
        if (((3U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             & ((~ (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire)) 
                & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg)))) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
                = ((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_row_wire))
                    ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
                   [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
        } else if (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc) {
            __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num 
                = (((0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout)) 
                    & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_read_idx_inc))
                    ? 0U : (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))));
        }
        if (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en
            [0U][1U]) {
            __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg = 0U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg 
                = (0xfU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                                          + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg))));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_read_addr 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__next_data_read_addr;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_read_idx_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__next_data_read_addr;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__douta_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__addra];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_reg 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out;
        if (((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                   [0U][1U]);
        }
        if (((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                   [0U][1U]);
        }
        if (((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                   [0U][1U]);
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg 
            = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg)
                ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
                : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
        if (((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__write_en) 
             != (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__read_en))) {
            vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty))) 
                   && vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                   [0U][1U]);
        }
        if ((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                = ((0xfU == (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                     >> 8U))) ? 0U : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire);
        }
        if (((6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
             | (9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_reg 
                = (((9U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                     ? (0xfU == (0xfU & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                                         >> 8U))) : 
                    (0xfU == (0xfU & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))))
                    ? 0U : (0x1fffffU & VL_EXTENDS_II(21,21, 
                                                      (0x1fffffU 
                                                       & ((9U 
                                                           == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
                                                           ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_mul_lane1_wire
                                                           : 
                                                          VL_MULS_III(21, 
                                                                      (0x1fffffU 
                                                                       & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire))), 
                                                                      (0x1fffffU 
                                                                       & VL_EXTENDS_II(21,8, (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_data_wire)))))))));
        }
        if ((0x63U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_flag = 0U;
        }
        if ((0xc7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state 
            = vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state;
        if ((1U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) {
            vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_inc_reg 
                = (0xffU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out));
        }
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__addra];
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state 
            = vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_PE_state;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__psum_add_fin))) 
            && (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en
                [0U][1U] | (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_state))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg 
        = ((1U & (~ (IData)(vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset))) 
           && (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg 
        = ((1U & (~ (IData)(vlSelfRef.Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT____Vcellinp__bank0__reset))) 
           && (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__next_psum_read_idx)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr 
        = __Vdly__former_addr_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr 
        = __Vdly__later_addr_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr 
        = __Vdly__later_data_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr;
    vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr 
        = __Vdly__former_data_FIFO__DOT__buffer_read_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_write_addr;
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[1U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[2U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[3U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[4U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[5U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[6U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[7U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[8U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[9U] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0xaU] = 0U;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[0xbU] = 0U;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad[__VdlyDim0__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad__v12;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_write_addr;
    vlSelfRef.__PVT__psum_in_FIFO__DOT__buffer_write_addr 
        = __Vdly__psum_in_FIFO__DOT__buffer_write_addr;
    vlSelfRef.__PVT__psum_out_FIFO__DOT__buffer_write_addr 
        = __Vdly__psum_out_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__former_addr_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__former_addr_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer[__VdlyDim0__former_addr_FIFO__DOT__buffer__v4] 
            = __VdlyVal__former_addr_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr 
        = __Vdly__former_addr_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__later_addr_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__later_addr_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer[__VdlyDim0__later_addr_FIFO__DOT__buffer__v4] 
            = __VdlyVal__later_addr_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr 
        = __Vdly__later_addr_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__later_data_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__later_data_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__later_data_FIFO__DOT__buffer[__VdlyDim0__later_data_FIFO__DOT__buffer__v4] 
            = __VdlyVal__later_data_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr 
        = __Vdly__later_data_FIFO__DOT__buffer_write_addr;
    if (__VdlySet__former_data_FIFO__DOT__buffer__v0) {
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[0U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[1U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[2U] = 0U;
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[3U] = 0U;
    }
    if (__VdlySet__former_data_FIFO__DOT__buffer__v4) {
        vlSelfRef.__PVT__former_data_FIFO__DOT__buffer[__VdlyDim0__former_data_FIFO__DOT__buffer__v4] 
            = __VdlyVal__former_data_FIFO__DOT__buffer__v4;
    }
    vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr 
        = __Vdly__former_data_FIFO__DOT__buffer_write_addr;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events 
        = __Vdly__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_first_read_reg 
        = __Vdly__Processing_Element_core_inst__DOT__former_data_first_read_reg;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_first_read_reg 
        = __Vdly__Processing_Element_core_inst__DOT__later_data_first_read_reg;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num 
        = __Vdly__Processing_Element_core_inst__DOT__later_data_spad_col_num;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr;
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[1U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[2U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[3U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[4U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[5U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[6U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[7U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[8U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[9U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xaU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xbU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xcU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xdU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xeU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0xfU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x10U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x11U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x12U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x13U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x14U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x15U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x16U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x17U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x18U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x19U] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1aU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1bU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1cU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1dU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1eU] = 0x7fU;
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[0x1fU] = 0x7fU;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad[__VdlyDim0__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad__v32;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg 
        = __Vdly__Processing_Element_core_inst__DOT__former_matrix_col_reg;
    if (__VdlySet__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad[__VdlyDim0__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__spad__v0;
    }
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__later_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_lane1_bank_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)));
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count 
        = __Vdly__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__Iact_DATA_Spad_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    if (__VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0) {
        vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad[__VdlyDim0__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0] 
            = __VdlyVal__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_spad__v0;
    }
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
}
