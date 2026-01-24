// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_aes_sbox_canright_pkg
constexpr VlUnpacked<CData/*7:0*/, 8> Vsim_aes_sbox_canright_pkg::A2X;
constexpr VlUnpacked<CData/*7:0*/, 8> Vsim_aes_sbox_canright_pkg::__PVT__X2A;
constexpr VlUnpacked<CData/*7:0*/, 8> Vsim_aes_sbox_canright_pkg::X2S;
constexpr VlUnpacked<CData/*7:0*/, 8> Vsim_aes_sbox_canright_pkg::__PVT__S2X;


void Vsim_aes_sbox_canright_pkg___ctor_var_reset(Vsim_aes_sbox_canright_pkg* vlSelf);

Vsim_aes_sbox_canright_pkg::Vsim_aes_sbox_canright_pkg(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_aes_sbox_canright_pkg___ctor_var_reset(this);
}

void Vsim_aes_sbox_canright_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_aes_sbox_canright_pkg::~Vsim_aes_sbox_canright_pkg() {
}
