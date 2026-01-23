// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_uart__Az2
constexpr VlUnpacked<IData/*31:0*/, 13> Vsim_uart__Az2::__PVT__RaclPolicySelVec;
constexpr VlUnpacked<IData/*31:0*/, 13> Vsim_uart__Az2::__PVT__u_reg__DOT__RaclPolicySelVec;


void Vsim_uart__Az2___ctor_var_reset(Vsim_uart__Az2* vlSelf);

Vsim_uart__Az2::Vsim_uart__Az2(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_uart__Az2___ctor_var_reset(this);
}

void Vsim_uart__Az2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_uart__Az2::~Vsim_uart__Az2() {
}
