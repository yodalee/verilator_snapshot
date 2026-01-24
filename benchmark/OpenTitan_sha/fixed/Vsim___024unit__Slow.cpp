// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
VlAssocArray<SData/*15:0*/, std::string> Vsim___024unit::__Venumtab_enum_name737;

void Vsim___024unit___ctor_var_reset(Vsim___024unit* vlSelf);

Vsim___024unit::Vsim___024unit(Vsim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim___024unit___ctor_var_reset(this);
}

void Vsim___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim___024unit::~Vsim___024unit() {
}
