// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_ibex_pkg
constexpr VlUnpacked<QData/*33:0*/, 16> Vsim_ibex_pkg::__PVT__PmpAddrRst;


void Vsim_ibex_pkg___ctor_var_reset(Vsim_ibex_pkg* vlSelf);

Vsim_ibex_pkg::Vsim_ibex_pkg(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_ibex_pkg___ctor_var_reset(this);
}

void Vsim_ibex_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_ibex_pkg::~Vsim_ibex_pkg() {
}
