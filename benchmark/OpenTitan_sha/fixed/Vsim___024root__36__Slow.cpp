// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim___024root___ctor_var_reset_0(Vsim___024root* vlSelf);
VL_ATTR_COLD void Vsim___024root___ctor_var_reset_1(Vsim___024root* vlSelf);

VL_ATTR_COLD void Vsim___024root___ctor_var_reset(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsim___024root___ctor_var_reset_0(vlSelf);
    Vsim___024root___ctor_var_reset_1(vlSelf);
}
