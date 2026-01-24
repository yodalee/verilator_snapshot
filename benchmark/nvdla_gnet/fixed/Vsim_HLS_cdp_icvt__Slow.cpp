// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_cdp_icvt___ctor_var_reset(Vsim_HLS_cdp_icvt* vlSelf);

Vsim_HLS_cdp_icvt::Vsim_HLS_cdp_icvt(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_HLS_cdp_icvt___ctor_var_reset(this);
}

void Vsim_HLS_cdp_icvt::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_HLS_cdp_icvt::~Vsim_HLS_cdp_icvt() {
}
