// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___act_comb__TOP__91(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__91\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_err_code__DOT__d 
        = ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__error_o 
                          >> 0x00000020U))) ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__error_o)
            : ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_errchk__DOT__error_o 
                              >> 0x00000020U))) ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_errchk__DOT__error_o)
                : ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                                  >> 0x00000020U)))
                    ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err)
                    : ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_err 
                                      >> 0x00000020U)))
                        ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_err)
                        : ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_err 
                                          >> 0x00000020U)))
                            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_err)
                            : 0U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_err_code__DOT__de 
        = (IData)(((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                      | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__error_o) 
                     | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_err) 
                    | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_errchk__DOT__error_o) 
                   >> 0x00000020U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__alerts 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
            << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_state_kmac_err__DOT__de 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
             [2U][0U] >> 0x0000001aU) & (7U == (7U 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_test_fifo_empty__DOT__we)))))) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_err_code__DOT__de));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1683 = (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_status_fifo_full__DOT__d)
                                                                            ? 0x0000000aU
                                                                            : 
                                                                           (0x0000000fU 
                                                                            & (((1U 
                                                                                & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                                                >> 4U)) 
                                                                                == 
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                                                >> 4U)))
                                                                                ? 
                                                                               ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                                                                : 
                                                                               (((IData)(0x0aU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                                                                + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))) 
                                                                          << 0x0000000fU) 
                                                                         | ((((2U 
                                                                               & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rvalid_o)) 
                                                                                << 1U)) 
                                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_status_fifo_full__DOT__d)) 
                                                                             << 0x0000000dU) 
                                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__status_alert_fatal_fault) 
                                                                                << 0x0000000cU) 
                                                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__status_alert_recov_ctrl_update_err) 
                                                                                << 0x0000000bU)))) 
                                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                                           << 1U))))) 
                                                    << 0x00000021U) 
                                                   | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_err_code__DOT__d)) 
                                                       << 1U) 
                                                      | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_err_code__DOT__de))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_state_kmac_err__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_state_kmac_err__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_state_kmac_done__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_state_kmac_err__DOT__d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_state_kmac_err__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_intr_state_kmac_err__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0ULL != (0x00000000000000ffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit)))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_intr_state_kmac_err__q) 
                       << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_intr_state_fifo_empty__q) 
                                  << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_intr_state_kmac_done__q))));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                  >> 1U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_kmac_err__q) 
                       << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_fifo_empty__q) 
                                  << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_intr_enable_kmac_done__q))));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                  >> 2U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                  >> 3U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                  >> 4U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_fsm)));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                  >> 5U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_mode.__PVT__committed_q) 
                       << 4U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__committed_q) 
                                  << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kmac_en.__PVT__committed_q))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffcffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_state_endianness.__PVT__committed_q) 
                       << 9U) | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_msg_endianness.__PVT__committed_q) 
                                 << 8U)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffefffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_sideload.__PVT__committed_q) 
                      << 0x0000000cU));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffcffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode.__PVT__committed_q) 
                      << 0x00000010U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffe7ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_msg_mask.__PVT__committed_q) 
                       << 0x00000014U) | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process.__PVT__committed_q) 
                                          << 0x00000013U)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfeffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_ready.__PVT__committed_q) 
                      << 0x00000018U));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfbffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_en_unsupported_modestrength.__PVT__committed_q) 
                      << 0x0000001aU));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                  >> 6U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = (0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffff8ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next);
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_fsm)) 
                       << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_fsm)) 
                                  << 1U) | (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_fsm)))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffe0ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0x00001f00U & ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1683 
                                              >> 0x00000030U)) 
                                     << 8U)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffc3fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__status_alert_recov_ctrl_update_err) 
                         << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__status_alert_fatal_fault) 
                                   << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_status_fifo_full__DOT__d) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rvalid_o))))) 
                      << 0x0000000eU));
        }
    } else if ((IData)((0ULL != (0x000000000000ff00ULL 
                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit)))) {
        if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                           >> 8U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_entropy_period_prescaler__q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_entropy_period_wait_timer__q) 
                      << 0x00000010U));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
                = ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                  >> 9U))) ? ((0xfffffc00U 
                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_entropy_refresh_hash_cnt__DOT__q))
                    : ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                      >> 0x0aU))) ? 
                       ((0xfffffc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next) 
                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_entropy_refresh_threshold_shadowed__DOT__committed_q))
                        : 0U));
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next 
            = ((IData)((0ULL != (0x0000000000ff0000ULL 
                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit)))
                ? 0U : ((IData)((0ULL != (0x00000000ff000000ULL 
                                          & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit)))
                         ? 0U : ((IData)((0ULL != (0x000000ff00000000ULL 
                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit)))
                                  ? 0U : ((IData)((0ULL 
                                                   != 
                                                   (0x0000ff0000000000ULL 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit)))
                                           ? ((1U & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                             >> 0x28U)))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                              >> 0x29U)))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                               >> 0x2aU)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                                >> 0x2bU)))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                                 >> 0x2cU)))
                                                      ? 
                                                     (0xfffffff8U 
                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__reg_rdata_next)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                                  >> 0x2dU)))
                                                       ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_prefix_0__q
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                                   >> 0x2eU)))
                                                        ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_prefix_1__q
                                                        : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_prefix_2__q)))))))
                                           : ((IData)(
                                                      (0ULL 
                                                       != 
                                                       (0x00ff000000000000ULL 
                                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                              >> 0x30U)))
                                                   ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_prefix_3__q
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                               >> 0x31U)))
                                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_prefix_4__q
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                                >> 0x32U)))
                                                     ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_prefix_5__q
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                                 >> 0x33U)))
                                                      ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_prefix_6__q
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                                  >> 0x34U)))
                                                       ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_prefix_7__q
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                                   >> 0x35U)))
                                                        ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_prefix_8__q
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                                    >> 0x36U)))
                                                         ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_prefix_9__q
                                                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_prefix_10__q)))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__addr_hit 
                                                              >> 0x38U)))
                                                   ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_err_code__DOT__q
                                                   : 0xffffffffU))))));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_state_kmac_err__DOT__wr_data 
        = ((~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x0000001aU) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_state_kmac_done__DOT__we))) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_state_kmac_err__DOT__de)
               ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_state_kmac_err__DOT__d)
               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_intr_state_kmac_err__q)));
}

void Vsim___024root___act_comb__TOP__92(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__92\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_phy_rsp[1U] 
        = ((0x0003ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_phy_rsp[1U]) 
           | ((IData)((((QData)((IData)((1U & ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.rd_err_o) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.rd_err_o)) 
                                               >> (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                                      >> 0x00000011U)))))) 
                        << 0x00000027U) | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__rd_data_ctrl
                       [(1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                               >> 0x00000011U))])) 
              << 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_phy_rsp[2U] 
        = ((0x7c000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_phy_rsp[2U]) 
           | (0x7fffffffU & (((IData)((((QData)((IData)(
                                                        (1U 
                                                         & ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.rd_err_o) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.rd_err_o)) 
                                                            >> 
                                                            (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                                                >> 0x00000011U)))))) 
                                        << 0x00000027U) 
                                       | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__rd_data_ctrl
                                       [(1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                               >> 0x00000011U))])) 
                              >> 0x0000000eU) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (1U 
                                                                             & ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.rd_err_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.rd_err_o)) 
                                                                                >> 
                                                                                (1U 
                                                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                                                                >> 0x00000011U)))))) 
                                                            << 0x00000027U) 
                                                           | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__rd_data_ctrl
                                                           [
                                                           (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                                               >> 0x00000011U))]) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000012U))));
}

void Vsim___024root___act_comb__TOP__93(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__93\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__rdata_i 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__host_rsp_data
        [vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__rdata_o];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__rdata_tlword 
        = ((0U != (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__rdata_o 
                                  >> 1U))) ? (((QData)((IData)(
                                                               ((0x26U 
                                                                 >= 
                                                                 (0x0000003fU 
                                                                  & ((IData)(0x20U) 
                                                                     + 
                                                                     ((IData)(0x00000027U) 
                                                                      * 
                                                                      (1U 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__rdata_o)))))
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__rdata_i 
                                                                            >> 
                                                                            (0x0000003fU 
                                                                             & ((IData)(0x20U) 
                                                                                + 
                                                                                ((IData)(0x00000027U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__rdata_o)))))))
                                                                 : 0U))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                (((0x26U 
                                                                   >= 
                                                                   (0x0000003fU 
                                                                    & ((IData)(0x00000027U) 
                                                                       * 
                                                                       (1U 
                                                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__rdata_o))))
                                                                   ? (IData)(
                                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__rdata_i 
                                                                              >> 
                                                                              (0x0000003fU 
                                                                               & ((IData)(0x00000027U) 
                                                                                * 
                                                                                (1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__rdata_o)))))
                                                                   : 0U) 
                                                                 ^ 
                                                                 (0x0001ffffU 
                                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sramreqfifo__DOT__rdata_o 
                                                                     >> 5U))))))
            : 0x0000002a00000000ULL);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__wdata_i 
        = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__rdata_tlword)) 
            << 8U) | (QData)((IData)(((0x000000feU 
                                       & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__rdata_tlword 
                                                   >> 0x00000020U)) 
                                          << 1U)) | 
                                      (1U & (((2U & 
                                               ((IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__rdata_o 
                                                         >> 0x00000027U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__rdata_o 
                                                            >> 0x00000027U)))) 
                                             >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__rdata_o)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0x000000ffffffffffULL & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__wvalid_i))
                                                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__wdata_i
                                                : (
                                                   (0x4fU 
                                                    >= 
                                                    (0x0000007fU 
                                                     & ((IData)(0x00000028U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (((IData)(0x00000027U) 
                                                                       + 
                                                                       (0x0000007fU 
                                                                        & ((IData)(0x00000028U) 
                                                                           * 
                                                                           (1U 
                                                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000028U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                                       ? 0x00000020U
                                                       : 
                                                      ((IData)(0x00000040U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000028U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((IData)(0x00000028U) 
                                                             * 
                                                             (1U 
                                                              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                         (((IData)(0x0000001fU) 
                                                                           + 
                                                                           (0x0000007fU 
                                                                            & ((IData)(0x00000028U) 
                                                                               * 
                                                                               (1U 
                                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000028U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                          (3U 
                                                                           & (((IData)(0x00000028U) 
                                                                               * 
                                                                               (1U 
                                                                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x0000001fU 
                                                           & ((IData)(0x00000028U) 
                                                              * 
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))))))
                                                    : 0ULL))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__d_error 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__rdata_o 
                                  >> 0x0000000fU)))
                     ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__rdata_o) 
                        | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__rdata_o 
                           >> 0x0000000eU)) : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 0x0000000eU))));
}

void Vsim___024root___act_comb__TOP__94(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__94\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__d_valid) 
           & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U]);
}

void Vsim___024root___act_comb__TOP__95(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__95\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[0U] 
        = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U]) 
           | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__dfifo_rspready)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[1U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
           | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
           | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__u_devicefifo__DOT__tl_h_i[3U] 
        = (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)) 
            << 0x0000000cU) | ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]) 
                               | (0x00000ffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U])));
}

