// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__0__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__0__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (IData)(vlSelfRef.ping_req_i));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__0__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__0__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ping_req_i = (1U & VL_SHIFTL_III(1,1,7, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_en), (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__id_to_ping_q)));
    vlSelfRef.__PVT__ping_rise = ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                  & (IData)(vlSelfRef.ping_req_i));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__0__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__0__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__0__val 
                            = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__0__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__0__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__0__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val 
                        = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1__Vfuncout))) {
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
                                             & (IData)(vlSelfRef.ping_req_i))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__1__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__1__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 1U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__1__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__1__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 1U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__1__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__1__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__2__val 
                            = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__2__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__2__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__2__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__3__val 
                        = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__3__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 1U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__2__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__2__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 2U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__2__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__2__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 2U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__2__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__2__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val 
                            = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__4__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__5__val 
                        = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__5__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__5__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__5__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 2U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__3__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__3__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 3U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__3__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__3__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 3U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__3__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__3__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val 
                            = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__6__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__7__val 
                        = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__7__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__7__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__7__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 3U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__4__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__4__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 4U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__4__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__4__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 4U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__4__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__4__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val 
                            = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__8__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__9__val 
                        = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__9__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__9__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__9__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 4U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__5__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__5__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 5U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__5__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__5__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 5U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__5__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__5__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__10__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__10__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__10__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__10__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__11__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__11__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__11__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__11__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 5U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__6__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__6__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 6U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__6__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__6__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 6U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__6__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__6__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__12__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 8U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__12__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__12__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__12__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__13__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__13__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__13__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__13__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 6U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__7__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__7__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 7U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__7__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__7__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 7U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__7__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__7__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__14__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__14__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__14__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__14__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__15__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__15__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__15__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__15__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 7U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__8__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__8__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 8U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__8__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__8__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 8U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__8__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__8__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__16__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 0x00000010U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__16__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__16__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__16__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__17__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__17__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__17__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__17__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 8U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__9__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__9__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 9U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__9__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__9__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 9U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__9__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__9__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__18__val 
                            = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__18__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__18__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__18__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__19__val 
                        = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U]);
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__19__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__19__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__19__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 9U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__10__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__10__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x0000000aU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__10__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__10__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000aU)));
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
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__10__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__10__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__20__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 0x00000014U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__20__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__20__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__20__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__21__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 0x00000014U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__21__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__21__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__21__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000000aU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__11__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__11__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x0000000bU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__11__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__11__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000bU)));
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
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__11__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__11__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__22__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 0x00000018U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__22__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__22__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__22__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__23__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__23__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__23__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__23__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000000bU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__12__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__12__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x0000000cU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__12__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__12__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000cU)));
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
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__12__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__12__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__24__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 0x00000018U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__24__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__24__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__24__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__25__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__25__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__25__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__25__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000000cU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__13__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__13__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x0000000dU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__13__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__13__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000dU)));
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
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__13__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__13__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__26__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 0x00000018U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__26__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__26__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__26__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__27__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__27__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__27__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__27__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000000dU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__14__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__14__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x0000000eU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__14__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__14__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000eU)));
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
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__14__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__14__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__28__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 0x00000018U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__28__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__28__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__28__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__29__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__29__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__29__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__29__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000000eU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__15__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__15__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x0000000fU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__15__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__15__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000fU)));
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
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__15__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__15__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__30__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 0x00000018U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__30__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__30__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__30__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__31__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__31__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__31__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__31__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000000fU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__16__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__16__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x00000010U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__16__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__16__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000010U)));
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
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__16__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__16__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__32__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 0x00000018U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__32__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__32__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__32__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__33__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__33__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__33__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__33__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x00000010U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__17__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__17__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x00000011U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__17__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__17__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000011U)));
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
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__17__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__17__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__34__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 0x00000018U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__34__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__34__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__34__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__35__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__35__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__35__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__35__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x00000011U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__18__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__18__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x00000012U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__18__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__18__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000012U)));
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
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__18__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__18__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__36__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                              >> 0x00000018U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__36__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__36__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__36__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__37__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__37__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__37__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__37__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x00000012U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__19__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__19__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x00000013U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__19__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__19__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000013U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__19__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__19__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__38__val 
                            = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                               >> 0x0000001cU);
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__38__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__38__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__38__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__39__val 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                           >> 0x0000001cU);
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__39__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__39__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__39__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x00000013U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__20__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__20__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x00000014U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__20__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__20__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000014U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__20__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__20__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__40__val 
                            = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U]);
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__40__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__40__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__40__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__41__val 
                        = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U]);
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__41__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__41__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__41__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x00000014U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__21__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__21__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x00000015U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__21__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__21__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000015U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__21__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__21__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__42__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__42__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__42__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__42__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__43__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__43__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__43__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__43__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x00000015U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__22__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__22__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x00000016U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__22__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__22__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000016U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__22__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__22__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__44__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 8U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__44__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__44__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__44__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__45__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__45__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__45__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__45__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x00000016U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__23__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__23__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x00000017U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__23__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__23__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000017U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__23__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__23__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__46__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__46__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__46__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__46__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__47__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__47__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__47__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__47__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x00000017U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__24__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__24__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x00000018U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__24__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__24__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000018U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__24__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__24__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__48__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__48__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__48__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__48__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__49__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__49__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__49__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__49__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x00000018U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__25__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__25__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x00000019U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__25__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__25__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000019U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__25__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__25__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__50__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__50__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__50__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__50__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__51__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__51__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__51__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__51__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x00000019U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__26__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__26__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x0000001aU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__26__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__26__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000001aU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__26__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__26__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__52__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__52__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__52__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__52__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__53__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__53__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__53__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__53__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000001aU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__27__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__27__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x0000001bU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__27__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__27__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000001bU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__27__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__27__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__54__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 0x00000010U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__54__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__54__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__54__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__55__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__55__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__55__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__55__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000001bU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__28__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__28__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x0000001cU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__28__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__28__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000001cU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__28__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__28__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__56__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 0x00000014U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__56__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__56__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__56__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__57__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 0x00000014U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__57__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__57__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__57__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000001cU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__29__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__29__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x0000001dU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__29__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__29__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000001dU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__29__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__29__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__58__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 0x00000014U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__58__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__58__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__58__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__59__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 0x00000014U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__59__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__59__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__59__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000001dU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__30__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__30__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                             >> 0x0000001eU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__30__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__30__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000001eU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__30__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__30__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__60__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__60__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__60__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__60__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__61__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__61__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__61__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__61__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000001eU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__31__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__31__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                       >> 0x0000001fU));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__31__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__31__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                     >> 0x0000001fU));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__31__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__31__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__62__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 0x00000018U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__62__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__62__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__62__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__63__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__63__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__63__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__63__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                                >> 0x0000001fU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__32__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__32__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U]));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__32__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__32__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U]));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__32__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__32__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__64__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 0x00000010U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__64__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__64__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__64__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__65__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__65__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__65__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__65__Vfuncout))) {
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
                                             & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U])));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__33__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__33__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 1U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__33__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__33__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 1U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__33__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__33__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__66__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                              >> 0x00000010U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__66__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__66__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__66__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__67__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__67__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__67__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__67__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 1U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__34__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__34__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 2U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__34__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__34__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 2U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__34__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__34__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__68__val 
                            = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U]);
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__68__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__68__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__68__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__69__val 
                        = (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U]);
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__69__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__69__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__69__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 2U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__35__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__35__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 3U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__35__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__35__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 3U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__35__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__35__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__70__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__70__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__70__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__70__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__71__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__71__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__71__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__71__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 3U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__36__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__36__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 4U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__36__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__36__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 4U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__36__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__36__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__72__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__72__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__72__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__72__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__73__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__73__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__73__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__73__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 4U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__37__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__37__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 5U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__37__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__37__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 5U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__37__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__37__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__74__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__74__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__74__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__74__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__75__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__75__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__75__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__75__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 5U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__38__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__38__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 6U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__38__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__38__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 6U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__38__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__38__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__76__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__76__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__76__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__76__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__77__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__77__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__77__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__77__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 6U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__39__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__39__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 7U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__39__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__39__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 7U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__39__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__39__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__78__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__78__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__78__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__78__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__79__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__79__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__79__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__79__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 7U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__40__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__40__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o 
            = ((2U & ((~ (IData)(vlSelfRef.__PVT__ping_tog_pd)) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ping_tog_pd));
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o 
            = ((2U & (((IData)(vlSelfRef.__PVT__send_init)
                        ? (IData)(vlSelfRef.__PVT__ack_pd)
                        : (~ (IData)(vlSelfRef.__PVT__ack_pd))) 
                      << 1U)) | (IData)(vlSelfRef.__PVT__ack_pd));
    } else {
        vlSelfRef.__PVT__state_q = 4U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ping__q_o = 2U;
        vlSelfRef.__Vcellout__u_prim_generic_flop_ack__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 8U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__40__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__40__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 8U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__40__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__40__KET____DOT__u_alert_receiver__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__80__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 8U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__80__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__80__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__80__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__81__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__81__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__81__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__81__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 8U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__41__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__41__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 9U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__41__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__41__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 9U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__41__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__41__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__82__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__82__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__82__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__82__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__83__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__83__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__83__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__83__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 9U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__42__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__42__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x0000000aU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__42__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__42__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000aU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__42__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__42__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__84__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x00000010U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__84__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__84__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__84__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__85__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__85__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__85__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__85__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000000aU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__43__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__43__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x0000000bU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__43__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__43__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000bU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__43__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__43__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__86__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x00000010U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__86__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__86__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__86__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__87__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__87__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__87__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__87__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000000bU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__44__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__44__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x0000000cU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__44__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__44__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000cU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__44__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__44__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__88__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x00000014U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__88__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__88__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__88__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__89__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x00000014U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__89__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__89__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__89__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000000cU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__45__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__45__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x0000000dU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__45__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__45__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000dU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__45__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__45__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__90__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x00000018U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__90__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__90__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__90__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__91__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__91__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__91__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__91__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000000dU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__46__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__46__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x0000000eU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__46__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__46__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000eU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__46__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__46__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__92__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x00000018U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__92__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__92__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__92__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__93__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__93__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__93__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__93__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000000eU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x0000000fU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000fU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__94__val 
                            = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                               >> 0x0000001cU);
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__94__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__94__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__94__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__95__val 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                           >> 0x0000001cU);
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__95__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__95__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__95__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000000fU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x00000010U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000010U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__96__val 
                            = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                               >> 0x0000001cU);
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__96__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__96__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__96__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__97__val 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                           >> 0x0000001cU);
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__97__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__97__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__97__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x00000010U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x00000011U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000011U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__98__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__98__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__98__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__98__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__99__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__99__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__99__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__99__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x00000011U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x00000012U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000012U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__100__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__100__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__100__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__100__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__101__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__101__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__101__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__101__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x00000012U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x00000013U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000013U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__102__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__102__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__102__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__102__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__103__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__103__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__103__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__103__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x00000013U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x00000014U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000014U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__104__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__104__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__104__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__104__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__105__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__105__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__105__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__105__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x00000014U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x00000015U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000015U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__106__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__106__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__106__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__106__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__107__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__107__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__107__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__107__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x00000015U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x00000016U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000016U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__108__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__108__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__108__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__108__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__109__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__109__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__109__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__109__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x00000016U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__55__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__55__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x00000017U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__55__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__55__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000017U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__55__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__55__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__110__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__110__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__110__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__110__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__111__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__111__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__111__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__111__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x00000017U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__56__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__56__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x00000018U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__56__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__56__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000018U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__56__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__56__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__112__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__112__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__112__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__112__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__113__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__113__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__113__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__113__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x00000018U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__57__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__57__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x00000019U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__57__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__57__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000019U)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__57__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__57__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__114__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__114__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__114__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__114__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__115__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__115__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__115__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__115__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x00000019U))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__58__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__58__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x0000001aU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__58__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__58__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000001aU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__58__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__58__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__116__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 0x0000000cU));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__116__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__116__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__116__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__117__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 0x0000000cU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__117__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__117__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__117__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000001aU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x0000001bU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000001bU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__118__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__118__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__118__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__118__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__119__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__119__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__119__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__119__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000001bU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x0000001cU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000001cU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__120__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__120__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__120__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__120__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__121__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__121__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__121__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__121__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000001cU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x0000001dU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000001dU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__122__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__122__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__122__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__122__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__123__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__123__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__123__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__123__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000001dU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (1U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                             >> 0x0000001eU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000001eU)));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__124__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__124__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__124__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__124__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__125__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__125__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__125__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__125__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000001eU))));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_pending_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                       && (IData)(vlSelfRef.__PVT__ping_pending_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 4U);
    vlSelfRef.__PVT__ping_req_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                       >> 0x0000001fU));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver__1(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                     >> 0x0000001fU));
}

void Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver__2(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver__2\n"); );
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
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__126__val 
                            = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                              >> 4U));
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__126__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__126__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__126__Vfuncout))) {
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
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__127__val 
                        = (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                                          >> 4U));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__127__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__127__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__127__Vfuncout))) {
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
                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                                >> 0x0000001fU))));
}
