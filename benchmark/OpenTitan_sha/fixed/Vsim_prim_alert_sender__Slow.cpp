// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_alert_sender___ctor_var_reset(Vsim_prim_alert_sender* vlSelf);

Vsim_prim_alert_sender::Vsim_prim_alert_sender(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_prim_alert_sender___ctor_var_reset(this);
}

void Vsim_prim_alert_sender::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_prim_alert_sender::~Vsim_prim_alert_sender() {
}
