// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_rstmgr_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 28> Vsim_rstmgr_reg_pkg::__PVT__RSTMGR_PERMIT;


void Vsim_rstmgr_reg_pkg___ctor_var_reset(Vsim_rstmgr_reg_pkg* vlSelf);

Vsim_rstmgr_reg_pkg::Vsim_rstmgr_reg_pkg(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_rstmgr_reg_pkg___ctor_var_reset(this);
}

void Vsim_rstmgr_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_rstmgr_reg_pkg::~Vsim_rstmgr_reg_pkg() {
}
