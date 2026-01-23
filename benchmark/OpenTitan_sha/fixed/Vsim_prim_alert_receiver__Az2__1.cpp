// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[2U]));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                  & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[2U]);
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__state_d = vlSelfRef.__PVT__state_q;
    vlSelfRef.__PVT__ack_pd = 0U;
    vlSelfRef.ping_ok_o = 0U;
    vlSelfRef.integ_fail_o = 0U;
    vlSelfRef.alert_o = 0U;
    vlSelfRef.__PVT__send_init = 0U;
    vlSelfRef.__PVT__send_ping = vlSelfRef.__PVT__ping_rise;
    if ((4U & (IData)(vlSelfRef.__PVT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__state_q))) {
            vlSelfRef.__PVT__state_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
            vlSelfRef.__PVT__send_ping = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__u_decode_alert->__PVT__sigint_o)))) {
                vlSelfRef.__PVT__state_d = 2U;
                vlSelfRef.__PVT__send_ping = ((IData)(vlSelfRef.__PVT__ping_rise) 
                                              | (IData)(vlSelfRef.__PVT__ping_pending_q));
            }
        } else {
            vlSelfRef.__PVT__send_init = 1U;
            vlSelfRef.__PVT__send_ping = 0U;
            if (([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__128__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__128__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__128__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__128__Vfuncout))) {
                vlSelfRef.ping_ok_o = vlSelfRef.__PVT__ping_pending_q;
            } else if (vlSelf->__PVT__u_decode_alert->__PVT__sigint_o) {
                vlSelfRef.__PVT__state_d = 5U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__state_d = ((1U & (IData)(vlSelfRef.__PVT__state_q))
                                     ? 0U : 3U);
    } else if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
        if (vlSelf->__PVT__u_decode_alert->__PVT__level_d) {
            vlSelfRef.__PVT__ack_pd = 1U;
        } else {
            vlSelfRef.__PVT__state_d = 2U;
        }
    } else if (vlSelf->__PVT__u_decode_alert->__PVT__level_d) {
        vlSelfRef.__PVT__state_d = 1U;
        vlSelfRef.__PVT__ack_pd = 1U;
        if (vlSelfRef.__PVT__ping_pending_q) {
            vlSelfRef.ping_ok_o = 1U;
        } else {
            vlSelfRef.alert_o = 1U;
        }
    }
    if ((1U & (~ ((4U == (IData)(vlSelfRef.__PVT__state_q)) 
                  | (5U == (IData)(vlSelfRef.__PVT__state_q)))))) {
        if (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__129__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__129__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__129__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__129__Vfuncout))) {
            vlSelfRef.__PVT__state_d = 4U;
            vlSelfRef.__PVT__ack_pd = 0U;
            vlSelfRef.ping_ok_o = 0U;
            vlSelfRef.integ_fail_o = 0U;
            vlSelfRef.alert_o = 0U;
            vlSelfRef.__PVT__send_init = 1U;
        } else if (vlSelf->__PVT__u_decode_alert->__PVT__sigint_o) {
            vlSelfRef.__PVT__state_d = 0U;
            vlSelfRef.__PVT__ack_pd = 0U;
            vlSelfRef.ping_ok_o = 0U;
            vlSelfRef.integ_fail_o = 1U;
            vlSelfRef.alert_o = 0U;
        }
    }
    vlSelfRef.__PVT__ping_tog_pd = (1U & ((~ (IData)(vlSelfRef.__PVT__send_init)) 
                                          & ((IData)(vlSelfRef.__PVT__send_ping)
                                              ? (~ (IData)(vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o))
                                              : (IData)(vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o))));
    vlSelfRef.__PVT__ping_pending_d = ((IData)(vlSelfRef.__PVT__ping_rise) 
                                       | ((~ (IData)(vlSelfRef.ping_ok_o)) 
                                          & ((IData)(vlSelfRef.__PVT__ping_pending_q) 
                                             & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[2U])));
}
