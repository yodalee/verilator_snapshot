// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_rv_dm_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 3> Vsim_rv_dm_reg_pkg::__PVT__RV_DM_REGS_PERMIT;


void Vsim_rv_dm_reg_pkg___ctor_var_reset(Vsim_rv_dm_reg_pkg* vlSelf);

Vsim_rv_dm_reg_pkg::Vsim_rv_dm_reg_pkg(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_rv_dm_reg_pkg___ctor_var_reset(this);
}

void Vsim_rv_dm_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_rv_dm_reg_pkg::~Vsim_rv_dm_reg_pkg() {
}