void Vsim___024root___act_comb__TOP__96(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__96\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT____Vlvbound_h503b73a3__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT____Vlvbound_h503b73a3__0 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT____VdfgExtracted_h435ad752__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT____VdfgExtracted_h435ad752__0 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT____VdfgExtracted_h99e0c7c1__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT____VdfgExtracted_h99e0c7c1__0 = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3180__Vfuncout;
    __Vfunc_sbox4_64bit__3180__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3180__state_in;
    __Vfunc_sbox4_64bit__3180__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3181__Vfuncout;
    __Vfunc_sbox4_8bit__3181__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3181__state_in;
    __Vfunc_sbox4_8bit__3181__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__3182__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__3182__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__3182__state_in;
    __Vfunc_prince_mult_prime_64bit__3182__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3183__Vfuncout;
    __Vfunc_prince_nibble_red16__3183__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3183__vect;
    __Vfunc_prince_nibble_red16__3183__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3184__Vfuncout;
    __Vfunc_prince_nibble_red16__3184__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3184__vect;
    __Vfunc_prince_nibble_red16__3184__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3185__Vfuncout;
    __Vfunc_prince_nibble_red16__3185__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3185__vect;
    __Vfunc_prince_nibble_red16__3185__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3186__Vfuncout;
    __Vfunc_prince_nibble_red16__3186__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3186__vect;
    __Vfunc_prince_nibble_red16__3186__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3187__Vfuncout;
    __Vfunc_prince_nibble_red16__3187__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3187__vect;
    __Vfunc_prince_nibble_red16__3187__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3188__Vfuncout;
    __Vfunc_prince_nibble_red16__3188__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3188__vect;
    __Vfunc_prince_nibble_red16__3188__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3189__Vfuncout;
    __Vfunc_prince_nibble_red16__3189__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3189__vect;
    __Vfunc_prince_nibble_red16__3189__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3190__Vfuncout;
    __Vfunc_prince_nibble_red16__3190__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3190__vect;
    __Vfunc_prince_nibble_red16__3190__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3191__Vfuncout;
    __Vfunc_prince_nibble_red16__3191__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3191__vect;
    __Vfunc_prince_nibble_red16__3191__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3192__Vfuncout;
    __Vfunc_prince_nibble_red16__3192__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3192__vect;
    __Vfunc_prince_nibble_red16__3192__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3193__Vfuncout;
    __Vfunc_prince_nibble_red16__3193__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3193__vect;
    __Vfunc_prince_nibble_red16__3193__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3194__Vfuncout;
    __Vfunc_prince_nibble_red16__3194__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3194__vect;
    __Vfunc_prince_nibble_red16__3194__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3195__Vfuncout;
    __Vfunc_prince_nibble_red16__3195__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3195__vect;
    __Vfunc_prince_nibble_red16__3195__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3196__Vfuncout;
    __Vfunc_prince_nibble_red16__3196__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3196__vect;
    __Vfunc_prince_nibble_red16__3196__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3197__Vfuncout;
    __Vfunc_prince_nibble_red16__3197__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3197__vect;
    __Vfunc_prince_nibble_red16__3197__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3198__Vfuncout;
    __Vfunc_prince_nibble_red16__3198__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3198__vect;
    __Vfunc_prince_nibble_red16__3198__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__3199__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__3199__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__3199__state_in;
    __Vfunc_prince_shiftrows_64bit__3199__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__3200__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__3200__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__3200__state_in;
    __Vfunc_prince_mult_prime_64bit__3200__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3201__Vfuncout;
    __Vfunc_prince_nibble_red16__3201__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3201__vect;
    __Vfunc_prince_nibble_red16__3201__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3202__Vfuncout;
    __Vfunc_prince_nibble_red16__3202__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3202__vect;
    __Vfunc_prince_nibble_red16__3202__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3203__Vfuncout;
    __Vfunc_prince_nibble_red16__3203__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3203__vect;
    __Vfunc_prince_nibble_red16__3203__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3204__Vfuncout;
    __Vfunc_prince_nibble_red16__3204__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3204__vect;
    __Vfunc_prince_nibble_red16__3204__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3205__Vfuncout;
    __Vfunc_prince_nibble_red16__3205__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3205__vect;
    __Vfunc_prince_nibble_red16__3205__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3206__Vfuncout;
    __Vfunc_prince_nibble_red16__3206__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3206__vect;
    __Vfunc_prince_nibble_red16__3206__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3207__Vfuncout;
    __Vfunc_prince_nibble_red16__3207__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3207__vect;
    __Vfunc_prince_nibble_red16__3207__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3208__Vfuncout;
    __Vfunc_prince_nibble_red16__3208__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3208__vect;
    __Vfunc_prince_nibble_red16__3208__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3209__Vfuncout;
    __Vfunc_prince_nibble_red16__3209__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3209__vect;
    __Vfunc_prince_nibble_red16__3209__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3210__Vfuncout;
    __Vfunc_prince_nibble_red16__3210__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3210__vect;
    __Vfunc_prince_nibble_red16__3210__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3211__Vfuncout;
    __Vfunc_prince_nibble_red16__3211__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3211__vect;
    __Vfunc_prince_nibble_red16__3211__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3212__Vfuncout;
    __Vfunc_prince_nibble_red16__3212__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3212__vect;
    __Vfunc_prince_nibble_red16__3212__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3213__Vfuncout;
    __Vfunc_prince_nibble_red16__3213__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3213__vect;
    __Vfunc_prince_nibble_red16__3213__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3214__Vfuncout;
    __Vfunc_prince_nibble_red16__3214__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3214__vect;
    __Vfunc_prince_nibble_red16__3214__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3215__Vfuncout;
    __Vfunc_prince_nibble_red16__3215__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3215__vect;
    __Vfunc_prince_nibble_red16__3215__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3216__Vfuncout;
    __Vfunc_prince_nibble_red16__3216__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3216__vect;
    __Vfunc_prince_nibble_red16__3216__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__3217__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__3217__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__3217__state_in;
    __Vfunc_prince_shiftrows_64bit__3217__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__3218__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__3218__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__3218__state_in;
    __Vfunc_prince_mult_prime_64bit__3218__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3219__Vfuncout;
    __Vfunc_prince_nibble_red16__3219__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3219__vect;
    __Vfunc_prince_nibble_red16__3219__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3220__Vfuncout;
    __Vfunc_prince_nibble_red16__3220__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3220__vect;
    __Vfunc_prince_nibble_red16__3220__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3221__Vfuncout;
    __Vfunc_prince_nibble_red16__3221__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3221__vect;
    __Vfunc_prince_nibble_red16__3221__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3222__Vfuncout;
    __Vfunc_prince_nibble_red16__3222__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3222__vect;
    __Vfunc_prince_nibble_red16__3222__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3223__Vfuncout;
    __Vfunc_prince_nibble_red16__3223__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3223__vect;
    __Vfunc_prince_nibble_red16__3223__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3224__Vfuncout;
    __Vfunc_prince_nibble_red16__3224__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3224__vect;
    __Vfunc_prince_nibble_red16__3224__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3225__Vfuncout;
    __Vfunc_prince_nibble_red16__3225__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3225__vect;
    __Vfunc_prince_nibble_red16__3225__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3226__Vfuncout;
    __Vfunc_prince_nibble_red16__3226__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3226__vect;
    __Vfunc_prince_nibble_red16__3226__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3227__Vfuncout;
    __Vfunc_prince_nibble_red16__3227__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3227__vect;
    __Vfunc_prince_nibble_red16__3227__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3228__Vfuncout;
    __Vfunc_prince_nibble_red16__3228__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3228__vect;
    __Vfunc_prince_nibble_red16__3228__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3229__Vfuncout;
    __Vfunc_prince_nibble_red16__3229__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3229__vect;
    __Vfunc_prince_nibble_red16__3229__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3230__Vfuncout;
    __Vfunc_prince_nibble_red16__3230__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3230__vect;
    __Vfunc_prince_nibble_red16__3230__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3231__Vfuncout;
    __Vfunc_prince_nibble_red16__3231__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3231__vect;
    __Vfunc_prince_nibble_red16__3231__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3232__Vfuncout;
    __Vfunc_prince_nibble_red16__3232__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3232__vect;
    __Vfunc_prince_nibble_red16__3232__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3233__Vfuncout;
    __Vfunc_prince_nibble_red16__3233__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3233__vect;
    __Vfunc_prince_nibble_red16__3233__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3234__Vfuncout;
    __Vfunc_prince_nibble_red16__3234__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3234__vect;
    __Vfunc_prince_nibble_red16__3234__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__3235__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__3235__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__3235__state_in;
    __Vfunc_prince_shiftrows_64bit__3235__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3312__Vfuncout;
    __Vfunc_sbox4_64bit__3312__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3312__state_in;
    __Vfunc_sbox4_64bit__3312__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3313__Vfuncout;
    __Vfunc_sbox4_8bit__3313__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3313__state_in;
    __Vfunc_sbox4_8bit__3313__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3314__Vfuncout;
    __Vfunc_sbox4_64bit__3314__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3314__state_in;
    __Vfunc_sbox4_64bit__3314__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3315__Vfuncout;
    __Vfunc_sbox4_8bit__3315__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3315__state_in;
    __Vfunc_sbox4_8bit__3315__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3316__Vfuncout;
    __Vfunc_sbox4_64bit__3316__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3316__state_in;
    __Vfunc_sbox4_64bit__3316__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3317__Vfuncout;
    __Vfunc_sbox4_8bit__3317__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3317__state_in;
    __Vfunc_sbox4_8bit__3317__state_in = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_1774;
    __VdfgRegularize_h6e95ff9d_0_1774 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_1775;
    __VdfgRegularize_h6e95ff9d_0_1775 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_1776;
    __VdfgRegularize_h6e95ff9d_0_1776 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_1777;
    __VdfgRegularize_h6e95ff9d_0_1777 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_1780;
    __VdfgRegularize_h6e95ff9d_0_1780 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_1781;
    __VdfgRegularize_h6e95ff9d_0_1781 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_1782;
    __VdfgRegularize_h6e95ff9d_0_1782 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_1783;
    __VdfgRegularize_h6e95ff9d_0_1783 = 0;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_1785;
    __VdfgRegularize_h6e95ff9d_0_1785 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_prince_index 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__3176__val 
                    = (0x0000000fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_state_regs__DOT__state_raw));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__3176__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3176__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3176__Vfuncout))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__addr_o)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__checker_rom_index));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__3175__val 
                    = (0x0000000fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_state_regs__DOT__state_raw));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__3175__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3175__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3175__Vfuncout))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__addr_o)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__checker_rom_index));
    __Vfunc_sbox4_64bit__3180__state_in = (0x1cee62db5fde0000ULL 
                                           | (QData)((IData)(
                                                             (0x00adU 
                                                              ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_prince_index)))));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_sbox4_64bit__3180__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16914513044162581270ull);
    __Vfunc_sbox4_8bit__3181__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__3180__state_in));
    vlSelf->__Vfunc_sbox4_8bit__3181__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8483687666833086410ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3181__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3181__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3181__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__3181__Vfuncout)));
    __Vfunc_sbox4_8bit__3181__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3180__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__3181__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8483687666833086410ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3181__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3181__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3181__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3181__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__3181__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3180__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__3181__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8483687666833086410ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3181__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3181__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3181__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3181__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__3181__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3180__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__3181__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8483687666833086410ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3181__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3181__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3181__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3181__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__3181__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3180__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__3181__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8483687666833086410ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3181__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3181__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3181__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3181__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__3181__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3180__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__3181__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8483687666833086410ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3181__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3181__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3181__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3181__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__3181__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3180__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__3181__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8483687666833086410ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3181__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3181__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3181__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3181__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__3181__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3180__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__3181__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8483687666833086410ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3181__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3181__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3181__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3181__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3181__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__3180__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__3180__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__3180__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__3182__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__3182__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 989269399820181962ull);
    __Vfunc_prince_nibble_red16__3183__vect = (0xe7bdU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3182__state_in));
    __Vfunc_prince_nibble_red16__3183__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3183__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3183__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3183__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3183__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__3183__Vfuncout)));
    __Vfunc_prince_nibble_red16__3184__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3182__state_in));
    __Vfunc_prince_nibble_red16__3184__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3184__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3184__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3184__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3184__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3184__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__3185__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3182__state_in));
    __Vfunc_prince_nibble_red16__3185__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3185__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3185__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3185__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3185__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3185__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__3186__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3182__state_in));
    __Vfunc_prince_nibble_red16__3186__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3186__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3186__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3186__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3186__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3186__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__3187__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3187__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3187__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3187__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3187__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3187__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3187__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__3188__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3188__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3188__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3188__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3188__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3188__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3188__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__3189__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3189__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3189__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3189__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3189__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3189__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3189__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__3190__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3190__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3190__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3190__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3190__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3190__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3190__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__3191__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3191__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3191__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3191__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3191__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3191__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3191__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__3192__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3192__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3192__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3192__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3192__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3192__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3192__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__3193__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3193__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3193__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3193__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3193__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3193__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3193__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__3194__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3194__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3194__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3194__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3194__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3194__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3194__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__3195__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3195__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3195__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3195__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3195__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3195__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3195__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__3196__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3196__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3196__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3196__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3196__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3196__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3196__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__3197__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3197__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3197__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3197__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3197__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3197__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3197__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__3198__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3182__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3198__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3198__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3198__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3198__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3198__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3198__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__3182__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__3182__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__3182__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__3199__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__3199__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18078469143971820963ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__3199__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__3199__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__3199__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__3199__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__3199__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_1774 = ((2U & ((IData)(
                                                        (0x21748fe3da09b65cULL 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,6,32, 
                                                                           (0x0000000fU 
                                                                            & (7U 
                                                                               ^ 
                                                                               ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index) 
                                                                                >> 8U))), 2U))))) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index) 
                                                  >> 0x0000000cU)));
    __Vfunc_sbox4_64bit__3312__state_in = (0xb806c00102bb9a4cULL 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round);
    vlSelf->__Vfunc_sbox4_64bit__3312__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4444726750656278319ull);
    __Vfunc_sbox4_8bit__3313__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__3312__state_in));
    vlSelf->__Vfunc_sbox4_8bit__3313__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18056104826357089343ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3313__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3313__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3313__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__3313__Vfuncout)));
    __Vfunc_sbox4_8bit__3313__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3312__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__3313__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18056104826357089343ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3313__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3313__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3313__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3313__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__3313__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3312__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__3313__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18056104826357089343ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3313__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3313__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3313__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3313__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__3313__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3312__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__3313__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18056104826357089343ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3313__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3313__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3313__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3313__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__3313__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3312__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__3313__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18056104826357089343ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3313__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3313__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3313__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3313__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__3313__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3312__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__3313__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18056104826357089343ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3313__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3313__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3313__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3313__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__3313__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3312__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__3313__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18056104826357089343ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3313__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3313__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3313__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3313__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__3313__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3312__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__3313__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18056104826357089343ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3313__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3313__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3313__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3313__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3313__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__3312__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__3312__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT____VdfgExtracted_h435ad752__0 
        = __Vfunc_sbox4_64bit__3312__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_1775 = ((4U & ((IData)(
                                                        (0x21748fe3da09b65cULL 
                                                         >> 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,6,32, 
                                                                          (0x0000000fU 
                                                                           & (7U 
                                                                              ^ 
                                                                              ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index) 
                                                                               >> 8U))), 2U)))) 
                                                << 2U)) 
                                         | (IData)(__VdfgRegularize_h6e95ff9d_0_1774));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT____VdfgExtracted_h435ad752__0;
    __Vfunc_prince_mult_prime_64bit__3200__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__3200__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16049397348157111546ull);
    __Vfunc_prince_nibble_red16__3201__vect = (0xe7bdU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3200__state_in));
    __Vfunc_prince_nibble_red16__3201__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3201__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3201__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3201__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3201__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__3201__Vfuncout)));
    __Vfunc_prince_nibble_red16__3202__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3200__state_in));
    __Vfunc_prince_nibble_red16__3202__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3202__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3202__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3202__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3202__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3202__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__3203__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3200__state_in));
    __Vfunc_prince_nibble_red16__3203__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3203__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3203__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3203__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3203__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3203__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__3204__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3200__state_in));
    __Vfunc_prince_nibble_red16__3204__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3204__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3204__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3204__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3204__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3204__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__3205__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3205__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3205__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3205__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3205__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3205__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3205__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__3206__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3206__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3206__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3206__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3206__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3206__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3206__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__3207__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3207__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3207__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3207__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3207__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3207__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3207__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__3208__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3208__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3208__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3208__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3208__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3208__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3208__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__3209__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3209__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3209__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3209__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3209__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3209__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3209__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__3210__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3210__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3210__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3210__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3210__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3210__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3210__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__3211__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3211__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3211__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3211__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3211__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3211__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3211__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__3212__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3212__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3212__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3212__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3212__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3212__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3212__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__3213__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3213__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3213__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3213__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3213__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3213__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3213__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__3214__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3214__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3214__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3214__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3214__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3214__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3214__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__3215__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3215__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3215__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3215__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3215__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3215__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3215__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__3216__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3200__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3216__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3216__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3216__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3216__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3216__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3216__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__3200__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__3200__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__3200__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__3217__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__3217__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15408970140590101722ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__3217__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__3217__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__3217__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__3217__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__3217__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_1776 = ((8U & ((IData)(
                                                        (0x21748fe3da09b65cULL 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,6,32, 
                                                                           (0x0000000fU 
                                                                            & (0x0eU 
                                                                               ^ 
                                                                               ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index) 
                                                                                >> 4U))), 2U))))) 
                                                << 3U)) 
                                         | (IData)(__VdfgRegularize_h6e95ff9d_0_1775));
    __Vfunc_sbox4_64bit__3314__state_in = (0x07451202d7529875ULL 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round);
    vlSelf->__Vfunc_sbox4_64bit__3314__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3268692907837007736ull);
    __Vfunc_sbox4_8bit__3315__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__3314__state_in));
    vlSelf->__Vfunc_sbox4_8bit__3315__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2493078096763839701ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3315__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3315__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3315__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__3315__Vfuncout)));
    __Vfunc_sbox4_8bit__3315__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3314__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__3315__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2493078096763839701ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3315__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3315__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3315__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3315__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__3315__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3314__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__3315__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2493078096763839701ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3315__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3315__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3315__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3315__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__3315__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3314__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__3315__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2493078096763839701ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3315__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3315__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3315__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3315__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__3315__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3314__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__3315__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2493078096763839701ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3315__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3315__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3315__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3315__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__3315__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3314__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__3315__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2493078096763839701ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3315__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3315__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3315__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3315__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__3315__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3314__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__3315__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2493078096763839701ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3315__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3315__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3315__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3315__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__3315__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3314__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__3315__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2493078096763839701ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3315__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3315__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3315__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3315__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3315__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__3314__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__3314__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT____VdfgExtracted_h99e0c7c1__0 
        = __Vfunc_sbox4_64bit__3314__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_1777 = ((0x00000010U 
                                          & ((IData)(
                                                     (0x21748fe3da09b65cULL 
                                                      >> 
                                                      (0x0000003fU 
                                                       & VL_SHIFTL_III(6,6,32, 
                                                                       (0x0000000fU 
                                                                        & (0x0eU 
                                                                           ^ 
                                                                           ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index) 
                                                                            >> 4U))), 2U)))) 
                                             << 4U)) 
                                         | (IData)(__VdfgRegularize_h6e95ff9d_0_1776));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT____VdfgExtracted_h99e0c7c1__0;
    __Vfunc_prince_mult_prime_64bit__3218__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__3218__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6192403480378420646ull);
    __Vfunc_prince_nibble_red16__3219__vect = (0xe7bdU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3218__state_in));
    __Vfunc_prince_nibble_red16__3219__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3219__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3219__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3219__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3219__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__3219__Vfuncout)));
    __Vfunc_prince_nibble_red16__3220__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3218__state_in));
    __Vfunc_prince_nibble_red16__3220__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3220__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3220__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3220__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3220__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3220__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__3221__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3218__state_in));
    __Vfunc_prince_nibble_red16__3221__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3221__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3221__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3221__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3221__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3221__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__3222__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3218__state_in));
    __Vfunc_prince_nibble_red16__3222__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3222__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3222__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3222__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3222__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3222__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__3223__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3223__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3223__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3223__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3223__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3223__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3223__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__3224__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3224__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3224__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3224__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3224__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3224__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3224__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__3225__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3225__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3225__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3225__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3225__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3225__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3225__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__3226__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3226__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3226__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3226__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3226__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3226__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3226__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__3227__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3227__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3227__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3227__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3227__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3227__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3227__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__3228__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3228__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3228__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3228__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3228__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3228__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3228__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__3229__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3229__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3229__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3229__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3229__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3229__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3229__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__3230__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3230__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3230__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3230__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3230__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3230__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3230__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__3231__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3231__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3231__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3231__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3231__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3231__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3231__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__3232__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3232__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3232__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3232__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3232__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3232__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3232__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__3233__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3233__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3233__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3233__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3233__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3233__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3233__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__3234__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3218__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3234__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3234__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3234__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3234__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3234__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3234__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__3218__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__3218__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__3218__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__3235__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__3235__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12699936272232512794ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__3235__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__3235__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__3235__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__3235__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__3235__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788 = (
                                                   (((4U 
                                                      & ((IData)(
                                                                 (0x21748fe3da09b65cULL 
                                                                  >> 
                                                                  ((IData)(3U) 
                                                                   + 
                                                                   (0x0000003fU 
                                                                    & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (8U 
                                                                                ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index))), 2U))))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((IData)(
                                                                    (0x21748fe3da09b65cULL 
                                                                     >> 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x0000003fU 
                                                                       & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (0x0eU 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index) 
                                                                                >> 4U))), 2U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (0x21748fe3da09b65cULL 
                                                                      >> 
                                                                      ((IData)(3U) 
                                                                       + 
                                                                       (0x0000003fU 
                                                                        & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (0x0eU 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index) 
                                                                                >> 4U))), 2U)))))))) 
                                                    << 8U) 
                                                   | ((0x00000080U 
                                                       & ((IData)(
                                                                  (0x21748fe3da09b65cULL 
                                                                   >> 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (0x0000003fU 
                                                                     & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (7U 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index) 
                                                                                >> 8U))), 2U))))) 
                                                          << 7U)) 
                                                      | ((0x00000040U 
                                                          & ((IData)(
                                                                     (0x21748fe3da09b65cULL 
                                                                      >> 
                                                                      ((IData)(3U) 
                                                                       + 
                                                                       (0x0000003fU 
                                                                        & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (7U 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index) 
                                                                                >> 8U))), 2U))))) 
                                                             << 6U)) 
                                                         | ((0x00000020U 
                                                             & ((IData)(
                                                                        (0x21748fe3da09b65cULL 
                                                                         >> 
                                                                         ((IData)(2U) 
                                                                          + 
                                                                          (0x0000003fU 
                                                                           & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (8U 
                                                                                ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index))), 2U))))) 
                                                                << 5U)) 
                                                            | (IData)(__VdfgRegularize_h6e95ff9d_0_1777)))));
    __Vfunc_sbox4_64bit__3316__state_in = (0xa331b0b7ed858581ULL 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round);
    vlSelf->__Vfunc_sbox4_64bit__3316__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7208558005125891110ull);
    __Vfunc_sbox4_8bit__3317__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__3316__state_in));
    vlSelf->__Vfunc_sbox4_8bit__3317__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1011299866246846782ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3317__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3317__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3317__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__3317__Vfuncout)));
    __Vfunc_sbox4_8bit__3317__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3316__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__3317__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1011299866246846782ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3317__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3317__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3317__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3317__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__3317__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3316__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__3317__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1011299866246846782ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3317__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3317__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3317__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3317__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__3317__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3316__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__3317__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1011299866246846782ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3317__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3317__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3317__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3317__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__3317__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3316__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__3317__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1011299866246846782ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3317__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3317__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3317__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3317__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__3317__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3316__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__3317__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1011299866246846782ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3317__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3317__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3317__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3317__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__3317__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3316__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__3317__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1011299866246846782ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3317__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3317__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3317__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3317__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__3317__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3316__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__3317__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1011299866246846782ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3317__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3317__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3317__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3317__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3317__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__3316__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__3316__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_prince__DOT____VdfgExtracted_h36ab3cd7__0 
        = __Vfunc_sbox4_64bit__3316__Vfuncout;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT____Vlvbound_h503b73a3__0 
        = (0x0000000fU & (IData)((0x21748fe3da09b65cULL 
                                  >> (0x0000003fU & 
                                      VL_SHIFTL_III(6,6,32, 
                                                    ((8U 
                                                      & ((IData)(
                                                                 (0x21748fe3da09b65cULL 
                                                                  >> 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   (0x0000003fU 
                                                                    & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (8U 
                                                                                ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index))), 2U))))) 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (~ 
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788) 
                                                            >> 8U)))), 2U)))));
    __VdfgRegularize_h6e95ff9d_0_1785 = ((((4U & ((IData)(
                                                          (0x21748fe3da09b65cULL 
                                                           >> 
                                                           ((IData)(3U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,6,32, 
                                                                             (0x0000000fU 
                                                                              & (0x0eU 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788) 
                                                                                >> 4U))), 2U))))) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT____Vlvbound_h503b73a3__0) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT____Vlvbound_h503b73a3__0) 
                                                    >> 1U)))) 
                                          << 3U) | 
                                         ((4U & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT____Vlvbound_h503b73a3__0)) 
                                          | ((2U & 
                                              ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT____Vlvbound_h503b73a3__0) 
                                               >> 2U)) 
                                             | (1U 
                                                & (IData)(
                                                          (0x21748fe3da09b65cULL 
                                                           >> 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,6,32, 
                                                                            (0x0000000fU 
                                                                             & (8U 
                                                                                ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index))), 2U))))))));
    __VdfgRegularize_h6e95ff9d_0_1780 = ((2U & ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT____Vlvbound_h503b73a3__0) 
                                                >> 1U)) 
                                         | (1U & (IData)(
                                                         (0x21748fe3da09b65cULL 
                                                          >> 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,6,32, 
                                                                           (0x0000000fU 
                                                                            & (8U 
                                                                               ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_rom_index))), 2U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT__gen_round__BRA__1__KET____DOT__data_state_flipped 
        = (((((2U & ((IData)((0x21748fe3da09b65cULL 
                              >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                              (0x0000000fU 
                                                               & (8U 
                                                                  ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788))), 2U)))) 
                     << 1U)) | (1U & (IData)((0x21748fe3da09b65cULL 
                                              >> ((IData)(1U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & VL_SHIFTL_III(6,6,32, 
                                                                   (0x0000000fU 
                                                                    & (8U 
                                                                       ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788))), 2U))))))) 
             << 0x0000000bU) | (((2U & ((IData)((0x21748fe3da09b65cULL 
                                                 >> 
                                                 ((IData)(2U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & VL_SHIFTL_III(6,6,32, 
                                                                   (0x0000000fU 
                                                                    & (8U 
                                                                       ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788))), 2U))))) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (0x21748fe3da09b65cULL 
                                                              >> 
                                                              ((IData)(3U) 
                                                               + 
                                                               (0x0000003fU 
                                                                & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (8U 
                                                                                ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788))), 2U))))))) 
                                << 9U)) | ((0x00000100U 
                                            & ((IData)(
                                                       (0x21748fe3da09b65cULL 
                                                        >> 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & (0x0eU 
                                                                             ^ 
                                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788) 
                                                                              >> 4U))), 2U)))) 
                                               << 8U)) 
                                           | ((0x00000080U 
                                               & ((IData)(
                                                          (0x21748fe3da09b65cULL 
                                                           >> 
                                                           ((IData)(1U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,6,32, 
                                                                             (0x0000000fU 
                                                                              & (0x0eU 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788) 
                                                                                >> 4U))), 2U))))) 
                                                  << 7U)) 
                                              | ((0x00000040U 
                                                  & ((IData)(
                                                             (0x21748fe3da09b65cULL 
                                                              >> 
                                                              ((IData)(2U) 
                                                               + 
                                                               (0x0000003fU 
                                                                & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (0x0eU 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788) 
                                                                                >> 4U))), 2U))))) 
                                                     << 6U)) 
                                                 | (IData)(__VdfgRegularize_h6e95ff9d_0_1785)))));
    __VdfgRegularize_h6e95ff9d_0_1781 = ((4U & ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT____Vlvbound_h503b73a3__0) 
                                                << 2U)) 
                                         | (IData)(__VdfgRegularize_h6e95ff9d_0_1780));
    __VdfgRegularize_h6e95ff9d_0_1782 = ((8U & ((IData)(
                                                        (0x21748fe3da09b65cULL 
                                                         >> 
                                                         ((IData)(2U) 
                                                          + 
                                                          (0x0000003fU 
                                                           & VL_SHIFTL_III(6,6,32, 
                                                                           (0x0000000fU 
                                                                            & (0x0eU 
                                                                               ^ 
                                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788) 
                                                                                >> 4U))), 2U))))) 
                                                << 3U)) 
                                         | (IData)(__VdfgRegularize_h6e95ff9d_0_1781));
    __VdfgRegularize_h6e95ff9d_0_1783 = ((0x00000010U 
                                          & ((IData)(
                                                     (0x21748fe3da09b65cULL 
                                                      >> 
                                                      (0x0000003fU 
                                                       & VL_SHIFTL_III(6,6,32, 
                                                                       (0x0000000fU 
                                                                        & (0x0eU 
                                                                           ^ 
                                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788) 
                                                                            >> 4U))), 2U)))) 
                                             << 4U)) 
                                         | (IData)(__VdfgRegularize_h6e95ff9d_0_1782));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1786 = (
                                                   (((4U 
                                                      & ((IData)(
                                                                 (0x21748fe3da09b65cULL 
                                                                  >> 
                                                                  ((IData)(3U) 
                                                                   + 
                                                                   (0x0000003fU 
                                                                    & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (8U 
                                                                                ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788))), 2U))))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((IData)(
                                                                    (0x21748fe3da09b65cULL 
                                                                     >> 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0x0000003fU 
                                                                       & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (0x0eU 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788) 
                                                                                >> 4U))), 2U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (0x21748fe3da09b65cULL 
                                                                      >> 
                                                                      ((IData)(3U) 
                                                                       + 
                                                                       (0x0000003fU 
                                                                        & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (0x0eU 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788) 
                                                                                >> 4U))), 2U)))))))) 
                                                    << 8U) 
                                                   | ((0x00000080U 
                                                       & ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT____Vlvbound_h503b73a3__0) 
                                                          << 6U)) 
                                                      | ((0x00000040U 
                                                          & ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__u_sp_addr__DOT____Vlvbound_h503b73a3__0) 
                                                             << 3U)) 
                                                         | ((0x00000020U 
                                                             & ((IData)(
                                                                        (0x21748fe3da09b65cULL 
                                                                         >> 
                                                                         ((IData)(2U) 
                                                                          + 
                                                                          (0x0000003fU 
                                                                           & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & (8U 
                                                                                ^ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1788))), 2U))))) 
                                                                << 5U)) 
                                                            | (IData)(__VdfgRegularize_h6e95ff9d_0_1783)))));
}

