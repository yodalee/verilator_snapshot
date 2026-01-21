// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_decode_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode_if__0(Vsim_VX_decode_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_decode_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data[0U] = ((0xfe000000U & vlSelfRef.data[0U]) 
                          | (((((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__use_rd) 
                                & (0U != (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__rd_r))) 
                               << 0x00000018U) | (((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__rd_r) 
                                                   << 0x00000012U) 
                                                  | ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__rs1_r) 
                                                     << 0x0000000cU))) 
                             | (((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__rs2_r) 
                                 << 6U) | (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__rs3_r))));
    vlSelfRef.data[0U] = ((0x01ffffffU & vlSelfRef.data[0U]) 
                          | ((IData)((((QData)((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type)) 
                                       << 0x00000029U) 
                                      | (((QData)((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                          << 0x00000025U) 
                                         | vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args))) 
                             << 0x00000019U));
    vlSelfRef.data[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type)) 
                                     << 0x00000029U) 
                                    | (((QData)((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                        << 0x00000025U) 
                                       | vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args))) 
                           >> 7U) | ((IData)(((((QData)((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type)) 
                                                << 0x00000029U) 
                                               | (((QData)((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                                   << 0x00000025U) 
                                                  | vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args)) 
                                              >> 0x00000020U)) 
                                     << 0x00000019U));
    vlSelfRef.data[2U] = (((0x01fffff0U & ((IData)(
                                                   (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                    >> 4U)) 
                                           << 4U)) 
                           | ((IData)(((((QData)((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type)) 
                                         << 0x00000029U) 
                                        | (((QData)((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                            << 0x00000025U) 
                                           | vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args)) 
                                       >> 0x00000020U)) 
                              >> 7U)) | (0xfe000000U 
                                         & ((IData)(
                                                    (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                     >> 4U)) 
                                            << 4U)));
    vlSelfRef.data[3U] = ((0x000003f8U & vlSelfRef.data[3U]) 
                          | (7U & ((IData)((vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                            >> 4U)) 
                                   >> 0x0000001cU)));
    vlSelfRef.data[3U] = ((7U & vlSelfRef.data[3U]) 
                          | (0x000003ffU & (((0x00000070U 
                                              & ((IData)(
                                                         (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__0__KET____DOT__bank__DOT____Vcellout__core_rsp_queue__data_out 
                                                          >> 0x00000021U)) 
                                                 << 4U)) 
                                             | (0x0000000fU 
                                                & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata))) 
                                            << 3U)));
}

void Vsim_VX_decode_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__per_issue_decode_if__0(Vsim_VX_decode_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_decode_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__per_issue_decode_if__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = (1U & (((((2U & ((~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__genblk1__BRA__3__KET____DOT__instr_buf__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__full_r)) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__genblk1__BRA__2__KET____DOT__instr_buf__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__full_r)))) 
                               << 2U) | ((2U & ((~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__genblk1__BRA__1__KET____DOT__instr_buf__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__full_r)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__genblk1__BRA__0__KET____DOT__instr_buf__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__full_r))))) 
                             >> (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__decode_wis)));
}

std::string VL_TO_STRING(const Vsim_VX_decode_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_decode_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
