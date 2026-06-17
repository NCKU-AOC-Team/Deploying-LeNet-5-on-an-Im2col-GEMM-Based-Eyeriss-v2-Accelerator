// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP_integration.h for the primary calling header

#include "VTOP_integration__pch.h"
#include "VTOP_integration_ClusterGroup.h"
#include "VTOP_integration__Syms.h"

void VTOP_integration_ClusterGroup___ctor_var_reset(VTOP_integration_ClusterGroup* vlSelf);

VTOP_integration_ClusterGroup::VTOP_integration_ClusterGroup(VTOP_integration__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTOP_integration_ClusterGroup___ctor_var_reset(this);
}

void VTOP_integration_ClusterGroup::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTOP_integration_ClusterGroup::~VTOP_integration_ClusterGroup() {
}
