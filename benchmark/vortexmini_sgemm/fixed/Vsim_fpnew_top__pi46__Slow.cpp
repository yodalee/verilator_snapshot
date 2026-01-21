// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_fpnew_top__pi46___ctor_var_reset(Vsim_fpnew_top__pi46* vlSelf);

Vsim_fpnew_top__pi46::Vsim_fpnew_top__pi46(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_fpnew_top__pi46___ctor_var_reset(this);
}

void Vsim_fpnew_top__pi46::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_fpnew_top__pi46::~Vsim_fpnew_top__pi46() {
}
