// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_clkmgr_trans__Fz3___ctor_var_reset(Vsim_clkmgr_trans__Fz3* vlSelf);

Vsim_clkmgr_trans__Fz3::Vsim_clkmgr_trans__Fz3(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_clkmgr_trans__Fz3___ctor_var_reset(this);
}

void Vsim_clkmgr_trans__Fz3::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_clkmgr_trans__Fz3::~Vsim_clkmgr_trans__Fz3() {
}
