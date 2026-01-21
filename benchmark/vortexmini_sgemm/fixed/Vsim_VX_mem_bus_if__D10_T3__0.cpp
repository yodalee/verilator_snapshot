// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D10_T3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_valid = (1U & ((~ (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
                                     >> 0x00000014U)) 
                                 & (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r)));
}

void Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D10_T3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = (1U & (((((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__3__KET____DOT__bank__DOT__core_req_ready) 
                                    << 3U) | ((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__2__KET____DOT__bank__DOT__core_req_ready) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__1__KET____DOT__bank__DOT__core_req_ready) 
                                      << 1U) | (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__0__KET____DOT__bank__DOT__core_req_ready))) 
                                 >> (3U & (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
                                           >> 0x00000018U))));
}

void Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D10_T3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET____0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    __VExpandSel_WordIdx_1 = (0x0000000fU & (((IData)(0x00000083U) 
                                              * (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r)) 
                                             >> 5U));
    __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x00000083U) 
                                             * (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r)));
    __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
    if (__VExpandSel_Aligned_1) {
        __VExpandSel_HiShift_1 = 0U;
        __VExpandSel_HiMask_1 = 0U;
    } else {
        __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_1);
        __VExpandSel_HiMask_1 = 0xffffffffU;
    }
    if ((0x0105U >= (0x000001ffU & ((IData)(0x00000083U) 
                                    * (IData)(vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r))))) {
        vlSelfRef.rsp_data[0U] = (((vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                    ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                                    << __VExpandSel_HiShift_1) 
                                   & __VExpandSel_HiMask_1) 
                                  | (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[__VExpandSel_WordIdx_1] 
                                     >> __VExpandSel_LoShift_1));
        vlSelfRef.rsp_data[1U] = (((vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                    ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                                    << __VExpandSel_HiShift_1) 
                                   & __VExpandSel_HiMask_1) 
                                  | (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                     ((IData)(1U) + __VExpandSel_WordIdx_1)] 
                                     >> __VExpandSel_LoShift_1));
        vlSelfRef.rsp_data[2U] = (((vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                    ((IData)(3U) + __VExpandSel_WordIdx_1)] 
                                    << __VExpandSel_HiShift_1) 
                                   & __VExpandSel_HiMask_1) 
                                  | (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                     ((IData)(2U) + __VExpandSel_WordIdx_1)] 
                                     >> __VExpandSel_LoShift_1));
        vlSelfRef.rsp_data[3U] = (((vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                    ((IData)(4U) + __VExpandSel_WordIdx_1)] 
                                    << __VExpandSel_HiShift_1) 
                                   & __VExpandSel_HiMask_1) 
                                  | (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                     ((IData)(3U) + __VExpandSel_WordIdx_1)] 
                                     >> __VExpandSel_LoShift_1));
        vlSelfRef.rsp_data[4U] = (7U & (((((4U <= __VExpandSel_WordIdx_1)
                                            ? 0U : 
                                           vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                           ((IData)(5U) 
                                            + __VExpandSel_WordIdx_1)]) 
                                          << __VExpandSel_HiShift_1) 
                                         & __VExpandSel_HiMask_1) 
                                        | (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__genblk14__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__shift_reg[
                                           ((IData)(4U) 
                                            + __VExpandSel_WordIdx_1)] 
                                           >> __VExpandSel_LoShift_1)));
    } else {
        vlSelfRef.rsp_data[0U] = 0U;
        vlSelfRef.rsp_data[1U] = 0U;
        vlSelfRef.rsp_data[2U] = 0U;
        vlSelfRef.rsp_data[3U] = 0U;
        vlSelfRef.rsp_data[4U] = 0U;
    }
    vlSelfRef.req_data[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24[0U];
    vlSelfRef.req_data[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24[1U];
    vlSelfRef.req_data[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24[2U];
    vlSelfRef.req_data[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24[3U];
    vlSelfRef.req_data[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24[4U];
    vlSelfRef.req_data[5U] = ((0x00040000U & (vlSymsp->TOP.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U] 
                                              >> 5U)) 
                              | vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24[5U]);
}

std::string VL_TO_STRING(const Vsim_VX_mem_bus_if__D10_T3* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_VX_mem_bus_if__D10_T3::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