void Vsim___024root___act_comb__TOP__97(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__97\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_1__DOT__de)) 
                    << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)) 
                                        << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_0__DOT__de)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[1U] 
        = ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_1__DOT__de)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_0__DOT__de)))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[1U] 
        = ((3U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[1U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_2__DOT__de)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)))) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[2U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_2__DOT__de)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)))) 
            >> 0x0000001eU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                                << 3U) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_2__DOT__de)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr))) 
                                                   >> 0x00000020U)) 
                                          << 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[3U] 
        = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[3U]) 
           | (((3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                      >> 0x0000001dU)) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_2__DOT__de)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr))) 
                                                   >> 0x00000020U)) 
                                          >> 0x0000001eU)) 
              | (4U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                       >> 0x0000001dU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[3U] 
        = ((7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[3U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_4__DOT__de)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_3__DOT__de))))) 
              << 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[4U] 
        = ((0xffffffe0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[4U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_4__DOT__de)) 
                         << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_3__DOT__de))))) 
               >> 0x0000001dU) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_4__DOT__de)) 
                                             << 0x00000021U) 
                                            | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)) 
                                                << 1U) 
                                               | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_3__DOT__de)))) 
                                           >> 0x00000020U)) 
                                  << 3U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[4U] 
        = ((0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[4U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_5__DOT__de)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)))) 
              << 5U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[5U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_5__DOT__de)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)))) 
            >> 0x0000001bU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                                << 6U) | ((IData)((
                                                   (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_5__DOT__de)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr))) 
                                                   >> 0x00000020U)) 
                                          << 5U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[6U] 
        = ((0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[6U]) 
           | (((0x0000001fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                               >> 0x0000001aU)) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_5__DOT__de)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x0000001bU)) 
              | (0x00000020U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                                >> 0x0000001aU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[6U] 
        = ((0x0000003fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[6U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_7__DOT__de)) 
                        << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)) 
                                            << 1U) 
                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_6__DOT__de))))) 
              << 6U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[7U] 
        = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[7U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_7__DOT__de)) 
                         << 0x00000021U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)) 
                                             << 1U) 
                                            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_6__DOT__de))))) 
               >> 0x0000001aU) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_7__DOT__de)) 
                                             << 0x00000021U) 
                                            | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)) 
                                                << 1U) 
                                               | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_exp_digest_6__DOT__de)))) 
                                           >> 0x00000020U)) 
                                  << 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[7U] 
        = ((0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[7U]) 
           | ((IData)((((QData)((IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                               >> 7U)))) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)))) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[8U] 
        = (((IData)((((QData)((IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                             >> 7U)))) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr)))) 
            >> 0x00000018U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[0U] 
                                << 9U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                         >> 7U)))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr))) 
                                                   >> 0x00000020U)) 
                                          << 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[9U] 
        = ((0xfffffe00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[9U]) 
           | (((0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[0U] 
                               >> 0x00000017U)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                                >> 7U)))) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000018U)) 
              | (0x00000100U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[0U] 
                                >> 0x00000017U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[9U] 
        = ((0x000001ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[9U]) 
           | ((IData)((((QData)((IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                               >> 7U)))) 
                        << 0x00000021U) | (((QData)((IData)(
                                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[1U])) 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                 >> 7U))))))) 
              << 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000aU] 
        = ((0xfffff800U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000aU]) 
           | (((IData)((((QData)((IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                >> 7U)))) 
                         << 0x00000021U) | (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[1U])) 
                                             << 1U) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                  >> 7U))))))) 
               >> 0x00000017U) | ((IData)(((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                 >> 7U)))) 
                                             << 0x00000021U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[1U])) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                     >> 7U)))))) 
                                           >> 0x00000020U)) 
                                  << 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000aU] 
        = ((0x000007ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000aU]) 
           | ((IData)((((QData)((IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                               >> 7U)))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[2U])))) 
              << 0x0000000bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000bU] 
        = (((IData)((((QData)((IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                             >> 7U)))) 
                      << 0x00000020U) | (QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[2U])))) 
            >> 0x00000015U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[3U] 
                                << 0x0000000cU) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                                >> 7U)))) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[2U]))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000bU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000cU] 
        = ((0xfffff000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000cU]) 
           | (((0x000007ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[3U] 
                               >> 0x00000014U)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                                >> 7U)))) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[2U]))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000015U)) 
              | (0x00000800U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[3U] 
                                >> 0x00000014U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000cU] 
        = ((0x00000fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000cU]) 
           | ((IData)((((QData)((IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                               >> 7U)))) 
                        << 0x00000021U) | (((QData)((IData)(
                                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[4U])) 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                 >> 7U))))))) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000dU] 
        = ((0xffffc000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000dU]) 
           | (((IData)((((QData)((IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                >> 7U)))) 
                         << 0x00000021U) | (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[4U])) 
                                             << 1U) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                  >> 7U))))))) 
               >> 0x00000014U) | ((IData)(((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                 >> 7U)))) 
                                             << 0x00000021U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[4U])) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                     >> 7U)))))) 
                                           >> 0x00000020U)) 
                                  << 0x0000000cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000dU] 
        = ((0x00003fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000dU]) 
           | ((IData)((((QData)((IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                               >> 7U)))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[5U])))) 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000eU] 
        = (((IData)((((QData)((IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                             >> 7U)))) 
                      << 0x00000020U) | (QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[5U])))) 
            >> 0x00000012U) | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[6U] 
                                << 0x0000000fU) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                                >> 7U)))) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[5U]))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000fU] 
        = ((0xffff8000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000fU]) 
           | (((0x00003fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[6U] 
                               >> 0x00000011U)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                                >> 7U)))) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(
                                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[5U]))) 
                                                            >> 0x00000020U)) 
                                                   >> 0x00000012U)) 
              | (0x00004000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[6U] 
                                >> 0x00000011U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000fU] 
        = ((0x00007fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x0000000fU]) 
           | ((IData)((((QData)((IData)(((0x0000000cU 
                                          & ((- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_fatal_alert_cause_checker_error__DOT__de))) 
                                             << 2U)) 
                                         | (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_fatal_alert_cause_integrity_error__DOT__de))))))) 
                        << 0x00000021U) | (((QData)((IData)(
                                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[7U])) 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                 >> 7U))))))) 
              << 0x0000000fU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__hw2reg[0x00000010U] 
        = (0x000fffffU & (((IData)((((QData)((IData)(
                                                     ((0x0000000cU 
                                                       & ((- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_fatal_alert_cause_checker_error__DOT__de))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_fatal_alert_cause_integrity_error__DOT__de))))))) 
                                     << 0x00000021U) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[7U])) 
                                        << 1U) | (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                     >> 7U))))))) 
                           >> 0x00000011U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((0x0000000cU 
                                                                           & ((- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_fatal_alert_cause_checker_error__DOT__de))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_fatal_alert_cause_integrity_error__DOT__de))))))) 
                                                         << 0x00000021U) 
                                                        | (((QData)((IData)(
                                                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[7U])) 
                                                            << 1U) 
                                                           | (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
                                                                                >> 7U)))))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000fU)));
}

extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_h3532549d_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_hab76c978_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_hc1187526_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_h3c9eb891_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_h19f80192_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_h5709fb38_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_hd5674840_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_habb2dfa8_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_hce9418fc_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_hf8b0994c_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_h8c7e1057_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_h250c2fca_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_hb6a8f938_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_h341c3540_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_heb754fa8_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_h51ab18fc_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_hcf7ab0df_0;
extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_h3511549d_0;

