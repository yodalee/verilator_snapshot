// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_fp_sum_block___ctor_var_reset(Vsim_fp_sum_block* vlSelf);

Vsim_fp_sum_block::Vsim_fp_sum_block(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_fp_sum_block___ctor_var_reset(this);
}

void Vsim_fp_sum_block::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_fp_sum_block::~Vsim_fp_sum_block() {
}
