// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_lsu_mem_if__N4_D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET____0(Vsim_VX_lsu_mem_if__N4_D4_T2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_lsu_mem_if__N4_D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = (((~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__use_buffer)) 
                            & (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_81))) 
                           | ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET__.req_ready) 
                              & (0U != (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT____Vcellinp__stream_unpack__mask_in))));
}

void Vsim_VX_lsu_mem_if__N4_D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET____0(Vsim_VX_lsu_mem_if__N4_D4_T2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_lsu_mem_if__N4_D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_valid = ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r) 
                           & (0U != (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT____Vcellinp__stream_unpack__mask_in)));
    vlSelfRef.req_ready = (1U & (~ (0U != ((~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT__stream_unpack__DOT__genblk1__DOT__sent_mask_n)) 
                                           & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT____Vcellinp__stream_unpack__mask_in)))));
    vlSelfRef.rsp_ready = ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__ready_in_r) 
                           & ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_onehot) 
                              >> 1U));
}

std::string VL_TO_STRING(const Vsim_VX_lsu_mem_if__N4_D4_T2* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_lsu_mem_if__N4_D4_T2::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
