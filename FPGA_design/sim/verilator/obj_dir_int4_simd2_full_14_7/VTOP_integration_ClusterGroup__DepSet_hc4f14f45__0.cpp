// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_ClusterGroup.h"
#include "VTOP_integration__Syms.h"

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__2(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v[0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PECluster_psum_out_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v[1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PECluster_psum_out_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v[2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PECluster_psum_out_valid
        [2U];
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
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__4(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d[0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PECluster_psum_out
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d[1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PECluster_psum_out
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d[2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0.__PVT__PECluster_psum_out
        [2U];
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_comb__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__2(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v[0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PECluster_psum_out_valid
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v[1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PECluster_psum_out_valid
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v[2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PECluster_psum_out_valid
        [2U];
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
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__4(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d[0U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PECluster_psum_out
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d[1U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PECluster_psum_out
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d[2U] 
        = vlSymsp->TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1.__PVT__PECluster_psum_out
        [2U];
}
