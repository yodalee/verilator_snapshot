// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_ibex_core__pi148
constexpr VlUnpacked<QData/*33:0*/, 16> Vsim_ibex_core__pi148::__PVT__PMPRstAddr;
constexpr VlUnpacked<IData/*31:0*/, 4> Vsim_ibex_core__pi148::__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_L;
constexpr VlUnpacked<IData/*31:0*/, 4> Vsim_ibex_core__pi148::__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_R;
constexpr VlUnpacked<IData/*31:0*/, 4> Vsim_ibex_core__pi148::__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__FLIP_MASK_L;
constexpr VlUnpacked<IData/*31:0*/, 4> Vsim_ibex_core__pi148::__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__FLIP_MASK_R;
constexpr VlUnpacked<QData/*33:0*/, 16> Vsim_ibex_core__pi148::__PVT__cs_registers_i__DOT__PMPRstAddr;


void Vsim_ibex_core__pi148___ctor_var_reset(Vsim_ibex_core__pi148* vlSelf);

Vsim_ibex_core__pi148::Vsim_ibex_core__pi148(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_ibex_core__pi148___ctor_var_reset(this);
}

void Vsim_ibex_core__pi148::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_ibex_core__pi148::~Vsim_ibex_core__pi148() {
}
