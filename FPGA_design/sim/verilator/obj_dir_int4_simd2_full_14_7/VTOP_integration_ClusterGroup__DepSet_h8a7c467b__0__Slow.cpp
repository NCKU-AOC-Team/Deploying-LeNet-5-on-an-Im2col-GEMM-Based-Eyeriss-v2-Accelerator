// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_ClusterGroup.h"
#include "VTOP_integration_Iact_SRAM_Bank.h"
#include "VTOP_integration_ProcessingElement.h"

VL_ATTR_COLD void VTOP_integration_ClusterGroup___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__1(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___stl_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[0U][0U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[0U][1U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[0U][2U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[1U][0U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[1U][1U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[1U][2U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[2U][0U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[2U][1U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_write_fin[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__all_write_fin;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[2U][2U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__GLBCluster_iact_write_done[0U][0U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_write_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__addr_SRAM_write_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_write_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__data_SRAM_write_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_write_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__write_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_read_done[0U][0U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_read_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__addr_SRAM_read_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_read_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__data_SRAM_read_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_read_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__read_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_write_done[0U][1U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_write_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__addr_SRAM_write_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_write_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__data_SRAM_write_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_write_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__write_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_read_done[0U][1U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_read_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__addr_SRAM_read_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_read_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__data_SRAM_read_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_read_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__read_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_write_done[0U][2U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_write_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__addr_SRAM_write_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_write_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__data_SRAM_write_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_write_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__write_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_read_done[0U][2U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_read_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__addr_SRAM_read_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_read_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__data_SRAM_read_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_read_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__read_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_write_done[1U][0U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_write_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__addr_SRAM_write_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_write_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__data_SRAM_write_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_write_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__write_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_read_done[1U][0U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_read_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__addr_SRAM_read_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_read_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__data_SRAM_read_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_read_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__read_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_write_done[1U][1U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_write_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__addr_SRAM_write_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_write_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__data_SRAM_write_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_write_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__write_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_read_done[1U][1U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_read_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__addr_SRAM_read_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_read_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__data_SRAM_read_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_read_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__read_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_write_done[1U][2U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_write_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__addr_SRAM_write_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_write_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__data_SRAM_write_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_write_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__write_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_read_done[1U][2U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_read_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__addr_SRAM_read_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_read_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__data_SRAM_read_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_read_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__read_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_write_done[2U][0U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_write_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__addr_SRAM_write_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_write_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__data_SRAM_write_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_write_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__write_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_read_done[2U][0U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_read_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__addr_SRAM_read_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_read_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__data_SRAM_read_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_read_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__read_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_write_done[2U][1U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_write_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__addr_SRAM_write_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_write_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__data_SRAM_write_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_write_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__write_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_read_done[2U][1U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_read_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__addr_SRAM_read_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_read_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__data_SRAM_read_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_read_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__read_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_write_done[2U][2U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_write_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__addr_SRAM_write_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_write_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__data_SRAM_write_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_write_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__write_done_both))));
    vlSelfRef.__PVT__GLBCluster_iact_read_done[2U][2U] 
        = (((2U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_read_state)) 
            & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__addr_SRAM_read_done)) 
           | (((3U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_read_state)) 
               & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__data_SRAM_read_done)) 
              | ((1U == (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_read_state)) 
                 & (IData)(vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__read_done_both))));
}
