// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_flash_ctrl_pkg
constexpr VlUnpacked<IData/*31:0*/, 3> Vsim_flash_ctrl_pkg::__PVT__InfoTypeSize;
constexpr VlUnpacked<CData/*7:0*/, 3> Vsim_flash_ctrl_pkg::InfoPartitionEndAddr;
constexpr VlUnpacked<SData/*10:0*/, 2> Vsim_flash_ctrl_pkg::SeedInfoPageSel;
constexpr VlUnpacked<IData/*21:0*/, 5> Vsim_flash_ctrl_pkg::RmaWipeEntries;


void Vsim_flash_ctrl_pkg___ctor_var_reset(Vsim_flash_ctrl_pkg* vlSelf);

Vsim_flash_ctrl_pkg::Vsim_flash_ctrl_pkg(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_flash_ctrl_pkg___ctor_var_reset(this);
}

void Vsim_flash_ctrl_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_flash_ctrl_pkg::~Vsim_flash_ctrl_pkg() {
}
