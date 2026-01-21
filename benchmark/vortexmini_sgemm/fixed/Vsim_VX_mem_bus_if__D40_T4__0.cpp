// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_mem_bus_if__D40_T4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__cache_mem_bus_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D40_T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D40_T4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__cache_mem_bus_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__ready_in_r) 
                           & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_onehot));
    vlSelfRef.rsp_ready = ((~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__0__KET____DOT__bank__DOT__pipe_stall)) 
                           & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__0__KET____DOT__bank__DOT__fill_grant));
}

std::string VL_TO_STRING(const Vsim_VX_mem_bus_if__D40_T4* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D40_T4::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
