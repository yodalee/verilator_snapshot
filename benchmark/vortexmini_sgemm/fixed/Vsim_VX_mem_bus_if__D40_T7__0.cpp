// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_mem_bus_if__D40_T7___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__cache_mem_bus_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D40_T7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D40_T7___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__cache_mem_bus_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__ready_in_r) 
                           & ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_onehot) 
                              >> 1U));
    vlSelfRef.rsp_ready = (1U & ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__is_mem_rsp_nc)
                                  ? ((~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__genblk5__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r)) 
                                     & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__ready_in_r))
                                  : (((((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__3__KET____DOT__bank__DOT__mem_rsp_ready) 
                                        << 3U) | ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__2__KET____DOT__bank__DOT__mem_rsp_ready) 
                                                  << 2U)) 
                                      | (((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__1__KET____DOT__bank__DOT__mem_rsp_ready) 
                                          << 1U) | (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__0__KET____DOT__bank__DOT__mem_rsp_ready))) 
                                     >> (3U & (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__mem_arb__DOT__rsp_data_out[0x00000010U] 
                                               >> 5U)))));
}

std::string VL_TO_STRING(const Vsim_VX_mem_bus_if__D40_T7* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D40_T7::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
