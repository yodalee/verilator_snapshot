// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

// Parameter definitions for Vsim_pwm_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 23> Vsim_pwm_reg_pkg::__PVT__PWM_PERMIT;


void Vsim_pwm_reg_pkg___ctor_var_reset(Vsim_pwm_reg_pkg* vlSelf);

Vsim_pwm_reg_pkg::Vsim_pwm_reg_pkg(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_pwm_reg_pkg___ctor_var_reset(this);
}

void Vsim_pwm_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_pwm_reg_pkg::~Vsim_pwm_reg_pkg() {
}
