// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__int_commit_if__0(Vsim_VX_commit_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__int_commit_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = (1U & ((~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__use_buffer)) 
                             & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__fair_arbiter__DOT__genblk1__DOT__requests_qual)));
}

void Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if__0(Vsim_VX_commit_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    __VExpandSel_WordIdx_1 = (0x0000000fU & (((IData)(0x000000b0U) 
                                              * (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r)) 
                                             >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x000000b0U) 
                                             * (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r)));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    if ((0x015fU >= (0x000001ffU & ((IData)(0x000000b0U) 
                                    * (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r))))) {
        vlSelfRef.data[0U] = (((vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                                << __VExpandSel_HiShift_1) 
                               & __VExpandSel_HiMask_1) 
                              | (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[__VExpandSel_WordIdx_1] 
                                 >> __VExpandSel_LoShift_1));
        vlSelfRef.data[1U] = (((vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                                << __VExpandSel_HiShift_1) 
                               & __VExpandSel_HiMask_1) 
                              | (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                 ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                                 >> __VExpandSel_LoShift_1));
        vlSelfRef.data[2U] = (((vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                ((IData)(3U) + __VExpandSel_WordIdx_1)] 
                                << __VExpandSel_HiShift_1) 
                               & __VExpandSel_HiMask_1) 
                              | (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                 ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                                 >> __VExpandSel_LoShift_1));
        vlSelfRef.data[3U] = (((vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                ((IData)(4U) + __VExpandSel_WordIdx_1)] 
                                << __VExpandSel_HiShift_1) 
                               & __VExpandSel_HiMask_1) 
                              | (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                 ((IData)(3U) + __VExpandSel_WordIdx_1)] 
                                 >> __VExpandSel_LoShift_1));
        vlSelfRef.data[4U] = (((vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                ((IData)(5U) + __VExpandSel_WordIdx_1)] 
                                << __VExpandSel_HiShift_1) 
                               & __VExpandSel_HiMask_1) 
                              | (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                 ((IData)(4U) + __VExpandSel_WordIdx_1)] 
                                 >> __VExpandSel_LoShift_1));
        vlSelfRef.data[5U] = (0x0000ffffU & (((((5U 
                                                 <= __VExpandSel_WordIdx_1)
                                                 ? 0U
                                                 : 
                                                vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                                ((IData)(6U) 
                                                 + __VExpandSel_WordIdx_1)]) 
                                               << __VExpandSel_HiShift_1) 
                                              & __VExpandSel_HiMask_1) 
                                             | (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                                ((IData)(5U) 
                                                 + __VExpandSel_WordIdx_1)] 
                                                >> __VExpandSel_LoShift_1)));
    } else {
        vlSelfRef.data[0U] = 0U;
        vlSelfRef.data[1U] = 0U;
        vlSelfRef.data[2U] = 0U;
        vlSelfRef.data[3U] = 0U;
        vlSelfRef.data[4U] = 0U;
        vlSelfRef.data[5U] = 0U;
    }
}

void Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_no_rsp_if__0(Vsim_VX_commit_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_no_rsp_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if.data[1U] 
                      << 0x0000001dU) | (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if.data[0U] 
                                         >> 3U));
    __Vtemp_1[1U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if.data[2U] 
                      << 0x0000001dU) | (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if.data[1U] 
                                         >> 3U));
    __Vtemp_1[2U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if.data[3U] 
                      << 0x0000001dU) | (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if.data[2U] 
                                         >> 3U));
    __Vtemp_1[3U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if.data[4U] 
                      << 0x0000001dU) | (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if.data[3U] 
                                         >> 3U));
    vlSelfRef.data[0U] = ((7U & vlSelfRef.data[0U]) 
                          | (0xfffffff8U & vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if.data[0U]));
    vlSelfRef.data[1U] = ((__Vtemp_1[0U] >> 0x0000001dU) 
                          | (__Vtemp_1[1U] << 3U));
    vlSelfRef.data[2U] = ((__Vtemp_1[1U] >> 0x0000001dU) 
                          | (__Vtemp_1[2U] << 3U));
    vlSelfRef.data[3U] = ((__Vtemp_1[2U] >> 0x0000001dU) 
                          | (__Vtemp_1[3U] << 3U));
    vlSelfRef.data[4U] = ((0xfffffc00U & vlSelfRef.data[4U]) 
                          | (__Vtemp_1[3U] >> 0x0000001dU));
}

void Vsim_VX_commit_if___eval_initial__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_commit_if__BRA__0__KET__(Vsim_VX_commit_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_commit_if___eval_initial__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_commit_if__BRA__0__KET__\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data[4U] = (0x00000200U | vlSelfRef.data[4U]);
}

void Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if__0(Vsim_VX_commit_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = (1U & ((~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__use_buffer)) 
                             & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_onehot)));
}

void Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_commit_if__0(Vsim_VX_commit_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_commit_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = ((~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__use_buffer)) 
                       & ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_onehot) 
                          >> 1U));
}

std::string VL_TO_STRING(const Vsim_VX_commit_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_commit_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
