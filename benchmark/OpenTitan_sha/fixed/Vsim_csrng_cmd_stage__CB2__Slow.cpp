// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_csrng_cmd_stage__CB2___ctor_var_reset(Vsim_csrng_cmd_stage__CB2* vlSelf);

Vsim_csrng_cmd_stage__CB2::Vsim_csrng_cmd_stage__CB2(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_csrng_cmd_stage__CB2___ctor_var_reset(this);
}

void Vsim_csrng_cmd_stage__CB2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_csrng_cmd_stage__CB2::~Vsim_csrng_cmd_stage__CB2() {
}
