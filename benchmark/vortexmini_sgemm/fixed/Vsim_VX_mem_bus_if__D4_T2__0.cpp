// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__3__KET____0(Vsim_VX_mem_bus_if__D4_T2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__3__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = (1U & ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__local_mem__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__per_output_ready_in) 
                                 >> (0x0000000fU & 
                                     ((IData)(3U) + 
                                      VL_SHIFTL_III(4,4,32, 
                                                    (3U 
                                                     & (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT__stream_unpack__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[1U] 
                                                        >> 5U)), 2U)))));
    vlSelfRef.rsp_ready = ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET__.rsp_ready) 
                           & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT__stream_pack__DOT____VdfgRegularize_h51b35ce4_0_3));
}

void Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__2__KET____0(Vsim_VX_mem_bus_if__D4_T2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__2__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = (1U & ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__local_mem__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__per_output_ready_in) 
                                 >> (0x0000000fU & 
                                     ((IData)(2U) + 
                                      VL_SHIFTL_III(4,4,32, 
                                                    (3U 
                                                     & (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT__stream_unpack__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[1U] 
                                                        >> 5U)), 2U)))));
    vlSelfRef.rsp_ready = ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET__.rsp_ready) 
                           & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT__stream_pack__DOT____VdfgRegularize_h51b35ce4_0_2));
}

void Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__1__KET____0(Vsim_VX_mem_bus_if__D4_T2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__1__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = (1U & ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__local_mem__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__per_output_ready_in) 
                                 >> (0x0000000fU & 
                                     ((IData)(1U) + 
                                      (0x0cU & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_239))))));
    vlSelfRef.rsp_ready = ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET__.rsp_ready) 
                           & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT__stream_pack__DOT____VdfgRegularize_h51b35ce4_0_1));
}

void Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D4_T2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = (1U & ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__local_mem__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__per_output_ready_in) 
                                 >> (0x0000000fU & 
                                     VL_SHIFTL_III(4,4,32, 
                                                   (3U 
                                                    & (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT__stream_unpack__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[1U] 
                                                       >> 5U)), 2U))));
    vlSelfRef.rsp_ready = ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET__.rsp_ready) 
                           & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lsu_adapter__DOT__stream_pack__DOT____VdfgRegularize_h51b35ce4_0_0));
}

std::string VL_TO_STRING(const Vsim_VX_mem_bus_if__D4_T2* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D4_T2::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
