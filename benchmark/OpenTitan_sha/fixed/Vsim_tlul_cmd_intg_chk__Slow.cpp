// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_tlul_cmd_intg_chk___ctor_var_reset(Vsim_tlul_cmd_intg_chk* vlSelf);

Vsim_tlul_cmd_intg_chk::Vsim_tlul_cmd_intg_chk(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_tlul_cmd_intg_chk___ctor_var_reset(this);
}

void Vsim_tlul_cmd_intg_chk::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_tlul_cmd_intg_chk::~Vsim_tlul_cmd_intg_chk() {
}
