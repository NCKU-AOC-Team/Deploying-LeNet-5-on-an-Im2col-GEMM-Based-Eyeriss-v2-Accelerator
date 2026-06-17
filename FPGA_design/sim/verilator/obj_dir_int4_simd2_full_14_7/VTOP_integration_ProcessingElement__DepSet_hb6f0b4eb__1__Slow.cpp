// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_ProcessingElement.h"
#include "VTOP_integration__Syms.h"

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> VTOP_integration__ConstPool__TABLE_h45c4e01a_0;

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0\n"); );
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [2U]
                                                [2U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [2U][2U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [2U]
                                                  [2U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [2U][2U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [2U]
                                               [2U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [2U]
                                                 [2U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [2U][2U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [2U][2U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [2U][2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [2U][2U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [2U][2U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [2U]
                                               [2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
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
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][2U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [0U]
                                                [0U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [0U][0U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [0U]
                                                  [0U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [0U][0U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [0U]
                                               [0U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [0U]
                                                 [0U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [0U][0U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [0U][0U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [0U][0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [0U][0U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [0U][0U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [0U]
                                               [0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
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
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][0U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [0U]
                                                [1U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [0U][1U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [0U]
                                                  [1U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [0U][1U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [0U]
                                               [1U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [0U]
                                                 [1U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [0U][1U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [0U][1U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [0U][1U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [0U][1U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [0U][1U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [0U]
                                               [1U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][1U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][1U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][1U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][1U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx20 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [0U][1U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx20];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [0U]
                                                [2U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [0U][2U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [0U]
                                                  [2U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [0U][2U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [0U]
                                               [2U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [0U]
                                                 [2U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [0U][2U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [0U][2U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [0U][2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [0U][2U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [0U][2U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [0U]
                                               [2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][2U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][2U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][2U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][2U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx21 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [0U][2U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx21];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [1U]
                                                [0U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [1U][0U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [1U]
                                                  [0U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [1U][0U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [1U]
                                               [0U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [1U]
                                                 [0U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [1U][0U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [1U][0U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [1U][0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [1U][0U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [1U][0U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [1U]
                                               [0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][0U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][0U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][0U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][0U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx22 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [1U][0U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx22];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [1U]
                                                [1U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [1U][1U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [1U]
                                                  [1U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [1U][1U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [1U]
                                               [1U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [1U]
                                                 [1U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [1U][1U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [1U][1U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [1U][1U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [1U][1U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [1U][1U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [1U]
                                               [1U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][1U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][1U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][1U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][1U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx23 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [1U][1U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx23];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [1U]
                                                [2U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [1U][2U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [1U]
                                                  [2U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [1U][2U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [1U]
                                               [2U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [1U]
                                                 [2U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [1U][2U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [1U][2U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [1U][2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [1U][2U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [1U][2U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [1U]
                                               [2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx24 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [1U][2U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx24];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [2U]
                                                [0U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [2U][0U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [2U]
                                                  [0U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [2U][0U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [2U]
                                               [0U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [2U]
                                                 [0U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [2U][0U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [2U][0U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [2U][0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [2U][0U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [2U][0U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [2U]
                                               [0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx25 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [2U][0U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx25];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [2U]
                                                [1U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [2U][1U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [2U]
                                                  [1U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [2U][1U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [2U]
                                               [1U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [2U]
                                                 [1U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [2U][1U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [2U][1U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [2U][1U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [2U][1U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [2U][1U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [2U]
                                               [1U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][1U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][1U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][1U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][1U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx26 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [2U][1U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx26];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [2U]
                                                [2U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [2U][2U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [2U]
                                                  [2U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [2U][2U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [2U]
                                               [2U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [2U]
                                                 [2U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [2U][2U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [2U][2U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [2U][2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [2U][2U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [2U][2U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [2U]
                                               [2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][2U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][2U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][2U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][2U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx27 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [2U][2U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx27];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [0U]
                                                [0U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [0U][0U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [0U]
                                                  [0U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [0U][0U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [0U]
                                               [0U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [0U]
                                                 [0U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [0U][0U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [0U][0U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [0U][0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [0U][0U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [0U][0U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [0U]
                                               [0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][0U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][0U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][0U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][0U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx28 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [0U][0U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx28];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [0U]
                                                [1U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [0U][1U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [0U]
                                                  [1U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [0U][1U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [0U]
                                               [1U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [0U]
                                                 [1U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [0U][1U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [0U][1U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [0U][1U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [0U][1U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [0U][1U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [0U]
                                               [1U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][1U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][1U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][1U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][1U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx29 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [0U][1U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx29];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[0].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [0U]
                                                [2U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [0U][2U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [0U]
                                                  [2U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [0U][2U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [0U]
                                               [2U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [0U]
                                                 [2U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [0U][2U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [0U][2U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [0U][2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [0U][2U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [0U][2U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [0U]
                                               [2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][2U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][2U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][2U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [0U][2U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx30 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [0U][2U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx30];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [1U]
                                                [0U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [1U][0U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [1U]
                                                  [0U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [1U][0U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [1U]
                                               [0U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [1U]
                                                 [0U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [1U][0U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [1U][0U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [1U][0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [1U][0U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [1U][0U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [1U]
                                               [0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][0U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][0U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][0U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][0U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx31 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [1U][0U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx31];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[1].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [1U]
                                                [1U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [1U][1U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [1U]
                                                  [1U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [1U][1U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [1U]
                                               [1U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [1U]
                                                 [1U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [1U][1U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [1U][1U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [1U][1U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [1U][1U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [1U][1U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [1U]
                                               [1U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][1U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][1U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][1U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][1U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx32 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [1U][1U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx32];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[1].PE_INST_C[2].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [1U]
                                                [2U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [1U][2U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [1U]
                                                  [2U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [1U][2U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [1U]
                                               [2U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [1U]
                                                 [2U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [1U][2U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [1U][2U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [1U][2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [1U][2U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [1U][2U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [1U]
                                               [2U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [1U][2U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx33 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [1U][2U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx33];
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

VL_ATTR_COLD void VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___eval_final__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles) 
                      | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events)) 
                     | (0U != vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events)))) {
        VL_WRITEF_NX("[pe_lane1] %NTOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.PE_INST_R[2].PE_INST_C[0].pe.Processing_Element_core_inst serial_cycles=%0d bank_conflict_events=%0d parallel_events=%0d\n",0,
                     vlSymsp->name(),32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_serial_cycles,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_bank_conflict_events,
                     32,vlSelfRef.__PVT__Processing_Element_core_inst__DOT__dbg_lane1_parallel_events);
    }
}

VL_ATTR_COLD void VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0(VTOP_integration_ProcessingElement* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_ProcessingElement___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe__0\n"); );
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
    CData/*4:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    // Body
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_lane1 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (0x1fffffU & (vlSelfRef.__PVT__Processing_Element_core_inst__DOT__product_lane1_reg 
                            + vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_load_lane1_reg))
            : 0U);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_read_fin_wire 
        = (0U == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__all_write_fin = ((IData)(vlSelfRef.__PVT__former_addr_write_fin_reg) 
                                      & ((IData)(vlSelfRef.__PVT__former_data_write_fin_reg) 
                                         & ((IData)(vlSelfRef.__PVT__later_addr_write_fin_reg) 
                                            & (IData)(vlSelfRef.__PVT__later_data_write_fin_reg))));
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
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire 
        = (0x7fU == vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr]);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out 
        = ((0xbU >= (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr))
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__Iact_Address_Spad
           [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_read_addr]
            : 0U);
    vlSelfRef.__PVT__former_data_FIFO__DOT__empty = 
        ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__maybe_full)) 
         & ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr) 
            == (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_write_addr)));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1 
        = (0x1fU & ((0x1cU & (((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_matrix_col_reg) 
                               - (IData)(1U)) << 2U)) 
                    + (7U & ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__Weight_DATA_Spad_BRAM_inst__DOT__full_dout) 
                             >> 8U))));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__wr_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__data_out_reg
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0__DOT__doutb);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_in_valid 
        = ((7U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
           | (0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)));
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
    vlSelfRef.__PVT__FIFO_former_address_out = ((IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)
                                                 ? 
                                                vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in
                                                [2U]
                                                [0U]
                                                 : 
                                                vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer
                                                [vlSelfRef.__PVT__former_addr_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
           [2U][0U]);
    __PVT__FIFO_former_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
                                                  | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid
                                                  [2U]
                                                  [0U]));
    vlSelfRef.__PVT__later_addr_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
           [2U][0U]);
    vlSelfRef.__PVT__FIFO_later_address_out = ((IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)
                                                ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in
                                               [2U]
                                               [0U]
                                                : vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer
                                               [vlSelfRef.__PVT__later_addr_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_address_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
                                                 | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid
                                                 [2U]
                                                 [0U]));
    vlSelfRef.__PVT__later_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
           [2U][0U]);
    vlSelfRef.__PVT__FIFO_later_data_out = ((IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)
                                             ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in
                                            [2U][0U]
                                             : vlSelfRef.__PVT__later_data_FIFO__DOT__buffer
                                            [vlSelfRef.__PVT__later_data_FIFO__DOT__buffer_read_addr]);
    __PVT__FIFO_later_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
                                              | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid
                                              [2U][0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_address_spad_idx_inc 
        = (((4U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state)) 
            | (6U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))) 
           & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_zero_col_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_data_spad_idx_inc_wire 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__former_address_spad_data_out) 
           == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__spad_read_addr)));
    vlSelfRef.__PVT__FIFO_former_data_out = ((IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)
                                              ? vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in
                                             [2U][0U]
                                              : vlSelfRef.__PVT__former_data_FIFO__DOT__buffer
                                             [vlSelfRef.__PVT__former_data_FIFO__DOT__buffer_read_addr]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__write_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
           [2U][0U]);
    __PVT__FIFO_former_data_out_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
                                               | vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid
                                               [2U]
                                               [0U]));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_write_idx 
        = ((0xaU == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__PE_state))
            ? (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1)
            : (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_psum_out 
        = ((IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__read_idx_bank_reg)
            ? vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank1_data_out
            : vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_inst__DOT__bank0_data_out);
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_idx_inc_wire 
        = ((vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__Weight_Address_Spad
            [vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__spad_read_addr] 
            == ((IData)(1U) + (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_data_spad_col_num))) 
           | (0U == (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__later_matrix_data_wire)));
    __PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire 
        = ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire) 
           & (0U != (IData)(__PVT__Processing_Element_core_inst__DOT__later_matrix_data_lane1_wire)));
    vlSelfRef.__PVT__former_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    vlSelfRef.__PVT__later_addr_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_addr_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_address_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Address_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_address_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    vlSelfRef.__PVT__later_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__later_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_later_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Later_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_later_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    vlSelfRef.__PVT__former_data_FIFO__DOT__read_en 
        = ((~ (IData)(vlSelfRef.__PVT__former_data_FIFO__DOT__empty)) 
           & (IData)(__PVT__FIFO_former_data_out_valid));
    vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Former_Data_Spad_inst__DOT__data_in_shake 
        = ((IData)(__PVT__FIFO_former_data_out_valid) 
           & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
           [2U][0U]);
    __PVT__Processing_Element_core_inst__DOT__later_lane1_bank_conflict_wire 
        = ((IData)(__PVT__Processing_Element_core_inst__DOT__later_lane1_valid_wire) 
           & ((1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__psum_write_idx_wire)) 
              == (1U & (IData)(vlSelfRef.__PVT__Processing_Element_core_inst__DOT__Psum_Spad_read_idx_lane1))));
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
    __Vtableidx34 = (((IData)(vlSelfRef.__PVT__PE_pad_cal_fin) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__all_write_fin) 
                                 << 3U) | ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PE_Cluster_inst__DOT__pe_do_load_en
                                            [2U][0U] 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__PE_state))));
    vlSelfRef.__PVT__Processing_Element_Controller_inst__DOT__next_PE_state 
        = VTOP_integration__ConstPool__TABLE_h45c4e01a_0
        [__Vtableidx34];
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
