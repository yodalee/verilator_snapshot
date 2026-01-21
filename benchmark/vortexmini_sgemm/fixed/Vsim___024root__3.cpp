// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_sequent__TOP__4(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____VdfgRegularize_h548d1e5e_0_0;
    tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____VdfgRegularize_h548d1e5e_0_0 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vlvbound_h030ea80d__0;
    tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vlvbound_h030ea80d__0 = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__state_n;
    tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__state_n = 0;
    CData/*0:0*/ tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__out_req_valid_n;
    tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__out_req_valid_n = 0;
    // Body
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__stall_out 
        = ((~ (IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__.req_ready)) 
           & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__mem_scheduler__DOT__req_queue__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__fetch__DOT__req_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__stall_out 
        = ((~ (IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__arb_core_bus_if__BRA__0__KET__.req_ready)) 
           & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__fetch__DOT__req_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs_n 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps_n 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks_n 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__curr_barrier_mask_p1 
        = (0x0000000fU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks) 
                          >> (7U & VL_SHIFTL_III(3,32,32, 
                                                 (1U 
                                                  & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                     >> 6U)), 2U))));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__curr_barrier_mask_p1 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__curr_barrier_mask_p1) 
           | (0x0fU & ((IData)(1U) << (3U & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                             >> 0x0000000dU)))));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks;
    if (((IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                  >> 0x00000023U)) & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__is_single_warp))) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps_n 
            = (0x0000000fU & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps_n) 
                              | (IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                                         >> 0x0000001fU))));
        if ((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                           >> 0x0000001fU)))) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (1U | (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n));
        }
        if ((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                           >> 0x00000020U)))) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (0x00000010U | (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n));
        }
        if ((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                           >> 0x00000021U)))) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (0x00000100U | (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n));
        }
        if ((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                           >> 0x00000022U)))) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (0x00001000U | (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n));
        }
    }
    if (((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
         & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[2U] 
            >> 0x0000001cU))) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps_n 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                          >> 0x0000000dU)))) 
                & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps_n)) 
               | (0x0fU & ((0U != (0x0000000fU & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[2U] 
                                                  >> 0x00000018U))) 
                           << (3U & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                     >> 0x0000000dU)))));
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
            = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                         & VL_SHIFTL_III(4,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                                             >> 0x0000000dU)), 2U)))) 
                & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n)) 
               | (0x0000ffffU & ((0x0000000fU & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[2U] 
                                                 >> 0x00000018U)) 
                                 << (0x0000000fU & 
                                     VL_SHIFTL_III(4,32,32, 
                                                   (3U 
                                                    & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                                       >> 0x0000000dU)), 2U)))));
    }
    if (((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
         & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U] 
            >> 0x00000013U))) {
        if ((0x00040000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                             & VL_SHIFTL_III(4,32,32, 
                                                             (3U 
                                                              & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                                                 >> 0x0000000dU)), 2U)))) 
                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n)) 
                   | (0x0000ffffU & ((0x0000000fU & 
                                      (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U] 
                                       >> 0x0000000eU)) 
                                     << (0x0000000fU 
                                         & VL_SHIFTL_III(4,32,32, 
                                                         (3U 
                                                          & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                                             >> 0x0000000dU)), 2U)))));
        }
    }
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push 
        = ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
           & (IData)((0x000c0000U == (0x000c0000U & 
                                      vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U]))));
    tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____VdfgRegularize_h548d1e5e_0_0 
        = ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
           & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
              >> 0x0000000aU));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__0__KET____DOT__bank__DOT__core_rsp_queue__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__pop 
        = ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__per_issue_decode_if.ready) 
           & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__0__KET____DOT__bank__DOT__core_rsp_queue__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__fetch_fire 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__0__KET____DOT__bank__DOT__core_rsp_queue__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r) 
           & (IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__per_issue_decode_if.ready));
    tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vlvbound_h030ea80d__0 
        = vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__ready_in 
        = tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT____Vlvbound_h030ea80d__0;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__ready_out_t 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r)) 
                 | (IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.ready)));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__pipe_reg1__data_in[0U] 
        = (((((0x11U >= (0x0000001fU & ((IData)(6U) 
                                        * (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index))))
               ? (0x0000003fU & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_in_data 
                                 >> (0x0000001fU & 
                                     ((IData)(6U) * (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index)))))
               : 0U) << 0x0000001aU) | (((0x11U >= 
                                          (0x0000001fU 
                                           & ((IData)(6U) 
                                              * (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index))))
                                          ? (0x0000003fU 
                                             & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_in_data 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index)))))
                                          : 0U) << 0x00000014U)) 
           | ((((0x11U >= (0x0000001fU & ((IData)(6U) 
                                          * (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index))))
                 ? (0x0000003fU & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_in_data 
                                   >> (0x0000001fU 
                                       & ((IData)(6U) 
                                          * (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index)))))
                 : 0U) << 0x0000000eU) | ((((0x11U 
                                             >= (0x0000001fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index))))
                                             ? (0x0000003fU 
                                                & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_in_data 
                                                   >> 
                                                   (0x0000001fU 
                                                    & ((IData)(6U) 
                                                       * (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index)))))
                                             : 0U) 
                                           << 8U) | 
                                          ((((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index) 
                                             << 6U) 
                                            | ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index) 
                                               << 4U)) 
                                           | (((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__grant_index))))));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__pipe_reg1__data_in[1U] 
        = ((0xffffff00U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__pipe_reg1__data_in[1U]) 
           | ((0x000000fcU & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                              >> 0x00000010U)) | ((2U 
                                                   & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U] 
                                                      >> 8U)) 
                                                  | (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__has_collision_n))));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__pipe_reg1__data_in[1U] 
        = ((0x000000ffU & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__pipe_reg1__data_in[1U]) 
           | ((IData)((((QData)((IData)((1U & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                               >> 0x00000018U)))) 
                        << 0x0000002bU) | (0x000007ffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[2U])) 
                                               << 0x00000027U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[1U])) 
                                                  << 7U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U])) 
                                                    >> 0x00000019U)))))) 
              << 8U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__pipe_reg1__data_in[2U] 
        = (((IData)((((QData)((IData)((1U & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                             >> 0x00000018U)))) 
                      << 0x0000002bU) | (0x000007ffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[2U])) 
                                             << 0x00000027U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[1U])) 
                                                << 7U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U])) 
                                                  >> 0x00000019U)))))) 
            >> 0x00000018U) | (((IData)((0x0000001fffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U])) 
                                             << 0x0000001cU) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[2U])) 
                                               >> 4U)))) 
                                << 0x00000014U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                                                >> 0x00000018U)))) 
                                                              << 0x0000002bU) 
                                                             | (0x000007ffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[2U])) 
                                                                    << 0x00000027U) 
                                                                   | (((QData)((IData)(
                                                                                vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[1U])) 
                                                                       << 7U) 
                                                                      | ((QData)((IData)(
                                                                                vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U])) 
                                                                         >> 0x00000019U))))) 
                                                            >> 0x00000020U)) 
                                                   << 8U)));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__pipe_reg1__data_in[3U] 
        = ((0xfe000000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__pipe_reg1__data_in[3U]) 
           | (((0x000000ffU & ((IData)((0x0000001fffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U])) 
                                            << 0x0000001cU) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[2U])) 
                                              >> 4U)))) 
                               >> 0x0000000cU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                                                >> 0x00000018U)))) 
                                                              << 0x0000002bU) 
                                                             | (0x000007ffffffffffULL 
                                                                & (((QData)((IData)(
                                                                                vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[2U])) 
                                                                    << 0x00000027U) 
                                                                   | (((QData)((IData)(
                                                                                vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[1U])) 
                                                                       << 7U) 
                                                                      | ((QData)((IData)(
                                                                                vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U])) 
                                                                         >> 0x00000019U))))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000018U)) 
              | ((0x000fff00U & ((IData)((0x0000001fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U])) 
                                              << 0x0000001cU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[2U])) 
                                                >> 4U)))) 
                                 >> 0x0000000cU)) | 
                 ((IData)(((0x0000001fffffffffULL & 
                            (((QData)((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U])) 
                              << 0x0000001cU) | ((QData)((IData)(
                                                                 vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[2U])) 
                                                 >> 4U))) 
                           >> 0x00000020U)) << 0x00000014U))));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__pipe_reg1__data_in[3U] 
        = ((0x01ffffffU & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__pipe_reg1__data_in[3U]) 
           | ((((((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.ready)
                   ? 0U : (7U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__pipe_reg1__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r) 
                                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_in_ready)))) 
                 << 4U) | (8U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__priority_arbiter__DOT__genblk1__DOT__priority_encoder__DOT__genblk2__DOT__scan__DOT____VdfgRegularize_h61089c6a_0_2) 
                                 << 3U))) | ((4U & 
                                              ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__priority_arbiter__DOT__genblk1__DOT__priority_encoder__DOT__genblk2__DOT__scan__DOT____VdfgRegularize_h61089c6a_0_2) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__priority_arbiter__DOT__genblk1__DOT__priority_encoder__DOT__genblk2__DOT__scan__DOT____VdfgRegularize_h61089c6a_0_2) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__req_xbar__DOT__genblk3__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__xbar_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__priority_arbiter__DOT__genblk1__DOT__priority_encoder__DOT__genblk2__DOT__scan__DOT____VdfgRegularize_h61089c6a_0_2))))) 
              << 0x00000019U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT____Vcellinp__pipe_reg1__data_in[4U] 
        = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__state_n 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__state;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__flush_done_n 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__flush_done;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__lock_released_n 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__lock_released;
    if ((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__state))) {
        if (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__flush_req_mask) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__state_n = 2U;
        }
    } else if ((1U != (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__state))) {
        if ((2U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__state))) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__state_n = 3U;
        } else if ((3U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__state))) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__flush_done_n 
                = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__flush_done) 
                   | ((((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__3__KET____DOT__bank__DOT__flush_unit__DOT__state_r)) 
                        << 3U) | ((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__2__KET____DOT__bank__DOT__flush_unit__DOT__state_r)) 
                                  << 2U)) | (((5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__1__KET____DOT__bank__DOT__flush_unit__DOT__state_r)) 
                                              << 1U) 
                                             | (5U 
                                                == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__0__KET____DOT__bank__DOT__flush_unit__DOT__state_r)))));
            if ((0x0fU == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__flush_done_n))) {
                vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__state_n = 4U;
                vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__flush_done_n = 0U;
                vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__lock_released_n 
                    = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__flush_req_mask;
            }
        } else if ((4U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__state))) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__lock_released_n 
                = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__lock_released) 
                   & (~ (IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_ready)));
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__lock_released_n)))) {
                vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__state_n = 0U;
            }
        }
    }
    tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__state_n 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r) 
                 >> 5U));
    tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__out_req_valid_n 
        = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r));
    if ((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))) {
        tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__out_req_valid_n = 1U;
        tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__state_n = 0U;
    } else {
        if (((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r) 
             & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__core_req_nc_valid)
                 ? (((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__mem_req_buf__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r)) 
                     & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__mem_req_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__ready_in_r)) 
                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk2__DOT__cache_bypass__DOT__core_req_nc_valid))
                 : ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__core_bus2_if__BRA__0__KET__.req_ready) 
                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__flush_unit__DOT__genblk3__BRA__0__KET____DOT__input_enable))))) {
            tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__out_req_valid_n = 0U;
        }
        if ((((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r) 
              & (~ (IData)(tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__out_req_valid_n))) 
             & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__full_r)))) {
            tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__state_n = 1U;
        }
    }
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__ipdom_stack__push 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push) 
           & (0U == (0x6000U & vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U])));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__ipdom_stack__push 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push) 
           & (0x2000U == (0x6000U & vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U])));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__ipdom_stack__push 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push) 
           & (0x4000U == (0x6000U & vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U])));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__ipdom_stack__push 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push) 
           & (0x6000U == (0x6000U & vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U])));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__pipe_reg__data_in 
        = (((QData)((IData)(tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____VdfgRegularize_h548d1e5e_0_0)) 
            << 0x00000027U) | (((QData)((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__sjoin_is_dvg)) 
                                << 0x00000026U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_set
                                                                    [
                                                                    (3U 
                                                                     & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                                                        >> 0x0000000dU))])) 
                                                    << 0x00000025U) 
                                                   | (((QData)((IData)(
                                                                       (3U 
                                                                        & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                                                           >> 0x0000000dU)))) 
                                                       << 0x00000023U) 
                                                      | vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_data
                                                      [
                                                      (3U 
                                                       & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                                          >> 0x0000000dU))]))));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop 
        = ((IData)(tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____VdfgRegularize_h548d1e5e_0_0) 
           & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__sjoin_is_dvg));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps;
    if (((IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                  >> 0x00000023U)) & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__is_single_warp))) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn_wid))) 
               & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
         & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[2U] 
            >> 0x0000001cU))) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                         >> 0x0000000dU)))) 
               & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
         & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U] 
            >> 0x00000013U))) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                         >> 0x0000000dU)))) 
               & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r) {
        if ((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d 
                           >> 0x00000026U)))) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (((~ ((IData)(0x000fU) << (0x0000000fU 
                                             & VL_SHIFTL_III(4,32,32, 
                                                             (3U 
                                                              & (IData)(
                                                                        (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d 
                                                                         >> 0x00000023U))), 2U)))) 
                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n)) 
                   | (0x0000ffffU & ((0x0000000fU & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d 
                                                             >> 0x0000001fU))) 
                                     << (0x0000000fU 
                                         & VL_SHIFTL_III(4,32,32, 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d 
                                                                     >> 0x00000023U))), 2U)))));
        }
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d 
                                                 >> 0x00000023U))))) 
               & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
         & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
            >> 7U))) {
        if ((1U & (~ (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                      >> 2U)))) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs_n 
                = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, 
                                                           (1U 
                                                            & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                               >> 6U)), 1U)))) 
                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs_n)) 
                   | (0x0fU & ((((~ (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                     >> 5U)) & ((3U 
                                                 & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs) 
                                                    >> 
                                                    (3U 
                                                     & VL_SHIFTL_III(2,32,32, 
                                                                     (1U 
                                                                      & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                                         >> 6U)), 1U)))) 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                    >> 3U))))
                                 ? 0U : (3U & ((IData)(1U) 
                                               + ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs) 
                                                  >> 
                                                  (3U 
                                                   & VL_SHIFTL_III(2,32,32, 
                                                                   (1U 
                                                                    & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                                       >> 6U)), 1U)))))) 
                               << (3U & VL_SHIFTL_III(2,32,32, 
                                                      (1U 
                                                       & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                          >> 6U)), 1U)))));
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks_n 
                = (((~ ((IData)(0x0fU) << (7U & VL_SHIFTL_III(3,32,32, 
                                                              (1U 
                                                               & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                                  >> 6U)), 2U)))) 
                    & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks_n)) 
                   | (0x00ffU & ((((~ (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                       >> 5U)) & ((3U 
                                                   & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs) 
                                                      >> 
                                                      (3U 
                                                       & VL_SHIFTL_III(2,32,32, 
                                                                       (1U 
                                                                        & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                                           >> 6U)), 1U)))) 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                      >> 3U))))
                                   ? 0U : (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__curr_barrier_mask_p1)) 
                                 << (7U & VL_SHIFTL_III(3,32,32, 
                                                        (1U 
                                                         & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                            >> 6U)), 2U)))));
        }
        if ((4U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
                = ((~ ((IData)(1U) << (3U & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                             >> 0x0000000dU)))) 
                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
        } else if (((~ (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                        >> 5U)) & ((3U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs) 
                                          >> (3U & 
                                              VL_SHIFTL_III(2,32,32, 
                                                            (1U 
                                                             & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                                >> 6U)), 1U)))) 
                                   == (3U & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                             >> 3U))))) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
                = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n) 
                   & (~ ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks) 
                         >> (7U & VL_SHIFTL_III(3,32,32, 
                                                (1U 
                                                 & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                    >> 6U)), 2U)))));
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
                = ((~ ((IData)(1U) << (3U & (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U] 
                                             >> 0x0000000dU)))) 
                   & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
        }
    }
    if ((1U & (IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value 
                       >> 0x00000022U)))) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value 
                                                 >> 0x00000020U))))) 
               & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__fetch_fire) 
         & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode__DOT__is_wstall)))) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (IData)((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__banks__BRA__0__KET____DOT__bank__DOT____Vcellout__core_rsp_queue__data_out 
                                                 >> 0x00000021U))))) 
               & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__push) 
         & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__genblk5__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0U] 
            & (3U >= (0x00000fffU & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__genblk5__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000cU] 
                                     >> 0x00000011U)))))) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__genblk5__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_buffer__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000eU] 
                                         >> 0x00000018U)))) 
               & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__schedule_ready) 
         & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__schedule_valid))) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__schedule_wid))));
    }
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__ready_out_t 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r)) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__DOT__ready_in)));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pop 
        = ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__empty_r)) 
           & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__ready_out_t));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[0U] 
        = ((0xfffffff8U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[0U]) 
           | (7U & ((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                     ? ((4U & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[0U] 
                               << 1U)) | (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r))
                     : vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0U])));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[0U] 
        = ((7U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[0U]) 
           | (((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                ? vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__req_data_merged[0U]
                : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[1U] 
                    << 0x0000001dU) | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0U] 
                                       >> 3U))) << 3U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[1U] 
        = ((((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
              ? vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__req_data_merged[0U]
              : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[1U] 
                  << 0x0000001dU) | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0U] 
                                     >> 3U))) >> 0x0000001dU) 
           | (((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                ? vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__req_data_merged[1U]
                : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[2U] 
                    << 0x0000001dU) | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[1U] 
                                       >> 3U))) << 3U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[2U] 
        = ((((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
              ? vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__req_data_merged[1U]
              : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[2U] 
                  << 0x0000001dU) | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[1U] 
                                     >> 3U))) >> 0x0000001dU) 
           | (((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                ? vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__req_data_merged[2U]
                : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[3U] 
                    << 0x0000001dU) | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[2U] 
                                       >> 3U))) << 3U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[3U] 
        = ((((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
              ? vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__req_data_merged[2U]
              : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[3U] 
                  << 0x0000001dU) | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[2U] 
                                     >> 3U))) >> 0x0000001dU) 
           | (((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                ? vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__req_data_merged[3U]
                : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
                    << 0x0000001dU) | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[3U] 
                                       >> 3U))) << 3U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[4U] 
        = ((0xfffffff8U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[4U]) 
           | (((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                ? vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__req_data_merged[3U]
                : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
                    << 0x0000001dU) | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[3U] 
                                       >> 3U))) >> 0x0000001dU));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[4U] 
        = ((0xffc00007U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[4U]) 
           | (((0x00070000U & (((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                                 ? ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U] 
                                     << 0x0000000eU) 
                                    | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U] 
                                       >> 0x00000012U))
                                 : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
                                     << 0x0000000dU) 
                                    | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
                                       >> 0x00000013U))) 
                               << 0x00000010U)) | (0x0000ffffU 
                                                   & ((0x00000020U 
                                                       & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                                                       ? (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__req_byteen_merged)
                                                       : 
                                                      ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
                                                        << 0x0000001dU) 
                                                       | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
                                                          >> 3U))))) 
              << 3U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[4U] 
        = ((0x003fffffU & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[4U]) 
           | (((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                ? ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U] 
                    << 0x0000000bU) | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U] 
                                       >> 0x00000015U))
                : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U] 
                    << 0x0000000aU) | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
                                       >> 0x00000016U))) 
              << 0x00000016U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[5U] 
        = ((0xfffc0000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[5U]) 
           | (0x0003ffffU & (((0x00000020U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                               ? ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U] 
                                   << 0x0000000bU) 
                                  | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U] 
                                     >> 0x00000015U))
                               : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U] 
                                   << 0x0000000aU) 
                                  | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
                                     >> 0x00000016U))) 
                             >> 0x0000000aU)));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[5U] 
        = ((0xffe3ffffU & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[5U]) 
           | (((0x0bU >= (0x0000000fU & ((IData)(3U) 
                                         * vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____VdfgRegularize_hc3c21a7c_0_4)))
                ? (7U & (((0U == (0x0000001fU & ((IData)(0x00000082U) 
                                                 + 
                                                 (0x0000000fU 
                                                  & ((IData)(3U) 
                                                     * vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____VdfgRegularize_hc3c21a7c_0_4)))))
                           ? 0U : (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[
                                   (((IData)(0x00000084U) 
                                     + (0x0000000fU 
                                        & ((IData)(3U) 
                                           * vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____VdfgRegularize_hc3c21a7c_0_4))) 
                                    >> 5U)] << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & ((IData)(0x00000082U) 
                                                      + 
                                                      (0x0000000fU 
                                                       & ((IData)(3U) 
                                                          * vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____VdfgRegularize_hc3c21a7c_0_4))))))) 
                         | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[
                            (((IData)(0x00000082U) 
                              + (0x0000000fU & ((IData)(3U) 
                                                * vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____VdfgRegularize_hc3c21a7c_0_4))) 
                             >> 5U)] >> (0x0000001fU 
                                         & ((IData)(0x00000082U) 
                                            + (0x0000000fU 
                                               & ((IData)(3U) 
                                                  * vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____VdfgRegularize_hc3c21a7c_0_4)))))))
                : 0U) << 0x00000012U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[5U] 
        = ((0x001fffffU & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[5U]) 
           | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__seed_addr_n 
              << 0x00000015U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[6U] 
        = ((0x3ffe0000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[6U]) 
           | (0x3fffffffU & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__seed_addr_n 
                             >> 0x0000000bU)));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[6U] 
        = ((0x0001ffffU & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT____Vcellinp__pipe_reg__data_in[6U]) 
           | (0x3fffffffU & (((((IData)(tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__state_n) 
                                << 0x0000000cU) | (
                                                   ((0x0000003cU 
                                                     & (((0x00000020U 
                                                          & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                                                          ? 
                                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)
                                                           ? 
                                                          (((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r) 
                                                            >> 1U) 
                                                           | (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__current_pmask))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r) 
                                                          >> 1U)) 
                                                        << 2U)) 
                                                    | (((IData)(tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__out_req_valid_n) 
                                                        << 1U) 
                                                       | (1U 
                                                          & ((0x00000020U 
                                                              & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                                                              ? 
                                                             (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[8U] 
                                                              >> 0x00000016U)
                                                              : 
                                                             (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U] 
                                                              >> 0x00000017U))))) 
                                                   << 6U)) 
                              | (((((0x0fffffffU & 
                                     ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[8U] 
                                       << 0x00000016U) 
                                      | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[7U] 
                                         >> 0x0000000aU))) 
                                    == vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__seed_addr_n) 
                                   << 5U) | ((((0x0fffffffU 
                                                & ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[7U] 
                                                    << 0x00000014U) 
                                                   | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[6U] 
                                                      >> 0x0000000cU))) 
                                               == vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__seed_addr_n) 
                                              << 4U) 
                                             | (((0x0fffffffU 
                                                  & ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[6U] 
                                                      << 0x00000012U) 
                                                     | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[5U] 
                                                        >> 0x0000000eU))) 
                                                 == vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__seed_addr_n) 
                                                << 3U))) 
                                 | ((((0x0fffffffU 
                                       & ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[5U] 
                                           << 0x00000010U) 
                                          | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk3__BRA__0__KET____DOT__req_global_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[4U] 
                                             >> 0x00000010U))) 
                                      == vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__seed_addr_n) 
                                     << 2U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (5U 
                                                          & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__genblk4__BRA__0__KET____DOT__priority_encoder__DOT__genblk2__DOT__scan__DOT____VdfgRegularize_h25702371_0_1)))) 
                                                << 1U) 
                                               | (1U 
                                                  & ((0x00000020U 
                                                      & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r))
                                                      ? 
                                                     (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U] 
                                                      >> 0x00000012U)
                                                      : 
                                                     (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__mem_coalescer__DOT__pipe_reg__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U] 
                                                      >> 0x00000011U))))))) 
                             << 0x00000011U)));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__ipdom_stack__pop 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop) 
           & (0U == (0x6000U & vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U])));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__ipdom_stack__pop 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop) 
           & (0x2000U == (0x6000U & vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U])));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__ipdom_stack__pop 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop) 
           & (0x4000U == (0x6000U & vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U])));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__ipdom_stack__pop 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop) 
           & (0x6000U == (0x6000U & vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if.data[5U])));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__pop 
        = ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__empty_r)) 
           & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__ready_out_t));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__used_n 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__used_r) 
                 + ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__push) 
                    - (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pop))));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__used_n 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__used_r) 
                 + ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__push) 
                    - (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__0__KET____DOT__buffer__DOT__genblk1__DOT__pop))));
}

