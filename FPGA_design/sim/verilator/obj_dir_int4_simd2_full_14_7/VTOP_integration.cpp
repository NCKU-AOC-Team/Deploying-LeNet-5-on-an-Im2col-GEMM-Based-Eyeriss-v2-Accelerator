// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTOP_integration__pch.h"

//============================================================
// Constructors

VTOP_integration::VTOP_integration(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTOP_integration__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , int4_weight_mode{vlSymsp->TOP.int4_weight_mode}
    , ifmap_BRAM_wr_in{vlSymsp->TOP.ifmap_BRAM_wr_in}
    , ifmap_BRAM_dina_in{vlSymsp->TOP.ifmap_BRAM_dina_in}
    , result{vlSymsp->TOP.result}
    , __PVT__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0{vlSymsp->TOP.__PVT__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_0}
    , __PVT__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1{vlSymsp->TOP.__PVT__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_0_1}
    , __PVT__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0{vlSymsp->TOP.__PVT__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_0}
    , __PVT__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1{vlSymsp->TOP.__PVT__TOP_integration__DOT__TOP_interface_inst__DOT__TOP_inst__DOT__ClusterGroup_array__DOT__ClusterGroup_1_1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTOP_integration::VTOP_integration(const char* _vcname__)
    : VTOP_integration(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTOP_integration::~VTOP_integration() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTOP_integration___024root___eval_debug_assertions(VTOP_integration___024root* vlSelf);
#endif  // VL_DEBUG
void VTOP_integration___024root___eval_static(VTOP_integration___024root* vlSelf);
void VTOP_integration___024root___eval_initial(VTOP_integration___024root* vlSelf);
void VTOP_integration___024root___eval_settle(VTOP_integration___024root* vlSelf);
void VTOP_integration___024root___eval(VTOP_integration___024root* vlSelf);

void VTOP_integration::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTOP_integration::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTOP_integration___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTOP_integration___024root___eval_static(&(vlSymsp->TOP));
        VTOP_integration___024root___eval_initial(&(vlSymsp->TOP));
        VTOP_integration___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTOP_integration___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTOP_integration::eventsPending() { return false; }

uint64_t VTOP_integration::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTOP_integration::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTOP_integration___024root___eval_final(VTOP_integration___024root* vlSelf);

VL_ATTR_COLD void VTOP_integration::final() {
    VTOP_integration___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTOP_integration::hierName() const { return vlSymsp->name(); }
const char* VTOP_integration::modelName() const { return "VTOP_integration"; }
unsigned VTOP_integration::threads() const { return 1; }
void VTOP_integration::prepareClone() const { contextp()->prepareClone(); }
void VTOP_integration::atClone() const {
    contextp()->threadPoolpOnClone();
}
