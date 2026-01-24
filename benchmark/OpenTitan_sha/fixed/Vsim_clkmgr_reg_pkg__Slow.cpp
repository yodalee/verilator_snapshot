// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_clkmgr_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 22> Vsim_clkmgr_reg_pkg::__PVT__CLKMGR_PERMIT;


void Vsim_clkmgr_reg_pkg___ctor_var_reset(Vsim_clkmgr_reg_pkg* vlSelf);

Vsim_clkmgr_reg_pkg::Vsim_clkmgr_reg_pkg(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_clkmgr_reg_pkg___ctor_var_reset(this);
}

void Vsim_clkmgr_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_clkmgr_reg_pkg::~Vsim_clkmgr_reg_pkg() {
}
