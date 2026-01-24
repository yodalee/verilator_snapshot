// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_otp_ctrl_ecc_reg__Db___ctor_var_reset(Vsim_otp_ctrl_ecc_reg__Db* vlSelf);

Vsim_otp_ctrl_ecc_reg__Db::Vsim_otp_ctrl_ecc_reg__Db(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_otp_ctrl_ecc_reg__Db___ctor_var_reset(this);
}

void Vsim_otp_ctrl_ecc_reg__Db::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_otp_ctrl_ecc_reg__Db::~Vsim_otp_ctrl_ecc_reg__Db() {
}
