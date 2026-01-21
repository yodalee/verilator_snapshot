// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_execute_if__N4___ctor_var_reset(Vsim_VX_execute_if__N4* vlSelf);

Vsim_VX_execute_if__N4::Vsim_VX_execute_if__N4(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_VX_execute_if__N4___ctor_var_reset(this);
}

void Vsim_VX_execute_if__N4::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_VX_execute_if__N4::~Vsim_VX_execute_if__N4() {
}