void Vsim___024root____Vdpiimwrap_tb__DOT__mem_access_TOP(CData/*0:0*/ req_rw, QData/*63:0*/ req_byteen, QData/*63:0*/ req_addr, VlWide<16>/*511:0*/ req_data, VlWide<16>/*511:0*/ &rsp_data);

void Vsim___024root___nba_sequent__TOP__5(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<16>/*511:0*/ __Vtask_tb__DOT__mem_access__3__rsp_data;
    VL_ZERO_W(512, __Vtask_tb__DOT__mem_access__3__rsp_data);
    VlWide<16>/*511:0*/ __Vtemp_1;
    // Body
    vlSelfRef.tb__DOT__mem_req_ready = 0U;
    vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__valid_d = 0U;
    if (((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r) 
         & ((~ (IData)(vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__valid_q)) 
            | (IData)(vlSelfRef.tb__DOT__mem_rsp__BRA__1__KET____DOT__ready)))) {
        __Vtemp_1[0U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[1U] 
                          << 0x00000018U) | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0U] 
                                             >> 8U));
        __Vtemp_1[1U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[2U] 
                          << 0x00000018U) | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[1U] 
                                             >> 8U));
        __Vtemp_1[2U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[3U] 
                          << 0x00000018U) | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[2U] 
                                             >> 8U));
        __Vtemp_1[3U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[4U] 
                          << 0x00000018U) | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[3U] 
                                             >> 8U));
        __Vtemp_1[4U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[5U] 
                          << 0x00000018U) | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[4U] 
                                             >> 8U));
        __Vtemp_1[5U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[6U] 
                          << 0x00000018U) | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[5U] 
                                             >> 8U));
        __Vtemp_1[6U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[7U] 
                          << 0x00000018U) | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[6U] 
                                             >> 8U));
        __Vtemp_1[7U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[8U] 
                          << 0x00000018U) | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[7U] 
                                             >> 8U));
        __Vtemp_1[8U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[9U] 
                          << 0x00000018U) | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[8U] 
                                             >> 8U));
        __Vtemp_1[9U] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000aU] 
                          << 0x00000018U) | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[9U] 
                                             >> 8U));
        __Vtemp_1[0x0000000aU] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000bU] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000aU] 
                                     >> 8U));
        __Vtemp_1[0x0000000bU] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000cU] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000bU] 
                                     >> 8U));
        __Vtemp_1[0x0000000cU] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000dU] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000cU] 
                                     >> 8U));
        __Vtemp_1[0x0000000dU] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000eU] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000dU] 
                                     >> 8U));
        __Vtemp_1[0x0000000eU] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000fU] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000eU] 
                                     >> 8U));
        __Vtemp_1[0x0000000fU] = ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x00000010U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x0000000fU] 
                                     >> 8U));
        Vsim___024root____Vdpiimwrap_tb__DOT__mem_access_TOP(
                                                             (1U 
                                                              & (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x00000013U] 
                                                                 >> 5U)), 
                                                             (((QData)((IData)(
                                                                               vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x00000013U])) 
                                                               << 0x0000003bU) 
                                                              | (((QData)((IData)(
                                                                                vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x00000012U])) 
                                                                  << 0x0000001bU) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x00000011U])) 
                                                                    >> 5U))), (QData)((IData)(
                                                                                (0x03ffffffU 
                                                                                & ((vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x00000011U] 
                                                                                << 0x00000015U) 
                                                                                | (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x00000010U] 
                                                                                >> 0x0000000bU))))), __Vtemp_1, __Vtask_tb__DOT__mem_access__3__rsp_data);
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[0U] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[0U];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[1U] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[1U];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[2U] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[2U];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[3U] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[3U];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[4U] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[4U];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[5U] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[5U];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[6U] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[6U];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[7U] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[7U];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[8U] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[8U];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[9U] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[9U];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[0x0000000aU] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[0x0000000aU];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[0x0000000bU] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[0x0000000bU];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[0x0000000cU] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[0x0000000cU];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[0x0000000dU] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[0x0000000dU];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[0x0000000eU] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[0x0000000eU];
        vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__data_d[0x0000000fU] 
            = __Vtask_tb__DOT__mem_access__3__rsp_data[0x0000000fU];
        vlSelfRef.tb__DOT__mem_req_ready = 1U;
        if ((1U & (~ (vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__.req_data[0x00000013U] 
                      >> 5U)))) {
            vlSelfRef.tb__DOT__mem_rsp__BRA__0__KET____DOT__valid_d = 1U;
        }
    }
}

