// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rws_256x512___ctor_var_reset(Vsim_nv_ram_rws_256x512* vlSelf);

Vsim_nv_ram_rws_256x512::Vsim_nv_ram_rws_256x512(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_nv_ram_rws_256x512___ctor_var_reset(this);
}

void Vsim_nv_ram_rws_256x512::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_nv_ram_rws_256x512::~Vsim_nv_ram_rws_256x512() {
}
