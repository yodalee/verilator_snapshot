// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_lc_ctrl_regs_reg_top___ctor_var_reset(Vsim_lc_ctrl_regs_reg_top* vlSelf);

Vsim_lc_ctrl_regs_reg_top::Vsim_lc_ctrl_regs_reg_top(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_lc_ctrl_regs_reg_top___ctor_var_reset(this);
}

void Vsim_lc_ctrl_regs_reg_top::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_lc_ctrl_regs_reg_top::~Vsim_lc_ctrl_regs_reg_top() {
}
