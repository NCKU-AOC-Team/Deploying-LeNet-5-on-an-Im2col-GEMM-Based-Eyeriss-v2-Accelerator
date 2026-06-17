// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_ClusterGroup.h"
#include "VTOP_integration_ProcessingElement.h"

VL_INLINE_OPT void VTOP_integration_ClusterGroup___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__0(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___ico_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[0U][0U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[0U][1U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[0U][2U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[1U][0U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[1U][1U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[1U][2U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[2U][0U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[2U][1U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_cal_fin[2U][2U] 
        = ((IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__PE_pad_cal_fin) 
           & (2U == (IData)(vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__Processing_Element_Controller_inst__DOT__PE_state)));
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__1(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__1\n"); );
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
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__3(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PECluster_psum_out[0U] = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [0U][0U];
    vlSelfRef.__PVT__PECluster_psum_out[1U] = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [0U][1U];
    vlSelfRef.__PVT__PECluster_psum_out[2U] = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [0U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[0U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[1U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [2U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[0U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[1U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [2U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[0U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [1U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[1U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [2U][2U];
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__2(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___act_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[0U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[0U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[0U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__0__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[1U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[1U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[1U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__1__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[2U][0U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__0__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[2U][1U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__1__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out[2U][2U] 
        = vlSelf->__PVT__PE_Cluster_inst__DOT__PE_INST_R__BRA__2__KET____DOT__PE_INST_C__BRA__2__KET____DOT__pe->__PVT__psum_out;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[0U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [1U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[1U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [2U][0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[0U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [1U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[1U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [2U][1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[0U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [1U][2U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_in[1U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [2U][2U];
    vlSelfRef.__PVT__PECluster_psum_out[0U] = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [0U][0U];
    vlSelfRef.__PVT__PECluster_psum_out[1U] = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [0U][1U];
    vlSelfRef.__PVT__PECluster_psum_out[2U] = vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out
        [0U][2U];
}
