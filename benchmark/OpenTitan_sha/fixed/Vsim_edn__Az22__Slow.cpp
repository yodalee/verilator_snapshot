// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_edn__Az22___ctor_var_reset(Vsim_edn__Az22* vlSelf);

Vsim_edn__Az22::Vsim_edn__Az22(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_edn__Az22___ctor_var_reset(this);
}

void Vsim_edn__Az22::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_edn__Az22::~Vsim_edn__Az22() {
}
