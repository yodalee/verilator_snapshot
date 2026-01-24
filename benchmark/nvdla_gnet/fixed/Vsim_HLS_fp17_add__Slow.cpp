// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp17_add___ctor_var_reset(Vsim_HLS_fp17_add* vlSelf);

Vsim_HLS_fp17_add::Vsim_HLS_fp17_add(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_HLS_fp17_add___ctor_var_reset(this);
}

void Vsim_HLS_fp17_add::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_HLS_fp17_add::~Vsim_HLS_fp17_add() {
}