void Vsim___024root___nba_comb__TOP__0(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__pop 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__valid_out_r) 
           & (IData)(vlSelfRef.tb__DOT__mem_req_ready));
}

extern const VlWide<15>/*479:0*/ Vsim__ConstPool__CONST_h9facd8e6_0;

void Vsim___024root___nba_sequent__TOP__6(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vfunc_wis_to_wid__8__Vfuncout;
    __Vfunc_wis_to_wid__8__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_wis_to_wid__8__wis;
    __Vfunc_wis_to_wid__8__wis = 0;
    // Body
    if (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__ready_out_t) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0U] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[0U] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0U]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[1U] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[1U] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[1U]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[2U] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[2U] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[2U]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[3U] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[3U] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[3U]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[4U] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[4U]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[5U] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[5U]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[6U] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[6U]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[7U] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[7U] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[7U]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[8U] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[8U] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[8U]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[9U] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[9U] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[9U]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000aU] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[0x0000000aU] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0x0000000aU]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000bU] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[0x0000000bU] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0x0000000bU]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000cU] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[0x0000000cU] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0x0000000cU]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[0x0000000dU] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0x0000000dU]);
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000eU] 
            = (Vsim__ConstPool__CONST_h9facd8e6_0[0x0000000eU] 
               & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0x0000000eU]);
    }
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT_____05Fexecute_reset__DOT__genblk1__DOT__reset_r;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[1U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][1U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[2U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][2U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[3U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][3U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[4U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][4U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[5U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][5U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[6U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][6U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[7U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][7U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[8U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][8U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[9U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][9U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0x0000000aU] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0x0000000aU];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0x0000000bU] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0x0000000bU];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0x0000000cU] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0x0000000cU];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0x0000000dU] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0x0000000dU];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__data_in[0x0000000eU] 
        = ((0x01000000U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__empty_r)) 
                           << 0x00000018U)) | vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
           [vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0x0000000eU]);
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[0U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[8U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[1U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[9U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[2U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000aU];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[3U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000bU];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[4U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[5U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[6U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[7U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[7U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[8U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[9U] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[0x0000000aU] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[0x0000000bU] 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    __Vfunc_wis_to_wid__8__wis = (3U & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000eU] 
                                        >> 0x00000015U));
    __Vfunc_wis_to_wid__8__Vfuncout = __Vfunc_wis_to_wid__8__wis;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__genblk5__BRA__0__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__8__Vfuncout;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT_____05Fexecute_reset__DOT__genblk1__DOT__reset_r 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__genblk1__DOT__reset_r;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm 
        = (7U & ((IData)(((0x00003800U == (0x00003800U 
                                           & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000cU])) 
                          & (7U != (0x0000000fU & (
                                                   vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU] 
                                                   >> 0x0000000eU)))))
                  ? (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_data__DOT__fcsr 
                     >> (0x0000001fU & ((IData)(5U) 
                                        + VL_SHIFTL_III(5,5,32, (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__genblk5__BRA__0__KET____DOT__block_wid), 3U))))
                  : ((vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000cU] 
                      << 0x00000015U) | (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000cU] 
                                         >> 0x0000000bU))));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_has_fflags = 1U;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op_mod = 0U;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_rnd 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm;
    if ((1U & (~ (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU] 
                  >> 0x00000011U)))) {
        if ((1U & (~ (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU] 
                      >> 0x00000010U)))) {
            if ((1U & (~ (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU] 
                          >> 0x0000000fU)))) {
                if ((0x00004000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[4U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[8U];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[5U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[9U];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[6U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000aU];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[7U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000bU];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[8U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[9U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[0x0000000aU] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[0x0000000bU] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[7U];
                } else {
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[4U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[8U];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[5U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[9U];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[6U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000aU];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[7U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000bU];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[8U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[9U] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[5U];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[0x0000000aU] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[6U];
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_operands[0x0000000bU] 
                        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[7U];
                }
            }
        }
        if ((0x00010000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
            if ((0x00008000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
                if ((0x00004000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
                    if ((((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)) 
                          || (1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm))) 
                         || (2U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)))) {
                        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_has_fflags = 0U;
                        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_rnd 
                            = (3U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm));
                    } else {
                        if ((3U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm))) {
                            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_has_fflags = 0U;
                        } else if (((4U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)) 
                                    || (5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)))) {
                            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_has_fflags = 0U;
                        }
                        if ((3U != (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm))) {
                            if (((4U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)) 
                                 || (5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)))) {
                                vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_rnd = 3U;
                            } else if (((6U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)) 
                                        || (7U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)))) {
                                vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_rnd 
                                    = (1U & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op = 0U;
    if ((0x00020000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
        if ((0x00010000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
            if ((0x00008000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
                if ((0x00004000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op_mod = 1U;
                }
                vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op = 1U;
            } else {
                if ((0x00004000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op_mod = 1U;
                }
                vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op = 0U;
            }
        } else if ((0x00008000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op_mod 
                = (1U & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU] 
                         >> 0x0000000eU));
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op = 0x0cU;
        } else {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op_mod 
                = (1U & (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU] 
                         >> 0x0000000eU));
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op = 0x0bU;
        }
    } else if ((0x00010000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
        if ((0x00008000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
            if ((0x00004000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
                if ((1U & (~ (((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)) 
                               || (1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm))) 
                              || (2U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)))))) {
                    if ((3U != (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm))) {
                        if (((4U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)) 
                             || (5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)))) {
                            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op_mod 
                                = (1U & (~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)));
                        }
                    }
                }
                if ((((0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)) 
                      || (1U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm))) 
                     || (2U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)))) {
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op = 6U;
                } else if ((3U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm))) {
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op = 9U;
                } else if (((4U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)) 
                            || (5U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)))) {
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op = 6U;
                } else if (((6U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)) 
                            || (7U == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_req_frm)))) {
                    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op = 7U;
                }
            }
        } else {
            vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op 
                = ((0x00004000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])
                    ? 8U : 5U);
        }
    } else {
        if ((1U & (~ (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU] 
                      >> 0x0000000fU)))) {
            if ((0x00004000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])) {
                vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op_mod = 1U;
            }
        }
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_op 
            = ((0x00008000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])
                ? ((0x00004000U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_d[0x0000000dU])
                    ? 4U : 3U) : 2U);
    }
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__genblk1__DOT__reset_r 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT_____05Fsocket_reset__DOT__genblk1__DOT__reset_r;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_98 = ((0U 
                                                  == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_rnd)) 
                                                 | (4U 
                                                    == (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_rnd)));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT_____05Fsocket_reset__DOT__genblk1__DOT__reset_r 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT_____05Fcluster_reset__DOT__genblk1__DOT__reset_r;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT_____05Fcluster_reset__DOT__genblk1__DOT__reset_r 
        = vlSelfRef.tb__DOT__reset;
}

