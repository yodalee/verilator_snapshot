// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_warp_ctl_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if__0(Vsim_VX_warp_ctl_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_warp_ctl_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid = ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r) 
                       & ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.ready) 
                          & vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[0U]));
}

std::string VL_TO_STRING(const Vsim_VX_warp_ctl_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_warp_ctl_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
