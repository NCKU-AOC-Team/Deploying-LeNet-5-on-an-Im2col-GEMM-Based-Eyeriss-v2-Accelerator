// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration___024root.h"

VL_ATTR_COLD void VTOP_integration___024root___eval_static(VTOP_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP_integration___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VTOP_integration___024root___eval_initial__TOP(VTOP_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP_integration___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_PE_disable[0U][0U] = 0U;
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_PE_disable[0U][1U] = 0U;
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_PE_disable[0U][2U] = 0U;
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_PE_disable[1U][0U] = 0U;
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_PE_disable[1U][1U] = 0U;
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_PE_disable[1U][2U] = 0U;
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_PE_disable[2U][0U] = 0U;
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_PE_disable[2U][1U] = 0U;
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_PE_disable[2U][2U] = 0U;
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_PE_disable[0U][0U] = 0U;
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_PE_disable[0U][1U] = 0U;
    vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_PE_disable[0U][2U] = 0U;
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x69676874U;
    __Vtemp_1[2U] = 0x655f7765U;
    __Vtemp_1[3U] = 0x70617273U;
    __Vtemp_1[4U] = 0x6f6d5f73U;
    __Vtemp_1[5U] = 0x72U;
    VL_READMEM_N(true, 16, 65536, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 ,  &(vlSelfRef.TOP_integration__DOT__TOP_interface_inst__DOT__ROM_weight_inst__DOT__mem)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP_integration___024root___dump_triggers__stl(VTOP_integration___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTOP_integration___024root___eval_phase__stl(VTOP_integration___024root* vlSelf);

VL_ATTR_COLD void VTOP_integration___024root___eval_settle(VTOP_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP_integration___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTOP_integration___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../src/TOP/TOP_integration.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTOP_integration___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP_integration___024root___dump_triggers__stl(VTOP_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP_integration___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((0x40ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
    if ((0x80ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((0x100ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((0x200ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
    if ((0x400ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((0x800ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP_integration___024root___eval_triggers__stl(VTOP_integration___024root* vlSelf);
VL_ATTR_COLD void VTOP_integration___024root___eval_stl(VTOP_integration___024root* vlSelf);

VL_ATTR_COLD bool VTOP_integration___024root___eval_phase__stl(VTOP_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP_integration___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTOP_integration___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTOP_integration___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP_integration___024root___dump_triggers__ico(VTOP_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP_integration___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP_integration___024root___dump_triggers__act(VTOP_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP_integration___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP_integration___024root___dump_triggers__nba(VTOP_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP_integration___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_0.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_0_1.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_0.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.pe_psum_in_valid)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.pe_psum_in)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] TOP_integration.TOP_interface_inst.TOP_inst.ClusterGroup_array.ClusterGroup_1_1.PE_Cluster_inst.pe_psum_out_ready)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTOP_integration___024root___ctor_var_reset(VTOP_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP_integration___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->int4_weight_mode = VL_RAND_RESET_I(1);
    vlSelf->ifmap_BRAM_wr_in = VL_RAND_RESET_I(1);
    vlSelf->ifmap_BRAM_dina_in = VL_RAND_RESET_I(8);
    vlSelf->result = VL_RAND_RESET_I(4);
    vlSelf->TOP_integration__DOT__ifmap_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__system_enable_temp = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__ifmap_write_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__system_enable = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__DRAM_read_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__ifmap_BRAM_addra = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__ifmap_BRAM_douta = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__iact_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__weight_addr_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__weight_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__MEM_read_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__MEM_read_addr = VL_RAND_RESET_I(16);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__ROM_data_out = VL_RAND_RESET_I(16);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__ROM_read_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__ROM_read_addr = VL_RAND_RESET_I(16);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__ROM_weight_data_flag = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__ROM_weight_addr_flag = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_PE_disable[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_GLB_iact_read_addr[__Vi0][__Vi1] = VL_RAND_RESET_I(10);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_GLB_psum_write_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_GLB_psum_read_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_GLB_iact_address_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_GLB_iact_address_in[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_GLB_iact_data_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_GLB_iact_data_in[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_GLB_weight_address_in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_GLB_weight_address_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_GLB_weight_data_in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_0_GLB_weight_data_in[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_1_PE_disable[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_1_GLB_iact_read_addr[__Vi0][__Vi1] = VL_RAND_RESET_I(10);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_1_GLB_psum_write_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_1_GLB_psum_read_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_1_GLB_iact_address_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_1_GLB_iact_address_in[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_1_GLB_iact_data_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_0_1_GLB_iact_data_in[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_PE_disable[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_GLB_iact_read_addr[__Vi0][__Vi1] = VL_RAND_RESET_I(10);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_GLB_psum_write_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_GLB_psum_read_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_GLB_iact_address_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_GLB_iact_address_in[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_GLB_iact_data_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_GLB_iact_data_in[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_GLB_weight_address_in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_GLB_weight_address_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_GLB_weight_data_in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_0_GLB_weight_data_in[__Vi0] = VL_RAND_RESET_I(13);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_1_PE_disable[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_1_GLB_iact_read_addr[__Vi0][__Vi1] = VL_RAND_RESET_I(10);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_1_GLB_psum_write_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_1_GLB_psum_read_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_1_GLB_iact_address_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_1_GLB_iact_address_in[__Vi0][__Vi1] = VL_RAND_RESET_I(7);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_1_GLB_iact_data_in_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CG_1_1_GLB_iact_data_in[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_read_psum_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_convert_one_stream_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__csc_iact_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__csc_iact_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__csc_iact_data_in = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__csc_iact_one_vector_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__csc_weight_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__csc_weight_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__csc_weight_data_in = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ReLU_data_out = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__pool_data_in = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__pool_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_SRAM_out_acc_data_out = VL_RAND_RESET_I(21);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_SRAM_out_acc_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__softmax_data_in = VL_RAND_RESET_I(21);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__softmax_data_out = VL_RAND_RESET_I(4);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__softmax_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_csc_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_conv_flag = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_fc_flag = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_former_weight_mode_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__int4_later_weight_mode_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_layer_count = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_ReLU_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_psum_acc_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_psum_SRAM_out_acc_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_GLB_psum_0_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_GLB_psum_1_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_GLB_psum_2_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_GLB_psum_0_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_GLB_psum_1_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_GLB_psum_2_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_GLB_psum_0_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_GLB_psum_1_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_GLB_psum_2_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_1_GLB_psum_0_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_1_GLB_psum_1_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_1_GLB_psum_2_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_src_GLB_load_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_cg_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_0_read_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_1_read_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_SRAM_Bank_2_read_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_GLB_psum_0_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_GLB_psum_1_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_GLB_psum_2_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_psum_spad_clear = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_iact_write_fin_clear = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_0_weight_write_fin_clear = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_src_GLB_load_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_0_read_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_1_read_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_psum_SRAM_Bank_2_read_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_GLB_psum_0_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_GLB_psum_1_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_0_1_GLB_psum_2_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_src_GLB_load_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_psum_SRAM_Bank_0_read_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_GLB_psum_0_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_GLB_psum_1_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_0_GLB_psum_2_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_1_src_GLB_load_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_1_GLB_psum_0_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_1_GLB_psum_1_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CG_1_1_GLB_psum_2_write_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CSC_encoder_iact_matrix_height = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_CSC_encoder_weight_matrix_height = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_im2col_enable = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_psum_rearrange_write_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_psum_rearrange_write_addr = VL_RAND_RESET_I(12);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_psum_rearrange_read_addr = VL_RAND_RESET_I(12);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ctrl_pool_enable = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__weight_addr_end = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__weight_data_end = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__csc_addr_end = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__GLB_psum_out = VL_RAND_RESET_I(21);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__CG_0_0_psum_acc_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_converter__DOT__weight_row_counter = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_converter__DOT__ofmap_col_counter = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_converter__DOT__ofmap_row_counter = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_converter__DOT__ifmap_col_counter = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_converter__DOT__convert_one_vector_done_dly0 = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_converter__DOT__convert_one_vector_done_dly1 = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_converter__DOT__convert_one_vector_done_dly2 = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_converter__DOT__ofmap_col_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_converter__DOT__weight_row_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_converter__DOT__ofmap_row_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__im2col_converter__DOT__ifmap_col_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__data_in_FIFO_data_in = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__data_in_FIFO_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__data_in_FIFO_data_out = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__address_out_FIFO_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__address_out_FIFO_data_in = VL_RAND_RESET_I(7);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__data_out_FIFO_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__data_out_FIFO_data_in = VL_RAND_RESET_I(12);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__csc_count = VL_RAND_RESET_I(4);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__csc_address = VL_RAND_RESET_I(7);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__column_counter = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__zero_col = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__one_vector_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__end_flag_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__first_col_flag = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__zero_count = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__one_col_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__out_data_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_in_FIFO__DOT__Buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_in_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_in_FIFO__DOT__Buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_in_FIFO__DOT__Buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_in_FIFO__DOT__Buffer_write_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_in_FIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_in_FIFO__DOT__data_in_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_in_FIFO__DOT__data_out_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Address_out_FIFO__DOT__Buffer[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Address_out_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Address_out_FIFO__DOT__Buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Address_out_FIFO__DOT__Buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Address_out_FIFO__DOT__Buffer_write_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Address_out_FIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Address_out_FIFO__DOT__data_in_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Address_out_FIFO__DOT__data_out_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_out_FIFO__DOT__Buffer[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_out_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_out_FIFO__DOT__Buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_out_FIFO__DOT__Buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_out_FIFO__DOT__Buffer_write_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_out_FIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_out_FIFO__DOT__data_in_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_iact__DOT__Data_out_FIFO__DOT__data_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__data_in_FIFO_data_in = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__data_in_FIFO_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__data_in_FIFO_data_out = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__address_out_FIFO_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__address_out_FIFO_data_in = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__data_out_FIFO_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__data_out_FIFO_data_in = VL_RAND_RESET_I(13);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__csc_count = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__csc_address = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__column_counter = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__zero_col = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__one_vector_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__end_flag_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__first_col_flag = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__zero_count = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__one_col_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__out_data_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_in_FIFO__DOT__Buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_in_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_in_FIFO__DOT__Buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_in_FIFO__DOT__Buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_in_FIFO__DOT__Buffer_write_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_in_FIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_in_FIFO__DOT__data_in_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_in_FIFO__DOT__data_out_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Address_out_FIFO__DOT__Buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Address_out_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Address_out_FIFO__DOT__Buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Address_out_FIFO__DOT__Buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Address_out_FIFO__DOT__Buffer_write_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Address_out_FIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Address_out_FIFO__DOT__data_in_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Address_out_FIFO__DOT__data_out_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_out_FIFO__DOT__Buffer[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_out_FIFO__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_out_FIFO__DOT__Buffer_write_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_out_FIFO__DOT__Buffer_read_addr = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_out_FIFO__DOT__Buffer_write_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_out_FIFO__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_out_FIFO__DOT__data_in_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__CSC_Encoder_weight__DOT__Data_out_FIFO__DOT__data_out_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_rearrange__DOT__Psum_Rearrange_BRAM_inst__DOT__wr = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_rearrange__DOT__Psum_Rearrange_BRAM_inst__DOT__addra = VL_RAND_RESET_I(12);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_rearrange__DOT__Psum_Rearrange_BRAM_inst__DOT__doutb = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_rearrange__DOT__Psum_Rearrange_BRAM_inst__DOT__clear_count = VL_RAND_RESET_I(12);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_rearrange__DOT__Psum_Rearrange_BRAM_inst__DOT__clear_flag = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_rearrange__DOT__Psum_Rearrange_BRAM_inst__DOT__u0__DOT__u__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__Streaming_Max_pooling__DOT__line_buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__Streaming_Max_pooling__DOT__top_left = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__Streaming_Max_pooling__DOT__current_left = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__Streaming_Max_pooling__DOT__row_count = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__Streaming_Max_pooling__DOT__col_count = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__Streaming_Max_pooling__DOT__top_value = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__Streaming_Max_pooling__DOT__max_top = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__Streaming_Max_pooling__DOT__max_bottom = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__Streaming_Max_pooling__DOT__accept = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__Streaming_Max_pooling__DOT__end_of_row = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__Streaming_Max_pooling__DOT____Vlvbound_h9b7055a4__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_SRAM_out_acc__DOT__Buffer[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_SRAM_out_acc__DOT__idx = VL_RAND_RESET_I(4);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_SRAM_out_acc__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_SRAM_out_acc__DOT__en_pulse_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_SRAM_out_acc__DOT__data_in_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__psum_SRAM_out_acc__DOT____Vlvbound_hce32e949__0 = VL_RAND_RESET_I(21);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__softmax__DOT__data_idx = VL_RAND_RESET_I(4);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__softmax__DOT__max_data_temp = VL_RAND_RESET_I(21);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__softmax__DOT__max_data_idx_temp = VL_RAND_RESET_I(4);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__softmax__DOT__data_in_en = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__softmax__DOT__end_flag = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__next_state = VL_RAND_RESET_I(6);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER0_LOAD_GLB_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER1_LOAD_GLB_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER0_CAL_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER1_CAL_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER2_CAL_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER3_CAL_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER4_CAL_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__dbg_ifmap_load_cycles = VL_RAND_RESET_I(32);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__dbg_glb_load_cycles = VL_RAND_RESET_I(32);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__dbg_pe_load_cycles = VL_RAND_RESET_I(32);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__dbg_conv_mac_cycles = VL_RAND_RESET_I(32);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__dbg_fc1_mac_cycles = VL_RAND_RESET_I(32);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__dbg_fc2_mac_cycles = VL_RAND_RESET_I(32);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__dbg_fc3_mac_cycles = VL_RAND_RESET_I(32);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__dbg_psum_acc_cycles = VL_RAND_RESET_I(32);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__dbg_output_cycles = VL_RAND_RESET_I(32);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__dbg_mem_read_cycles = VL_RAND_RESET_I(32);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER0_PSUM_ACC_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER1_PSUM_ACC_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER0_READ_OUT_PSUM_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER1_READ_OUT_PSUM_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER2_READ_OUT_PSUM_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER3_READ_OUT_PSUM_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER4_READ_OUT_PSUM_wire = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_rearrange_read_addr_reg = VL_RAND_RESET_I(12);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__csc_en_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__fc_weight_read_batch = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_iact_en_sel = VL_RAND_RESET_I(6);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__ifmap_load_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_acc_times = VL_RAND_RESET_I(8);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__pool_row_count = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__pool_col_count = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__pool_ofmap_row_count = VL_RAND_RESET_I(4);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__pool_cleanup_count = VL_RAND_RESET_I(6);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__read_out_psum_count = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__read_out_psum_sel = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__read_out_psum_iter = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__read_out_psum_channel = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__first_iter_read_GLB_iact = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__second_iter_read_GLB_iact = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__third_iter_read_GLB_iact = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__layer_done_count = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__layer_iter_fin_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_acc_state_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__pool_state_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_0_0_GLB_psum_0_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_0_0_GLB_psum_1_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_0_0_GLB_psum_2_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_0_1_GLB_psum_0_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_0_1_GLB_psum_1_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_0_1_GLB_psum_2_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_1_0_GLB_psum_0_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_1_0_GLB_psum_1_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_1_0_GLB_psum_2_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_1_1_GLB_psum_0_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_1_1_GLB_psum_1_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__CG_1_1_GLB_psum_2_read_addr_reg = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__im2col_convert_one_stream_done_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_read_out_channel = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_iact_read_addr = VL_RAND_RESET_I(10);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_iact_load_batch = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_iact_load_channel = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_iact_load_iter = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_weight_load_channel = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_weight_load_end_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_read_out_oen_channel_read_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__read_out_psum_later_flag = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__fc_psum_rearrange_read_count = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__fc_psum_rearrange_read_channel = VL_RAND_RESET_I(5);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_psum_read_channel = VL_RAND_RESET_I(2);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_psum_read_batch = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_psum_read_sel = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_psum_read_sel_reg = VL_RAND_RESET_I(3);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER2_READ_OUT_PSUM_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER3_READ_OUT_PSUM_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__LAYER4_READ_OUT_PSUM_reg = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_SRAM_out_acc_en_dly0 = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_SRAM_out_acc_en_dly1 = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_SRAM_out_acc_en_dly2 = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__fc_channel_acc_count = VL_RAND_RESET_I(4);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__csc_en_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_psum_read_channel_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_psum_read_batch_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__GLB_psum_read_sel_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_acc_pulse = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__pool_pulse = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__layer_iter_fin_pulse = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__ifmap_load_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__pool_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__read_out_psum_iter_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__read_out_psum_channel_done = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__layer_iter_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__layer_1_former_iter_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__read_out_psum_sets = VL_RAND_RESET_I(4);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__read_out_psum_iters = VL_RAND_RESET_I(4);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__pool_ofmap_rows = VL_RAND_RESET_I(4);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__load_PE_start = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__read_out_psum_former_fin = VL_RAND_RESET_I(1);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__psum_depth = VL_RAND_RESET_I(6);
    vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__TOP_controller__DOT__read_out_psum_iter_next_base = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->TOP_integration__DOT__TOP_interface_inst__DOT__ROM_weight_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TOP_integration__DOT__u0__DOT__u__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0____PVT__PE_Cluster_inst__DOT__pe_psum_in_valid__0[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0____PVT__PE_Cluster_inst__DOT__pe_psum_in__0[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0____PVT__PE_Cluster_inst__DOT__pe_psum_out_ready__0[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1____PVT__PE_Cluster_inst__DOT__pe_psum_in_valid__0[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1____PVT__PE_Cluster_inst__DOT__pe_psum_in__0[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1____PVT__PE_Cluster_inst__DOT__pe_psum_out_ready__0[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0____PVT__PE_Cluster_inst__DOT__pe_psum_in_valid__0[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0____PVT__PE_Cluster_inst__DOT__pe_psum_in__0[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0____PVT__PE_Cluster_inst__DOT__pe_psum_out_ready__0[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1____PVT__PE_Cluster_inst__DOT__pe_psum_in_valid__0[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1____PVT__PE_Cluster_inst__DOT__pe_psum_in__0[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1____PVT__PE_Cluster_inst__DOT__pe_psum_out_ready__0[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0____PVT__PE_Cluster_inst__DOT__pe_psum_in_valid__1[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0____PVT__PE_Cluster_inst__DOT__pe_psum_in__1[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0____PVT__PE_Cluster_inst__DOT__pe_psum_out_ready__1[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1____PVT__PE_Cluster_inst__DOT__pe_psum_in_valid__1[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1____PVT__PE_Cluster_inst__DOT__pe_psum_in__1[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1____PVT__PE_Cluster_inst__DOT__pe_psum_out_ready__1[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0____PVT__PE_Cluster_inst__DOT__pe_psum_in_valid__1[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0____PVT__PE_Cluster_inst__DOT__pe_psum_in__1[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0____PVT__PE_Cluster_inst__DOT__pe_psum_out_ready__1[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1____PVT__PE_Cluster_inst__DOT__pe_psum_in_valid__1[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1____PVT__PE_Cluster_inst__DOT__pe_psum_in__1[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vtrigprevexpr___TOP__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1____PVT__PE_Cluster_inst__DOT__pe_psum_out_ready__1[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
