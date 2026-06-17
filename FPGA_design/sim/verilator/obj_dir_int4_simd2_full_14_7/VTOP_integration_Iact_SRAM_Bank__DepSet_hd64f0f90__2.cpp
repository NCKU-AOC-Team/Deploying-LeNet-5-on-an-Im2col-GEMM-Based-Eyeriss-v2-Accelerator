// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_Iact_SRAM_Bank.h"
#include "VTOP_integration__Syms.h"

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__1(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    // Body
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
           [0U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                  [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                [0U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                  [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                [0U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
           [0U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
}

extern const VlUnpacked<CData/*1:0*/, 64> VTOP_integration__ConstPool__TABLE_h6ef61c90_0;

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*5:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0;
    SData/*9:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*6:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0;
    SData/*10:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    SData/*15:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    // Body
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0U;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0U;
    if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr) {
        __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
               [1U][0U]);
        __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra;
        __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) 
         | (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en))) {
        __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
               [1U][0U]);
        __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = (((~ (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en)) 
                & (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag))
                ? (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx));
        __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 1U;
        __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 1U;
        vlSelfRef.__PVT__iact_write_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_read_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state = 0U;
    } else {
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__addr_SRAM_read_en))))) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__addr_SRAM_read_en) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx)));
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__data_SRAM_read_en))))) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__data_SRAM_read_en) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx)));
        }
        if (vlSelfRef.__PVT__data_SRAM_write_done) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_data_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                    [1U][0U])) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__addr_SRAM_write_done) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_address_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                    [1U][0U])) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_data_in_ready))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_address_in_ready))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 1U;
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 1U;
        }
        vlSelfRef.__PVT__iact_write_state = vlSelfRef.__PVT__next_iact_write_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_read_state = vlSelfRef.__PVT__next_iact_read_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx) 
                        + vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem
                        [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                          [1U][0U])]))];
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem
                [(0x7ffU & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx) 
                            + vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem
                            [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                              [1U][0U])]))];
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state;
    }
    vlSelfRef.__PVT__iact_address_out_valid = ((1U 
                                                & (~ (IData)(vlSymsp->TOP.reset))) 
                                               && ((IData)(vlSelfRef.__PVT__addr_SRAM_read_en) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)) 
                                                      & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                                                      [1U]
                                                      [0U])));
    vlSelfRef.__PVT__iact_data_out_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0U] = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[1U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[2U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[3U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[4U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[5U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[6U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[7U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[8U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[9U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xaU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xbU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xcU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xdU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xeU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xfU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x10U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x11U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x12U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x13U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x14U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x15U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x16U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x17U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x18U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x19U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1aU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1bU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1cU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1dU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1eU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1fU] = 0x1ffU;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    }
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem[__VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0U] = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[1U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[2U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[3U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[4U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[5U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[6U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[7U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[8U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[9U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xaU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xbU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xcU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xdU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xeU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xfU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x10U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x11U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x12U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x13U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x14U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x15U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x16U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x17U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x18U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x19U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1aU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1bU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1cU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1dU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1eU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1fU] = 0x7ffU;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[__VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    }
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (2U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__data_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (3U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb)) 
           & (IData)(vlSelfRef.__PVT__iact_address_out_valid));
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg)) 
           & (IData)(vlSelfRef.__PVT__iact_data_out_valid));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
              [1U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
                 [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx62 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_write_en
                      [1U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx62];
    __Vtableidx61 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_en
                      [1U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx61];
}

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__1(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    // Body
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
           [1U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                  [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                [1U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                  [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                [1U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
           [1U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
}

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    CData/*5:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0;
    SData/*9:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*6:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0;
    SData/*10:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    SData/*15:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    // Body
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0U;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0U;
    if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr) {
        __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
               [1U][1U]);
        __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra;
        __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) 
         | (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en))) {
        __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
               [1U][1U]);
        __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = (((~ (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en)) 
                & (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag))
                ? (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx));
        __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 1U;
        __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 1U;
        vlSelfRef.__PVT__iact_write_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_read_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state = 0U;
    } else {
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__addr_SRAM_read_en))))) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__addr_SRAM_read_en) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx)));
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__data_SRAM_read_en))))) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__data_SRAM_read_en) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx)));
        }
        if (vlSelfRef.__PVT__data_SRAM_write_done) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_data_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                    [1U][1U])) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__addr_SRAM_write_done) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_address_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                    [1U][1U])) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_data_in_ready))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_address_in_ready))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 1U;
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 1U;
        }
        vlSelfRef.__PVT__iact_write_state = vlSelfRef.__PVT__next_iact_write_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_read_state = vlSelfRef.__PVT__next_iact_read_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx) 
                        + vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem
                        [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                          [1U][1U])]))];
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem
                [(0x7ffU & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx) 
                            + vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem
                            [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                              [1U][1U])]))];
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state;
    }
    vlSelfRef.__PVT__iact_address_out_valid = ((1U 
                                                & (~ (IData)(vlSymsp->TOP.reset))) 
                                               && ((IData)(vlSelfRef.__PVT__addr_SRAM_read_en) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)) 
                                                      & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                                                      [1U]
                                                      [1U])));
    vlSelfRef.__PVT__iact_data_out_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0U] = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[1U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[2U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[3U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[4U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[5U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[6U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[7U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[8U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[9U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xaU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xbU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xcU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xdU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xeU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xfU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x10U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x11U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x12U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x13U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x14U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x15U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x16U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x17U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x18U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x19U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1aU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1bU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1cU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1dU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1eU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1fU] = 0x1ffU;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    }
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem[__VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0U] = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[1U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[2U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[3U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[4U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[5U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[6U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[7U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[8U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[9U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xaU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xbU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xcU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xdU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xeU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xfU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x10U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x11U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x12U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x13U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x14U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x15U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x16U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x17U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x18U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x19U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1aU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1bU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1cU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1dU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1eU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1fU] = 0x7ffU;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[__VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    }
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (2U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__data_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (3U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb)) 
           & (IData)(vlSelfRef.__PVT__iact_address_out_valid));
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg)) 
           & (IData)(vlSelfRef.__PVT__iact_data_out_valid));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
              [1U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
                 [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx64 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_write_en
                      [1U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx64];
    __Vtableidx63 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_en
                      [1U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx63];
}

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__1(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    // Body
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
           [1U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                  [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                [1U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                  [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                [1U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
           [1U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
}

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    CData/*5:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0;
    SData/*9:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*6:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0;
    SData/*10:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    SData/*15:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    // Body
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0U;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0U;
    if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr) {
        __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
               [1U][2U]);
        __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra;
        __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) 
         | (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en))) {
        __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
               [1U][2U]);
        __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = (((~ (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en)) 
                & (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag))
                ? (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx));
        __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 1U;
        __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 1U;
        vlSelfRef.__PVT__iact_write_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_read_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state = 0U;
    } else {
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__addr_SRAM_read_en))))) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__addr_SRAM_read_en) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx)));
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__data_SRAM_read_en))))) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__data_SRAM_read_en) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx)));
        }
        if (vlSelfRef.__PVT__data_SRAM_write_done) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_data_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                    [1U][2U])) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__addr_SRAM_write_done) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_address_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                    [1U][2U])) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_data_in_ready))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_address_in_ready))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 1U;
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 1U;
        }
        vlSelfRef.__PVT__iact_write_state = vlSelfRef.__PVT__next_iact_write_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_read_state = vlSelfRef.__PVT__next_iact_read_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx) 
                        + vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem
                        [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                          [1U][2U])]))];
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem
                [(0x7ffU & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx) 
                            + vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem
                            [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                              [1U][2U])]))];
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state;
    }
    vlSelfRef.__PVT__iact_address_out_valid = ((1U 
                                                & (~ (IData)(vlSymsp->TOP.reset))) 
                                               && ((IData)(vlSelfRef.__PVT__addr_SRAM_read_en) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)) 
                                                      & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                                                      [1U]
                                                      [2U])));
    vlSelfRef.__PVT__iact_data_out_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0U] = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[1U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[2U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[3U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[4U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[5U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[6U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[7U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[8U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[9U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xaU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xbU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xcU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xdU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xeU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xfU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x10U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x11U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x12U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x13U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x14U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x15U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x16U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x17U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x18U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x19U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1aU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1bU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1cU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1dU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1eU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1fU] = 0x1ffU;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    }
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem[__VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0U] = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[1U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[2U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[3U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[4U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[5U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[6U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[7U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[8U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[9U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xaU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xbU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xcU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xdU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xeU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xfU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x10U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x11U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x12U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x13U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x14U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x15U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x16U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x17U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x18U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x19U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1aU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1bU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1cU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1dU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1eU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1fU] = 0x7ffU;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[__VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    }
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (2U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__data_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (3U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb)) 
           & (IData)(vlSelfRef.__PVT__iact_address_out_valid));
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg)) 
           & (IData)(vlSelfRef.__PVT__iact_data_out_valid));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
              [1U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
                 [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx66 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_write_en
                      [1U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx66];
    __Vtableidx65 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_en
                      [1U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx65];
}

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__1(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    // Body
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
           [1U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                  [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                [1U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                  [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                [1U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
           [1U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
}

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*5:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0;
    SData/*9:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*6:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0;
    SData/*10:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    SData/*15:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    // Body
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0U;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0U;
    if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr) {
        __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
               [2U][0U]);
        __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra;
        __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) 
         | (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en))) {
        __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
               [2U][0U]);
        __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = (((~ (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en)) 
                & (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag))
                ? (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx));
        __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 1U;
        __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 1U;
        vlSelfRef.__PVT__iact_write_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_read_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state = 0U;
    } else {
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__addr_SRAM_read_en))))) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__addr_SRAM_read_en) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx)));
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__data_SRAM_read_en))))) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__data_SRAM_read_en) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx)));
        }
        if (vlSelfRef.__PVT__data_SRAM_write_done) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_data_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                    [2U][0U])) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__addr_SRAM_write_done) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_address_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                    [2U][0U])) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_data_in_ready))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_address_in_ready))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 1U;
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 1U;
        }
        vlSelfRef.__PVT__iact_write_state = vlSelfRef.__PVT__next_iact_write_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_read_state = vlSelfRef.__PVT__next_iact_read_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx) 
                        + vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem
                        [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                          [2U][0U])]))];
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem
                [(0x7ffU & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx) 
                            + vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem
                            [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                              [2U][0U])]))];
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state;
    }
    vlSelfRef.__PVT__iact_address_out_valid = ((1U 
                                                & (~ (IData)(vlSymsp->TOP.reset))) 
                                               && ((IData)(vlSelfRef.__PVT__addr_SRAM_read_en) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)) 
                                                      & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                                                      [2U]
                                                      [0U])));
    vlSelfRef.__PVT__iact_data_out_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0U] = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[1U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[2U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[3U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[4U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[5U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[6U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[7U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[8U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[9U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xaU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xbU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xcU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xdU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xeU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xfU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x10U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x11U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x12U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x13U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x14U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x15U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x16U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x17U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x18U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x19U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1aU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1bU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1cU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1dU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1eU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1fU] = 0x1ffU;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    }
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem[__VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0U] = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[1U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[2U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[3U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[4U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[5U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[6U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[7U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[8U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[9U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xaU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xbU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xcU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xdU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xeU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xfU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x10U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x11U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x12U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x13U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x14U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x15U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x16U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x17U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x18U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x19U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1aU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1bU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1cU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1dU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1eU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1fU] = 0x7ffU;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[__VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    }
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (2U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__data_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (3U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb)) 
           & (IData)(vlSelfRef.__PVT__iact_address_out_valid));
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg)) 
           & (IData)(vlSelfRef.__PVT__iact_data_out_valid));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
              [2U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
                 [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx68 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_write_en
                      [2U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx68];
    __Vtableidx67 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_en
                      [2U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx67];
}

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__1(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    // Body
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
           [2U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                  [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                [2U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                  [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                [2U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
           [2U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
}

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx69;
    __Vtableidx69 = 0;
    CData/*5:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0;
    SData/*9:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*6:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0;
    SData/*10:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    SData/*15:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    // Body
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0U;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0U;
    if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr) {
        __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
               [2U][1U]);
        __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra;
        __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) 
         | (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en))) {
        __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
               [2U][1U]);
        __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = (((~ (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en)) 
                & (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag))
                ? (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx));
        __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 1U;
        __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 1U;
        vlSelfRef.__PVT__iact_write_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_read_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state = 0U;
    } else {
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__addr_SRAM_read_en))))) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__addr_SRAM_read_en) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx)));
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__data_SRAM_read_en))))) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__data_SRAM_read_en) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx)));
        }
        if (vlSelfRef.__PVT__data_SRAM_write_done) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_data_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                    [2U][1U])) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__addr_SRAM_write_done) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_address_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                    [2U][1U])) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_data_in_ready))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_address_in_ready))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 1U;
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 1U;
        }
        vlSelfRef.__PVT__iact_write_state = vlSelfRef.__PVT__next_iact_write_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_read_state = vlSelfRef.__PVT__next_iact_read_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx) 
                        + vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem
                        [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                          [2U][1U])]))];
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem
                [(0x7ffU & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx) 
                            + vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem
                            [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                              [2U][1U])]))];
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state;
    }
    vlSelfRef.__PVT__iact_address_out_valid = ((1U 
                                                & (~ (IData)(vlSymsp->TOP.reset))) 
                                               && ((IData)(vlSelfRef.__PVT__addr_SRAM_read_en) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)) 
                                                      & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                                                      [2U]
                                                      [1U])));
    vlSelfRef.__PVT__iact_data_out_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0U] = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[1U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[2U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[3U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[4U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[5U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[6U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[7U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[8U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[9U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xaU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xbU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xcU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xdU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xeU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xfU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x10U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x11U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x12U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x13U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x14U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x15U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x16U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x17U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x18U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x19U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1aU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1bU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1cU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1dU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1eU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1fU] = 0x1ffU;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    }
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem[__VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0U] = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[1U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[2U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[3U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[4U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[5U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[6U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[7U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[8U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[9U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xaU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xbU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xcU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xdU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xeU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xfU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x10U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x11U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x12U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x13U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x14U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x15U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x16U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x17U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x18U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x19U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1aU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1bU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1cU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1dU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1eU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1fU] = 0x7ffU;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[__VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    }
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (2U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__data_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (3U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb)) 
           & (IData)(vlSelfRef.__PVT__iact_address_out_valid));
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg)) 
           & (IData)(vlSelfRef.__PVT__iact_data_out_valid));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
              [2U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
                 [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx70 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_write_en
                      [2U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx70];
    __Vtableidx69 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_en
                      [2U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx69];
}

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__1(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    // Body
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
           [2U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                  [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                [2U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                  [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                [2U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
           [2U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
}

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    CData/*5:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*9:0*/ __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0;
    SData/*10:0*/ __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0;
    CData/*1:0*/ __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0;
    SData/*9:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0;
    CData/*6:0*/ __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0;
    SData/*10:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*4:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0;
    SData/*15:0*/ __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0;
    // Body
    __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx;
    __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx;
    __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 0U;
    __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx;
    __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 0U;
    __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 0U;
    __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 0U;
    if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr) {
        __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
               [2U][2U]);
        __VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra;
        __VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) 
         | (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en))) {
        __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag)
                ? 0U : vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
               [2U][2U]);
        __VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 
            = (((~ (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en)) 
                & (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag))
                ? (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)
                : (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx));
        __VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count = 0U;
        __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0 = 1U;
        __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0 = 1U;
        vlSelfRef.__PVT__iact_write_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state = 0U;
        vlSelfRef.__PVT__iact_read_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 1U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state = 0U;
    } else {
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__addr_SRAM_read_en))))) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__addr_SRAM_read_en) {
            __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx)));
        }
        if ((1U & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                   | (~ (IData)(vlSelfRef.__PVT__data_SRAM_read_en))))) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx = 0U;
        } else if (vlSelfRef.__PVT__data_SRAM_read_en) {
            __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx)));
        }
        if (vlSelfRef.__PVT__data_SRAM_write_done) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_data_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                    [2U][2U])) {
            __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__addr_SRAM_write_done) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx = 0U;
        } else if (((IData)(vlSelfRef.__PVT__iact_address_in_ready) 
                    & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                    [2U][2U])) {
            __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
        }
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if (vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) {
            __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_data_in_ready))) {
            __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx = 0U;
        } else if (((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                    & (IData)(vlSelfRef.__PVT__iact_address_in_ready))) {
            __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32 = 1U;
        }
        if ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))) {
            __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
            __VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx)));
            __VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32 = 1U;
        }
        vlSelfRef.__PVT__iact_write_state = vlSelfRef.__PVT__next_iact_write_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state;
        vlSelfRef.__PVT__iact_read_state = vlSelfRef.__PVT__next_iact_read_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx) 
                        + vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem
                        [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                          [2U][2U])]))];
        if (vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg 
                = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem
                [(0x7ffU & ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx) 
                            + vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem
                            [(0x1fU & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_addr
                              [2U][2U])]))];
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        if ((3U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count))) {
            vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag = 0U;
        }
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state 
            = vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state;
    }
    vlSelfRef.__PVT__iact_address_out_valid = ((1U 
                                                & (~ (IData)(vlSymsp->TOP.reset))) 
                                               && ((IData)(vlSelfRef.__PVT__addr_SRAM_read_en) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)) 
                                                      & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                                                      [2U]
                                                      [2U])));
    vlSelfRef.__PVT__iact_data_out_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                            && (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__LUT_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__LUT_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__SRAM_write_idx;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_addr_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v0) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0U] = 0U;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[1U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[2U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[3U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[4U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[5U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[6U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[7U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[8U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[9U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xaU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xbU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xcU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xdU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xeU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0xfU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x10U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x11U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x12U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x13U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x14U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x15U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x16U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x17U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x18U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x19U] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1aU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1bU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1cU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1dU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1eU] = 0x1ffU;
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[0x1fU] = 0x1ffU;
    }
    if (__VdlySet__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32) {
        vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem[__VdlyDim0__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32] 
            = __VdlyVal__iact_addr_SRAM_inst__DOT__Addr_LUT_Mem__v32;
    }
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__stream_read_idx 
        = __Vdly__iact_data_SRAM_inst__DOT__stream_read_idx;
    if (__VdlySet__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem[__VdlyDim0__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__mem__v0;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v0) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0U] = 0U;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[1U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[2U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[3U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[4U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[5U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[6U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[7U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[8U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[9U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xaU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xbU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xcU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xdU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xeU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0xfU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x10U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x11U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x12U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x13U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x14U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x15U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x16U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x17U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x18U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x19U] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1aU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1bU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1cU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1dU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1eU] = 0x7ffU;
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[0x1fU] = 0x7ffU;
    }
    if (__VdlySet__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32) {
        vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__addr_LUT_mem[__VdlyDim0__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32] 
            = __VdlyVal__iact_data_SRAM_inst__DOT__addr_LUT_mem__v32;
    }
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (2U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__data_SRAM_read_en = ((1U == (IData)(vlSelfRef.__PVT__iact_read_state)) 
                                          | (3U == (IData)(vlSelfRef.__PVT__iact_read_state)));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb)) 
           & (IData)(vlSelfRef.__PVT__iact_address_out_valid));
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg)) 
           & (IData)(vlSelfRef.__PVT__iact_data_out_valid));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count 
        = __Vdly__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count;
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
              [2U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
                 [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx72 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_write_en
                      [2U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx72];
    __Vtableidx71 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_en
                      [2U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx71];
}

VL_INLINE_OPT void VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__1(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    // Body
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
           [2U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                  [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                [2U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                  [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                [2U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
           [2U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
}
