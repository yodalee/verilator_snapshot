// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_VX_lsu_mem_if__N4_D4_T2___stl_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET____0(Vsim_VX_lsu_mem_if__N4_D4_T2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_lsu_mem_if__N4_D4_T2___stl_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = (1U & (~ (0U != ((~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT__stream_unpack__DOT__genblk1__DOT__sent_mask_n)) 
                                           & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT____Vcellinp__stream_unpack__mask_in)))));
    vlSelfRef.req_valid = ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r) 
                           & (0U != (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT____Vcellinp__stream_unpack__mask_in)));
    vlSelfRef.rsp_ready = ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__ready_in_r) 
                           & ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_onehot) 
                              >> 1U));
}

VL_ATTR_COLD void Vsim_VX_lsu_mem_if__N4_D4_T2___ctor_var_reset(Vsim_VX_lsu_mem_if__N4_D4_T2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_lsu_mem_if__N4_D4_T2___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12465084953323796564ull);
    vlSelf->req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16539944981316001420ull);
    vlSelf->rsp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11749926944769377044ull);
}
