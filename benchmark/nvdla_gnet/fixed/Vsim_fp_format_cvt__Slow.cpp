// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_fp_format_cvt___ctor_var_reset(Vsim_fp_format_cvt* vlSelf);

Vsim_fp_format_cvt::Vsim_fp_format_cvt(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_fp_format_cvt___ctor_var_reset(this);
}

void Vsim_fp_format_cvt::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_fp_format_cvt::~Vsim_fp_format_cvt() {
}
