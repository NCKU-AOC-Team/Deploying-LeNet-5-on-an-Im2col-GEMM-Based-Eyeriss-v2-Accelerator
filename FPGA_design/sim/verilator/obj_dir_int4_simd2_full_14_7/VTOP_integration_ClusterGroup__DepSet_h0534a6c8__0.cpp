// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_ClusterGroup.h"
#include "VTOP_integration_ProcessingElement.h"
#include "VTOP_integration__Syms.h"

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PECluster_psum_in_ready[0U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][0U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[1U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][1U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[2U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][2U]);
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][2U];
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [0U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_0_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [1U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_1_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [2U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_2_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 0;
    CData/*0:0*/ PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid = 0;
    CData/*4:0*/ __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count = 0;
    CData/*4:0*/ __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count = 0;
    CData/*4:0*/ __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8 = 0;
    IData/*20:0*/ __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    // Body
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count 
        = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count 
        = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count 
        = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count;
    if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_shake) {
        __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__PECluster_psum_out[0U];
        __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = (0x1ffU & vlSelfRef.GLB_psum_write_addr
               [0U]);
        __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_shake) {
        __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__PECluster_psum_out[1U];
        __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = (0x1ffU & vlSelfRef.GLB_psum_write_addr
               [1U]);
        __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_shake) {
        __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__PECluster_psum_out[2U];
        __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = (0x1ffU & vlSelfRef.GLB_psum_write_addr
               [2U]);
        __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [2U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [0U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [0U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [0U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [1U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [1U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [1U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [2U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [2U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [2U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [0U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [0U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [0U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [1U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [1U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [1U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [2U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [2U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin))) 
            && ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_done) 
                | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin))) 
            && ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_done) 
                | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin))) 
            && ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_done) 
                | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg))));
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [0U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [0U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [0U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [0U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [0U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [0U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [1U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [1U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [1U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [1U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [1U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [1U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [2U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [2U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [2U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    vlSelfRef.__PVT__all_cal_fin_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                        && ((0U != (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
                                            && ((IData)(vlSelfRef.__PVT__all_cal_fin_reg) 
                                                | (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin))));
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [0U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [0U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [0U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [0U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [0U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [0U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [1U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [1U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [1U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [1U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [1U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [1U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [2U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [2U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [2U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_ready) 
            & ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_read_en) 
               | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_0_read_out_en))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_ready) 
            & ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_read_en) 
               | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_1_read_out_en))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_ready) 
            & ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_read_en) 
               | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_2_read_out_en))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__CG_0_0_psum_acc_en) 
            & (3U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_cg_en) 
            & (0U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))));
    if (vlSymsp->TOP.reset) {
        __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count = 0U;
        __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count = 0U;
        __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count = 0U;
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state = 0U;
    } else {
        if (vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_done) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count = 0U;
        } else if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_shake) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count)));
        }
        if (vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_done) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count = 0U;
        } else if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_shake) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count)));
        }
        if (vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_done) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count = 0U;
        } else if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_shake) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count)));
        }
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & vlSelfRef.GLB_psum_read_addr
              [0U])];
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & vlSelfRef.GLB_psum_read_addr
              [1U])];
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & vlSelfRef.GLB_psum_read_addr
              [2U])];
        vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state 
            = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__next_CG_state;
    }
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count 
        = __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count;
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count 
        = __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count;
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count 
        = __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[0U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[0U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[0U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[1U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[1U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[1U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[2U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[2U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[2U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[0U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[0U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[0U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[1U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[1U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[1U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[2U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[2U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[2U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8;
    if (__VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin 
        = ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_write_fin_reg) 
           & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_write_fin_reg) 
              & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_write_fin_reg) 
                 & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_write_fin_reg) 
                    & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_write_fin_reg) 
                       & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_write_fin_reg) 
                          & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_write_fin_reg) 
                             & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_write_fin_reg) 
                                & (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_write_fin_reg)))))))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin 
        = ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg) 
           & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg) 
              & (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg)));
    vlSelfRef.__PVT__PECluster_all_write_fin = ((((
                                                   ((((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                       [0U]
                                                       [0U] 
                                                       & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                       [0U]
                                                       [1U]) 
                                                      & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                      [0U]
                                                      [2U]) 
                                                     & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                     [1U]
                                                     [0U]) 
                                                    & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                    [1U]
                                                    [1U]) 
                                                   & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                   [1U]
                                                   [2U]) 
                                                  & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                  [2U]
                                                  [0U]) 
                                                 & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                 [2U]
                                                 [1U]) 
                                                & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [2U]);
    vlSelfRef.__PVT__PECluster_all_cal_fin = ((((((
                                                   ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                     [0U]
                                                     [0U] 
                                                     & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                     [0U]
                                                     [1U]) 
                                                    & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                    [0U]
                                                    [2U]) 
                                                   & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                   [1U]
                                                   [0U]) 
                                                  & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                  [1U]
                                                  [1U]) 
                                                 & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                 [1U]
                                                 [2U]) 
                                                & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [0U]) 
                                               & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                               [2U]
                                               [1U]) 
                                              & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                              [2U][2U]);
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[0U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[0U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[0U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[1U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[1U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[1U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[2U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[2U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[2U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[0U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[0U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[0U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[1U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[1U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[1U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[2U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[2U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[2U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_read_en[0U][1U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[0U][0U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[0U][2U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[1U][1U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[1U][0U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[1U][2U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[2U][1U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[2U][0U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[2U][2U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en = 
        ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg)) 
         & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en = 
        ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg)) 
         & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en = 
        ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg)) 
         & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid 
        = ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_valid) 
           & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid 
        = ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_valid) 
           & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid 
        = ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_valid) 
           & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[0U][0U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [0U][0U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[0U][1U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [0U][1U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[0U][2U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [0U][2U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[1U][0U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [1U][0U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[1U][1U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [1U][1U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[1U][2U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [1U][2U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[2U][0U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [2U][0U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[2U][1U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [2U][1U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[2U][2U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [2U][2U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[0U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[1U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[2U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__1(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][2U];
    vlSelfRef.__PVT__PECluster_psum_in_ready[0U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][0U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[1U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][1U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[2U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][2U]);
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [0U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_0_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [1U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_1_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [2U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_2_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PECluster_psum_in_ready[0U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][0U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[1U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][1U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[2U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][2U]);
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][2U];
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [0U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_0_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [1U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_1_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [2U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_2_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 0;
    CData/*0:0*/ PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid = 0;
    CData/*4:0*/ __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count = 0;
    CData/*4:0*/ __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count = 0;
    CData/*4:0*/ __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8 = 0;
    IData/*20:0*/ __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    // Body
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count 
        = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count 
        = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count 
        = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count;
    if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_shake) {
        __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__PECluster_psum_out[0U];
        __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = (0x1ffU & vlSelfRef.GLB_psum_write_addr
               [0U]);
        __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_shake) {
        __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__PECluster_psum_out[1U];
        __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = (0x1ffU & vlSelfRef.GLB_psum_write_addr
               [1U]);
        __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_shake) {
        __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__PECluster_psum_out[2U];
        __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = (0x1ffU & vlSelfRef.GLB_psum_write_addr
               [2U]);
        __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [2U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [0U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [0U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [0U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [1U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [1U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [1U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [2U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [2U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [2U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [0U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [0U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [0U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [1U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [1U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [1U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [2U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [2U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin))) 
            && ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_done) 
                | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin))) 
            && ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_done) 
                | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin))) 
            && ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_done) 
                | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg))));
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [0U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [0U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [0U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [0U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [0U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [0U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [1U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [1U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [1U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [1U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [1U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [1U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [2U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [2U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [2U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    vlSelfRef.__PVT__all_cal_fin_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                        && ((0U != (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
                                            && ((IData)(vlSelfRef.__PVT__all_cal_fin_reg) 
                                                | (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin))));
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [0U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [0U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [0U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [0U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [0U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [0U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [1U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [1U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [1U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [1U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [1U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [1U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [2U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [2U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [2U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_ready) 
            & ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_read_en) 
               | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_0_read_out_en))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_ready) 
            & ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_read_en) 
               | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_1_read_out_en))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_ready) 
            & ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_read_en) 
               | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_2_read_out_en))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__CG_0_0_psum_acc_en) 
            & (3U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_cg_en) 
            & (0U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))));
    if (vlSymsp->TOP.reset) {
        __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count = 0U;
        __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count = 0U;
        __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count = 0U;
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state = 0U;
    } else {
        if (vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_done) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count = 0U;
        } else if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_shake) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count)));
        }
        if (vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_done) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count = 0U;
        } else if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_shake) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count)));
        }
        if (vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_done) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count = 0U;
        } else if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_shake) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count)));
        }
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & vlSelfRef.GLB_psum_read_addr
              [0U])];
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & vlSelfRef.GLB_psum_read_addr
              [1U])];
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & vlSelfRef.GLB_psum_read_addr
              [2U])];
        vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state 
            = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__next_CG_state;
    }
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count 
        = __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count;
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count 
        = __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count;
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count 
        = __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[0U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[0U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[0U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[1U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[1U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[1U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[2U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[2U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[2U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[0U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[0U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[0U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[1U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[1U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[1U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[2U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[2U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[2U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8;
    if (__VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin 
        = ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_write_fin_reg) 
           & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_write_fin_reg) 
              & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_write_fin_reg) 
                 & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_write_fin_reg) 
                    & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_write_fin_reg) 
                       & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_write_fin_reg) 
                          & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_write_fin_reg) 
                             & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_write_fin_reg) 
                                & (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_write_fin_reg)))))))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin 
        = ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg) 
           & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg) 
              & (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg)));
    vlSelfRef.__PVT__PECluster_all_write_fin = ((((
                                                   ((((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                       [0U]
                                                       [0U] 
                                                       & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                       [0U]
                                                       [1U]) 
                                                      & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                      [0U]
                                                      [2U]) 
                                                     & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                     [1U]
                                                     [0U]) 
                                                    & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                    [1U]
                                                    [1U]) 
                                                   & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                   [1U]
                                                   [2U]) 
                                                  & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                  [2U]
                                                  [0U]) 
                                                 & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                 [2U]
                                                 [1U]) 
                                                & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [2U]);
    vlSelfRef.__PVT__PECluster_all_cal_fin = ((((((
                                                   ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                     [0U]
                                                     [0U] 
                                                     & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                     [0U]
                                                     [1U]) 
                                                    & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                    [0U]
                                                    [2U]) 
                                                   & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                   [1U]
                                                   [0U]) 
                                                  & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                  [1U]
                                                  [1U]) 
                                                 & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                 [1U]
                                                 [2U]) 
                                                & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [0U]) 
                                               & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                               [2U]
                                               [1U]) 
                                              & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                              [2U][2U]);
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[0U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[0U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[0U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[1U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[1U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[1U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[2U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[2U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[2U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[0U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[0U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[0U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[1U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[1U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[1U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[2U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[2U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[2U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_read_en[0U][1U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[0U][0U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[0U][2U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[1U][1U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[1U][0U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[1U][2U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[2U][1U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[2U][0U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[2U][2U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en = 
        ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg)) 
         & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en = 
        ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg)) 
         & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en = 
        ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg)) 
         & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid 
        = ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_valid) 
           & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid 
        = ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_valid) 
           & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid 
        = ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_valid) 
           & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[0U][0U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [0U][0U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[0U][1U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [0U][1U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[0U][2U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [0U][2U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[1U][0U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [1U][0U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[1U][1U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [1U][1U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[1U][2U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [1U][2U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[2U][0U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [2U][0U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[2U][1U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [2U][1U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[2U][2U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [2U][2U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[0U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[1U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[2U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__1(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][2U];
    vlSelfRef.__PVT__PECluster_psum_in_ready[0U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][0U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[1U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][1U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[2U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][2U]);
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [0U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_0_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [1U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_1_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [2U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_2_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PECluster_psum_in_ready[0U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][0U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[1U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][1U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[2U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][2U]);
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][2U];
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [0U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_psum_SRAM_Bank_0_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [1U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_psum_SRAM_Bank_0_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [2U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_psum_SRAM_Bank_0_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__1(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_out_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_out_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_out_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_out_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_out_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_out_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_out_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_out_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_out_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[0U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[1U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid
        [2U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[0U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[1U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid
        [2U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[0U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid
        [1U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[1U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid
        [2U][2U];
    vlSelfRef.__PVT__PECluster_psum_out_valid[0U] = 
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid
        [0U][0U];
    vlSelfRef.__PVT__PECluster_psum_out_valid[1U] = 
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid
        [0U][1U];
    vlSelfRef.__PVT__PECluster_psum_out_valid[2U] = 
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid
        [0U][2U];
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_shake 
        = (vlSelfRef.__PVT__PECluster_psum_out_valid
           [0U] & (IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready));
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_shake 
        = (vlSelfRef.__PVT__PECluster_psum_out_valid
           [1U] & (IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready));
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_shake 
        = (vlSelfRef.__PVT__PECluster_psum_out_valid
           [2U] & (IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready));
    vlSelfRef.GLB_psum_0_data_out = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_shake)
                                      ? 0U : vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb);
    vlSelfRef.GLB_psum_1_data_out = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_shake)
                                      ? 0U : vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb);
    vlSelfRef.GLB_psum_2_data_out = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_shake)
                                      ? 0U : vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb);
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_d_ext[0U] 
        = vlSelfRef.GLB_psum_0_data_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_d_ext[1U] 
        = vlSelfRef.GLB_psum_1_data_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_d_ext[2U] 
        = vlSelfRef.GLB_psum_2_data_out;
    if ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count))) {
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[2U][0U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_d_ext
            [0U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[2U][1U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_d_ext
            [1U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[2U][2U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_d_ext
            [2U];
    } else {
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[2U][0U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d
            [0U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[2U][1U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d
            [1U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[2U][2U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d
            [2U];
    }
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 0;
    CData/*0:0*/ PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid = 0;
    CData/*4:0*/ __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count = 0;
    CData/*4:0*/ __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count = 0;
    CData/*4:0*/ __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8;
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7 = 0;
    CData/*0:0*/ __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8;
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8 = 0;
    IData/*20:0*/ __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    IData/*20:0*/ __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0;
    // Body
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 0U;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count 
        = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count 
        = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count;
    __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count 
        = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count;
    if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_shake) {
        __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__PECluster_psum_out[0U];
        __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = (0x1ffU & vlSelfRef.GLB_psum_write_addr
               [0U]);
        __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_shake) {
        __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__PECluster_psum_out[1U];
        __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = (0x1ffU & vlSelfRef.GLB_psum_write_addr
               [1U]);
        __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_shake) {
        __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = vlSelfRef.__PVT__PECluster_psum_out[2U];
        __VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 
            = (0x1ffU & vlSelfRef.GLB_psum_write_addr
               [2U]);
        __VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0 = 1U;
    }
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [2U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [0U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [0U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [0U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [1U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [1U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [1U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [2U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_write_done
                [2U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [2U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [0U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [0U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [0U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [1U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [1U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [1U][2U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [2U][0U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_read_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__PECluster_all_write_fin))) 
            && (vlSelfRef.__PVT__GLBCluster_iact_read_done
                [2U][1U] | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_read_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin))) 
            && ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_done) 
                | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin))) 
            && ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_done) 
                | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((1U & (~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin))) 
            && ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_done) 
                | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg))));
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [0U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [0U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [0U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [0U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [0U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [0U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [1U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [1U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [1U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [1U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [1U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [1U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [2U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [2U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin
                                                [2U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8 
        = PE_Cluster_inst__DOT____Vlvbound_hddcdf0d5__0;
    vlSelfRef.__PVT__all_cal_fin_reg = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                        && ((0U != (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
                                            && ((IData)(vlSelfRef.__PVT__all_cal_fin_reg) 
                                                | (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin))));
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [0U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [0U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [0U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [0U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [0U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [0U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [0U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [1U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [1U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [1U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [1U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [1U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [1U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [1U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [2U]
                                                [0U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [0U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [0U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [2U]
                                                [1U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [1U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [1U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0 = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSelfRef.__PVT__PECluster_all_cal_fin)) 
                                            & ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin
                                                [2U]
                                                [2U] 
                                                | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [2U]) 
                                               | vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable
                                               [2U]
                                               [2U])));
    __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8 
        = PE_Cluster_inst__DOT____Vlvbound_h3c7480aa__0;
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_ready) 
            & ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_read_en) 
               | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_psum_SRAM_Bank_0_read_out_en))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_ready) 
            & ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_read_en) 
               | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_psum_SRAM_Bank_0_read_out_en))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_valid 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_ready) 
            & ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_read_en) 
               | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_psum_SRAM_Bank_0_read_out_en))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__CG_0_0_psum_acc_en) 
            & (3U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_cg_en) 
            & (0U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))));
    if (vlSymsp->TOP.reset) {
        __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count = 0U;
        __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count = 0U;
        __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count = 0U;
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = 0U;
        vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state = 0U;
    } else {
        if (vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_done) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count = 0U;
        } else if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_shake) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count)));
        }
        if (vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_done) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count = 0U;
        } else if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_shake) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count)));
        }
        if (vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_done) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count = 0U;
        } else if (vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_shake) {
            __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count)));
        }
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & vlSelfRef.GLB_psum_read_addr
              [0U])];
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & vlSelfRef.GLB_psum_read_addr
              [1U])];
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb 
            = vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem
            [(0x1ffU & vlSelfRef.GLB_psum_read_addr
              [2U])];
        vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state 
            = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__next_CG_state;
    }
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count 
        = __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count;
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count 
        = __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count;
    vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count 
        = __Vdly__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[0U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v0;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[0U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v1;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[0U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v2;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[1U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v3;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[1U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v4;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[1U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v5;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[2U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v6;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[2U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v7;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[2U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_write_fin_reg__v8;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[0U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v0;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[0U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v1;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[0U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v2;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[1U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v3;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[1U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v4;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[1U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v5;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[2U][0U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v6;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[2U][1U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v7;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[2U][2U] 
        = __VdlyVal__PE_Cluster_inst__DOT__pe_cal_fin_reg__v8;
    if (__VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    if (__VdlySet__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0) {
        vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__VdlyDim0__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0] 
            = __VdlyVal__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem__v0;
    }
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin 
        = ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_write_fin_reg) 
           & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_write_fin_reg) 
              & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_write_fin_reg) 
                 & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_write_fin_reg) 
                    & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_write_fin_reg) 
                       & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_write_fin_reg) 
                          & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_write_fin_reg) 
                             & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_write_fin_reg) 
                                & (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_write_fin_reg)))))))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin 
        = ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg) 
           & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg) 
              & (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg)));
    vlSelfRef.__PVT__PECluster_all_write_fin = ((((
                                                   ((((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                       [0U]
                                                       [0U] 
                                                       & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                       [0U]
                                                       [1U]) 
                                                      & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                      [0U]
                                                      [2U]) 
                                                     & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                     [1U]
                                                     [0U]) 
                                                    & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                    [1U]
                                                    [1U]) 
                                                   & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                   [1U]
                                                   [2U]) 
                                                  & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                  [2U]
                                                  [0U]) 
                                                 & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                 [2U]
                                                 [1U]) 
                                                & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg
                                                [2U]
                                                [2U]);
    vlSelfRef.__PVT__PECluster_all_cal_fin = ((((((
                                                   ((vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                     [0U]
                                                     [0U] 
                                                     & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                     [0U]
                                                     [1U]) 
                                                    & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                    [0U]
                                                    [2U]) 
                                                   & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                   [1U]
                                                   [0U]) 
                                                  & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                  [1U]
                                                  [1U]) 
                                                 & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                 [1U]
                                                 [2U]) 
                                                & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                                [2U]
                                                [0U]) 
                                               & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                               [2U]
                                               [1U]) 
                                              & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
                                              [2U][2U]);
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[0U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[0U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[0U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[1U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[1U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[1U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[2U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[2U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[2U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[0U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[0U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[0U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[1U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[1U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[1U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[2U][0U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[2U][1U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_write_en[2U][2U] 
        = vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg;
    vlSelfRef.__PVT__GLBCluster_iact_read_en[0U][1U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[0U][0U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[0U][2U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[1U][1U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[1U][0U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[1U][2U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[2U][1U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[2U][0U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__GLBCluster_iact_read_en[2U][2U] 
        = ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_read_fin_reg)) 
           & (2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en = 
        ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg)) 
         & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en = 
        ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg)) 
         & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en = 
        ((~ (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg)) 
         & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid 
        = ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_valid) 
           & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid 
        = ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_valid) 
           & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid 
        = ((IData)(vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_valid) 
           & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[0U][0U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [0U][0U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[0U][1U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [0U][1U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[0U][2U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [0U][2U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[1U][0U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [1U][0U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[1U][1U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [1U][1U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[1U][2U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [1U][2U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[2U][0U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [2U][0U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[2U][1U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [2U][1U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_do_load_en[2U][2U] 
        = ((2U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state)) 
           & (~ vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg
              [2U][2U]));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[0U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[1U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[2U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__1(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___nba_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
        [1U][2U];
    vlSelfRef.__PVT__PECluster_psum_in_ready[0U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][0U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[1U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][1U]);
    vlSelfRef.__PVT__PECluster_psum_in_ready[2U] = 
        ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count)) 
         & vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready
         [2U][2U]);
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [0U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_psum_SRAM_Bank_0_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [1U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_psum_SRAM_Bank_0_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_ready 
        = ((vlSelfRef.__PVT__PECluster_psum_in_ready
            [2U] & (4U == (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))) 
           | ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_psum_SRAM_Bank_0_read_out_en) 
              | (5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state))));
}
