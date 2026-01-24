// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_nv_ram_rws_16x256___ctor_var_reset(Vsim_nv_ram_rws_16x256* vlSelf);

Vsim_nv_ram_rws_16x256::Vsim_nv_ram_rws_16x256(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_nv_ram_rws_16x256___ctor_var_reset(this);
}

void Vsim_nv_ram_rws_16x256::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_nv_ram_rws_16x256::~Vsim_nv_ram_rws_16x256() {
}