void Vsim___024root___nba_comb__TOP__1(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_valid_out 
        = ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core.__PVT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | (IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core.__PVT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpu_valid_out_uq 
        = ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core.__PVT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | (IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core.__PVT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpu_valid_out_uq 
        = ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core.__PVT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | (IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core.__PVT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpu_valid_out_uq 
        = ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core.__PVT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
           | (IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core.__PVT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT____Vcellinp__rsp_buf__data_in[0U] 
        = (IData)((((QData)((IData)((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                     >> 7U))) << 7U) 
                   | (QData)((IData)(((0x00000040U 
                                       & ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core.__PVT__arbiter_output) 
                                          << 6U)) | 
                                      (0x0000003fU 
                                       & (IData)((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                                  >> 1U))))))));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT____Vcellinp__rsp_buf__data_in[1U] 
        = ((0xffffff80U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT____Vcellinp__rsp_buf__data_in[1U]) 
           | (IData)(((((QData)((IData)((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                         >> 7U))) << 7U) 
                       | (QData)((IData)(((0x00000040U 
                                           & ((IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core.__PVT__arbiter_output) 
                                              << 6U)) 
                                          | (0x0000003fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                                        >> 1U))))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT____Vcellinp__rsp_buf__data_in[1U] 
        = ((0x0000007fU & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT____Vcellinp__rsp_buf__data_in[1U]) 
           | ((IData)((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core.__PVT__arbiter_output 
                       >> 7U)) << 7U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT____Vcellinp__rsp_buf__data_in[2U] 
        = (((IData)((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core.__PVT__arbiter_output 
                     >> 7U)) >> 0x00000019U) | ((IData)(
                                                        (((QData)((IData)(
                                                                          (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                                                           >> 7U))) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                                                            >> 7U))))) 
                                                << 7U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT____Vcellinp__rsp_buf__data_in[3U] 
        = (((IData)((((QData)((IData)((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                       >> 7U))) << 0x00000020U) 
                     | (QData)((IData)((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                        >> 7U))))) 
            >> 0x00000019U) | ((IData)(((((QData)((IData)(
                                                          (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                                           >> 7U))) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           (vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                                            >> 7U)))) 
                                        >> 0x00000020U)) 
                               << 7U));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT____Vcellinp__rsp_buf__data_in[4U] 
        = ((IData)(((((QData)((IData)((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                       >> 7U))) << 0x00000020U) 
                     | (QData)((IData)((vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core.__PVT__arbiter_output 
                                        >> 7U)))) >> 0x00000020U)) 
           >> 0x00000019U);
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__push 
        = ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__use_buffer)) 
           & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__fpu_valid_out));
}

void Vsim___024root___nba_comb__TOP__2(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vlvbound_h030ea80d__0;
    tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vlvbound_h030ea80d__0 = 0;
    // Body
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__execute_fire 
        = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r) 
           & (IData)(vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready));
    tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vlvbound_h030ea80d__0 
        = vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_execute_if__BRA__0__KET__.ready;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__ready_in 
        = tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT____Vlvbound_h030ea80d__0;
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__free_slots_n 
        = vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__free_slots;
    if (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_rsp_fire) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__free_slots_n 
            = ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__free_slots_n) 
               | (3U & ((IData)(1U) << (1U & vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk1__DOT__stream_buffer__DOT__genblk1__DOT__genblk1__DOT__data_out_r[0U]))));
    }
    if (vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__execute_fire) {
        vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__free_slots_n 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r))) 
               & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__tag_store__DOT__allocator__DOT__free_slots_n));
    }
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__ready_out_t 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__genblk1__BRA__0__KET____DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__genblk1__DOT__value_r)) 
                 | (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__DOT__ready_in)));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__pop 
        = ((~ (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__empty_r)) 
           & (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__ready_out_t));
    vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__used_n 
        = (1U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__fifo_queue__DOT__genblk6__DOT__used_r) 
                 + ((IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__push) 
                    - (IData)(vlSelfRef.tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__genblk2__BRA__3__KET____DOT__buffer__DOT__genblk1__DOT__pop))));
}

void Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__0(Vsim_fpnew_top__pi46* vlSelf);
void Vsim___024root___nba_sequent__TOP__0(Vsim___024root* vlSelf);
void Vsim___024root___nba_sequent__TOP__1(Vsim___024root* vlSelf);
void Vsim___024root___nba_sequent__TOP__2(Vsim___024root* vlSelf);
void Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if__0(Vsim_VX_commit_if* vlSelf);
void Vsim_VX_writeback_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__writeback_if__BRA__0__KET____0(Vsim_VX_writeback_if* vlSelf);
void Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D10_T3* vlSelf);
void Vsim_VX_scoreboard_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if__0(Vsim_VX_scoreboard_if* vlSelf);
void Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D10_T3* vlSelf);
void Vsim_VX_mem_bus_if__D40_T6___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__mem_bus_cache_if__0(Vsim_VX_mem_bus_if__D40_T6* vlSelf);
void Vsim_VX_schedule_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule_if__0(Vsim_VX_schedule_if* vlSelf);
void Vsim_VX_lsu_mem_if__N4_D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET____0(Vsim_VX_lsu_mem_if__N4_D4_T2* vlSelf);
void Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_execute_if__0(Vsim_VX_execute_if__N4* vlSelf);
void Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__muldiv_execute_if__0(Vsim_VX_execute_if__N4* vlSelf);
void Vsim_VX_mem_bus_if__D40_T8___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__l2cache__DOT__core_bus_cache_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D40_T8* vlSelf);
void Vsim_VX_mem_bus_if__D40_T7___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__cache_mem_bus_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D40_T7* vlSelf);
void Vsim_VX_mem_bus_if__D40_T4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__cache_mem_bus_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D40_T4* vlSelf);
void Vsim_VX_decode_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode_if__0(Vsim_VX_decode_if* vlSelf);
void Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__int_execute_if__0(Vsim_VX_execute_if__N4* vlSelf);
void Vsim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D4_T3* vlSelf);
void Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_commit_if__0(Vsim_VX_commit_if* vlSelf);
void Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if__0(Vsim_VX_commit_if* vlSelf);
void Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__int_commit_if__0(Vsim_VX_commit_if* vlSelf);
void Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET____0(Vsim_VX_execute_if__N4* vlSelf);
void Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__3__KET____0(Vsim_VX_mem_bus_if__D4_T2* vlSelf);
void Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__2__KET____0(Vsim_VX_mem_bus_if__D4_T2* vlSelf);
void Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__1__KET____0(Vsim_VX_mem_bus_if__D4_T2* vlSelf);
void Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D4_T2* vlSelf);
void Vsim_VX_ibuffer_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__3__KET____0(Vsim_VX_ibuffer_if* vlSelf);
void Vsim_VX_ibuffer_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__2__KET____0(Vsim_VX_ibuffer_if* vlSelf);
void Vsim_VX_ibuffer_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET____0(Vsim_VX_ibuffer_if* vlSelf);
void Vsim_VX_ibuffer_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET____0(Vsim_VX_ibuffer_if* vlSelf);
void Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_no_rsp_if__0(Vsim_VX_commit_if* vlSelf);
void Vsim___024root___nba_sequent__TOP__3(Vsim___024root* vlSelf);
void Vsim_VX_lsu_mem_if__N4_D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET____0(Vsim_VX_lsu_mem_if__N4_D4_T2* vlSelf);
void Vsim_VX_mem_bus_if__D40_T8___nba_sequent__TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D40_T8* vlSelf);
void Vsim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__arb_core_bus_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D4_T3* vlSelf);
void Vsim_VX_warp_ctl_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if__0(Vsim_VX_warp_ctl_if* vlSelf);
void Vsim_VX_decode_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__per_issue_decode_if__0(Vsim_VX_decode_if* vlSelf);
void Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__per_block_execute_if__BRA__0__KET____0(Vsim_VX_execute_if__N4* vlSelf);
void Vsim_VX_scoreboard_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if__1(Vsim_VX_scoreboard_if* vlSelf);
void Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0(Vsim_VX_mem_bus_if__D10_T3* vlSelf);
void Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__1(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core__1(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core__1(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core__1(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___act_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__0(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__1(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__2(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core__2(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core__2(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core__2(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__2(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core__2(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core__2(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__3(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core__3(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core__3(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core__2(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_VX_execute_if__N4___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_execute_if__BRA__0__KET____0(Vsim_VX_execute_if__N4* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core__4(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core__4(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core__3(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__4(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___act_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core__0(Vsim_fpnew_top__pi46* vlSelf);
void Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__5(Vsim_fpnew_top__pi46* vlSelf);

void Vsim___024root___eval_nba(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_nba\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x0000000bU] = 1U;
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core));
        Vsim___024root___nba_sequent__TOP__0(vlSelf);
        Vsim___024root___nba_sequent__TOP__1(vlSelf);
        Vsim___024root___nba_sequent__TOP__2(vlSelf);
        Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_rsp_if));
        Vsim_VX_writeback_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__writeback_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__writeback_if__BRA__0__KET__));
        Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET__));
        Vsim_VX_scoreboard_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if));
        Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__genblk1__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET__));
        Vsim_VX_mem_bus_if__D40_T6___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__mem_bus_cache_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__mem_bus_cache_if));
        Vsim_VX_schedule_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__schedule_if));
        Vsim_VX_lsu_mem_if__N4_D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__lsu_switch_if__BRA__0__KET__));
        Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_execute_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_execute_if));
        Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__muldiv_execute_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__muldiv_execute_if));
        Vsim_VX_mem_bus_if__D40_T8___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__l2cache__DOT__core_bus_cache_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__l2cache__DOT__core_bus_cache_if__BRA__0__KET__));
        Vsim_VX_mem_bus_if__D40_T7___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__cache_mem_bus_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__cache_mem_bus_if__BRA__0__KET__));
        Vsim_VX_mem_bus_if__D40_T4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__cache_mem_bus_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__cache_mem_bus_if__BRA__0__KET__));
        Vsim_VX_decode_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__decode_if));
        Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__int_execute_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__int_execute_if));
        Vsim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__core_bus2_if__BRA__0__KET__));
        Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_commit_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_commit_if));
        Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_commit_if));
        Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__int_commit_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__int_commit_if));
        Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_execute_if__BRA__0__KET__));
        Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__3__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__3__KET__));
        Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__2__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__2__KET__));
        Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__1__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__1__KET__));
        Vsim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lmem_unit__DOT__genblk4__BRA__0__KET____DOT__lmem_bus_tmp_if__BRA__0__KET__));
        Vsim_VX_ibuffer_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__3__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__3__KET__));
        Vsim_VX_ibuffer_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__2__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__2__KET__));
        Vsim_VX_ibuffer_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET__));
        Vsim_VX_ibuffer_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET__));
        Vsim_VX_commit_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_no_rsp_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__lsu_slices__BRA__0__KET____DOT__lsu_slice__DOT__commit_no_rsp_if));
        Vsim___024root___nba_sequent__TOP__3(vlSelf);
        Vsim_VX_lsu_mem_if__N4_D4_T2___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__lsu_mem_if__BRA__0__KET__));
        Vsim_VX_mem_bus_if__D40_T8___nba_sequent__TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__l3cache__DOT__core_bus_cache_if__BRA__0__KET__));
        Vsim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__arb_core_bus_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__arb_core_bus_if__BRA__0__KET__));
        Vsim_VX_warp_ctl_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if));
        Vsim_VX_decode_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__per_issue_decode_if__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__per_issue_decode_if));
        Vsim_VX_execute_if__N4___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__per_block_execute_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__per_block_execute_if__BRA__0__KET__));
        Vsim_VX_scoreboard_if___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if__1((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__issue__DOT__issue_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if));
        Vsim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__caches__BRA__0__KET____DOT__cache_wrap__DOT__genblk3__DOT__cache__DOT__core_bus2_if__BRA__0__KET__));
        Vsim___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x0000000cU] = 1U;
    }
    if ((0x0000000000000500ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__1((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x0000000dU] = 1U;
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core__1((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core__1((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core__1((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core));
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000501ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___act_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x0000000eU] = 1U;
    }
    if ((0x0000000000000500ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__1((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x0000000fU] = 1U;
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__1((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__1((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__1((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core));
    }
    if ((0x0000000000000504ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___act_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x00000010U] = 1U;
    }
    if ((0x0000000000000510ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___act_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x00000011U] = 1U;
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x00000012U] = 1U;
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__2((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core__2((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core__2((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core__2((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core));
    }
    if ((0x0000000000000540ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___act_sequent__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x00000013U] = 1U;
    }
    if ((0x0000000000000503ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__2((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x00000014U] = 1U;
    }
    if ((0x000000000000050cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core__2((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x00000015U] = 1U;
    }
    if ((0x0000000000000530ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core__2((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x00000016U] = 1U;
    }
    if ((0x0000000000000500ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__3((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x00000017U] = 1U;
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core__3((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core__3((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core__2((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core));
        Vsim___024root___nba_comb__TOP__1(vlSelf);
        Vsim_VX_execute_if__N4___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_execute_if__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_execute_if__BRA__0__KET__));
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core__4((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core__4((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core__3((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core));
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__4((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core));
        Vsim___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x00000000000005c0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___act_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core__0((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__3__KET____DOT__fpnew_core));
        vlSelfRef.__Vm_traceActivity[0x00000018U] = 1U;
    }
    if ((0x0000000000000503ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__5((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core));
    }
    if ((0x000000000000050cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__5((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__1__KET____DOT__fpnew_core));
    }
    if ((0x0000000000000530ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vsim_fpnew_top__pi46___nba_comb__TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__0__KET____DOT__fpnew_core__5((&vlSymsp->TOP__tb__DOT__dut__DOT__clusters__BRA__0__KET____DOT__cluster__DOT__sockets__BRA__0__KET____DOT__socket__DOT__cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_fpnew__DOT__genblk3__BRA__2__KET____DOT__fpnew_core));
    }
}

void Vsim___024root___timing_resume(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___timing_resume\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000800ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsim___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vsim___024root___eval_triggers__act(Vsim___024root* vlSelf);
bool Vsim___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vsim___024root___eval_act(Vsim___024root* vlSelf);

bool Vsim___024root___eval_phase__act(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_phase__act\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsim___024root___eval_triggers__act(vlSelf);
    Vsim___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsim___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vsim___024root___timing_resume(vlSelf);
        Vsim___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vsim___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsim___024root___eval_phase__nba(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_phase__nba\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsim___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsim___024root___eval_nba(vlSelf);
        Vsim___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsim___024root___eval(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsim___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("verilogSourceFiles/tb.sv", 5, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsim___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("verilogSourceFiles/tb.sv", 5, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vsim___024root___eval_phase__act(vlSelf));
    } while (Vsim___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vsim___024root___eval_debug_assertions(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_debug_assertions\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
