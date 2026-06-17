// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_ClusterGroup.h"
#include "VTOP_integration_Iact_SRAM_Bank.h"
#include "VTOP_integration__Syms.h"

extern const VlUnpacked<CData/*2:0*/, 1024> VTOP_integration__ConstPool__TABLE_h1b959610_0;
extern const VlUnpacked<CData/*0:0*/, 64> VTOP_integration__ConstPool__TABLE_h7b8be59b_0;

VL_ATTR_COLD void VTOP_integration_ClusterGroup___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*5:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*5:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*5:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*5:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*5:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*5:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*5:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*5:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*5:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*5:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*5:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    SData/*9:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
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
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin 
        = ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg) 
           & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg) 
              & (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg)));
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
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_south_address_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_address_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_south_address_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_address_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_south_address_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_address_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_address_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_address_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_address_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_south_address_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_address_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_south_address_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_address_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_south_address_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_address_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_address_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_address_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_address_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_south_address_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_address_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_south_address_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_address_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_south_address_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_address_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_address_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_address_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_address_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_south_data_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_data_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_south_data_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_data_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_south_data_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_data_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_data_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_data_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_data_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_south_data_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_data_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_south_data_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_data_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_south_data_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_data_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_data_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_data_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_data_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_south_data_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_data_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_south_data_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_data_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_south_data_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_north_data_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_data_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_data_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_horiz_data_in_ready
        [2U][2U];
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
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__PECluster_PE_disable[0U][0U] = 
        vlSelfRef.PE_disable[0U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[0U][1U] = 
        vlSelfRef.PE_disable[0U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[0U][2U] = 
        vlSelfRef.PE_disable[0U][2U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][0U] = 
        vlSelfRef.PE_disable[1U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][1U] = 
        vlSelfRef.PE_disable[1U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][2U] = 
        vlSelfRef.PE_disable[1U][2U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][0U] = 
        vlSelfRef.PE_disable[2U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][1U] = 
        vlSelfRef.PE_disable[2U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][2U] = 
        vlSelfRef.PE_disable[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][0U] 
        = vlSelfRef.GLB_iact_read_addr[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][1U] 
        = vlSelfRef.GLB_iact_read_addr[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][2U] 
        = vlSelfRef.GLB_iact_read_addr[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][0U] 
        = vlSelfRef.GLB_iact_read_addr[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][1U] 
        = vlSelfRef.GLB_iact_read_addr[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][2U] 
        = vlSelfRef.GLB_iact_read_addr[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][0U] 
        = vlSelfRef.GLB_iact_read_addr[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][1U] 
        = vlSelfRef.GLB_iact_read_addr[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][2U] 
        = vlSelfRef.GLB_iact_read_addr[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][0U] 
        = vlSelfRef.GLB_iact_data_in[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][1U] 
        = vlSelfRef.GLB_iact_data_in[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][2U] 
        = vlSelfRef.GLB_iact_data_in[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][0U] 
        = vlSelfRef.GLB_iact_data_in[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][1U] 
        = vlSelfRef.GLB_iact_data_in[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][2U] 
        = vlSelfRef.GLB_iact_data_in[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][0U] 
        = vlSelfRef.GLB_iact_data_in[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][1U] 
        = vlSelfRef.GLB_iact_data_in[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][2U] 
        = vlSelfRef.GLB_iact_data_in[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][2U] 
        = vlSelfRef.GLB_weight_data_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][1U] 
        = vlSelfRef.GLB_weight_data_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][0U] 
        = vlSelfRef.GLB_weight_data_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][2U] 
        = vlSelfRef.GLB_weight_data_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][1U] 
        = vlSelfRef.GLB_weight_data_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][0U] 
        = vlSelfRef.GLB_weight_data_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][2U] 
        = vlSelfRef.GLB_weight_data_in[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][1U] 
        = vlSelfRef.GLB_weight_data_in[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][0U] 
        = vlSelfRef.GLB_weight_data_in[0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][0U] 
        = vlSelfRef.GLB_iact_address_in[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][1U] 
        = vlSelfRef.GLB_iact_address_in[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][2U] 
        = vlSelfRef.GLB_iact_address_in[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][0U] 
        = vlSelfRef.GLB_iact_address_in[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][1U] 
        = vlSelfRef.GLB_iact_address_in[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][2U] 
        = vlSelfRef.GLB_iact_address_in[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][0U] 
        = vlSelfRef.GLB_iact_address_in[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][1U] 
        = vlSelfRef.GLB_iact_address_in[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][2U] 
        = vlSelfRef.GLB_iact_address_in[2U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][2U] 
        = vlSelfRef.GLB_weight_address_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][1U] 
        = vlSelfRef.GLB_weight_address_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][0U] 
        = vlSelfRef.GLB_weight_address_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][2U] 
        = vlSelfRef.GLB_weight_address_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][1U] 
        = vlSelfRef.GLB_weight_address_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][0U] 
        = vlSelfRef.GLB_weight_address_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][2U] 
        = vlSelfRef.GLB_weight_address_in[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][1U] 
        = vlSelfRef.GLB_weight_address_in[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][0U] 
        = vlSelfRef.GLB_weight_address_in[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][2U] 
        = vlSelfRef.GLB_weight_data_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][1U] 
        = vlSelfRef.GLB_weight_data_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][0U] 
        = vlSelfRef.GLB_weight_data_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][2U] 
        = vlSelfRef.GLB_weight_data_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][1U] 
        = vlSelfRef.GLB_weight_data_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][0U] 
        = vlSelfRef.GLB_weight_data_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][2U] 
        = vlSelfRef.GLB_weight_data_in_valid[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][1U] 
        = vlSelfRef.GLB_weight_data_in_valid[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][0U] 
        = vlSelfRef.GLB_weight_data_in_valid[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][2U] 
        = vlSelfRef.GLB_weight_address_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][1U] 
        = vlSelfRef.GLB_weight_address_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][0U] 
        = vlSelfRef.GLB_weight_address_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][2U] 
        = vlSelfRef.GLB_weight_address_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][1U] 
        = vlSelfRef.GLB_weight_address_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][0U] 
        = vlSelfRef.GLB_weight_address_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][2U] 
        = vlSelfRef.GLB_weight_address_in_valid[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][1U] 
        = vlSelfRef.GLB_weight_address_in_valid[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][0U] 
        = vlSelfRef.GLB_weight_address_in_valid[0U];
    __Vtableidx19 = (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_cg_en) 
                      << 9U) | (((((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin) 
                                   | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_src_GLB_load_fin))
                                   ? 2U : 1U) << 6U) 
                                | (((IData)(vlSelfRef.__PVT__PECluster_all_write_fin) 
                                    << 5U) | (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__CG_0_0_psum_acc_en) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_psum_acc_fin) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__next_CG_state 
        = VTOP_integration__ConstPool__TABLE_h1b959610_0
        [__Vtableidx19];
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[0U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[1U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[2U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
    __Vtableidx1 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                     [0U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                         [0U][0U] << 4U) 
                                        | ((vlSelfRef.__PVT__iact_north_address_out_ready
                                            [0U][0U] 
                                            << 3U) 
                                           | (vlSelfRef.__PVT__iact_PE_address_out_ready
                                              [0U][0U] 
                                              << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx1];
    __Vtableidx3 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                     [0U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                         [0U][1U] << 4U) 
                                        | ((vlSelfRef.__PVT__iact_north_address_out_ready
                                            [0U][1U] 
                                            << 3U) 
                                           | (vlSelfRef.__PVT__iact_PE_address_out_ready
                                              [0U][1U] 
                                              << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx3];
    __Vtableidx5 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                     [0U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                         [0U][2U] << 4U) 
                                        | ((vlSelfRef.__PVT__iact_north_address_out_ready
                                            [0U][2U] 
                                            << 3U) 
                                           | (vlSelfRef.__PVT__iact_PE_address_out_ready
                                              [0U][2U] 
                                              << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx5];
    __Vtableidx7 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                     [1U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                         [1U][0U] << 4U) 
                                        | ((vlSelfRef.__PVT__iact_north_address_out_ready
                                            [1U][0U] 
                                            << 3U) 
                                           | (vlSelfRef.__PVT__iact_PE_address_out_ready
                                              [1U][0U] 
                                              << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx7];
    __Vtableidx9 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                     [1U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                         [1U][1U] << 4U) 
                                        | ((vlSelfRef.__PVT__iact_north_address_out_ready
                                            [1U][1U] 
                                            << 3U) 
                                           | (vlSelfRef.__PVT__iact_PE_address_out_ready
                                              [1U][1U] 
                                              << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx9];
    __Vtableidx11 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [1U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [1U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [1U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [1U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx11];
    __Vtableidx13 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx13];
    __Vtableidx15 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx15];
    __Vtableidx17 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx17];
    __Vtableidx2 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                     [0U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                         [0U][0U] << 4U) 
                                        | ((vlSelfRef.__PVT__iact_north_data_out_ready
                                            [0U][0U] 
                                            << 3U) 
                                           | (vlSelfRef.__PVT__iact_PE_data_out_ready
                                              [0U][0U] 
                                              << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx2];
    __Vtableidx4 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                     [0U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                         [0U][1U] << 4U) 
                                        | ((vlSelfRef.__PVT__iact_north_data_out_ready
                                            [0U][1U] 
                                            << 3U) 
                                           | (vlSelfRef.__PVT__iact_PE_data_out_ready
                                              [0U][1U] 
                                              << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx4];
    __Vtableidx6 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                     [0U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                         [0U][2U] << 4U) 
                                        | ((vlSelfRef.__PVT__iact_north_data_out_ready
                                            [0U][2U] 
                                            << 3U) 
                                           | (vlSelfRef.__PVT__iact_PE_data_out_ready
                                              [0U][2U] 
                                              << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx6];
    __Vtableidx8 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                     [1U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                         [1U][0U] << 4U) 
                                        | ((vlSelfRef.__PVT__iact_north_data_out_ready
                                            [1U][0U] 
                                            << 3U) 
                                           | (vlSelfRef.__PVT__iact_PE_data_out_ready
                                              [1U][0U] 
                                              << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx8];
    __Vtableidx10 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [1U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [1U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [1U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [1U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx10];
    __Vtableidx12 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [1U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [1U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [1U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [1U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx12];
    __Vtableidx14 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx14];
    __Vtableidx16 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx16];
    __Vtableidx18 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx18];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[0U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[1U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[2U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [2U];
}

VL_ATTR_COLD void VTOP_integration_ClusterGroup___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*5:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*5:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*5:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    CData/*5:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    CData/*5:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*5:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    CData/*5:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    CData/*5:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*5:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    CData/*5:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*5:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    CData/*5:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    CData/*5:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    CData/*5:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*5:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    CData/*5:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    CData/*5:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    CData/*5:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    SData/*9:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    // Body
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
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin 
        = ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg) 
           & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg) 
              & (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg)));
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
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_south_address_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_address_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_south_address_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_address_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_south_address_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_address_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_address_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_address_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_address_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_south_address_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_address_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_south_address_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_address_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_south_address_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_address_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_address_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_address_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_address_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_south_address_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_address_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_south_address_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_address_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_south_address_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_address_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_address_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_address_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_address_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_south_data_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_data_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_south_data_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_data_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_south_data_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_data_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_data_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_data_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_data_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_south_data_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_data_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_south_data_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_data_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_south_data_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_data_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_data_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_data_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_data_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_south_data_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_data_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_south_data_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_data_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_south_data_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_north_data_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_data_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_data_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_horiz_data_in_ready
        [2U][2U];
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
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][0U] 
        = vlSelfRef.GLB_iact_read_addr[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][1U] 
        = vlSelfRef.GLB_iact_read_addr[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][2U] 
        = vlSelfRef.GLB_iact_read_addr[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][0U] 
        = vlSelfRef.GLB_iact_read_addr[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][1U] 
        = vlSelfRef.GLB_iact_read_addr[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][2U] 
        = vlSelfRef.GLB_iact_read_addr[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][0U] 
        = vlSelfRef.GLB_iact_read_addr[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][1U] 
        = vlSelfRef.GLB_iact_read_addr[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][2U] 
        = vlSelfRef.GLB_iact_read_addr[2U][2U];
    vlSelfRef.__PVT__PECluster_PE_disable[0U][0U] = 
        vlSelfRef.PE_disable[0U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[0U][1U] = 
        vlSelfRef.PE_disable[0U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[0U][2U] = 
        vlSelfRef.PE_disable[0U][2U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][0U] = 
        vlSelfRef.PE_disable[1U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][1U] = 
        vlSelfRef.PE_disable[1U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][2U] = 
        vlSelfRef.PE_disable[1U][2U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][0U] = 
        vlSelfRef.PE_disable[2U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][1U] = 
        vlSelfRef.PE_disable[2U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][2U] = 
        vlSelfRef.PE_disable[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][0U] 
        = vlSelfRef.GLB_iact_data_in[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][1U] 
        = vlSelfRef.GLB_iact_data_in[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][2U] 
        = vlSelfRef.GLB_iact_data_in[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][0U] 
        = vlSelfRef.GLB_iact_data_in[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][1U] 
        = vlSelfRef.GLB_iact_data_in[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][2U] 
        = vlSelfRef.GLB_iact_data_in[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][0U] 
        = vlSelfRef.GLB_iact_data_in[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][1U] 
        = vlSelfRef.GLB_iact_data_in[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][2U] 
        = vlSelfRef.GLB_iact_data_in[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in
        [0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][0U] 
        = vlSelfRef.GLB_iact_address_in[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][1U] 
        = vlSelfRef.GLB_iact_address_in[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][2U] 
        = vlSelfRef.GLB_iact_address_in[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][0U] 
        = vlSelfRef.GLB_iact_address_in[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][1U] 
        = vlSelfRef.GLB_iact_address_in[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][2U] 
        = vlSelfRef.GLB_iact_address_in[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][0U] 
        = vlSelfRef.GLB_iact_address_in[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][1U] 
        = vlSelfRef.GLB_iact_address_in[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][2U] 
        = vlSelfRef.GLB_iact_address_in[2U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_data_in_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.GLB_weight_address_in_valid
        [0U];
    __Vtableidx38 = (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_cg_en) 
                      << 9U) | (((((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin) 
                                   | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_src_GLB_load_fin))
                                   ? 2U : 1U) << 6U) 
                                | (((IData)(vlSelfRef.__PVT__PECluster_all_write_fin) 
                                    << 5U) | (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__CG_0_0_psum_acc_en) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_psum_acc_fin) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__next_CG_state 
        = VTOP_integration__ConstPool__TABLE_h1b959610_0
        [__Vtableidx38];
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[0U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[1U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[2U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
    __Vtableidx20 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [0U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [0U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [0U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [0U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx20];
    __Vtableidx22 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [0U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [0U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [0U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [0U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx22];
    __Vtableidx24 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [0U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [0U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [0U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [0U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx24];
    __Vtableidx26 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [1U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [1U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [1U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [1U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx26];
    __Vtableidx28 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [1U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [1U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [1U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [1U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx28];
    __Vtableidx30 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [1U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [1U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [1U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [1U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx30];
    __Vtableidx32 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx32];
    __Vtableidx34 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx34];
    __Vtableidx36 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx36];
    __Vtableidx21 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [0U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [0U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [0U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [0U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx21];
    __Vtableidx23 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [0U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [0U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [0U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [0U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx23];
    __Vtableidx25 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [0U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [0U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [0U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [0U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx25];
    __Vtableidx27 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [1U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [1U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [1U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [1U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx27];
    __Vtableidx29 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [1U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [1U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [1U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [1U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx29];
    __Vtableidx31 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [1U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [1U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [1U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [1U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx31];
    __Vtableidx33 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx33];
    __Vtableidx35 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx35];
    __Vtableidx37 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx37];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[0U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[1U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[2U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [2U];
}

VL_ATTR_COLD void VTOP_integration_ClusterGroup___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*5:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*5:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*5:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    CData/*5:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    CData/*5:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    CData/*5:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    CData/*5:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    CData/*5:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    CData/*5:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    CData/*5:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    CData/*5:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    CData/*5:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    CData/*5:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    CData/*5:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    CData/*5:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    CData/*5:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    CData/*5:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    CData/*5:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    SData/*9:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    // Body
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
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin 
        = ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg) 
           & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg) 
              & (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg)));
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
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_address_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_address_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_address_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_address_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_address_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_address_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_address_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_address_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_address_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_address_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_address_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_address_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_address_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_address_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_address_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_address_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_address_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_address_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_data_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_data_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_data_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_data_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_data_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_data_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_data_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_data_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_data_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_data_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_data_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_data_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_data_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_data_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0.__PVT__iact_south_data_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_data_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_data_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__iact_horiz_data_in_ready
        [2U][2U];
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
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][0U] 
        = vlSelfRef.GLB_iact_read_addr[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][1U] 
        = vlSelfRef.GLB_iact_read_addr[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][2U] 
        = vlSelfRef.GLB_iact_read_addr[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][0U] 
        = vlSelfRef.GLB_iact_read_addr[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][1U] 
        = vlSelfRef.GLB_iact_read_addr[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][2U] 
        = vlSelfRef.GLB_iact_read_addr[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][0U] 
        = vlSelfRef.GLB_iact_read_addr[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][1U] 
        = vlSelfRef.GLB_iact_read_addr[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][2U] 
        = vlSelfRef.GLB_iact_read_addr[2U][2U];
    vlSelfRef.__PVT__PECluster_PE_disable[0U][0U] = 
        vlSelfRef.PE_disable[0U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[0U][1U] = 
        vlSelfRef.PE_disable[0U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[0U][2U] = 
        vlSelfRef.PE_disable[0U][2U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][0U] = 
        vlSelfRef.PE_disable[1U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][1U] = 
        vlSelfRef.PE_disable[1U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][2U] = 
        vlSelfRef.PE_disable[1U][2U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][0U] = 
        vlSelfRef.PE_disable[2U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][1U] = 
        vlSelfRef.PE_disable[2U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][2U] = 
        vlSelfRef.PE_disable[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][0U] 
        = vlSelfRef.GLB_iact_data_in[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][1U] 
        = vlSelfRef.GLB_iact_data_in[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][2U] 
        = vlSelfRef.GLB_iact_data_in[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][0U] 
        = vlSelfRef.GLB_iact_data_in[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][1U] 
        = vlSelfRef.GLB_iact_data_in[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][2U] 
        = vlSelfRef.GLB_iact_data_in[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][0U] 
        = vlSelfRef.GLB_iact_data_in[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][1U] 
        = vlSelfRef.GLB_iact_data_in[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][2U] 
        = vlSelfRef.GLB_iact_data_in[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][2U] 
        = vlSelfRef.GLB_weight_data_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][1U] 
        = vlSelfRef.GLB_weight_data_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][0U] 
        = vlSelfRef.GLB_weight_data_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][2U] 
        = vlSelfRef.GLB_weight_data_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][1U] 
        = vlSelfRef.GLB_weight_data_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][0U] 
        = vlSelfRef.GLB_weight_data_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][2U] 
        = vlSelfRef.GLB_weight_data_in[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][1U] 
        = vlSelfRef.GLB_weight_data_in[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][0U] 
        = vlSelfRef.GLB_weight_data_in[0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][0U] 
        = vlSelfRef.GLB_iact_address_in[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][1U] 
        = vlSelfRef.GLB_iact_address_in[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][2U] 
        = vlSelfRef.GLB_iact_address_in[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][0U] 
        = vlSelfRef.GLB_iact_address_in[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][1U] 
        = vlSelfRef.GLB_iact_address_in[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][2U] 
        = vlSelfRef.GLB_iact_address_in[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][0U] 
        = vlSelfRef.GLB_iact_address_in[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][1U] 
        = vlSelfRef.GLB_iact_address_in[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][2U] 
        = vlSelfRef.GLB_iact_address_in[2U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][2U] 
        = vlSelfRef.GLB_weight_address_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][1U] 
        = vlSelfRef.GLB_weight_address_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][0U] 
        = vlSelfRef.GLB_weight_address_in[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][2U] 
        = vlSelfRef.GLB_weight_address_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][1U] 
        = vlSelfRef.GLB_weight_address_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][0U] 
        = vlSelfRef.GLB_weight_address_in[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][2U] 
        = vlSelfRef.GLB_weight_address_in[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][1U] 
        = vlSelfRef.GLB_weight_address_in[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][0U] 
        = vlSelfRef.GLB_weight_address_in[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][2U] 
        = vlSelfRef.GLB_weight_data_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][1U] 
        = vlSelfRef.GLB_weight_data_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][0U] 
        = vlSelfRef.GLB_weight_data_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][2U] 
        = vlSelfRef.GLB_weight_data_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][1U] 
        = vlSelfRef.GLB_weight_data_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][0U] 
        = vlSelfRef.GLB_weight_data_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][2U] 
        = vlSelfRef.GLB_weight_data_in_valid[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][1U] 
        = vlSelfRef.GLB_weight_data_in_valid[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][0U] 
        = vlSelfRef.GLB_weight_data_in_valid[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][2U] 
        = vlSelfRef.GLB_weight_address_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][1U] 
        = vlSelfRef.GLB_weight_address_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][0U] 
        = vlSelfRef.GLB_weight_address_in_valid[2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][2U] 
        = vlSelfRef.GLB_weight_address_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][1U] 
        = vlSelfRef.GLB_weight_address_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][0U] 
        = vlSelfRef.GLB_weight_address_in_valid[1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][2U] 
        = vlSelfRef.GLB_weight_address_in_valid[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][1U] 
        = vlSelfRef.GLB_weight_address_in_valid[0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][0U] 
        = vlSelfRef.GLB_weight_address_in_valid[0U];
    __Vtableidx57 = (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_cg_en) 
                      << 9U) | (((((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin) 
                                   | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_src_GLB_load_fin))
                                   ? 2U : 1U) << 6U) 
                                | (((IData)(vlSelfRef.__PVT__PECluster_all_write_fin) 
                                    << 5U) | (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__CG_0_0_psum_acc_en) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_psum_acc_fin) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__next_CG_state 
        = VTOP_integration__ConstPool__TABLE_h1b959610_0
        [__Vtableidx57];
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[0U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[1U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[2U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
    __Vtableidx39 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [0U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [0U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [0U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [0U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx39];
    __Vtableidx41 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [0U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [0U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [0U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [0U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx41];
    __Vtableidx43 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [0U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [0U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [0U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [0U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx43];
    __Vtableidx45 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [1U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [1U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [1U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [1U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx45];
    __Vtableidx47 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [1U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [1U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [1U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [1U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx47];
    __Vtableidx49 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [1U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [1U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [1U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [1U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx49];
    __Vtableidx51 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx51];
    __Vtableidx53 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx53];
    __Vtableidx55 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx55];
    __Vtableidx40 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [0U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [0U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [0U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [0U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx40];
    __Vtableidx42 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [0U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [0U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [0U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [0U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx42];
    __Vtableidx44 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [0U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [0U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [0U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [0U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx44];
    __Vtableidx46 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [1U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [1U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [1U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [1U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx46];
    __Vtableidx48 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [1U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [1U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [1U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [1U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx48];
    __Vtableidx50 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [1U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [1U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [1U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [1U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx50];
    __Vtableidx52 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx52];
    __Vtableidx54 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx54];
    __Vtableidx56 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx56];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[0U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[1U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[2U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready;
    if ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count))) {
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][0U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext
            [0U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][1U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext
            [1U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][2U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext
            [2U];
    } else {
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][0U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v
            [0U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][1U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v
            [1U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][2U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v
            [2U];
    }
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [2U];
}

VL_ATTR_COLD void VTOP_integration_ClusterGroup___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
    Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready = 0;
    CData/*0:0*/ __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready = 0;
    CData/*5:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    CData/*5:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*5:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    CData/*5:0*/ __Vtableidx61;
    __Vtableidx61 = 0;
    CData/*5:0*/ __Vtableidx62;
    __Vtableidx62 = 0;
    CData/*5:0*/ __Vtableidx63;
    __Vtableidx63 = 0;
    CData/*5:0*/ __Vtableidx64;
    __Vtableidx64 = 0;
    CData/*5:0*/ __Vtableidx65;
    __Vtableidx65 = 0;
    CData/*5:0*/ __Vtableidx66;
    __Vtableidx66 = 0;
    CData/*5:0*/ __Vtableidx67;
    __Vtableidx67 = 0;
    CData/*5:0*/ __Vtableidx68;
    __Vtableidx68 = 0;
    CData/*5:0*/ __Vtableidx69;
    __Vtableidx69 = 0;
    CData/*5:0*/ __Vtableidx70;
    __Vtableidx70 = 0;
    CData/*5:0*/ __Vtableidx71;
    __Vtableidx71 = 0;
    CData/*5:0*/ __Vtableidx72;
    __Vtableidx72 = 0;
    CData/*5:0*/ __Vtableidx73;
    __Vtableidx73 = 0;
    CData/*5:0*/ __Vtableidx74;
    __Vtableidx74 = 0;
    CData/*5:0*/ __Vtableidx75;
    __Vtableidx75 = 0;
    SData/*9:0*/ __Vtableidx76;
    __Vtableidx76 = 0;
    // Body
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
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin 
        = ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg) 
           & ((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg) 
              & (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg)));
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
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_address_in_ready
        [2U];
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_address_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_address_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_address_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_address_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_address_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_address_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_address_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_address_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_address_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_address_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_address_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_address_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_address_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_address_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_address_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_address_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_address_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_horiz_address_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_address_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[1U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][0U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][1U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_ready[2U][2U] 
        = vlSelfRef.__PVT__PECluster_iact_data_in_ready
        [2U];
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_data_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_data_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_data_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_data_in_ready
        [0U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_data_in_ready
        [0U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_data_in_ready
        [0U][2U];
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_data_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_data_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_data_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_data_in_ready
        [1U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_data_in_ready
        [1U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_data_in_ready
        [1U][2U];
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_data_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_data_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1.__PVT__iact_south_data_in_ready
        [2U][2U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_data_in_ready
        [2U][0U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_data_in_ready
        [2U][1U];
    vlSelfRef.__PVT__iact_horiz_data_out_ready[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__iact_horiz_data_in_ready
        [2U][2U];
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
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_done 
        = ((IData)(vlSelfRef.__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count) 
           == ((IData)(1U) + (0x1fU & ((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth) 
                                       - (IData)(1U)))));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[0U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[1U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[2U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear;
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][0U] 
        = vlSelfRef.GLB_iact_read_addr[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][1U] 
        = vlSelfRef.GLB_iact_read_addr[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[0U][2U] 
        = vlSelfRef.GLB_iact_read_addr[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][0U] 
        = vlSelfRef.GLB_iact_read_addr[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][1U] 
        = vlSelfRef.GLB_iact_read_addr[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[1U][2U] 
        = vlSelfRef.GLB_iact_read_addr[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][0U] 
        = vlSelfRef.GLB_iact_read_addr[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][1U] 
        = vlSelfRef.GLB_iact_read_addr[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_read_addr[2U][2U] 
        = vlSelfRef.GLB_iact_read_addr[2U][2U];
    vlSelfRef.__PVT__PECluster_PE_disable[0U][0U] = 
        vlSelfRef.PE_disable[0U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[0U][1U] = 
        vlSelfRef.PE_disable[0U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[0U][2U] = 
        vlSelfRef.PE_disable[0U][2U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][0U] = 
        vlSelfRef.PE_disable[1U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][1U] = 
        vlSelfRef.PE_disable[1U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[1U][2U] = 
        vlSelfRef.PE_disable[1U][2U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][0U] = 
        vlSelfRef.PE_disable[2U][0U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][1U] = 
        vlSelfRef.PE_disable[2U][1U];
    vlSelfRef.__PVT__PECluster_PE_disable[2U][2U] = 
        vlSelfRef.PE_disable[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[0U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[1U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][0U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][1U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[2U][2U] 
        = vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear;
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][0U] 
        = vlSelfRef.GLB_iact_data_in[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][1U] 
        = vlSelfRef.GLB_iact_data_in[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[0U][2U] 
        = vlSelfRef.GLB_iact_data_in[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][0U] 
        = vlSelfRef.GLB_iact_data_in[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][1U] 
        = vlSelfRef.GLB_iact_data_in[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[1U][2U] 
        = vlSelfRef.GLB_iact_data_in[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][0U] 
        = vlSelfRef.GLB_iact_data_in[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][1U] 
        = vlSelfRef.GLB_iact_data_in[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in[2U][2U] 
        = vlSelfRef.GLB_iact_data_in[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in
        [0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][0U] 
        = vlSelfRef.GLB_iact_address_in[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][1U] 
        = vlSelfRef.GLB_iact_address_in[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[0U][2U] 
        = vlSelfRef.GLB_iact_address_in[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][0U] 
        = vlSelfRef.GLB_iact_address_in[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][1U] 
        = vlSelfRef.GLB_iact_address_in[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[1U][2U] 
        = vlSelfRef.GLB_iact_address_in[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][0U] 
        = vlSelfRef.GLB_iact_address_in[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][1U] 
        = vlSelfRef.GLB_iact_address_in[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in[2U][2U] 
        = vlSelfRef.GLB_iact_address_in[2U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[0U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[1U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][0U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][1U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_data_in_valid[2U][2U] 
        = vlSelfRef.GLB_iact_data_in_valid[2U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[0U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[0U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[1U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[1U][2U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][0U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][0U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][1U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][1U];
    vlSelfRef.__PVT__GLBCluster_iact_address_in_valid[2U][2U] 
        = vlSelfRef.GLB_iact_address_in_valid[2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_data_in_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[2U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in_valid
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[1U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[0U][0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.GLB_weight_address_in_valid
        [0U];
    __Vtableidx76 = (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_cg_en) 
                      << 9U) | (((((IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin) 
                                   | (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_1_src_GLB_load_fin))
                                   ? 2U : 1U) << 6U) 
                                | (((IData)(vlSelfRef.__PVT__PECluster_all_write_fin) 
                                    << 5U) | (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__CG_0_0_psum_acc_en) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_psum_acc_fin) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__CG_state))))));
    vlSelfRef.__PVT__Cluster_Group_Controller_inst__DOT__next_CG_state 
        = VTOP_integration__ConstPool__TABLE_h1b959610_0
        [__Vtableidx76];
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[0U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__0__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[1U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__1__KET____DOT__u__GLB_in_valid;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[2U] 
        = Router_Cluster_inst__DOT____Vcellinp__PSUM_R__BRA__2__KET____DOT__u__GLB_in_valid;
    __Vtableidx58 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [0U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [0U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [0U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [0U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx58];
    __Vtableidx60 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [0U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [0U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [0U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [0U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx60];
    __Vtableidx62 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [0U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [0U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [0U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [0U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx62];
    __Vtableidx64 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [1U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [1U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [1U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [1U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx64];
    __Vtableidx66 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [1U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [1U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [1U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [1U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx66];
    __Vtableidx68 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [1U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [1U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [1U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [1U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx68];
    __Vtableidx70 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx70];
    __Vtableidx72 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx72];
    __Vtableidx74 = ((vlSelfRef.__PVT__iact_horiz_address_out_ready
                      [2U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_address_out_ready
                                          [2U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_address_out_ready
                                           [2U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_address_out_ready
                                           [2U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx74];
    __Vtableidx59 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [0U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [0U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [0U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [0U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx59];
    __Vtableidx61 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [0U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [0U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [0U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [0U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx61];
    __Vtableidx63 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [0U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [0U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [0U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [0U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx63];
    __Vtableidx65 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [1U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [1U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [1U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [1U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx65];
    __Vtableidx67 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [1U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [1U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [1U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [1U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx67];
    __Vtableidx69 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [1U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [1U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [1U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [1U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx69];
    __Vtableidx71 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][0U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][0U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][0U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][0U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx71];
    __Vtableidx73 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][1U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][1U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][1U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][1U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx73];
    __Vtableidx75 = ((vlSelfRef.__PVT__iact_horiz_data_out_ready
                      [2U][2U] << 5U) | ((vlSelfRef.__PVT__iact_south_data_out_ready
                                          [2U][2U] 
                                          << 4U) | 
                                         ((vlSelfRef.__PVT__iact_north_data_out_ready
                                           [2U][2U] 
                                           << 3U) | 
                                          (vlSelfRef.__PVT__iact_PE_data_out_ready
                                           [2U][2U] 
                                           << 2U))));
    __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready 
        = VTOP_integration__ConstPool__TABLE_h7b8be59b_0
        [__Vtableidx75];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[0U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[1U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_bits[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_bits[2U]
        [2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [0U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [1U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_bits[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_bits
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [0U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [1U][2U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][0U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][1U];
    vlSelfRef.__PVT__iact_PE_address_out_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_address_in_valid
        [2U][2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[0U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[1U]
        [2U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [0U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [1U];
    vlSelfRef.__PVT__iact_PE_data_out_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_GLB_data_in_valid[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[0U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[1U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][0U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][1U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_disable[2U][2U] 
        = vlSelfRef.__PVT__PECluster_PE_disable[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[0U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[1U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[2U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready;
    if ((0U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count))) {
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][0U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext
            [0U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][1U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext
            [1U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][2U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_v_ext
            [2U];
    } else {
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][0U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v
            [0U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][1U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v
            [1U];
        vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[2U][2U] 
            = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v
            [2U];
    }
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[0U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[1U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_address_in_ready[2U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_address_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[0U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__0__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[1U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__1__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][0U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__0__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][1U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__1__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__iact_GLB_data_in_ready[2U][2U] 
        = __PVT__Router_Cluster_inst__DOT__genblk1__BRA__2__KET____DOT__IACT_R__BRA__2__KET____DOT__u__DOT__internal_data_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_bits[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [1U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_bits
        [2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [1U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_address_out_valid
        [2U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[0U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[0U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[1U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[1U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][0U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][1U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[2U][2U] 
        = vlSelfRef.__PVT__iact_PE_data_out_valid[2U]
        [2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [2U];
}
