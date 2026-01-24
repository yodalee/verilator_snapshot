// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_sha3_pkg
constexpr VlUnpacked<IData/*31:0*/, 5> Vsim_sha3_pkg::__PVT__KeccakRate;
constexpr VlUnpacked<IData/*31:0*/, 5> Vsim_sha3_pkg::__PVT__KeccakBitCapacity;


void Vsim_sha3_pkg___ctor_var_reset(Vsim_sha3_pkg* vlSelf);

Vsim_sha3_pkg::Vsim_sha3_pkg(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_sha3_pkg___ctor_var_reset(this);
}

void Vsim_sha3_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_sha3_pkg::~Vsim_sha3_pkg() {
}
