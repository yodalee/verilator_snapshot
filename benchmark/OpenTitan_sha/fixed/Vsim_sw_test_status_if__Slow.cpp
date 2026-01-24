// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_sw_test_status_if___ctor_var_reset(Vsim_sw_test_status_if* vlSelf);

Vsim_sw_test_status_if::Vsim_sw_test_status_if(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_sw_test_status_if___ctor_var_reset(this);
}

void Vsim_sw_test_status_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_sw_test_status_if::~Vsim_sw_test_status_if() {
}
