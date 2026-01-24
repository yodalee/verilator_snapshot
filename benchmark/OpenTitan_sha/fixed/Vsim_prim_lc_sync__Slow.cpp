// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_lc_sync___ctor_var_reset(Vsim_prim_lc_sync* vlSelf);

Vsim_prim_lc_sync::Vsim_prim_lc_sync(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_prim_lc_sync___ctor_var_reset(this);
}

void Vsim_prim_lc_sync::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_prim_lc_sync::~Vsim_prim_lc_sync() {
}
