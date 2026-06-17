// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_ClusterGroup.h"
#include "VTOP_integration_Iact_SRAM_Bank.h"
#include "VTOP_integration__Syms.h"

extern const VlUnpacked<CData/*2:0*/, 1024> VTOP_integration__ConstPool__TABLE_h1b959610_0;

VL_INLINE_OPT void VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__1(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en));
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[0U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[1U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[2U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready;
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
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
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
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__1(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    // Body
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en));
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[0U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[1U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[2U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready;
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
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
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
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__1(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    // Body
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
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en));
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[0U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[1U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[2U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready;
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
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
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
}

VL_INLINE_OPT void VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__1(VTOP_integration_ClusterGroup* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTOP_integration_ClusterGroup___nba_sequent__TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtableidx76;
    __Vtableidx76 = 0;
    // Body
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
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_read_en = ((IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_0_write_en));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_1_write_en));
    vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready 
        = ((5U == (IData)(vlSymsp->TOP.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state)) 
           & (IData)(vlSelfRef.__PVT__cg_ctrl_GLB_psum_2_write_en));
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[0U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__0__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[1U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__1__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][0U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__0__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][1U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__1__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__iact_GLB_address_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_addr_SRAM_inst__DOT__Iact_Addr_SRAM_BRAM_inst__DOT__doutb;
    vlSelfRef.__PVT__iact_GLB_data_in_bits[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_SRAM_inst__DOT__Iact_Data_SRAM_BRAM_inst__DOT__doutb_reg;
    vlSelfRef.__PVT__iact_GLB_address_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_address_out_valid;
    vlSelfRef.__PVT__iact_GLB_data_in_valid[2U][2U] 
        = vlSelf->__PVT__GLB_Cluster_inst__DOT__IACT_BANK_R__BRA__2__KET____DOT__IACT_BANK__BRA__2__KET____DOT__u->__PVT__iact_data_out_valid;
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
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[0U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__0__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[1U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__1__KET____DOT__u__psum_data_in_ready;
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext[2U] 
        = vlSelfRef.GLB_Cluster_inst__DOT____Vcellout__PSUM_BANK__BRA__2__KET____DOT__u__psum_data_in_ready;
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
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][0U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [0U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][1U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
        [1U];
    vlSelfRef.__PVT__PE_Cluster_inst__DOT__pe_psum_out_ready[0U][2U] 
        = vlSelfRef.__PVT__PE_Cluster_inst__DOT__psum_out_rdy_ext
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
}
