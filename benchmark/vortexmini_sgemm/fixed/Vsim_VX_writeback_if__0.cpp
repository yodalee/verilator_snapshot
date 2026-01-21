// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_writeback_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__writeback_if__BRA__0__KET____0(Vsim_VX_writeback_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_writeback_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__writeback_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid = ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__commit__DOT__genblk1__BRA__0__KET____DOT__commit_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r) 
                       & (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__commit__DOT__genblk1__BRA__0__KET____DOT__commit_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
                          >> 9U));
}

std::string VL_TO_STRING(const Vsim_VX_writeback_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_writeback_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
