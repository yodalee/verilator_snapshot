// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_mem_bus_if__D40_T6___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__mem_bus_cache_if__0(Vsim_VX_mem_bus_if__D40_T6* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D40_T6___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__mem_bus_cache_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rsp_valid = ((~ vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__mem_arb__DOT__rsp_data_out[0x00000010U]) 
                           & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r));
}

std::string VL_TO_STRING(const Vsim_VX_mem_bus_if__D40_T6* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D40_T6::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
