// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_ClusterGroup.h"

VL_ATTR_COLD void VTOP_integration_ClusterGroup___eval_initial__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___eval_initial__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][0U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][2U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][0U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][2U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][0U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][2U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][0U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][2U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][0U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][2U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][0U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][2U] = 1U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__PECluster_iact_address_in_ready[2U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_address_in_ready[1U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_address_in_ready[0U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_data_in_ready[2U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_data_in_ready[1U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_data_in_ready[0U] = 1U;
}

VL_ATTR_COLD void VTOP_integration_ClusterGroup___eval_initial__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___eval_initial__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[0U][2U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][0U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[1U][2U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][0U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_address_out_ready[2U][2U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][0U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[0U][2U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][0U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[1U][2U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][0U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][1U] = 1U;
    vlSelfRef.__PVT__iact_north_data_out_ready[2U][2U] = 1U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_data_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__iact_south_address_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__PECluster_iact_address_in_ready[2U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_address_in_ready[1U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_address_in_ready[0U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_data_in_ready[2U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_data_in_ready[1U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_data_in_ready[0U] = 1U;
}

VL_ATTR_COLD void VTOP_integration_ClusterGroup___eval_initial__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___eval_initial__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__iact_south_address_out_ready[0U][0U] = 1U;
    vlSelfRef.__PVT__iact_south_address_out_ready[0U][1U] = 1U;
    vlSelfRef.__PVT__iact_south_address_out_ready[0U][2U] = 1U;
    vlSelfRef.__PVT__iact_south_address_out_ready[1U][0U] = 1U;
    vlSelfRef.__PVT__iact_south_address_out_ready[1U][1U] = 1U;
    vlSelfRef.__PVT__iact_south_address_out_ready[1U][2U] = 1U;
    vlSelfRef.__PVT__iact_south_address_out_ready[2U][0U] = 1U;
    vlSelfRef.__PVT__iact_south_address_out_ready[2U][1U] = 1U;
    vlSelfRef.__PVT__iact_south_address_out_ready[2U][2U] = 1U;
    vlSelfRef.__PVT__iact_south_data_out_ready[0U][0U] = 1U;
    vlSelfRef.__PVT__iact_south_data_out_ready[0U][1U] = 1U;
    vlSelfRef.__PVT__iact_south_data_out_ready[0U][2U] = 1U;
    vlSelfRef.__PVT__iact_south_data_out_ready[1U][0U] = 1U;
    vlSelfRef.__PVT__iact_south_data_out_ready[1U][1U] = 1U;
    vlSelfRef.__PVT__iact_south_data_out_ready[1U][2U] = 1U;
    vlSelfRef.__PVT__iact_south_data_out_ready[2U][0U] = 1U;
    vlSelfRef.__PVT__iact_south_data_out_ready[2U][1U] = 1U;
    vlSelfRef.__PVT__iact_south_data_out_ready[2U][2U] = 1U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_north_data_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_north_address_in_ready[0U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_north_data_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_north_address_in_ready[0U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_north_data_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_north_address_in_ready[0U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_north_data_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_north_address_in_ready[1U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_north_data_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_north_address_in_ready[1U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_north_data_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_north_address_in_ready[1U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_north_data_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_north_address_in_ready[2U][0U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_north_data_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_north_address_in_ready[2U][1U] = 0U;
    vlSelfRef.__PVT__iact_horiz_data_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__iact_horiz_address_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__iact_north_data_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__iact_north_address_in_ready[2U][2U] = 0U;
    vlSelfRef.__PVT__PECluster_iact_address_in_ready[2U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_address_in_ready[1U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_address_in_ready[0U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_data_in_ready[2U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_data_in_ready[1U] = 1U;
    vlSelfRef.__PVT__PECluster_iact_data_in_ready[0U] = 1U;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v[0U] = 1U;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v[1U] = 1U;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_v[2U] = 1U;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d[0U] = 0U;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d[1U] = 0U;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_in_south_d[2U] = 0U;
}

VL_ATTR_COLD void VTOP_integration_ClusterGroup___ctor_var_reset(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->PE_cluster_iact_data_in_sel = VL_RAND_RESET_I(1);
    vlSelf->PE_cluster_iact_data_out_sel = VL_RAND_RESET_I(2);
    vlSelf->PE_cluster_psum_data_in_sel = VL_RAND_RESET_I(1);
    vlSelf->router_cluster_iact_data_in_sel = VL_RAND_RESET_I(2);
    vlSelf->router_cluster_iact_data_out_sel = VL_RAND_RESET_I(2);
    vlSelf->router_cluster_weight_data_in_sel = VL_RAND_RESET_I(1);
    vlSelf->router_cluster_weight_data_out_sel = VL_RAND_RESET_I(1);
    vlSelf->router_cluster_psum_data_in_sel = VL_RAND_RESET_I(1);
    vlSelf->router_cluster_psum_data_out_sel = VL_RAND_RESET_I(1);
    vlSelf->read_psum_en = VL_RAND_RESET_I(1);
    vlSelf->cal_fin = VL_RAND_RESET_I(1);
    vlSelf->cg_en = VL_RAND_RESET_I(1);
    vlSelf->PE_weight_load_en = VL_RAND_RESET_I(1);
    vlSelf->GLB_iact_load_en = VL_RAND_RESET_I(1);
    vlSelf->src_GLB_load_fin = VL_RAND_RESET_I(1);
    vlSelf->all_cal_fin = VL_RAND_RESET_I(1);
    vlSelf->psum_acc_en = VL_RAND_RESET_I(1);
    vlSelf->psum_acc_fin = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_write_en = VL_RAND_RESET_I(1);
    vlSelf->psum_SRAM_Bank_0_read_out_en = VL_RAND_RESET_I(1);
    vlSelf->psum_SRAM_Bank_1_read_out_en = VL_RAND_RESET_I(1);
    vlSelf->psum_SRAM_Bank_2_read_out_en = VL_RAND_RESET_I(1);
    vlSelf->PSUM_DEPTH = VL_RAND_RESET_I(5);
    vlSelf->psum_spad_clear = VL_RAND_RESET_I(1);
    vlSelf->int4_former_weight_mode = VL_RAND_RESET_I(1);
    vlSelf->int4_later_weight_mode = VL_RAND_RESET_I(1);
    vlSelf->iact_write_fin_clear = VL_RAND_RESET_I(1);
    vlSelf->weight_write_fin_clear = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->PE_disable[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->GLB_iact_read_addr[__Vi0][__Vi1] = VL_RAND_RESET_I(10);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->GLB_psum_write_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->GLB_psum_read_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->GLB_iact_address_in_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->GLB_iact_address_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->GLB_iact_address_in[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->GLB_iact_data_in_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->GLB_iact_data_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->GLB_iact_data_in[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->GLB_weight_address_in_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->GLB_weight_address_in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->GLB_weight_address_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->GLB_weight_data_in_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->GLB_weight_data_in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->GLB_weight_data_in[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->GLB_psum_0_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_0_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_0_data_in = VL_RAND_RESET_I(21);
    vlSelf->GLB_psum_0_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_0_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_0_data_out = VL_RAND_RESET_I(21);
    vlSelf->GLB_psum_1_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_1_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_1_data_in = VL_RAND_RESET_I(21);
    vlSelf->GLB_psum_1_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_1_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_1_data_out = VL_RAND_RESET_I(21);
    vlSelf->GLB_psum_2_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_2_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_2_data_in = VL_RAND_RESET_I(21);
    vlSelf->GLB_psum_2_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_2_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->GLB_psum_2_data_out = VL_RAND_RESET_I(21);
    vlSelf->router_iact_0_0_north_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_north_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_north_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_0_north_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_north_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_north_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_0_south_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_south_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_south_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_0_south_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_south_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_south_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_0_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_horiz_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_0_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_horiz_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_0_north_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_north_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_north_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_0_north_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_north_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_north_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_0_south_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_south_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_south_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_0_south_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_south_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_south_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_0_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_horiz_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_0_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_0_horiz_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_1_north_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_north_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_north_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_1_north_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_north_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_north_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_1_south_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_south_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_south_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_1_south_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_south_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_south_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_1_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_horiz_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_1_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_horiz_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_1_north_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_north_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_north_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_1_north_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_north_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_north_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_1_south_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_south_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_south_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_1_south_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_south_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_south_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_1_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_horiz_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_1_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_1_horiz_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_2_north_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_north_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_north_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_2_north_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_north_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_north_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_2_south_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_south_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_south_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_2_south_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_south_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_south_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_2_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_horiz_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_2_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_horiz_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_2_north_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_north_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_north_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_2_north_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_north_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_north_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_2_south_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_south_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_south_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_2_south_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_south_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_south_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_0_2_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_horiz_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_0_2_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_0_2_horiz_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_0_north_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_north_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_north_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_0_north_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_north_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_north_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_0_south_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_south_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_south_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_0_south_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_south_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_south_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_0_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_horiz_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_0_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_horiz_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_0_north_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_north_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_north_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_0_north_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_north_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_north_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_0_south_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_south_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_south_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_0_south_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_south_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_south_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_0_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_horiz_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_0_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_0_horiz_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_1_north_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_north_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_north_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_1_north_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_north_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_north_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_1_south_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_south_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_south_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_1_south_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_south_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_south_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_1_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_horiz_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_1_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_horiz_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_1_north_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_north_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_north_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_1_north_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_north_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_north_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_1_south_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_south_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_south_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_1_south_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_south_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_south_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_1_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_horiz_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_1_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_1_horiz_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_2_north_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_north_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_north_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_2_north_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_north_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_north_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_2_south_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_south_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_south_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_2_south_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_south_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_south_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_2_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_horiz_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_2_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_horiz_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_2_north_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_north_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_north_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_2_north_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_north_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_north_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_2_south_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_south_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_south_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_2_south_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_south_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_south_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_1_2_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_horiz_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_1_2_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_1_2_horiz_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_0_north_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_north_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_north_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_0_north_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_north_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_north_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_0_south_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_south_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_south_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_0_south_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_south_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_south_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_0_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_horiz_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_0_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_horiz_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_0_north_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_north_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_north_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_0_north_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_north_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_north_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_0_south_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_south_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_south_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_0_south_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_south_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_south_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_0_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_horiz_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_0_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_0_horiz_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_1_north_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_north_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_north_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_1_north_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_north_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_north_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_1_south_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_south_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_south_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_1_south_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_south_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_south_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_1_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_horiz_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_1_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_horiz_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_1_north_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_north_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_north_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_1_north_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_north_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_north_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_1_south_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_south_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_south_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_1_south_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_south_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_south_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_1_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_horiz_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_1_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_1_horiz_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_2_north_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_north_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_north_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_2_north_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_north_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_north_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_2_south_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_south_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_south_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_2_south_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_south_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_south_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_2_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_horiz_address_in = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_2_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_horiz_data_in = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_2_north_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_north_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_north_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_2_north_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_north_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_north_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_2_south_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_south_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_south_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_2_south_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_south_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_south_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_iact_2_2_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_horiz_address_out = VL_RAND_RESET_I(7);
    vlSelf->router_iact_2_2_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_iact_2_2_horiz_data_out = VL_RAND_RESET_I(16);
    vlSelf->router_weight_0_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_0_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_0_horiz_address_in = VL_RAND_RESET_I(8);
    vlSelf->router_weight_0_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_0_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_0_horiz_data_in = VL_RAND_RESET_I(13);
    vlSelf->router_weight_0_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_0_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_0_horiz_address_out = VL_RAND_RESET_I(8);
    vlSelf->router_weight_0_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_0_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_0_horiz_data_out = VL_RAND_RESET_I(13);
    vlSelf->router_weight_1_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_1_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_1_horiz_address_in = VL_RAND_RESET_I(8);
    vlSelf->router_weight_1_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_1_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_1_horiz_data_in = VL_RAND_RESET_I(13);
    vlSelf->router_weight_1_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_1_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_1_horiz_address_out = VL_RAND_RESET_I(8);
    vlSelf->router_weight_1_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_1_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_1_horiz_data_out = VL_RAND_RESET_I(13);
    vlSelf->router_weight_2_horiz_address_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_2_horiz_address_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_2_horiz_address_in = VL_RAND_RESET_I(8);
    vlSelf->router_weight_2_horiz_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_2_horiz_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_2_horiz_data_in = VL_RAND_RESET_I(13);
    vlSelf->router_weight_2_horiz_address_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_2_horiz_address_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_2_horiz_address_out = VL_RAND_RESET_I(8);
    vlSelf->router_weight_2_horiz_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_weight_2_horiz_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_weight_2_horiz_data_out = VL_RAND_RESET_I(13);
    vlSelf->router_psum_0_north_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_psum_0_north_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_psum_0_north_in = VL_RAND_RESET_I(21);
    vlSelf->router_psum_0_south_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_psum_0_south_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_psum_0_south_out = VL_RAND_RESET_I(21);
    vlSelf->router_psum_1_north_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_psum_1_north_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_psum_1_north_in = VL_RAND_RESET_I(21);
    vlSelf->router_psum_1_south_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_psum_1_south_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_psum_1_south_out = VL_RAND_RESET_I(21);
    vlSelf->router_psum_2_north_in_ready = VL_RAND_RESET_I(1);
    vlSelf->router_psum_2_north_in_valid = VL_RAND_RESET_I(1);
    vlSelf->router_psum_2_north_in = VL_RAND_RESET_I(21);
    vlSelf->router_psum_2_south_out_ready = VL_RAND_RESET_I(1);
    vlSelf->router_psum_2_south_out_valid = VL_RAND_RESET_I(1);
    vlSelf->router_psum_2_south_out = VL_RAND_RESET_I(21);
    vlSelf->cg_south_psum_0_in_ready = VL_RAND_RESET_I(1);
    vlSelf->cg_south_psum_0_in_valid = VL_RAND_RESET_I(1);
    vlSelf->cg_south_psum_0_in = VL_RAND_RESET_I(21);
    vlSelf->cg_south_psum_1_in_ready = VL_RAND_RESET_I(1);
    vlSelf->cg_south_psum_1_in_valid = VL_RAND_RESET_I(1);
    vlSelf->cg_south_psum_1_in = VL_RAND_RESET_I(21);
    vlSelf->cg_south_psum_2_in_ready = VL_RAND_RESET_I(1);
    vlSelf->cg_south_psum_2_in_valid = VL_RAND_RESET_I(1);
    vlSelf->cg_south_psum_2_in = VL_RAND_RESET_I(21);
    vlSelf->cg_north_psum_0_out_ready = VL_RAND_RESET_I(1);
    vlSelf->cg_north_psum_0_out_valid = VL_RAND_RESET_I(1);
    vlSelf->cg_north_psum_0_out = VL_RAND_RESET_I(21);
    vlSelf->cg_north_psum_1_out_ready = VL_RAND_RESET_I(1);
    vlSelf->cg_north_psum_1_out_valid = VL_RAND_RESET_I(1);
    vlSelf->cg_north_psum_1_out = VL_RAND_RESET_I(21);
    vlSelf->cg_north_psum_2_out_ready = VL_RAND_RESET_I(1);
    vlSelf->cg_north_psum_2_out_valid = VL_RAND_RESET_I(1);
    vlSelf->cg_north_psum_2_out = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__PECluster_iact_address_in_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__PECluster_iact_data_in_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__PECluster_psum_in_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__PECluster_psum_out_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__PECluster_psum_out[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PECluster_PE_disable[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->__PVT__PECluster_all_write_fin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PECluster_all_cal_fin = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__GLBCluster_iact_address_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__GLBCluster_iact_address_in[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__GLBCluster_iact_data_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__GLBCluster_iact_data_in[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__GLBCluster_iact_write_en[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__GLBCluster_iact_write_done[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__GLBCluster_iact_read_en[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__GLBCluster_iact_read_addr[__Vi0][__Vi1] = VL_RAND_RESET_I(10);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__GLBCluster_iact_read_done[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_GLB_address_in_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_GLB_address_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_GLB_address_in_bits[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_GLB_data_in_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_GLB_data_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_GLB_data_in_bits[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_north_address_in_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_north_data_in_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_south_address_in_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_south_data_in_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_horiz_address_in_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_horiz_data_in_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_PE_address_out_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_PE_address_out_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_PE_address_out_bits[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_PE_data_out_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_PE_data_out_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_PE_data_out_bits[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_north_address_out_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_north_data_out_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_south_address_out_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_south_data_out_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_horiz_address_out_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__iact_horiz_data_out_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->__PVT__cg_ctrl_GLB_psum_0_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cg_ctrl_GLB_psum_0_write_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cg_ctrl_GLB_psum_0_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cg_ctrl_GLB_psum_1_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cg_ctrl_GLB_psum_1_write_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cg_ctrl_GLB_psum_1_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cg_ctrl_GLB_psum_2_write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cg_ctrl_GLB_psum_2_write_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cg_ctrl_GLB_psum_2_read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__all_cal_fin_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_psum_in_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_psum_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_psum_in[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_psum_out_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_psum_out[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_iact_addr_in[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_iact_data_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_iact_data_in[__Vi0][__Vi1] = VL_RAND_RESET_I(13);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_weight_addr_in[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_weight_data_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_weight_data_in[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_psum_enq_en[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_do_load_en[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_cal_fin[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_iact_write_fin_clear[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_weight_write_fin_clear[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_write_fin[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_disable[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_cal_fin_reg[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__PVT__PE_Cluster_inst__DOT__pe_write_fin_reg[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__PE_Cluster_inst__DOT__psum_in_v_ext[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__PE_Cluster_inst__DOT__psum_in_d_ext[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__PE_Cluster_inst__DOT__psum_in_south_v[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__PE_Cluster_inst__DOT__psum_in_south_d[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->GLB_Cluster_inst__DOT____Vcellinp__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_count = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__write_shake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__0__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_count = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__write_shake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__1__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_count = VL_RAND_RESET_I(5);
    vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__write_shake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__doutb = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__GLB_Cluster_inst__DOT__PSUM_BANK__BRA__2__KET____DOT__u__DOT__Psum_Data_SRAM_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_0_read_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_1_read_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_0_2_read_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_0_read_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_1_read_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_1_2_read_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_0_read_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_1_read_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_2_2_read_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_0_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_1_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_2_write_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__CG_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__next_CG_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_write_en_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__psum_load_en_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_iact_all_write_fin = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Cluster_Group_Controller_inst__DOT__GLB_psum_all_load_fin = VL_RAND_RESET_I(1);
}