void Vsim___024root___act_comb__TOP__98(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__98\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__set_strap_en_override = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__volatile_raw_unlock_success_d = 0x69U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_cnt_regs__DOT__state_raw[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__token_hash_req = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__token_hash_req_chk = 1U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vcellout__u_lc_ctrl_fsm__otp_prog_req_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__token_invalid_error_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_prog_error_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__flash_rma_error_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__trans_success_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__state_invalid_error_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__lc_done_d = 1U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__lc_idle_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_clk_byp_req 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_clk_byp_req__DOT__lc_en_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_flash_rma_req 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_flash_rma_req__DOT__lc_en_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_check_byp_en 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_check_byp_en__DOT__lc_en_out;
    if (((((((((0xf6bcU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
               | (0x07adU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) 
              | (0xcec9U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) 
             | (0x33c7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) 
            | (0x0c54U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) 
           | (0x6eb0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) 
          | (0xd23fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) 
         | (0xe88fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))) {
        if ((0xf6bcU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__lc_done_d = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_clk_byp_req = 0x0aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_flash_rma_req = 0x0aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_check_byp_en = 0x0aU;
            if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_prim_flop_2sync_init.q_o) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_valid_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x07adU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[0U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000cU];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[1U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000dU];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[2U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000eU];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[3U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000fU];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[4U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000010U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[5U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000011U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[6U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000012U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[7U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000013U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[8U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000014U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[9U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000015U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[0U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[1U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[1U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[2U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[2U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[3U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[3U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[4U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[4U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[5U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[5U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[6U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[6U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[7U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[7U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[8U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[8U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[9U] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[9U];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[0x0000000aU] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000aU];
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[0x0000000bU] 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000bU];
            }
        } else if ((0x07adU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__lc_idle_d = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000cU];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000dU];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000eU];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000fU];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[4U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000010U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[5U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000011U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[6U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000012U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[7U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000013U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[8U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000014U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_state_d[9U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x00000015U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[4U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[5U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[5U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[6U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[6U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[7U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[7U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[8U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[8U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[9U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[9U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[0x0000000aU] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000aU];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_cnt_d[0x0000000bU] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_o[0x0000000bU];
            if ((0U == ((((((((((Vsim__ConstPool__CONST_h3532549d_0[0U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                | (Vsim__ConstPool__CONST_h3532549d_0[1U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                               | (Vsim__ConstPool__CONST_h3532549d_0[2U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                              | (Vsim__ConstPool__CONST_h3532549d_0[3U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                             | (Vsim__ConstPool__CONST_h3532549d_0[4U] 
                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                            | (Vsim__ConstPool__CONST_h3532549d_0[5U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                           | (Vsim__ConstPool__CONST_h3532549d_0[6U] 
                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                          | (Vsim__ConstPool__CONST_h3532549d_0[7U] 
                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                         | (Vsim__ConstPool__CONST_h3532549d_0[8U] 
                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                        | (Vsim__ConstPool__CONST_h3532549d_0[9U] 
                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0xa851U;
            } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_cmd) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0xcec9U;
            }
            if ((((((((((((((((((0U == ((((((((((Vsim__ConstPool__CONST_hab76c978_0[0U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                                | (Vsim__ConstPool__CONST_hab76c978_0[1U] 
                                                   ^ 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                               | (Vsim__ConstPool__CONST_hab76c978_0[2U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                              | (Vsim__ConstPool__CONST_hab76c978_0[3U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                             | (Vsim__ConstPool__CONST_hab76c978_0[4U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                            | (Vsim__ConstPool__CONST_hab76c978_0[5U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                           | (Vsim__ConstPool__CONST_hab76c978_0[6U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                          | (Vsim__ConstPool__CONST_hab76c978_0[7U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                         | (Vsim__ConstPool__CONST_hab76c978_0[8U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                        | (Vsim__ConstPool__CONST_hab76c978_0[9U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U]))) 
                                | (0U == ((((((((((
                                                   Vsim__ConstPool__CONST_hc1187526_0[0U] 
                                                   ^ 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                                  | (Vsim__ConstPool__CONST_hc1187526_0[1U] 
                                                     ^ 
                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                                 | (Vsim__ConstPool__CONST_hc1187526_0[2U] 
                                                    ^ 
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                                | (Vsim__ConstPool__CONST_hc1187526_0[3U] 
                                                   ^ 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                               | (Vsim__ConstPool__CONST_hc1187526_0[4U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                              | (Vsim__ConstPool__CONST_hc1187526_0[5U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                             | (Vsim__ConstPool__CONST_hc1187526_0[6U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                            | (Vsim__ConstPool__CONST_hc1187526_0[7U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                           | (Vsim__ConstPool__CONST_hc1187526_0[8U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                          | (Vsim__ConstPool__CONST_hc1187526_0[9U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                               | (0U == ((((((((((Vsim__ConstPool__CONST_h3c9eb891_0[0U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                                 | (Vsim__ConstPool__CONST_h3c9eb891_0[1U] 
                                                    ^ 
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                                | (Vsim__ConstPool__CONST_h3c9eb891_0[2U] 
                                                   ^ 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                               | (Vsim__ConstPool__CONST_h3c9eb891_0[3U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                              | (Vsim__ConstPool__CONST_h3c9eb891_0[4U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                             | (Vsim__ConstPool__CONST_h3c9eb891_0[5U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                            | (Vsim__ConstPool__CONST_h3c9eb891_0[6U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                           | (Vsim__ConstPool__CONST_h3c9eb891_0[7U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                          | (Vsim__ConstPool__CONST_h3c9eb891_0[8U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                         | (Vsim__ConstPool__CONST_h3c9eb891_0[9U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                              | (0U == ((((((((((Vsim__ConstPool__CONST_h19f80192_0[0U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                                | (Vsim__ConstPool__CONST_h19f80192_0[1U] 
                                                   ^ 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                               | (Vsim__ConstPool__CONST_h19f80192_0[2U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                              | (Vsim__ConstPool__CONST_h19f80192_0[3U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                             | (Vsim__ConstPool__CONST_h19f80192_0[4U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                            | (Vsim__ConstPool__CONST_h19f80192_0[5U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                           | (Vsim__ConstPool__CONST_h19f80192_0[6U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                          | (Vsim__ConstPool__CONST_h19f80192_0[7U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                         | (Vsim__ConstPool__CONST_h19f80192_0[8U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                        | (Vsim__ConstPool__CONST_h19f80192_0[9U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                             | (0U == ((((((((((Vsim__ConstPool__CONST_h5709fb38_0[0U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                               | (Vsim__ConstPool__CONST_h5709fb38_0[1U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                              | (Vsim__ConstPool__CONST_h5709fb38_0[2U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                             | (Vsim__ConstPool__CONST_h5709fb38_0[3U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                            | (Vsim__ConstPool__CONST_h5709fb38_0[4U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                           | (Vsim__ConstPool__CONST_h5709fb38_0[5U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                          | (Vsim__ConstPool__CONST_h5709fb38_0[6U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                         | (Vsim__ConstPool__CONST_h5709fb38_0[7U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                        | (Vsim__ConstPool__CONST_h5709fb38_0[8U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                       | (Vsim__ConstPool__CONST_h5709fb38_0[9U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                            | (0U == ((((((((((Vsim__ConstPool__CONST_hd5674840_0[0U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                              | (Vsim__ConstPool__CONST_hd5674840_0[1U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                             | (Vsim__ConstPool__CONST_hd5674840_0[2U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                            | (Vsim__ConstPool__CONST_hd5674840_0[3U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                           | (Vsim__ConstPool__CONST_hd5674840_0[4U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                          | (Vsim__ConstPool__CONST_hd5674840_0[5U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                         | (Vsim__ConstPool__CONST_hd5674840_0[6U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                        | (Vsim__ConstPool__CONST_hd5674840_0[7U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                       | (Vsim__ConstPool__CONST_hd5674840_0[8U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                      | (Vsim__ConstPool__CONST_hd5674840_0[9U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                           | (0U == ((((((((((Vsim__ConstPool__CONST_habb2dfa8_0[0U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                             | (Vsim__ConstPool__CONST_habb2dfa8_0[1U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                            | (Vsim__ConstPool__CONST_habb2dfa8_0[2U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                           | (Vsim__ConstPool__CONST_habb2dfa8_0[3U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                          | (Vsim__ConstPool__CONST_habb2dfa8_0[4U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                         | (Vsim__ConstPool__CONST_habb2dfa8_0[5U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                        | (Vsim__ConstPool__CONST_habb2dfa8_0[6U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                       | (Vsim__ConstPool__CONST_habb2dfa8_0[7U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                      | (Vsim__ConstPool__CONST_habb2dfa8_0[8U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                     | (Vsim__ConstPool__CONST_habb2dfa8_0[9U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                          | (0U == ((((((((((Vsim__ConstPool__CONST_hce9418fc_0[0U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                            | (Vsim__ConstPool__CONST_hce9418fc_0[1U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                           | (Vsim__ConstPool__CONST_hce9418fc_0[2U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                          | (Vsim__ConstPool__CONST_hce9418fc_0[3U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                         | (Vsim__ConstPool__CONST_hce9418fc_0[4U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                        | (Vsim__ConstPool__CONST_hce9418fc_0[5U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                       | (Vsim__ConstPool__CONST_hce9418fc_0[6U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                      | (Vsim__ConstPool__CONST_hce9418fc_0[7U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                     | (Vsim__ConstPool__CONST_hce9418fc_0[8U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                    | (Vsim__ConstPool__CONST_hce9418fc_0[9U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                         | (0U == ((((((((((Vsim__ConstPool__CONST_hf8b0994c_0[0U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                           | (Vsim__ConstPool__CONST_hf8b0994c_0[1U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                          | (Vsim__ConstPool__CONST_hf8b0994c_0[2U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                         | (Vsim__ConstPool__CONST_hf8b0994c_0[3U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                        | (Vsim__ConstPool__CONST_hf8b0994c_0[4U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                       | (Vsim__ConstPool__CONST_hf8b0994c_0[5U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                      | (Vsim__ConstPool__CONST_hf8b0994c_0[6U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                     | (Vsim__ConstPool__CONST_hf8b0994c_0[7U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                    | (Vsim__ConstPool__CONST_hf8b0994c_0[8U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                   | (Vsim__ConstPool__CONST_hf8b0994c_0[9U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                        | (0U == ((((((((((Vsim__ConstPool__CONST_h8c7e1057_0[0U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                          | (Vsim__ConstPool__CONST_h8c7e1057_0[1U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                         | (Vsim__ConstPool__CONST_h8c7e1057_0[2U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                        | (Vsim__ConstPool__CONST_h8c7e1057_0[3U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                       | (Vsim__ConstPool__CONST_h8c7e1057_0[4U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                      | (Vsim__ConstPool__CONST_h8c7e1057_0[5U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                     | (Vsim__ConstPool__CONST_h8c7e1057_0[6U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                    | (Vsim__ConstPool__CONST_h8c7e1057_0[7U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                   | (Vsim__ConstPool__CONST_h8c7e1057_0[8U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                  | (Vsim__ConstPool__CONST_h8c7e1057_0[9U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                       | (0U == ((((((((((Vsim__ConstPool__CONST_h250c2fca_0[0U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                         | (Vsim__ConstPool__CONST_h250c2fca_0[1U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                        | (Vsim__ConstPool__CONST_h250c2fca_0[2U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                       | (Vsim__ConstPool__CONST_h250c2fca_0[3U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                      | (Vsim__ConstPool__CONST_h250c2fca_0[4U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                     | (Vsim__ConstPool__CONST_h250c2fca_0[5U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                    | (Vsim__ConstPool__CONST_h250c2fca_0[6U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                   | (Vsim__ConstPool__CONST_h250c2fca_0[7U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                  | (Vsim__ConstPool__CONST_h250c2fca_0[8U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                 | (Vsim__ConstPool__CONST_h250c2fca_0[9U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                      | (0U == ((((((((((Vsim__ConstPool__CONST_hb6a8f938_0[0U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                        | (Vsim__ConstPool__CONST_hb6a8f938_0[1U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                       | (Vsim__ConstPool__CONST_hb6a8f938_0[2U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                      | (Vsim__ConstPool__CONST_hb6a8f938_0[3U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                     | (Vsim__ConstPool__CONST_hb6a8f938_0[4U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                    | (Vsim__ConstPool__CONST_hb6a8f938_0[5U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                   | (Vsim__ConstPool__CONST_hb6a8f938_0[6U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                  | (Vsim__ConstPool__CONST_hb6a8f938_0[7U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                 | (Vsim__ConstPool__CONST_hb6a8f938_0[8U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                | (Vsim__ConstPool__CONST_hb6a8f938_0[9U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                     | (0U == ((((((((((Vsim__ConstPool__CONST_h341c3540_0[0U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                       | (Vsim__ConstPool__CONST_h341c3540_0[1U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                      | (Vsim__ConstPool__CONST_h341c3540_0[2U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                     | (Vsim__ConstPool__CONST_h341c3540_0[3U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                    | (Vsim__ConstPool__CONST_h341c3540_0[4U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                   | (Vsim__ConstPool__CONST_h341c3540_0[5U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                  | (Vsim__ConstPool__CONST_h341c3540_0[6U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                 | (Vsim__ConstPool__CONST_h341c3540_0[7U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                | (Vsim__ConstPool__CONST_h341c3540_0[8U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                               | (Vsim__ConstPool__CONST_h341c3540_0[9U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                    | (0U == ((((((((((Vsim__ConstPool__CONST_heb754fa8_0[0U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                      | (Vsim__ConstPool__CONST_heb754fa8_0[1U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                     | (Vsim__ConstPool__CONST_heb754fa8_0[2U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                    | (Vsim__ConstPool__CONST_heb754fa8_0[3U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                   | (Vsim__ConstPool__CONST_heb754fa8_0[4U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                  | (Vsim__ConstPool__CONST_heb754fa8_0[5U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                 | (Vsim__ConstPool__CONST_heb754fa8_0[6U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                | (Vsim__ConstPool__CONST_heb754fa8_0[7U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                               | (Vsim__ConstPool__CONST_heb754fa8_0[8U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                              | (Vsim__ConstPool__CONST_heb754fa8_0[9U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                   | (0U == ((((((((((Vsim__ConstPool__CONST_h51ab18fc_0[0U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                     | (Vsim__ConstPool__CONST_h51ab18fc_0[1U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                    | (Vsim__ConstPool__CONST_h51ab18fc_0[2U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                   | (Vsim__ConstPool__CONST_h51ab18fc_0[3U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                  | (Vsim__ConstPool__CONST_h51ab18fc_0[4U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                 | (Vsim__ConstPool__CONST_h51ab18fc_0[5U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                | (Vsim__ConstPool__CONST_h51ab18fc_0[6U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                               | (Vsim__ConstPool__CONST_h51ab18fc_0[7U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                              | (Vsim__ConstPool__CONST_h51ab18fc_0[8U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                             | (Vsim__ConstPool__CONST_h51ab18fc_0[9U] 
                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                  | (0U == ((((((((((Vsim__ConstPool__CONST_hcf7ab0df_0[0U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                    | (Vsim__ConstPool__CONST_hcf7ab0df_0[1U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                   | (Vsim__ConstPool__CONST_hcf7ab0df_0[2U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                  | (Vsim__ConstPool__CONST_hcf7ab0df_0[3U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                 | (Vsim__ConstPool__CONST_hcf7ab0df_0[4U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                | (Vsim__ConstPool__CONST_hcf7ab0df_0[5U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                               | (Vsim__ConstPool__CONST_hcf7ab0df_0[6U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                              | (Vsim__ConstPool__CONST_hcf7ab0df_0[7U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                             | (Vsim__ConstPool__CONST_hcf7ab0df_0[8U] 
                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                            | (Vsim__ConstPool__CONST_hcf7ab0df_0[9U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                 | (0U == ((((((((((Vsim__ConstPool__CONST_h3511549d_0[0U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                   | (Vsim__ConstPool__CONST_h3511549d_0[1U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                  | (Vsim__ConstPool__CONST_h3511549d_0[2U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                 | (Vsim__ConstPool__CONST_h3511549d_0[3U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                | (Vsim__ConstPool__CONST_h3511549d_0[4U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                               | (Vsim__ConstPool__CONST_h3511549d_0[5U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                              | (Vsim__ConstPool__CONST_h3511549d_0[6U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                             | (Vsim__ConstPool__CONST_h3511549d_0[7U] 
                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                            | (Vsim__ConstPool__CONST_h3511549d_0[8U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                           | (Vsim__ConstPool__CONST_h3511549d_0[9U] 
                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U]))))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__use_ext_clock_q) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_clk_byp_req = 5U;
                }
            }
        } else if ((0xcec9U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_check_byp_en = 5U;
            if ((((((((((((((((((0U == ((((((((((Vsim__ConstPool__CONST_hab76c978_0[0U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                                | (Vsim__ConstPool__CONST_hab76c978_0[1U] 
                                                   ^ 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                               | (Vsim__ConstPool__CONST_hab76c978_0[2U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                              | (Vsim__ConstPool__CONST_hab76c978_0[3U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                             | (Vsim__ConstPool__CONST_hab76c978_0[4U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                            | (Vsim__ConstPool__CONST_hab76c978_0[5U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                           | (Vsim__ConstPool__CONST_hab76c978_0[6U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                          | (Vsim__ConstPool__CONST_hab76c978_0[7U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                         | (Vsim__ConstPool__CONST_hab76c978_0[8U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                        | (Vsim__ConstPool__CONST_hab76c978_0[9U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U]))) 
                                | (0U == ((((((((((
                                                   Vsim__ConstPool__CONST_hc1187526_0[0U] 
                                                   ^ 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                                  | (Vsim__ConstPool__CONST_hc1187526_0[1U] 
                                                     ^ 
                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                                 | (Vsim__ConstPool__CONST_hc1187526_0[2U] 
                                                    ^ 
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                                | (Vsim__ConstPool__CONST_hc1187526_0[3U] 
                                                   ^ 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                               | (Vsim__ConstPool__CONST_hc1187526_0[4U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                              | (Vsim__ConstPool__CONST_hc1187526_0[5U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                             | (Vsim__ConstPool__CONST_hc1187526_0[6U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                            | (Vsim__ConstPool__CONST_hc1187526_0[7U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                           | (Vsim__ConstPool__CONST_hc1187526_0[8U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                          | (Vsim__ConstPool__CONST_hc1187526_0[9U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                               | (0U == ((((((((((Vsim__ConstPool__CONST_h3c9eb891_0[0U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                                 | (Vsim__ConstPool__CONST_h3c9eb891_0[1U] 
                                                    ^ 
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                                | (Vsim__ConstPool__CONST_h3c9eb891_0[2U] 
                                                   ^ 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                               | (Vsim__ConstPool__CONST_h3c9eb891_0[3U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                              | (Vsim__ConstPool__CONST_h3c9eb891_0[4U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                             | (Vsim__ConstPool__CONST_h3c9eb891_0[5U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                            | (Vsim__ConstPool__CONST_h3c9eb891_0[6U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                           | (Vsim__ConstPool__CONST_h3c9eb891_0[7U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                          | (Vsim__ConstPool__CONST_h3c9eb891_0[8U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                         | (Vsim__ConstPool__CONST_h3c9eb891_0[9U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                              | (0U == ((((((((((Vsim__ConstPool__CONST_h19f80192_0[0U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                                | (Vsim__ConstPool__CONST_h19f80192_0[1U] 
                                                   ^ 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                               | (Vsim__ConstPool__CONST_h19f80192_0[2U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                              | (Vsim__ConstPool__CONST_h19f80192_0[3U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                             | (Vsim__ConstPool__CONST_h19f80192_0[4U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                            | (Vsim__ConstPool__CONST_h19f80192_0[5U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                           | (Vsim__ConstPool__CONST_h19f80192_0[6U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                          | (Vsim__ConstPool__CONST_h19f80192_0[7U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                         | (Vsim__ConstPool__CONST_h19f80192_0[8U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                        | (Vsim__ConstPool__CONST_h19f80192_0[9U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                             | (0U == ((((((((((Vsim__ConstPool__CONST_h5709fb38_0[0U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                               | (Vsim__ConstPool__CONST_h5709fb38_0[1U] 
                                                  ^ 
                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                              | (Vsim__ConstPool__CONST_h5709fb38_0[2U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                             | (Vsim__ConstPool__CONST_h5709fb38_0[3U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                            | (Vsim__ConstPool__CONST_h5709fb38_0[4U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                           | (Vsim__ConstPool__CONST_h5709fb38_0[5U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                          | (Vsim__ConstPool__CONST_h5709fb38_0[6U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                         | (Vsim__ConstPool__CONST_h5709fb38_0[7U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                        | (Vsim__ConstPool__CONST_h5709fb38_0[8U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                       | (Vsim__ConstPool__CONST_h5709fb38_0[9U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                            | (0U == ((((((((((Vsim__ConstPool__CONST_hd5674840_0[0U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                              | (Vsim__ConstPool__CONST_hd5674840_0[1U] 
                                                 ^ 
                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                             | (Vsim__ConstPool__CONST_hd5674840_0[2U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                            | (Vsim__ConstPool__CONST_hd5674840_0[3U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                           | (Vsim__ConstPool__CONST_hd5674840_0[4U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                          | (Vsim__ConstPool__CONST_hd5674840_0[5U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                         | (Vsim__ConstPool__CONST_hd5674840_0[6U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                        | (Vsim__ConstPool__CONST_hd5674840_0[7U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                       | (Vsim__ConstPool__CONST_hd5674840_0[8U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                      | (Vsim__ConstPool__CONST_hd5674840_0[9U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                           | (0U == ((((((((((Vsim__ConstPool__CONST_habb2dfa8_0[0U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                             | (Vsim__ConstPool__CONST_habb2dfa8_0[1U] 
                                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                            | (Vsim__ConstPool__CONST_habb2dfa8_0[2U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                           | (Vsim__ConstPool__CONST_habb2dfa8_0[3U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                          | (Vsim__ConstPool__CONST_habb2dfa8_0[4U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                         | (Vsim__ConstPool__CONST_habb2dfa8_0[5U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                        | (Vsim__ConstPool__CONST_habb2dfa8_0[6U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                       | (Vsim__ConstPool__CONST_habb2dfa8_0[7U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                      | (Vsim__ConstPool__CONST_habb2dfa8_0[8U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                     | (Vsim__ConstPool__CONST_habb2dfa8_0[9U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                          | (0U == ((((((((((Vsim__ConstPool__CONST_hce9418fc_0[0U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                            | (Vsim__ConstPool__CONST_hce9418fc_0[1U] 
                                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                           | (Vsim__ConstPool__CONST_hce9418fc_0[2U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                          | (Vsim__ConstPool__CONST_hce9418fc_0[3U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                         | (Vsim__ConstPool__CONST_hce9418fc_0[4U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                        | (Vsim__ConstPool__CONST_hce9418fc_0[5U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                       | (Vsim__ConstPool__CONST_hce9418fc_0[6U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                      | (Vsim__ConstPool__CONST_hce9418fc_0[7U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                     | (Vsim__ConstPool__CONST_hce9418fc_0[8U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                    | (Vsim__ConstPool__CONST_hce9418fc_0[9U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                         | (0U == ((((((((((Vsim__ConstPool__CONST_hf8b0994c_0[0U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                           | (Vsim__ConstPool__CONST_hf8b0994c_0[1U] 
                                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                          | (Vsim__ConstPool__CONST_hf8b0994c_0[2U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                         | (Vsim__ConstPool__CONST_hf8b0994c_0[3U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                        | (Vsim__ConstPool__CONST_hf8b0994c_0[4U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                       | (Vsim__ConstPool__CONST_hf8b0994c_0[5U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                      | (Vsim__ConstPool__CONST_hf8b0994c_0[6U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                     | (Vsim__ConstPool__CONST_hf8b0994c_0[7U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                    | (Vsim__ConstPool__CONST_hf8b0994c_0[8U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                   | (Vsim__ConstPool__CONST_hf8b0994c_0[9U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                        | (0U == ((((((((((Vsim__ConstPool__CONST_h8c7e1057_0[0U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                          | (Vsim__ConstPool__CONST_h8c7e1057_0[1U] 
                                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                         | (Vsim__ConstPool__CONST_h8c7e1057_0[2U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                        | (Vsim__ConstPool__CONST_h8c7e1057_0[3U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                       | (Vsim__ConstPool__CONST_h8c7e1057_0[4U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                      | (Vsim__ConstPool__CONST_h8c7e1057_0[5U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                     | (Vsim__ConstPool__CONST_h8c7e1057_0[6U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                    | (Vsim__ConstPool__CONST_h8c7e1057_0[7U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                   | (Vsim__ConstPool__CONST_h8c7e1057_0[8U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                  | (Vsim__ConstPool__CONST_h8c7e1057_0[9U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                       | (0U == ((((((((((Vsim__ConstPool__CONST_h250c2fca_0[0U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                         | (Vsim__ConstPool__CONST_h250c2fca_0[1U] 
                                            ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                        | (Vsim__ConstPool__CONST_h250c2fca_0[2U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                       | (Vsim__ConstPool__CONST_h250c2fca_0[3U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                      | (Vsim__ConstPool__CONST_h250c2fca_0[4U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                     | (Vsim__ConstPool__CONST_h250c2fca_0[5U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                    | (Vsim__ConstPool__CONST_h250c2fca_0[6U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                   | (Vsim__ConstPool__CONST_h250c2fca_0[7U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                  | (Vsim__ConstPool__CONST_h250c2fca_0[8U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                 | (Vsim__ConstPool__CONST_h250c2fca_0[9U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                      | (0U == ((((((((((Vsim__ConstPool__CONST_hb6a8f938_0[0U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                        | (Vsim__ConstPool__CONST_hb6a8f938_0[1U] 
                                           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                       | (Vsim__ConstPool__CONST_hb6a8f938_0[2U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                      | (Vsim__ConstPool__CONST_hb6a8f938_0[3U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                     | (Vsim__ConstPool__CONST_hb6a8f938_0[4U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                    | (Vsim__ConstPool__CONST_hb6a8f938_0[5U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                   | (Vsim__ConstPool__CONST_hb6a8f938_0[6U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                  | (Vsim__ConstPool__CONST_hb6a8f938_0[7U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                 | (Vsim__ConstPool__CONST_hb6a8f938_0[8U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                                | (Vsim__ConstPool__CONST_hb6a8f938_0[9U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                     | (0U == ((((((((((Vsim__ConstPool__CONST_h341c3540_0[0U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                       | (Vsim__ConstPool__CONST_h341c3540_0[1U] 
                                          ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                      | (Vsim__ConstPool__CONST_h341c3540_0[2U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                     | (Vsim__ConstPool__CONST_h341c3540_0[3U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                    | (Vsim__ConstPool__CONST_h341c3540_0[4U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                   | (Vsim__ConstPool__CONST_h341c3540_0[5U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                  | (Vsim__ConstPool__CONST_h341c3540_0[6U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                 | (Vsim__ConstPool__CONST_h341c3540_0[7U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                                | (Vsim__ConstPool__CONST_h341c3540_0[8U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                               | (Vsim__ConstPool__CONST_h341c3540_0[9U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                    | (0U == ((((((((((Vsim__ConstPool__CONST_heb754fa8_0[0U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                      | (Vsim__ConstPool__CONST_heb754fa8_0[1U] 
                                         ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                     | (Vsim__ConstPool__CONST_heb754fa8_0[2U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                    | (Vsim__ConstPool__CONST_heb754fa8_0[3U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                   | (Vsim__ConstPool__CONST_heb754fa8_0[4U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                  | (Vsim__ConstPool__CONST_heb754fa8_0[5U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                 | (Vsim__ConstPool__CONST_heb754fa8_0[6U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                                | (Vsim__ConstPool__CONST_heb754fa8_0[7U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                               | (Vsim__ConstPool__CONST_heb754fa8_0[8U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                              | (Vsim__ConstPool__CONST_heb754fa8_0[9U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                   | (0U == ((((((((((Vsim__ConstPool__CONST_h51ab18fc_0[0U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                     | (Vsim__ConstPool__CONST_h51ab18fc_0[1U] 
                                        ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                    | (Vsim__ConstPool__CONST_h51ab18fc_0[2U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                   | (Vsim__ConstPool__CONST_h51ab18fc_0[3U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                  | (Vsim__ConstPool__CONST_h51ab18fc_0[4U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                 | (Vsim__ConstPool__CONST_h51ab18fc_0[5U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                                | (Vsim__ConstPool__CONST_h51ab18fc_0[6U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                               | (Vsim__ConstPool__CONST_h51ab18fc_0[7U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                              | (Vsim__ConstPool__CONST_h51ab18fc_0[8U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                             | (Vsim__ConstPool__CONST_h51ab18fc_0[9U] 
                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                  | (0U == ((((((((((Vsim__ConstPool__CONST_hcf7ab0df_0[0U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                    | (Vsim__ConstPool__CONST_hcf7ab0df_0[1U] 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                   | (Vsim__ConstPool__CONST_hcf7ab0df_0[2U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                  | (Vsim__ConstPool__CONST_hcf7ab0df_0[3U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                 | (Vsim__ConstPool__CONST_hcf7ab0df_0[4U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                                | (Vsim__ConstPool__CONST_hcf7ab0df_0[5U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                               | (Vsim__ConstPool__CONST_hcf7ab0df_0[6U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                              | (Vsim__ConstPool__CONST_hcf7ab0df_0[7U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                             | (Vsim__ConstPool__CONST_hcf7ab0df_0[8U] 
                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                            | (Vsim__ConstPool__CONST_hcf7ab0df_0[9U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U])))) 
                 | (0U == ((((((((((Vsim__ConstPool__CONST_h3511549d_0[0U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[0U]) 
                                   | (Vsim__ConstPool__CONST_h3511549d_0[1U] 
                                      ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[1U])) 
                                  | (Vsim__ConstPool__CONST_h3511549d_0[2U] 
                                     ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[2U])) 
                                 | (Vsim__ConstPool__CONST_h3511549d_0[3U] 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[3U])) 
                                | (Vsim__ConstPool__CONST_h3511549d_0[4U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[4U])) 
                               | (Vsim__ConstPool__CONST_h3511549d_0[5U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[5U])) 
                              | (Vsim__ConstPool__CONST_h3511549d_0[6U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[6U])) 
                             | (Vsim__ConstPool__CONST_h3511549d_0[7U] 
                                ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[7U])) 
                            | (Vsim__ConstPool__CONST_h3511549d_0[8U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[8U])) 
                           | (Vsim__ConstPool__CONST_h3511549d_0[9U] 
                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_state_regs__DOT__state_raw[9U]))))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__use_ext_clock_q) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_clk_byp_req = 5U;
                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgExtracted_hfc7c6a04__0) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x33c7U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x33c7U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x33c7U;
            }
        } else if ((0x33c7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__trans_cnt_oflw_error_d)
                    ? 0x6d2cU : 0x0c54U);
        } else if ((0x0c54U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vcellout__u_lc_ctrl_fsm__otp_prog_req_o = 1U;
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_clk_byp_req__DOT__lc_en_out) 
                 != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sync_clk_byp_ack__DOT__lc_en))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x6d2cU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_prog_error_d = 1U;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__lc_ack_o) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__lc_err_o) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x6d2cU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_prog_error_d = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x6eb0U;
                }
            }
        } else if ((0x6eb0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__trans_invalid_error_o)
                    ? 0x6d2cU : 0xd23fU);
        } else if ((0xd23fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__token_hash_req = 1U;
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__token_hash_ack_q) {
                if ((((0U == ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__hashed_token_q[0U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__hashed_token_mux[0U]) 
                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__hashed_token_q[1U] 
                                   ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__hashed_token_mux[1U])) 
                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__hashed_token_q[2U] 
                                  ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__hashed_token_mux[2U])) 
                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__hashed_token_q[3U] 
                                 ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__hashed_token_mux[3U]))) 
                      & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__token_hash_err_q))) 
                     & (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__hashed_token_valid_mux)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0xe88fU;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x6d2cU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__token_invalid_error_d = 1U;
                }
            }
        } else if ((0x2739ce73U == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q)) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_flash_rma_req = 5U;
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgExtracted_hbdd498d5__0) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x20c0U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x20c0U;
        }
    } else if (((0x20c0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                || (0xd56fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__trans_invalid_error_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x6d2cU;
        } else if (((((0x2739ce73U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q) 
                      & ([&]() {
                                vlSelfRef.__Vfunc_lc_tx_test_false_strict__247__val 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_flash_rma_req__DOT__lc_en_out;
                                vlSelfRef.__Vfunc_lc_tx_test_false_strict__247__Vfuncout 
                                    = (0x0aU == (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__247__val));
                            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__247__Vfuncout))) 
                     & ([&]() {
                            vlSelfRef.__Vfunc_lc_tx_test_false_strict__248__val 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_flash_rma_ack_combined;
                            vlSelfRef.__Vfunc_lc_tx_test_false_strict__248__Vfuncout 
                                = (0x0aU == (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__248__val));
                        }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__248__Vfuncout))) 
                    | (((0x2739ce73U == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q) 
                        & ([&]() {
                                vlSelfRef.__Vfunc_lc_tx_test_true_strict__249__val 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_flash_rma_req__DOT__lc_en_out;
                                vlSelfRef.__Vfunc_lc_tx_test_true_strict__249__Vfuncout 
                                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__249__val));
                            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__249__Vfuncout))) 
                       & ([&]() {
                            vlSelfRef.__Vfunc_lc_tx_test_true_strict__250__val 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_flash_rma_ack_combined;
                            vlSelfRef.__Vfunc_lc_tx_test_true_strict__250__Vfuncout 
                                = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__250__val));
                        }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__250__Vfuncout))))) {
            if ((((0U == ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__hashed_token_q[0U] 
                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__hashed_token_mux[0U]) 
                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__hashed_token_q[1U] 
                               ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__hashed_token_mux[1U])) 
                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__hashed_token_q[2U] 
                              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__hashed_token_mux[2U])) 
                          | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__hashed_token_q[3U] 
                             ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__hashed_token_mux[3U]))) 
                  & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__token_hash_err_q))) 
                 & (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__hashed_token_valid_mux)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d 
                    = ((0xd56fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))
                        ? 0x81abU : 0xd56fU);
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x6d2cU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__token_invalid_error_d = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x6d2cU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__flash_rma_error_d = 1U;
        }
    } else if ((0x81abU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vcellout__u_lc_ctrl_fsm__otp_prog_req_o = 1U;
        if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_clk_byp_req__DOT__lc_en_out) 
             != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sync_clk_byp_ack__DOT__lc_en))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x6d2cU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_prog_error_d = 1U;
        } else if ((((0x2739ce73U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q) 
                     & ((0x0aU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_flash_rma_req__DOT__lc_en_out)) 
                        | (0x0aU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_flash_rma_ack_combined)))) 
                    | ((0x2739ce73U == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q) 
                       & ((5U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_prim_lc_sender_flash_rma_req__DOT__lc_en_out)) 
                          | (5U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__lc_flash_rma_ack_combined)))))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x6d2cU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__flash_rma_error_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__lc_ack_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x6d2cU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_prog_error_d 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__lc_err_o;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__trans_success_d 
                = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__lc_err_o)));
        }
    } else if ((1U & (~ ((0xa851U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                         || (0x6d2cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))))) {
        if ((0xbd9bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__token_hash_req_chk = 0U;
        } else if ((0x314cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__token_hash_req_chk = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__state_invalid_error_d = 1U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x314cU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__state_invalid_error_d = 1U;
        }
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((((((0x314cU 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0xbd9bU 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                                  << 2U)) 
                                              | (((0x6d2cU 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                                  << 1U) 
                                                 | (0xa851U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))) 
                                             << 0x0000000bU) 
                                            | (((((0x81abU 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                                  << 3U) 
                                                 | ((0xd56fU 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                                    << 2U)) 
                                                | (((0x20c0U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                                    << 1U) 
                                                   | (0xe88fU 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))) 
                                               << 7U)) 
                                           | ((((((0xd23fU 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                                  << 3U) 
                                                 | ((0x6eb0U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                                    << 2U)) 
                                                | (((0x0c54U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                                    << 1U) 
                                                   | (0x33c7U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))) 
                                               << 3U) 
                                              | (((0xcec9U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                                  << 2U) 
                                                 | (((0x07adU 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                                     << 1U) 
                                                    | (0xf6bcU 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))))))))))) {
        if ((0U != (((((((0x314cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                         << 3U) | ((0xbd9bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                   << 2U)) | (((0x6d2cU 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0xa851U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))) 
                      << 0x0000000bU) | (((((0x81abU 
                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                            << 3U) 
                                           | ((0xd56fU 
                                               == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                              << 2U)) 
                                          | (((0x20c0U 
                                               == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                              << 1U) 
                                             | (0xe88fU 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))) 
                                         << 7U)) | 
                    ((((((0xd23fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                         << 3U) | ((0x6eb0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                   << 2U)) | (((0x0c54U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x33c7U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))) 
                      << 3U) | (((0xcec9U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                 << 2U) | (((0x07adU 
                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)) 
                                            << 1U) 
                                           | (0xf6bcU 
                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: lc_ctrl_fsm.sv:244: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.u_lc_ctrl_fsm.p_fsm: unique case, but multiple matches found for '16'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),16,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/lc_ctrl_fsm.sv", 244, "");
            }
        }
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_prim_esc_receiver0__DOT__esc_req_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_prim_esc_receiver1__DOT__esc_req_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0xbd9bU;
    } else if ((((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__state_invalid_error)) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__token_if_fsm_err)) 
                & (0xbd9bU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_fsm_state_regs__DOT__state_raw)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__fsm_state_d = 0x314cU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__state_invalid_error_d = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__src_req_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__token_hash_ack_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__token_hash_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__src_req_i));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
}

extern const VlWide<24>/*767:0*/ Vsim__ConstPool__CONST_hda9269f3_0;

void Vsim___024root___act_comb__TOP__99(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__99\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<24>/*767:0*/ __Vfunc_named_reg_assign__71__Vfuncout;
    VL_ZERO_W(768, __Vfunc_named_reg_assign__71__Vfuncout);
    VlWide<22>/*703:0*/ __Vfunc_named_reg_assign__71__part_digest;
    VL_ZERO_W(704, __Vfunc_named_reg_assign__71__part_digest);
    VlWide<24>/*767:0*/ __Vfunc_named_reg_assign__71__hw2reg;
    VL_ZERO_W(768, __Vfunc_named_reg_assign__71__hw2reg);
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_idle_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__dai_prog_idle) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lci_prog_idle));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__lfsr_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_set_period = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_set_period = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_set_timeout = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_set_timeout = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_cnt_pause = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__set_all_integ_reqs = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__set_all_cnsty_reqs = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__chk_timeout_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__chk_timeout_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__chk_pending 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_chk_trig_q) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_chk_trig_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lfsr_fsm_err = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__clr_integ_chk_trig = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__clr_cnsty_chk_trig = 0U;
    if ((0x0125U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__pwr_otp_rsp_q) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__state_d = 0x006eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__lfsr_en = 1U;
        }
    } else if ((0x006eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw))) {
        if ((((0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_integrity_check_period__q) 
              & (0ULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_chk_trig_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__state_d = 0x00b3U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_set_timeout = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__set_all_integ_reqs = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__clr_integ_chk_trig 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_chk_trig_q;
        } else if ((((0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_consistency_check_period__q) 
                     & (0ULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_chk_trig_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__state_d = 0x01d6U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_set_timeout = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__set_all_cnsty_reqs = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__clr_cnsty_chk_trig 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_chk_trig_q;
        }
    } else if ((0x00b3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__chk_pending = 1U;
        if (((0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_check_timeout__q) 
             & (0ULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__state_d = 0x0059U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__chk_timeout_d = 1U;
        } else if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_chk_req_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__state_d = 0x006eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_set_period = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__lfsr_en = 1U;
        }
    } else if ((0x01d6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__chk_pending = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_cnt_pause 
            = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_idle_d)));
        if (((0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_check_timeout__q) 
             & (0ULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__state_d = 0x0059U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__chk_timeout_d = 1U;
        } else if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_chk_req_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__state_d = 0x006eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_set_period = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__lfsr_en = 1U;
        }
    } else if ((0x0059U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__clr_integ_chk_trig = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__clr_cnsty_chk_trig = 1U;
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__chk_timeout_q)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lfsr_fsm_err = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__state_d = 0x0059U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lfsr_fsm_err = 1U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x0059U 
                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x01d6U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x00b3U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x006eU 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x0125U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x0059U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x01d6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x00b3U 
                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x006eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x0125U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: otp_ctrl_lfsr_timer.sv:270: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.u_otp_ctrl_lfsr_timer.p_fsm: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/otp_ctrl_lfsr_timer.sv", 270, "");
            }
        }
    }
    if (((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_buf_output__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
            != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_buf_output__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__err_q)) 
          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__err_q)) 
         | ([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__96__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                                  >> 0x00000038U)));
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__96__Vfuncout 
                        = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__96__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__96__Vfuncout)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__state_d = 0x0059U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lfsr_fsm_err = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_chk_trig_d 
        = (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__clr_integ_chk_trig)) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_chk_trig_q)) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
              & (3U == (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_consistency__DOT__we)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_chk_trig_d 
        = (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__clr_cnsty_chk_trig)) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_chk_trig_q)) 
           | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
               >> 1U) & (3U == (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_consistency__DOT__we)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__set_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_set_period) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_set_timeout));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__set_cnt_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_set_period)
            ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_buf_output__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
               & (0x00000000000000ffULL | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_integrity_check_period__q)) 
                                           << 8U)))
            : (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_check_timeout__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__set_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_set_period) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_set_timeout));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__set_cnt_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_set_period)
            ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_buf_output__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
               & (0x00000000000000ffULL | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_consistency_check_period__q)) 
                                           << 8U)))
            : (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_check_timeout__q)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_26 = ((0ULL 
                                                  == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_cnt_pause));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__reseed_cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__reseed_en)
            ? 0U : (0x0000001fU & ((0x10U <= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__reseed_cnt_q))
                                    ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__reseed_cnt_q)
                                    : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__reseed_cnt_q) 
                                       + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__lfsr_en)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__reseed_en) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__lfsr_en));
    __Vfunc_named_reg_assign__71__part_digest[0U] = 
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0U];
    __Vfunc_named_reg_assign__71__part_digest[1U] = 
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[1U];
    __Vfunc_named_reg_assign__71__part_digest[2U] = 
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[2U];
    __Vfunc_named_reg_assign__71__part_digest[3U] = 
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[3U];
    __Vfunc_named_reg_assign__71__part_digest[4U] = 
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[4U];
    __Vfunc_named_reg_assign__71__part_digest[5U] = 
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[5U];
    __Vfunc_named_reg_assign__71__part_digest[6U] = 
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[6U];
    __Vfunc_named_reg_assign__71__part_digest[7U] = 
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[7U];
    __Vfunc_named_reg_assign__71__part_digest[8U] = 
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[8U];
    __Vfunc_named_reg_assign__71__part_digest[9U] = 
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[9U];
    __Vfunc_named_reg_assign__71__part_digest[0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x0000000aU];
    __Vfunc_named_reg_assign__71__part_digest[0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x0000000bU];
    __Vfunc_named_reg_assign__71__part_digest[0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x0000000cU];
    __Vfunc_named_reg_assign__71__part_digest[0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x0000000dU];
    __Vfunc_named_reg_assign__71__part_digest[0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x0000000eU];
    __Vfunc_named_reg_assign__71__part_digest[0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x0000000fU];
    __Vfunc_named_reg_assign__71__part_digest[0x00000010U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x00000010U];
    __Vfunc_named_reg_assign__71__part_digest[0x00000011U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x00000011U];
    __Vfunc_named_reg_assign__71__part_digest[0x00000012U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x00000012U];
    __Vfunc_named_reg_assign__71__part_digest[0x00000013U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x00000013U];
    __Vfunc_named_reg_assign__71__part_digest[0x00000014U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x00000014U];
    __Vfunc_named_reg_assign__71__part_digest[0x00000015U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_digest[0x00000015U];
    __Vfunc_named_reg_assign__71__hw2reg[0U] = Vsim__ConstPool__CONST_hda9269f3_0[0U];
    __Vfunc_named_reg_assign__71__hw2reg[1U] = Vsim__ConstPool__CONST_hda9269f3_0[1U];
    __Vfunc_named_reg_assign__71__hw2reg[2U] = Vsim__ConstPool__CONST_hda9269f3_0[2U];
    __Vfunc_named_reg_assign__71__hw2reg[3U] = Vsim__ConstPool__CONST_hda9269f3_0[3U];
    __Vfunc_named_reg_assign__71__hw2reg[4U] = Vsim__ConstPool__CONST_hda9269f3_0[4U];
    __Vfunc_named_reg_assign__71__hw2reg[5U] = Vsim__ConstPool__CONST_hda9269f3_0[5U];
    __Vfunc_named_reg_assign__71__hw2reg[6U] = Vsim__ConstPool__CONST_hda9269f3_0[6U];
    __Vfunc_named_reg_assign__71__hw2reg[7U] = Vsim__ConstPool__CONST_hda9269f3_0[7U];
    __Vfunc_named_reg_assign__71__hw2reg[8U] = Vsim__ConstPool__CONST_hda9269f3_0[8U];
    __Vfunc_named_reg_assign__71__hw2reg[9U] = Vsim__ConstPool__CONST_hda9269f3_0[9U];
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000aU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000aU];
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000bU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000bU];
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000cU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000cU];
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000dU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000dU];
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000eU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000eU];
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000fU] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x0000000fU];
    __Vfunc_named_reg_assign__71__hw2reg[0x00000010U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000010U];
    __Vfunc_named_reg_assign__71__hw2reg[0x00000011U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000011U];
    __Vfunc_named_reg_assign__71__hw2reg[0x00000012U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000012U];
    __Vfunc_named_reg_assign__71__hw2reg[0x00000013U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000013U];
    __Vfunc_named_reg_assign__71__hw2reg[0x00000014U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000014U];
    __Vfunc_named_reg_assign__71__hw2reg[0x00000015U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000015U];
    __Vfunc_named_reg_assign__71__hw2reg[0x00000016U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000016U];
    __Vfunc_named_reg_assign__71__hw2reg[0x00000017U] 
        = Vsim__ConstPool__CONST_hda9269f3_0[0x00000017U];
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000eU] 
        = (IData)((((QData)((IData)(__Vfunc_named_reg_assign__71__part_digest[5U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      __Vfunc_named_reg_assign__71__part_digest[4U]))));
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000fU] 
        = (IData)(((((QData)((IData)(__Vfunc_named_reg_assign__71__part_digest[5U])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       __Vfunc_named_reg_assign__71__part_digest[4U]))) 
                   >> 0x00000020U));
    __Vfunc_named_reg_assign__71__hw2reg[0x00000010U] 
        = (IData)((((QData)((IData)(__Vfunc_named_reg_assign__71__part_digest[3U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      __Vfunc_named_reg_assign__71__part_digest[2U]))));
    __Vfunc_named_reg_assign__71__hw2reg[0x00000011U] 
        = (IData)(((((QData)((IData)(__Vfunc_named_reg_assign__71__part_digest[3U])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       __Vfunc_named_reg_assign__71__part_digest[2U]))) 
                   >> 0x00000020U));
    __Vfunc_named_reg_assign__71__hw2reg[0x00000012U] 
        = (IData)((((QData)((IData)(__Vfunc_named_reg_assign__71__part_digest[1U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      __Vfunc_named_reg_assign__71__part_digest[0U]))));
    __Vfunc_named_reg_assign__71__hw2reg[0x00000013U] 
        = (IData)(((((QData)((IData)(__Vfunc_named_reg_assign__71__part_digest[1U])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       __Vfunc_named_reg_assign__71__part_digest[0U]))) 
                   >> 0x00000020U));
    __Vfunc_named_reg_assign__71__hw2reg[8U] = (IData)(
                                                       (((QData)((IData)(
                                                                         __Vfunc_named_reg_assign__71__part_digest[0x0000000bU])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          __Vfunc_named_reg_assign__71__part_digest[0x0000000aU]))));
    __Vfunc_named_reg_assign__71__hw2reg[9U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          __Vfunc_named_reg_assign__71__part_digest[0x0000000bU])) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           __Vfunc_named_reg_assign__71__part_digest[0x0000000aU]))) 
                                                        >> 0x00000020U));
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000aU] 
        = (IData)((((QData)((IData)(__Vfunc_named_reg_assign__71__part_digest[9U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      __Vfunc_named_reg_assign__71__part_digest[8U]))));
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000bU] 
        = (IData)(((((QData)((IData)(__Vfunc_named_reg_assign__71__part_digest[9U])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       __Vfunc_named_reg_assign__71__part_digest[8U]))) 
                   >> 0x00000020U));
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000cU] 
        = (IData)((((QData)((IData)(__Vfunc_named_reg_assign__71__part_digest[7U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      __Vfunc_named_reg_assign__71__part_digest[6U]))));
    __Vfunc_named_reg_assign__71__hw2reg[0x0000000dU] 
        = (IData)(((((QData)((IData)(__Vfunc_named_reg_assign__71__part_digest[7U])) 
                     << 0x00000020U) | (QData)((IData)(
                                                       __Vfunc_named_reg_assign__71__part_digest[6U]))) 
                   >> 0x00000020U));
    __Vfunc_named_reg_assign__71__hw2reg[2U] = (IData)(
                                                       (((QData)((IData)(
                                                                         __Vfunc_named_reg_assign__71__part_digest[0x00000011U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          __Vfunc_named_reg_assign__71__part_digest[0x00000010U]))));
    __Vfunc_named_reg_assign__71__hw2reg[3U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          __Vfunc_named_reg_assign__71__part_digest[0x00000011U])) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           __Vfunc_named_reg_assign__71__part_digest[0x00000010U]))) 
                                                        >> 0x00000020U));
    __Vfunc_named_reg_assign__71__hw2reg[4U] = (IData)(
                                                       (((QData)((IData)(
                                                                         __Vfunc_named_reg_assign__71__part_digest[0x0000000fU])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          __Vfunc_named_reg_assign__71__part_digest[0x0000000eU]))));
    __Vfunc_named_reg_assign__71__hw2reg[5U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          __Vfunc_named_reg_assign__71__part_digest[0x0000000fU])) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           __Vfunc_named_reg_assign__71__part_digest[0x0000000eU]))) 
                                                        >> 0x00000020U));
    __Vfunc_named_reg_assign__71__hw2reg[6U] = (IData)(
                                                       (((QData)((IData)(
                                                                         __Vfunc_named_reg_assign__71__part_digest[0x0000000dU])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          __Vfunc_named_reg_assign__71__part_digest[0x0000000cU]))));
    __Vfunc_named_reg_assign__71__hw2reg[7U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          __Vfunc_named_reg_assign__71__part_digest[0x0000000dU])) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           __Vfunc_named_reg_assign__71__part_digest[0x0000000cU]))) 
                                                        >> 0x00000020U));
    __Vfunc_named_reg_assign__71__hw2reg[0U] = (IData)(
                                                       (((QData)((IData)(
                                                                         __Vfunc_named_reg_assign__71__part_digest[0x00000013U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          __Vfunc_named_reg_assign__71__part_digest[0x00000012U]))));
    __Vfunc_named_reg_assign__71__hw2reg[1U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          __Vfunc_named_reg_assign__71__part_digest[0x00000013U])) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(
                                                                           __Vfunc_named_reg_assign__71__part_digest[0x00000012U]))) 
                                                        >> 0x00000020U));
    __Vfunc_named_reg_assign__71__Vfuncout[0U] = __Vfunc_named_reg_assign__71__hw2reg[0U];
    __Vfunc_named_reg_assign__71__Vfuncout[1U] = __Vfunc_named_reg_assign__71__hw2reg[1U];
    __Vfunc_named_reg_assign__71__Vfuncout[2U] = __Vfunc_named_reg_assign__71__hw2reg[2U];
    __Vfunc_named_reg_assign__71__Vfuncout[3U] = __Vfunc_named_reg_assign__71__hw2reg[3U];
    __Vfunc_named_reg_assign__71__Vfuncout[4U] = __Vfunc_named_reg_assign__71__hw2reg[4U];
    __Vfunc_named_reg_assign__71__Vfuncout[5U] = __Vfunc_named_reg_assign__71__hw2reg[5U];
    __Vfunc_named_reg_assign__71__Vfuncout[6U] = __Vfunc_named_reg_assign__71__hw2reg[6U];
    __Vfunc_named_reg_assign__71__Vfuncout[7U] = __Vfunc_named_reg_assign__71__hw2reg[7U];
    __Vfunc_named_reg_assign__71__Vfuncout[8U] = __Vfunc_named_reg_assign__71__hw2reg[8U];
    __Vfunc_named_reg_assign__71__Vfuncout[9U] = __Vfunc_named_reg_assign__71__hw2reg[9U];
    __Vfunc_named_reg_assign__71__Vfuncout[0x0000000aU] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x0000000aU];
    __Vfunc_named_reg_assign__71__Vfuncout[0x0000000bU] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x0000000bU];
    __Vfunc_named_reg_assign__71__Vfuncout[0x0000000cU] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x0000000cU];
    __Vfunc_named_reg_assign__71__Vfuncout[0x0000000dU] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x0000000dU];
    __Vfunc_named_reg_assign__71__Vfuncout[0x0000000eU] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x0000000eU];
    __Vfunc_named_reg_assign__71__Vfuncout[0x0000000fU] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x0000000fU];
    __Vfunc_named_reg_assign__71__Vfuncout[0x00000010U] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x00000010U];
    __Vfunc_named_reg_assign__71__Vfuncout[0x00000011U] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x00000011U];
    __Vfunc_named_reg_assign__71__Vfuncout[0x00000012U] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x00000012U];
    __Vfunc_named_reg_assign__71__Vfuncout[0x00000013U] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x00000013U];
    __Vfunc_named_reg_assign__71__Vfuncout[0x00000014U] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x00000014U];
    __Vfunc_named_reg_assign__71__Vfuncout[0x00000015U] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x00000015U];
    __Vfunc_named_reg_assign__71__Vfuncout[0x00000016U] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x00000016U];
    __Vfunc_named_reg_assign__71__Vfuncout[0x00000017U] 
        = __Vfunc_named_reg_assign__71__hw2reg[0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[1U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[2U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[3U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[4U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[5U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[6U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[7U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[8U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[9U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000aU] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000bU] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000cU] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000dU] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000eU] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000fU] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000010U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000011U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000012U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000013U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000014U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000015U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
        = __Vfunc_named_reg_assign__71__Vfuncout[0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000014U] 
        = (IData)(((0x0e83U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))
                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_q
                    : 0ULL));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000015U] 
        = (IData)((((0x0e83U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))
                     ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_q
                     : 0ULL) >> 0x00000020U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
        = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__direct_access_regwen_q) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__dai_idle)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
        = ((0xf00000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U]) 
           | (0xffffff00U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced) 
                              << 0x0000000fU) | (((
                                                   (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__chk_timeout_q) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lfsr_fsm_err) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__scrmbl_fsm_err) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_fsm_err) 
                                                            >> 0x0dU)))) 
                                                  << 0x0000000bU) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_bus_integ_error_q) 
                                                     << 0x0000000aU) 
                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__dai_idle) 
                                                        << 9U) 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__chk_pending) 
                                                          << 8U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error) 
              << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
        = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U]) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error) 
               >> 0x0000001fU) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                           >> 0x00000020U)) 
                                  << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
        = ((0x0fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U]) 
           | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_intr_operation_done__DOT__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_otp_operation_done__q)) 
                 << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_intr_operation_done__DOT__hw2reg_intr_state_de_o) 
                           << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_intr_error__DOT__hw2reg_intr_state_de_o) 
                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_otp_error__q)) 
                                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_intr_error__DOT__hw2reg_intr_state_de_o))) 
              << 0x0000001cU));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__set_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000000ffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__set_cnt_i);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000000ffffffffffULL & (0x000000ffffffffffULL 
                                        - vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__set_cnt_i));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000000ffffffffffULL & (((0ULL != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                         & (0ULL != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                         ? (((0ULL 
                                              != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                             & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                                        >> 0x00000028U)))
                                             ? 0ULL
                                             : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000000ffffffffffULL & (((0ULL != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                         & ((~ (0x000000ffffffffffULL 
                                                == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)) 
                                            & (0ULL 
                                               != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))
                                         ? (((0ULL 
                                              != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                             & (IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                                        >> 0x00000028U)))
                                             ? 0x000000ffffffffffULL
                                             : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_integ__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q));
    }
    if (vlSelfRef.__VdfgRegularize_he50b618e_0_26) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x000001ffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x000001ffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q);
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x000001ffffffffffULL & (1ULL + vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x000001ffffffffffULL & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
                                        - 1ULL));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT____VdfgRegularize_h954c9026_0_0 
        = ((~ (0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT____VdfgRegularize_h954c9026_0_0 
        = ((~ (0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__lfsr_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_operation_done__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                  >> 0x0000001eU) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_error__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_error__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                  >> 0x0000001cU) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_error__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_operation_done__DOT__wr_data 
        = (1U & ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_error__DOT__we))) 
                 & ((0x40000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U])
                     ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                        >> 0x0000001fU) : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_otp_operation_done__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_error__DOT__wr_data 
        = (1U & ((~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
                      >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_error__DOT__we))) 
                 & ((0x10000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U])
                     ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                        >> 0x0000001dU) : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_otp_error__q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next = 0U;
    if ((IData)((0ULL != (0x00000000000000ffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit)))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_otp_error__q) 
                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_state_otp_operation_done__q)));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                  >> 1U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_enable_otp_error__q) 
                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_intr_enable_otp_operation_done__q)));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                  >> 2U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = (0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next);
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                  >> 3U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = (0xffffffe0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next);
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                  >> 4U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                               >> 0x00000017U)) | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                                      >> 0x00000019U))) 
                       << 2U) | ((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                        >> 0x00000019U)) 
                                 | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                          >> 0x0000001bU)))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                               >> 0x00000013U)) | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                                      >> 0x00000015U))) 
                       << 6U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                         >> 0x00000015U)) 
                                  | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                           >> 0x00000017U))) 
                                 << 4U)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xfffff0ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                               >> 0x0000000fU)) | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                                      >> 0x00000011U))) 
                       << 0x0000000aU) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                                  >> 0x00000011U)) 
                                           | (1U & 
                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                               >> 0x00000013U))) 
                                          << 8U)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xffff0fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                               >> 0x0000000bU)) | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                                      >> 0x0000000dU))) 
                       << 0x0000000eU) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                                  >> 0x0000000dU)) 
                                           | (1U & 
                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                               >> 0x0000000fU))) 
                                          << 0x0000000cU)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xfff0ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                               >> 7U)) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                                >> 9U))) 
                       << 0x00000012U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                                  >> 9U)) 
                                           | (1U & 
                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                               >> 0x0000000bU))) 
                                          << 0x00000010U)));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | (7U & ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                           >> 5U)))
                             ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                 << 0x0000001fU) | 
                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                 >> 1U)) : ((1U & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                           >> 6U)))
                                             ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                                 << 0x0000001cU) 
                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                                   >> 4U))
                                             : ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                                 << 0x00000019U) 
                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                                   >> 7U))))));
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next 
            = ((IData)((0ULL != (0x000000000000ff00ULL 
                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit)))
                ? ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                   | (7U & ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                           >> 8U)))
                             ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                 << 0x00000016U) | 
                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                 >> 0x0000000aU)) : 
                            ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                            >> 9U)))
                              ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                  << 0x00000013U) | 
                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                  >> 0x0000000dU)) : 
                             ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                             >> 0x0aU)))
                               ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                     >> 0x00000010U))
                               : ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                 >> 0x0bU)))
                                   ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                       << 0x0000000dU) 
                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                         >> 0x00000013U))
                                   : ((1U & (IData)(
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                     >> 0x0cU)))
                                       ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                           << 0x0000000aU) 
                                          | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                             >> 0x00000016U))
                                       : ((1U & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                         >> 0x0dU)))
                                           ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                               << 7U) 
                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                                 >> 0x00000019U))
                                           : ((1U & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                             >> 0x0eU)))
                                               ? ((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                                   << 4U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                                     >> 0x0000001cU))
                                               : ((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                                   << 1U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U] 
                                                     >> 0x0000001fU)))))))))))
                : ((IData)((0ULL != (0x0000000000ff0000ULL 
                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit)))
                    ? ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                      >> 0x10U))) ? 
                       ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                        | (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                 >> 2U))) : ((1U & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                            >> 0x11U)))
                                              ? ((0xfffffff8U 
                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                                 | (7U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000017U] 
                                                       >> 5U)))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                             >> 0x12U)))
                                                  ? 
                                                 ((0xfffffffeU 
                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                                  | (1U 
                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                              >> 0x13U)))
                                                   ? 
                                                  (0xfffffff8U 
                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                               >> 0x14U)))
                                                    ? 
                                                   ((0xfffff800U 
                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_direct_access_address__q))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                                >> 0x15U)))
                                                     ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_direct_access_wdata_0__q
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                                 >> 0x16U)))
                                                      ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_direct_access_wdata_1__q
                                                      : 
                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000014U])))))))
                    : ((IData)((0ULL != (0x00000000ff000000ULL 
                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit)))
                        ? ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                          >> 0x18U)))
                            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000015U]
                            : ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                              >> 0x19U)))
                                ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_regwen__DOT__q))
                                : ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                  >> 0x1aU)))
                                    ? (0xfffffffcU 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next)
                                    : ((1U & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                      >> 0x1bU)))
                                        ? ((0xfffffffeU 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_regwen__DOT__q))
                                        : ((1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                          >> 0x1cU)))
                                            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_check_timeout__q
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                           >> 0x1dU)))
                                                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_integrity_check_period__q
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                               >> 0x1eU)))
                                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_consistency_check_period__q
                                                    : 
                                                   ((0xfffffffeU 
                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_vendor_test_read_lock__q)))))))))
                        : ((IData)((0ULL != (0x000000ff00000000ULL 
                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit)))
                            ? ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                              >> 0x20U)))
                                ? ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_creator_sw_cfg_read_lock__q))
                                : ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                  >> 0x21U)))
                                    ? ((0xfffffffeU 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_owner_sw_cfg_read_lock__q))
                                    : ((1U & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                      >> 0x22U)))
                                        ? ((0xfffffffeU 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_rot_creator_auth_codesign_read_lock__q))
                                        : ((1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                          >> 0x23U)))
                                            ? ((0xfffffffeU 
                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__reg_rdata_next) 
                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_rot_creator_auth_state_read_lock__q))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                           >> 0x24U)))
                                                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000012U]
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                               >> 0x25U)))
                                                    ? 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000013U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                                >> 0x26U)))
                                                     ? 
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000010U]
                                                     : 
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000011U])))))))
                            : ((IData)((0ULL != (0x0000ff0000000000ULL 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit)))
                                ? ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                  >> 0x28U)))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000eU]
                                    : ((1U & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                      >> 0x29U)))
                                        ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000fU]
                                        : ((1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                          >> 0x2aU)))
                                            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000cU]
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                           >> 0x2bU)))
                                                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000dU]
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                               >> 0x2cU)))
                                                    ? 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000aU]
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                                >> 0x2dU)))
                                                     ? 
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x0000000bU]
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                                 >> 0x2eU)))
                                                      ? 
                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[8U]
                                                      : 
                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[9U])))))))
                                : ((IData)((0ULL != 
                                            (0x00ff000000000000ULL 
                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit)))
                                    ? ((1U & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                      >> 0x30U)))
                                        ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[6U]
                                        : ((1U & (IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                          >> 0x31U)))
                                            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[7U]
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                           >> 0x32U)))
                                                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[4U]
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                               >> 0x33U)))
                                                    ? 
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[5U]
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                                >> 0x34U)))
                                                     ? 
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[2U]
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                                 >> 0x35U)))
                                                      ? 
                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[3U]
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addr_hit 
                                                                  >> 0x36U)))
                                                       ? 
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0U]
                                                       : 
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[1U])))))))
                                    : 0xffffffffU))))));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_cmd_digest__DOT__we 
        = (((0x0013U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_creator_sw_cfg_read_lock__DOT__we 
        = (((0x0020U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_owner_sw_cfg_read_lock__DOT__we 
        = (((0x0021U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_codesign_read_lock__DOT__we 
        = (((0x0022U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_state_read_lock__DOT__we 
        = (((0x0023U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_1__DOT__we 
        = (((0x0016U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_address__DOT__we 
        = (((0x0014U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_0__DOT__we 
        = (((0x0015U == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_vendor_test_read_lock__DOT__we 
        = (((0x001fU == (0x000003ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 3U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001dU)))) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h97642def_0_61)) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__hw2reg[0x00000016U]);
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__set_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000000ffffffffffULL & (0x000000ffffffffffULL 
                                        - vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__set_cnt_i));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000000ffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__set_cnt_i);
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000000ffffffffffULL & ((1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_26)) 
                                               & (~ 
                                                  (0x000000ffffffffffULL 
                                                   == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                                         ? (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_26)) 
                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
                                                >> 0x00000028U))
                                             ? 0x000000ffffffffffULL
                                             : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt)
                                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000000ffffffffffULL & (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_26)) 
                                         & (0ULL != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                         ? (((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_26)) 
                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
                                                >> 0x00000028U))
                                             ? 0ULL
                                             : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt)
                                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_count_cnsty__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT____VdfgRegularize_h954c9026_0_0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_d = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_d = 0x000000aa3f4c7123ULL;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_d 
            = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i) 
                & (0x000000fffffffffeULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_q))
                ? 0ULL : (0x000000ffffffffffULL & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_q 
                                                   + (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i)))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_d 
            = (0x000000ffffffffffULL & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i)
                                         ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__entropy_i 
                                            ^ ((0x000000a000140000ULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_q)))))) 
                                               ^ VL_SHIFTR_QQI(40,40,32, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_q, 1U)))
                                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_q));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT____VdfgRegularize_h954c9026_0_0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_d = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__lfsr_d = 0x000000aa3f4c7123ULL;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_d 
            = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i) 
                & (0x000000fffffffffeULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_q))
                ? 0ULL : (0x000000ffffffffffULL & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__gen_max_len_sva__DOT__cnt_q 
                                                   + (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i)))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__lfsr_d 
            = (0x000000ffffffffffULL & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__lfsr_en_i)
                                         ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__0__KET____DOT__u_prim_lfsr__DOT__entropy_i 
                                            ^ ((0x000000a000140000ULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__lfsr_q)))))) 
                                               ^ VL_SHIFTR_QQI(40,40,32, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__lfsr_q, 1U)))
                                         : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__u_prim_double_lfsr__DOT__gen_double_lfsr__BRA__1__KET____DOT__u_prim_lfsr__DOT__lfsr_q));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_creator_sw_cfg_read_lock__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_creator_sw_cfg_read_lock__q) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_creator_sw_cfg_read_lock__DOT__we)) 
              | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_owner_sw_cfg_read_lock__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_owner_sw_cfg_read_lock__q) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_owner_sw_cfg_read_lock__DOT__we)) 
              | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_creator_sw_cfg_read_lock__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_owner_sw_cfg_read_lock__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_creator_sw_cfg_read_lock__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_owner_sw_cfg_read_lock__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_codesign_read_lock__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_rot_creator_auth_codesign_read_lock__q) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_codesign_read_lock__DOT__we)) 
              | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_state_read_lock__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_rot_creator_auth_state_read_lock__q) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_state_read_lock__DOT__we)) 
              | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__48__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_codesign_read_lock__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_state_read_lock__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_codesign_read_lock__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_state_read_lock__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_1__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_1__DOT__we)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_address__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_address__DOT__we)
            ? (0x000007ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd)
            : 0U);
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_0__DOT__we) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_0__DOT__wr_data 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__ 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_address__DOT__we;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_0__DOT__wr_data = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__ = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_address__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_0__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_vendor_test_read_lock__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT____Vcellout__u_vendor_test_read_lock__q) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_vendor_test_read_lock__DOT__we)) 
              | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((QData)((IData)(((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_state_read_lock__DOT__we) 
                               << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_rot_creator_auth_codesign_read_lock__DOT__we) 
                                         << 2U)) | 
                             (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_owner_sw_cfg_read_lock__DOT__we) 
                               << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_creator_sw_cfg_read_lock__DOT__we))))) 
            << 0x00000020U) | (QData)((IData)(((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_vendor_test_read_lock__DOT__we) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_consistency_check_period__DOT__we) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_integrity_check_period__DOT__we) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__we))) 
                                                << 0x0000001cU) 
                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_regwen__DOT__we) 
                                                   << 0x0000001bU) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_consistency__DOT__we) 
                                                      << 0x0000001aU) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_trigger_regwen__DOT__we) 
                                                         << 0x00000019U) 
                                                        | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_1__DOT__we) 
                                                             << 0x00000016U) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_0__DOT__we) 
                                                                << 0x00000015U) 
                                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_address__DOT__we) 
                                                                  << 0x00000014U))) 
                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_cmd_digest__DOT__we) 
                                                               << 0x00000013U) 
                                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_regwen__DOT__we) 
                                                                  << 0x00000012U) 
                                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_bus_integ_error__DOT__we) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_test_otp_error__DOT__we) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_enable_otp_error__DOT__we) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_state_otp_error__DOT__we)))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_consistency_check_period__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_vendor_test_read_lock__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_consistency_check_period__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_vendor_test_read_lock__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__48__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__48__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_1__DOT__we)) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_wdata_1__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__)));
}

void Vsim___024root___act_comb__TOP__100(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__100\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_mode_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__base_sel = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__dout_locked_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__dout_locked_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__otp_req_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_mtx_req_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_cmd_o = 2U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_sel_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_valid_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_clr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__buffer_reg_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_sel = 1U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__error_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__error_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__cnsty_chk_ack_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__integ_chk_ack_o = 0U;
    if ((0x00000800U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000400U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_mtx_req_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_valid_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_cmd_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_sel_o = 0U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__otp_req_o = 1U;
                                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellinp__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__otp_gnt_i) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x03b1U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_mtx_req_o = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_valid_o = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_cmd_o = 0U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_sel_o = 0U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                                } else if ((0x00000400U 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid))) {
                                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____VdfgExtracted_hf7a18ecf__0) {
                                        if (((((0x0bU 
                                                > (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                                ? (
                                                   (0x02bfU 
                                                    >= 
                                                    (0x000003ffU 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__data_q[
                                                                     (((IData)(0x0000003fU) 
                                                                       + 
                                                                       (0x000003ffU 
                                                                        & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                                       ? 0x00000020U
                                                       : 
                                                      ((IData)(0x00000040U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__data_q[
                                                                         (((IData)(0x0000001fU) 
                                                                           + 
                                                                           (0x000003ffU 
                                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))))) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__data_q[
                                                                          (0x0000001fU 
                                                                           & (VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))))
                                                    : 0ULL)
                                                : 0ULL) 
                                              == vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__u_prim_secded_inv_72_64_enc__DOT__data_i) 
                                             | ([&]() {
                                                        vlSelfRef.__Vfunc_lc_tx_test_true_strict__228__val 
                                                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_check_byp_en.__PVT__lc_en;
                                                        vlSelfRef.__Vfunc_lc_tx_test_true_strict__228__Vfuncout 
                                                            = 
                                                            (5U 
                                                             == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__228__val));
                                                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__228__Vfuncout)))) {
                                            if ((0x0aU 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x054dU;
                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__cnsty_chk_ack_o = 1U;
                                            } else {
                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x006bU;
                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_en = 1U;
                                            }
                                        } else {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__error_d = 6U;
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__cnsty_chk_ack_o = 1U;
                                        }
                                        if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_q))) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__error_d = 2U;
                                        }
                                    } else {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__error_d 
                                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_q;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__cnsty_chk_ack_o = 1U;
                                    }
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x054dU;
                    if (([&]() {
                                vlSelfRef.__Vfunc_mubi8_test_true_strict__229__val 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__dout_locked_q;
                                vlSelfRef.__Vfunc_mubi8_test_true_strict__229__Vfuncout 
                                    = (0x96U == (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__229__val));
                            }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__229__Vfuncout))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__dout_locked_d = 0x69U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_mtx_req_o = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_sel_o = 0U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_sel = 0U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__data_sel = 0U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_sel_o = 0U;
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
        }
    } else if ((0x00000400U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_valid_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_valid_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_cmd_o = 5U;
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_init_req) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x0d27U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                                    } else {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__dout_locked_d = 0x96U;
                                        if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__error_q))) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__error_d = 7U;
                                        }
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__cnsty_chk_ack_o = 1U;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__integ_chk_ack_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000400U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_chk_req_q))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__integ_chk_ack_o = 1U;
                            } else if ((0x00000400U 
                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_chk_req_q))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x006bU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_clr = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
        }
    } else if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000400U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__buffer_reg_en = 1U;
                                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____VdfgExtracted_hf7a18ecf__0) {
                                    if ((0x0aU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x0a41U;
                                    } else {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x0d27U;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_en = 1U;
                                    }
                                    if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_q))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__error_d = 2U;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__error_d 
                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_q;
                                }
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_valid_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__scrmbl_cmd_o = 3U;
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
        }
    } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
    } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
    } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__otp_req_o = 1U;
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellinp__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__otp_gnt_i) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x0a7cU;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
    }
    if ((1U & (((~ (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                    | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                    [0U])) | VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__10__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
               | (((~ (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                       | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                       [0U])) | VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__9__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                  | (((~ (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                          | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                          [0U])) | VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__8__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                     | (((~ (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                             | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                             [0U])) | VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__7__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                        | (((~ (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                                | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                [0U])) | VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__6__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                           | (((~ (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                                   | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                   [0U])) | VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__5__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                              | (((~ (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                                      | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                      [0U])) | VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                                 | (((~ (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                                         | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                         [0U])) | VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                                    | (((~ (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                                            | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                            [0U])) 
                                        | VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                                       | (((~ (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                                               | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0U])) 
                                           | VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                                          | ((~ (VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                                                 | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0U])) 
                                             | VL_REDXOR_8(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg.__PVT__gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)))))))))))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
        if ((0x05beU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__error_d = 6U;
        }
    }
    if ((([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__230__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                                  >> 0x00000028U)));
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__230__Vfuncout 
                        = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__230__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__230__Vfuncout)) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__err_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__state_d = 0x05beU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o = 1U;
        if ((0x05beU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__error_d = 7U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000001fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000001fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[0U] 
        = (0x000003ffU & (((IData)(0x07a8U) + ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                               << 3U)) 
                          >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[1U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[2U] 
        = (0x0007fc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[2U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[2U] 
        = (0x00045c00U | (0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__req_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__otp_req_o) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__25__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__otp_req_o) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 0x0000000aU));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_clr) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000000fU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_en) 
                               & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_en) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 4U)) ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_en) 
                               & (~ (0x0000000fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__cnt_en) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 4U)) ? 0x0fU
                                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[0x0000000aU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[0x0000000aU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[0x0000000aU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__otp_req_o)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__25__KET__)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__26__KET__))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__26__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__25__KET__));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1078__03a996__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2240__03a2158__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1078__03a996__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2240__03a2158__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1078__03a996__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2240__03a2158__KET__[2U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1078__03a996__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1078__03a996__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1078__03a996__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2157__03a2075__KET__[2U];
    }
}

void Vsim___024root___act_comb__TOP__101(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__101\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__dout_locked_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__dout_locked_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__otp_req_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_cmd_o = 2U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_sel_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mode_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_valid_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_clr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__base_sel = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__buffer_reg_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__data_sel = 1U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__cnsty_chk_ack_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__integ_chk_ack_o = 0U;
    if ((0x00000800U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000400U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_valid_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_cmd_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_sel_o = 0U;
                                    if ((0x00000080U 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x089fU;
                                    }
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__otp_req_o = 1U;
                                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellinp__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__otp_gnt_i) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x03b1U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_valid_o = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_cmd_o = 0U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_sel_o = 0U;
                        if ((0x00000080U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_mtx_gnt) 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready)))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x09a8U;
                        }
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                                } else if ((0x00000080U 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid))) {
                                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____VdfgExtracted_hf7a18ecf__0) {
                                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT____VdfgExtracted_h516757c0__4) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x054dU;
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__cnsty_chk_ack_o = 1U;
                                        } else {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_d = 6U;
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__cnsty_chk_ack_o = 1U;
                                        }
                                        if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_q))) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_d = 2U;
                                        }
                                    } else {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_d 
                                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_q;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__cnsty_chk_ack_o = 1U;
                                    }
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_valid_o = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_clr = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_cmd_o = 4U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mode_o = 1U;
                    if ((0x00000080U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_mtx_gnt) 
                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready)))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x0d5aU;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_sel_o = 0U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__data_sel = 0U;
                            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_rsp_valid))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x0d27U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__buffer_reg_en = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_en = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__data_sel = 0U;
                                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_rsp_valid))) {
                                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT____VdfgExtracted_h516757c0__4) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x054dU;
                                        if (([&]() {
                                                    vlSelfRef.__Vfunc_mubi8_test_true_strict__195__val 
                                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__dout_locked_q;
                                                    vlSelfRef.__Vfunc_mubi8_test_true_strict__195__Vfuncout 
                                                        = 
                                                        (0x96U 
                                                         == (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__195__val));
                                                }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__195__Vfuncout))) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__dout_locked_d = 0x69U;
                                        } else {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__integ_chk_ack_o = 1U;
                                        }
                                    } else {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_d = 6U;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__integ_chk_ack_o = 1U;
                                    }
                                }
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_sel_o = 0U;
                                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_rsp_valid))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x0762U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
        }
    } else if ((0x00000400U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_valid_o = 1U;
                                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_en = 1U;
                                    if ((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_cmd_o = 3U;
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x06e5U;
                                        } else {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x0357U;
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_en = 0U;
                                        }
                                    } else {
                                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_cmd_o = 3U;
                                        }
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x0d5aU;
                                    }
                                }
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_valid_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_cmd_o = 5U;
                                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x08f2U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_init_req) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x0d27U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                                    } else {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__dout_locked_d = 0x96U;
                                        if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_q))) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_d = 7U;
                                        }
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__cnsty_chk_ack_o = 1U;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__integ_chk_ack_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__integ_chk_req_q))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x0a41U;
                            } else if ((0x00000080U 
                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__cnsty_chk_req_q))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x006bU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_clr = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
        }
    } else if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__buffer_reg_en = 1U;
                                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____VdfgExtracted_hf7a18ecf__0) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d 
                                        = ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                            ? 0x0a41U
                                            : 0x0c84U);
                                    if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_q))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_d = 2U;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_d 
                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_q;
                                }
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_valid_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_cmd_o = 3U;
                                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x06e5U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
        }
    } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
    } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
    } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__otp_req_o = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__base_sel = 1U;
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellinp__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__otp_gnt_i) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x0a7cU;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
    }
    if ((1U & (((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                    | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                    [0U])) | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__4__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
               | (((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                       | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                       [0U])) | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__3__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                  | (((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                          | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                          [0U])) | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__2__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                     | (((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                             | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                             [0U])) | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__1__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)) 
                        | ((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o) 
                               | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                               [0U])) | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__gen_ecc_dec__BRA__0__KET____DOT__u_prim_secded_inv_72_64_dec__DOT__syndrome_o)))))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
        if ((0x05beU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_d = 6U;
        }
    }
    if ((([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__196__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                                  >> 0x0000001cU)));
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__196__Vfuncout 
                        = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__196__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__196__Vfuncout)) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__err_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__state_d = 0x05beU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o = 1U;
        if ((0x05beU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__error_d = 7U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__data_sel)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT__gen_ecc_reg__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i
            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__data_o);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[0U] 
        = (0x000003ffU & ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                            << 3U) + ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__base_sel)
                                       ? 0x06f0U : 0x06d0U)) 
                          >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[1U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[2U] 
        = (0x0007fc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[2U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[2U] 
        = (0x00045c00U | (0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[0U] 
        = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[0U]) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_valid_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[0U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[0U]) 
           | ((IData)(((5U > (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                        ? ((0x013fU >= (0x000001ffU 
                                        & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                            ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                                (((IData)(0x0000003fU) 
                                                  + 
                                                  (0x000001ffU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))) 
                                                 >> 5U)])) 
                                << ((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                     ? 0x00000020U : 
                                    ((IData)(0x00000040U) 
                                     - (0x0000001fU 
                                        & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))))) 
                               | (((0U == (0x0000001fU 
                                           & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                    ? 0ULL : ((QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                                              (((IData)(0x0000001fU) 
                                                                + 
                                                                (0x000001ffU 
                                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))))) 
                                  | ((QData)((IData)(
                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                                     (0x0000000fU 
                                                      & (VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U) 
                                                         >> 5U))])) 
                                     >> (0x0000001fU 
                                         & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))))
                            : 0ULL) : 0ULL)) << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[1U] 
        = (((IData)(((5U > (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                      ? ((0x013fU >= (0x000001ffU & 
                                      VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                          ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                              (((IData)(0x0000003fU) 
                                                + (0x000001ffU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))) 
                                               >> 5U)])) 
                              << ((0U == (0x0000001fU 
                                          & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                   ? 0x00000020U : 
                                  ((IData)(0x00000040U) 
                                   - (0x0000001fU & 
                                      VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))))) 
                             | (((0U == (0x0000001fU 
                                         & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                  ? 0ULL : ((QData)((IData)(
                                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                                            (((IData)(0x0000001fU) 
                                                              + 
                                                              (0x000001ffU 
                                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))) 
                                                             >> 5U)])) 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))))) 
                                | ((QData)((IData)(
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                                   (0x0000000fU 
                                                    & (VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U) 
                                                       >> 5U))])) 
                                   >> (0x0000001fU 
                                       & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))))
                          : 0ULL) : 0ULL)) >> 0x0000001fU) 
           | ((IData)((((5U > (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                         ? ((0x013fU >= (0x000001ffU 
                                         & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                             ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                                 (((IData)(0x0000003fU) 
                                                   + 
                                                   (0x000001ffU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x0000001fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                      ? 0x00000020U
                                      : ((IData)(0x00000040U) 
                                         - (0x0000001fU 
                                            & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))))) 
                                | (((0U == (0x0000001fU 
                                            & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                     ? 0ULL : ((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                                               (((IData)(0x0000001fU) 
                                                                 + 
                                                                 (0x000001ffU 
                                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))))) 
                                   | ((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                                      (0x0000000fU 
                                                       & (VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U) 
                                                          >> 5U))])) 
                                      >> (0x0000001fU 
                                          & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))))
                             : 0ULL) : 0ULL) >> 0x00000020U)) 
              << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[2U] 
        = ((0x000000feU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[2U]) 
           | (0x000000ffU & ((IData)((((5U > (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                        ? ((0x013fU 
                                            >= (0x000001ffU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                            ? (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                                                (((IData)(0x0000003fU) 
                                                                  + 
                                                                  (0x000001ffU 
                                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                                  ? 0x00000020U
                                                  : 
                                                 ((IData)(0x00000040U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))))) 
                                               | (((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                                                    (((IData)(0x0000001fU) 
                                                                      + 
                                                                      (0x000001ffU 
                                                                       & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x00000020U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[
                                                                     (0x0000000fU 
                                                                      & (VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))))
                                            : 0ULL)
                                        : 0ULL) >> 0x00000020U)) 
                             >> 0x0000001fU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[2U]) 
           | (0x000000feU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_cmd_o) 
                              << 5U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mode_o) 
                                         << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_sel_o) 
                                                   << 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__22__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__scrmbl_mtx_req_o) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 7U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__22__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__otp_req_o) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 7U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT____VdfgExtracted_h516757c0__4 
        = (((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[9U])) 
              << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[8U]))) 
            == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i) 
           | (0ULL == (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[9U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[8U])))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_o[0U] 
        = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_o[1U] 
        = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i 
                   >> 0x00000020U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_o[2U] 
        = (0x000000ffU & (((((2U & ((~ VL_REDXOR_64(
                                                    (0x7aed348d221a4420ULL 
                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                    << 1U)) | (1U & 
                                               VL_REDXOR_64(
                                                            (0xcbdaaa4a91152210ULL 
                                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                            << 6U) | (((2U & ((~ VL_REDXOR_64(
                                                              (0xb5b65926488c9108ULL 
                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                              << 1U)) 
                                       | (1U & VL_REDXOR_64(
                                                            (0xb671c711c4438884ULL 
                                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                                      << 4U)) | (((
                                                   (2U 
                                                    & ((~ 
                                                        VL_REDXOR_64(
                                                                     (0xcd0fc0f03c207842ULL 
                                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_64(
                                                                     (0x67003ff003e007c1ULL 
                                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i)))) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ 
                                                         VL_REDXOR_64(
                                                                      (0x5e00000fffe0003fULL 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0xb9000000001fffffULL 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_i)))))));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_clr) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 7U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (7U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_en) 
                      & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                      ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_en) 
                          & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                             >> 3U)) ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                      : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (7U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_en) 
                      & (~ (7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                      ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__cnt_en) 
                          & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                             >> 3U)) ? 7U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                      : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[7U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[7U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[7U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1908__03a1826__KET__[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_bundle[7U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_bundle[7U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_bundle[7U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1655__03a1584__KET__[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_d[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_d[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_d[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_d[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_d[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_d[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_d[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_d[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_d[8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_d[9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_q[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__ecc_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__ecc_q;
    if ((5U > (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__buffer_reg_en) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT____Vlvbound_hf03e8f75__0 
                = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_o[1U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_o[0U])));
            if ((0x013fU >= (0x000001ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)))) {
                VL_ASSIGNSEL_WQ(320, 64, (0x000001ffU 
                                          & VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 6U)), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__data_d, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT____Vlvbound_hf03e8f75__0);
            }
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT____Vlvbound_h2de6c885__0 
                = (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__u_prim_secded_inv_72_64_enc__DOT__data_o[2U]);
            if ((0x27U >= (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 3U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__ecc_d 
                    = (((~ (0x00000000000000ffULL << 
                            (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 3U)))) 
                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT__ecc_d) 
                       | (0x000000ffffffffffULL & ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_otp_ctrl_ecc_reg__DOT____Vlvbound_h2de6c885__0)) 
                                                   << 
                                                   (0x0000003fU 
                                                    & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 3U)))));
            }
        }
    }
}
