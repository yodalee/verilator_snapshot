// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_otp_ctrl_part_pkg
constexpr VlUnpacked<QData/*33:0*/, 11> Vsim_otp_ctrl_part_pkg::PartInfo;


void Vsim_otp_ctrl_part_pkg___ctor_var_reset(Vsim_otp_ctrl_part_pkg* vlSelf);

Vsim_otp_ctrl_part_pkg::Vsim_otp_ctrl_part_pkg(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_otp_ctrl_part_pkg___ctor_var_reset(this);
}

void Vsim_otp_ctrl_part_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_otp_ctrl_part_pkg::~Vsim_otp_ctrl_part_pkg() {
}
