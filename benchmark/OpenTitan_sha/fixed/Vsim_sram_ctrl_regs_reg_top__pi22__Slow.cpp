// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_sram_ctrl_regs_reg_top__pi22
constexpr VlUnpacked<IData/*31:0*/, 9> Vsim_sram_ctrl_regs_reg_top__pi22::__PVT__RaclPolicySelVec;


void Vsim_sram_ctrl_regs_reg_top__pi22___ctor_var_reset(Vsim_sram_ctrl_regs_reg_top__pi22* vlSelf);

Vsim_sram_ctrl_regs_reg_top__pi22::Vsim_sram_ctrl_regs_reg_top__pi22(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_sram_ctrl_regs_reg_top__pi22___ctor_var_reset(this);
}

void Vsim_sram_ctrl_regs_reg_top__pi22::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_sram_ctrl_regs_reg_top__pi22::~Vsim_sram_ctrl_regs_reg_top__pi22() {
}
