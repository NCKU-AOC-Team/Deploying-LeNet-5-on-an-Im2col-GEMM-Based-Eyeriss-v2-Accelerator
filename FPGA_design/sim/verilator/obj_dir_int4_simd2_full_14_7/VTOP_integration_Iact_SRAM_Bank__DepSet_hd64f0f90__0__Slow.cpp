// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_Iact_SRAM_Bank.h"
#include "VTOP_integration__Syms.h"

extern const VlUnpacked<CData/*1:0*/, 64> VTOP_integration__ConstPool__TABLE_h6ef61c90_0;

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
           [0U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                  [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                [0U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                  [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                [0U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
           [0U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_address_in_ready
                 [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
              [0U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
                 [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx2 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_write_en
                     [0U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx2];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx1 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_read_en
                     [0U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx1];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
           [0U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                  [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                [0U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                  [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                [0U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
           [0U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_address_in_ready
                 [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
              [0U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
                 [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx4 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_write_en
                     [0U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx4];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx3 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_read_en
                     [0U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx3];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
           [0U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                  [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                [0U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                  [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                [0U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
           [0U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_address_in_ready
                 [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
              [0U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
                 [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx6 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_write_en
                     [0U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx6];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx5 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_read_en
                     [0U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx5];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
           [1U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                  [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                [1U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                  [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                [1U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
           [1U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_address_in_ready
                 [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
              [1U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
                 [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx8 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_write_en
                     [1U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx8];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx7 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_read_en
                     [1U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx7];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*5:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
           [1U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                  [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                [1U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                  [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                [1U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
           [1U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_address_in_ready
                 [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
              [1U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
                 [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx10 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_write_en
                      [1U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx10];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx9 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_read_en
                     [1U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                                       << 2U) 
                                                      | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx9];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*5:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
           [1U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                  [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                [1U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                  [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                [1U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
           [1U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_address_in_ready
                 [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
              [1U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
                 [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx12 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_write_en
                      [1U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx12];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx11 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_read_en
                      [1U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx11];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*5:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
           [2U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                  [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                [2U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                  [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                [2U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
           [2U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_address_in_ready
                 [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
              [2U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
                 [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx14 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_write_en
                      [2U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx14];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx13 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_read_en
                      [2U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx13];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*5:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
           [2U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                  [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                [2U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                  [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                [2U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
           [2U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_address_in_ready
                 [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
              [2U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
                 [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx16 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_write_en
                      [2U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx16];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx15 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_read_en
                      [2U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx15];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*5:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
           [2U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                  [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                [2U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                  [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                [2U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_address_in_valid
           [2U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_address_in_ready
                 [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
              [2U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_GLB_data_in_ready
                 [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx18 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_write_en
                      [2U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx18];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx17 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__GLBCluster_iact_read_en
                      [2U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx17];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*5:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
           [0U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                  [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                [0U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                  [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                [0U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
           [0U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_address_in_ready
                 [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
              [0U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
                 [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx20 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_write_en
                      [0U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx20];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx19 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_read_en
                      [0U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx19];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*5:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
           [0U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                  [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                [0U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                  [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                [0U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
           [0U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_address_in_ready
                 [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
              [0U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
                 [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx22 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_write_en
                      [0U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx22];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx21 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_read_en
                      [0U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx21];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    CData/*5:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
           [0U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                  [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                [0U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                  [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                [0U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
           [0U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_address_in_ready
                 [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
              [0U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
                 [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx24 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_write_en
                      [0U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx24];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx23 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_read_en
                      [0U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx23];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*5:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
           [1U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                  [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                [1U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                  [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                [1U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
           [1U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_address_in_ready
                 [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
              [1U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
                 [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx26 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_write_en
                      [1U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx26];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx25 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_read_en
                      [1U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx25];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*5:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
           [1U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                  [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                [1U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                  [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                [1U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
           [1U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_address_in_ready
                 [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
              [1U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
                 [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx28 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_write_en
                      [1U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx28];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx27 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_read_en
                      [1U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx27];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*5:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
           [1U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                  [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                [1U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                  [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                [1U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
           [1U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_address_in_ready
                 [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
              [1U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
                 [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx30 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_write_en
                      [1U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx30];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx29 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_read_en
                      [1U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx29];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    CData/*5:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
           [2U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                  [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                [2U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                  [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                [2U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
           [2U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_address_in_ready
                 [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
              [2U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
                 [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx32 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_write_en
                      [2U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx32];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx31 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_read_en
                      [2U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx31];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*5:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
           [2U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                  [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                [2U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                  [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                [2U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
           [2U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_address_in_ready
                 [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
              [2U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
                 [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx34 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_write_en
                      [2U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx34];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx33 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_read_en
                      [2U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx33];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    CData/*5:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
           [2U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                  [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                [2U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                  [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                [2U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_address_in_valid
           [2U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_address_in_ready
                 [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
              [2U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_GLB_data_in_ready
                 [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx36 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_write_en
                      [2U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx36];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx35 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__GLBCluster_iact_read_en
                      [2U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx35];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*5:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
           [0U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                  [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                [0U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                  [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                [0U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
           [0U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_address_in_ready
                 [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
              [0U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
                 [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx38 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_write_en
                      [0U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx38];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx37 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_read_en
                      [0U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx37];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*5:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
           [0U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                  [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                [0U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                  [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                [0U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
           [0U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_address_in_ready
                 [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
              [0U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
                 [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx40 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_write_en
                      [0U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx40];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx39 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_read_en
                      [0U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx39];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    CData/*5:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
           [0U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                  [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                [0U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                  [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                [0U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
           [0U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_address_in_ready
                 [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
              [0U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
                 [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx42 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_write_en
                      [0U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx42];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx41 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_read_en
                      [0U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx41];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    CData/*5:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
           [1U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                  [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                [1U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                  [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                [1U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
           [1U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_address_in_ready
                 [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
              [1U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
                 [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx44 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_write_en
                      [1U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx44];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx43 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_read_en
                      [1U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx43];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    CData/*5:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
           [1U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                  [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                [1U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                  [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                [1U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
           [1U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_address_in_ready
                 [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
              [1U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
                 [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx46 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_write_en
                      [1U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx46];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx45 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_read_en
                      [1U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx45];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    CData/*5:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
           [1U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                  [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                [1U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                                               [1U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                                             [1U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                  [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                [1U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                                               [1U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                                             [1U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
           [1U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_address_in_ready
                 [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
              [1U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
                 [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx48 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_write_en
                      [1U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx48];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx47 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_read_en
                      [1U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx47];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    CData/*5:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
           [2U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                  [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                [2U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                  [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                [2U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
           [2U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_address_in_ready
                 [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
              [2U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
                 [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx50 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_write_en
                      [2U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx50];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx49 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_read_en
                      [2U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx49];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    CData/*5:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
           [2U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                  [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                [2U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                  [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                [2U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
           [2U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_address_in_ready
                 [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
              [2U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
                 [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx52 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_write_en
                      [2U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx52];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx51 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_read_en
                      [2U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx51];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    CData/*5:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
           [2U][2U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                  [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                [2U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in
                                               [2U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_data_in_valid
                                             [2U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                  [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                [2U][2U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in
                                               [2U]
                                               [2U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
                                             [2U][2U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_address_in_valid
           [2U][2U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_address_in_ready
                 [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
              [2U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_GLB_data_in_ready
                 [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx54 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_write_en
                      [2U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx54];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx53 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__GLBCluster_iact_read_en
                      [2U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx53];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    CData/*5:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
           [0U][0U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                  [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                [0U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                  [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                [0U][0U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [0U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][0U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
           [0U][0U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
              [0U][0U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
                 [0U][0U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx56 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_write_en
                      [0U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx56];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx55 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_en
                      [0U][0U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx55];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*5:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
           [0U][1U] & (IData)(vlSelfRef.__PVT__iact_data_in_ready));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                  [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                [0U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in
                                               [0U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_data_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_data_in_valid
                                             [0U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_write_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
            ? ((((0U == vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                  [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                [0U][1U]) ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state))
                                         ? ((((0U == 
                                               vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in
                                               [0U]
                                               [1U]) 
                                              & (IData)(vlSelfRef.__PVT__iact_address_in_ready)) 
                                             & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
                                             [0U][1U])
                                             ? 2U : 0U)
                                         : 0U));
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en 
        = (vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_address_in_valid
           [0U][1U] & (IData)(vlSelfRef.__PVT__iact_address_in_ready));
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
              [0U][1U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
                 [0U][1U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx58 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_write_en
                      [0U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx58];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx57 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_en
                      [0U][1U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx57];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*5:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_shake 
        = ((IData)(vlSelfRef.__PVT__data_SRAM_read_en) 
           & ((~ (IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)) 
              & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
              [0U][2U]));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_data_in_ready
                 [0U][2U]) & (IData)(vlSelfRef.__PVT__iact_data_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    __Vtableidx60 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_write_en
                      [0U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__write_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_write_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_write_state)))));
    vlSelfRef.__PVT__next_iact_write_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx60];
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
    __Vtableidx59 = ((vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__GLBCluster_iact_read_en
                      [0U][2U] << 5U) | (((IData)(vlSelfRef.__PVT__read_done_both) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.__PVT__data_SRAM_read_done) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.__PVT__iact_read_state)))));
    vlSelfRef.__PVT__next_iact_read_state = VTOP_integration__ConstPool__TABLE_h6ef61c90_0
        [__Vtableidx59];
}

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*5:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [1U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
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
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
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

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    CData/*5:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [1U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
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
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
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

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    CData/*5:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [1U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
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
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
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

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*5:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [2U][0U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
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
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
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

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx69;
    __Vtableidx69 = 0;
    CData/*5:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [2U][1U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
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
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
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

VL_ATTR_COLD void VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0(VTOP_integration_Iact_SRAM_Bank* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VTOP_integration_Iact_SRAM_Bank___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en;
    __PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en = 0;
    CData/*0:0*/ __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read;
    __PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read = 0;
    CData/*5:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    CData/*5:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    // Body
    vlSelfRef.__PVT__iact_data_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                           | (3U == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__iact_address_in_ready = ((1U == (IData)(vlSelfRef.__PVT__iact_write_state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.__PVT__iact_write_state)));
    vlSelfRef.__PVT__addr_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
    vlSelfRef.__PVT__data_SRAM_write_done = ((2U == (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__write_zero_state)) 
                                             & (0U 
                                                != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__write_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_write_done) 
                                        & (IData)(vlSelfRef.__PVT__data_SRAM_write_done));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__addr_SRAM_read_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__next_read_zero_state 
        = ((0U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
            ? ((((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read) 
                 & vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_GLB_address_in_ready
                 [2U][2U]) & (IData)(vlSelfRef.__PVT__iact_address_out_valid))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state))
                               ? ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__meet_zero_wire_read)
                                   ? 2U : 0U) : 0U));
    vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire 
        = ((IData)(__PVT__iact_data_SRAM_inst__DOT__meet_zero_wire_read) 
           & (IData)(vlSelfRef.__PVT__data_SRAM_read_en));
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
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__wr 
        = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag) 
           | (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en));
    vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__addra 
        = (0x1ffU & (((~ (IData)(__PVT__iact_addr_SRAM_inst__DOT__IP_BRAM_write_en)) 
                      & (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_flag))
                      ? (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__clear_count)
                      : (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__SRAM_write_idx)));
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
    vlSelfRef.__PVT__addr_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_addr_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__data_SRAM_read_done = ((IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_done_wire) 
                                            & (1U != (IData)(vlSelfRef.__PVT__iact_data_SRAM_inst__DOT__read_zero_state)));
    vlSelfRef.__PVT__read_done_both = ((IData)(vlSelfRef.__PVT__addr_SRAM_read_done) 
                                       & (IData)(vlSelfRef.__PVT__data_SRAM_read_done));
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
