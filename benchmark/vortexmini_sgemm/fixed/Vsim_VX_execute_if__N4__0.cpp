// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__per_block_execute_if__BRA__0__KET____0(Vsim_VX_execute_if__N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__per_block_execute_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = (1U & ((2U == (3U & (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU] 
                                           >> 9U)))
                              ? ((0x00010000U & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])
                                  ? (~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__muldiv_unit__DOT__div_elastic_adapter__DOT__loaded))
                                  : (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__muldiv_unit__DOT__mul_ready_in))
                              : (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__alu_int__DOT____Vcellout__rsp_buf__ready_in)));
}

extern const VlWide<15>/*479:0*/ Vsim__ConstPool__CONST_h9eccd8e6_0;

void Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__int_execute_if__0(Vsim_VX_execute_if__N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__int_execute_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data[0U] = (3U | ((Vsim__ConstPool__CONST_h9eccd8e6_0[0U] 
                                 & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0U]) 
                                << 3U));
    vlSelfRef.data[1U] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[0U] 
                            & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0U]) 
                           >> 0x0000001dU) | ((Vsim__ConstPool__CONST_h9eccd8e6_0[1U] 
                                               & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[1U]) 
                                              << 3U));
    vlSelfRef.data[2U] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[1U] 
                            & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[1U]) 
                           >> 0x0000001dU) | ((Vsim__ConstPool__CONST_h9eccd8e6_0[2U] 
                                               & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[2U]) 
                                              << 3U));
    vlSelfRef.data[3U] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[2U] 
                            & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[2U]) 
                           >> 0x0000001dU) | ((Vsim__ConstPool__CONST_h9eccd8e6_0[3U] 
                                               & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[3U]) 
                                              << 3U));
    vlSelfRef.data[4U] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[3U] 
                            & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[3U]) 
                           >> 0x0000001dU) | ((Vsim__ConstPool__CONST_h9eccd8e6_0[4U] 
                                               & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U]) 
                                              << 3U));
    vlSelfRef.data[5U] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[4U] 
                            & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U]) 
                           >> 0x0000001dU) | ((Vsim__ConstPool__CONST_h9eccd8e6_0[5U] 
                                               & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U]) 
                                              << 3U));
    vlSelfRef.data[6U] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[5U] 
                            & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U]) 
                           >> 0x0000001dU) | ((Vsim__ConstPool__CONST_h9eccd8e6_0[6U] 
                                               & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U]) 
                                              << 3U));
    vlSelfRef.data[7U] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[6U] 
                            & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U]) 
                           >> 0x0000001dU) | ((Vsim__ConstPool__CONST_h9eccd8e6_0[7U] 
                                               & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[7U]) 
                                              << 3U));
    vlSelfRef.data[8U] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[7U] 
                            & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[7U]) 
                           >> 0x0000001dU) | ((Vsim__ConstPool__CONST_h9eccd8e6_0[8U] 
                                               & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[8U]) 
                                              << 3U));
    vlSelfRef.data[9U] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[8U] 
                            & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[8U]) 
                           >> 0x0000001dU) | ((Vsim__ConstPool__CONST_h9eccd8e6_0[9U] 
                                               & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[9U]) 
                                              << 3U));
    vlSelfRef.data[0x0000000aU] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[9U] 
                                     & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[9U]) 
                                    >> 0x0000001dU) 
                                   | ((Vsim__ConstPool__CONST_h9eccd8e6_0[0x0000000aU] 
                                       & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000aU]) 
                                      << 3U));
    vlSelfRef.data[0x0000000bU] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[0x0000000aU] 
                                     & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000aU]) 
                                    >> 0x0000001dU) 
                                   | ((Vsim__ConstPool__CONST_h9eccd8e6_0[0x0000000bU] 
                                       & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000bU]) 
                                      << 3U));
    vlSelfRef.data[0x0000000cU] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[0x0000000bU] 
                                     & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000bU]) 
                                    >> 0x0000001dU) 
                                   | ((Vsim__ConstPool__CONST_h9eccd8e6_0[0x0000000cU] 
                                       & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000cU]) 
                                      << 3U));
    vlSelfRef.data[0x0000000dU] = (((Vsim__ConstPool__CONST_h9eccd8e6_0[0x0000000cU] 
                                     & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000cU]) 
                                    >> 0x0000001dU) 
                                   | ((Vsim__ConstPool__CONST_h9eccd8e6_0[0x0000000dU] 
                                       & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU]) 
                                      << 3U));
    vlSelfRef.data[0x0000000eU] = ((((4U & (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000eU] 
                                            >> 0x00000015U)) 
                                     | (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__genblk5__BRA__0__KET____DOT__block_wid)) 
                                    << 0x00000018U) 
                                   | (((Vsim__ConstPool__CONST_h9eccd8e6_0[0x0000000dU] 
                                        & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU]) 
                                       >> 0x0000001dU) 
                                      | ((Vsim__ConstPool__CONST_h9eccd8e6_0[0x0000000eU] 
                                          & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000eU]) 
                                         << 3U)));
}

void Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__muldiv_execute_if__0(Vsim_VX_execute_if__N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__muldiv_execute_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid = ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r) 
                       & (0x00000400U == (0x00000600U 
                                          & vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])));
}

void Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET____0(Vsim_VX_execute_if__N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = (((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_req_ready) 
                        | (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__req_skip)) 
                       & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_67));
}

void Vsim_VX_execute_if__N4___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_execute_if__BRA__0__KET____0(Vsim_VX_execute_if__N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_execute_if__N4___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_execute_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = ((~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__full_r)) 
                       & (IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core.in_ready_o));
}

void Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_execute_if__0(Vsim_VX_execute_if__N4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_execute_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid = ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__genblk5__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r) 
                       & (5U >= (0x0000000fU & (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__genblk5__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU] 
                                                >> 0x00000011U))));
}

std::string VL_TO_STRING(const Vsim_VX_execute_if__N4* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_execute_if__N4::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
