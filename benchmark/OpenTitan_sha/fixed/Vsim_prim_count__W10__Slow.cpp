// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_count__W10___ctor_var_reset(Vsim_prim_count__W10* vlSelf);

Vsim_prim_count__W10::Vsim_prim_count__W10(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_prim_count__W10___ctor_var_reset(this);
}

void Vsim_prim_count__W10::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_prim_count__W10::~Vsim_prim_count__W10() {
}
