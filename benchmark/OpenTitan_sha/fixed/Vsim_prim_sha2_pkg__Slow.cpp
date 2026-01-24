// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_prim_sha2_pkg
constexpr VlUnpacked<IData/*31:0*/, 8> Vsim_prim_sha2_pkg::InitHash_256;
constexpr VlUnpacked<QData/*63:0*/, 8> Vsim_prim_sha2_pkg::InitHash_384;
constexpr VlUnpacked<QData/*63:0*/, 8> Vsim_prim_sha2_pkg::InitHash_512;
constexpr VlUnpacked<IData/*31:0*/, 64> Vsim_prim_sha2_pkg::CubicRootPrime256;
constexpr VlUnpacked<QData/*63:0*/, 80> Vsim_prim_sha2_pkg::CubicRootPrime512;


void Vsim_prim_sha2_pkg___ctor_var_reset(Vsim_prim_sha2_pkg* vlSelf);

Vsim_prim_sha2_pkg::Vsim_prim_sha2_pkg(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_prim_sha2_pkg___ctor_var_reset(this);
}

void Vsim_prim_sha2_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_prim_sha2_pkg::~Vsim_prim_sha2_pkg() {
}
