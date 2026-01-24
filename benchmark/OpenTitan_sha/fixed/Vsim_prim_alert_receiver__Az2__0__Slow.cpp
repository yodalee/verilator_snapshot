// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__0__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__0__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ping_req_i = (1U & VL_SHIFTL_III(1,1,7, (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_en), (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__id_to_ping_q)));
    vlSelfRef.__PVT__ping_rise = ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                  & (IData)(vlSelfRef.ping_req_i));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__1__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__1__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 1U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__2__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__2__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 2U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__3__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__3__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 3U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__4__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__4__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 4U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__5__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__5__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 5U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__6__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__6__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 6U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__7__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__7__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 7U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__8__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__8__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 8U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__9__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__9__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 9U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__10__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__10__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000aU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__11__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__11__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000bU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__12__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__12__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000cU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__13__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__13__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000dU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__14__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__14__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000eU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__15__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__15__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000000fU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__16__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__16__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000010U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__17__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__17__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000011U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__18__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__18__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000012U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__19__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__19__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000013U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__20__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__20__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000014U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__21__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__21__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000015U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__22__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__22__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000016U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__23__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__23__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000017U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__24__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__24__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000018U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__25__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__25__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x00000019U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__26__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__26__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000001aU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__27__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__27__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000001bU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__28__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__28__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000001cU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__29__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__29__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000001dU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__30__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__30__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                           >> 0x0000001eU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__31__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__31__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[0U] 
                                     >> 0x0000001fU));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__32__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__32__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U]));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__33__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__33__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 1U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__34__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__34__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 2U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__35__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__35__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 3U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__36__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__36__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 4U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__37__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__37__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 5U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__38__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__38__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 6U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__39__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__39__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 7U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__40__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__40__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 8U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__41__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__41__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 9U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__42__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__42__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000aU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__43__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__43__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000bU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__44__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__44__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000cU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__45__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__45__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000dU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__46__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__46__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000eU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000000fU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000010U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000011U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000012U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000013U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000014U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000015U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000016U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__55__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__55__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000017U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__56__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__56__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000018U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__57__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__57__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x00000019U)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__58__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__58__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000001aU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000001bU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000001cU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000001dU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = (1U & ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                        & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                           >> 0x0000001eU)));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                  & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[1U] 
                                     >> 0x0000001fU));
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver__0(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_rise = ((~ (IData)(vlSelfRef.__PVT__ping_req_q)) 
                                  & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_ping_timer__DOT__alert_ping_req_o[2U]);
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

VL_ATTR_COLD void Vsim_prim_alert_receiver__Az2___ctor_var_reset(Vsim_prim_alert_receiver__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_receiver__Az2___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->init_trig_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8873509281639490480ull);
    vlSelf->ping_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17005721524997648457ull);
    vlSelf->ping_ok_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13397319467744470561ull);
    vlSelf->integ_fail_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2651802102504422436ull);
    vlSelf->alert_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17611755471748740803ull);
    vlSelf->alert_rx_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 277545031601633276ull);
    vlSelf->alert_tx_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15932426007636410464ull);
    vlSelf->__PVT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14154348034863170373ull);
    vlSelf->__PVT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14578357007859236226ull);
    vlSelf->__PVT__ping_rise = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16340911973082327588ull);
    vlSelf->__PVT__ping_tog_pd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6591729464433472817ull);
    vlSelf->__PVT__ack_pd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 371521969757028845ull);
    vlSelf->__PVT__ping_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11752549151686790430ull);
    vlSelf->__PVT__ping_pending_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11294421674743194375ull);
    vlSelf->__PVT__ping_pending_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16711753199306509533ull);
    vlSelf->__PVT__send_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5081135806719227896ull);
    vlSelf->__PVT__send_ping = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4805005311505701765ull);
    vlSelf->__Vcellout__u_prim_generic_flop_ack__q_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17913897408709108727ull);
    vlSelf->__Vcellout__u_prim_generic_flop_ping__q_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12988519419519324664ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__0__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6372384945362029087ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__0__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10051259335923575018ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1628151262156786870ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__1__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6497513165002300816ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__2__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17491899613014420080ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__2__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10437666448613689692ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__3__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5443767646638904591ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__3__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10412255010806185859ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__4__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 703434038796944005ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__4__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10443713945620973568ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__5__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7631638712458567087ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__5__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14423791931653524363ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__6__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13490389477559648229ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__6__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16949656769346261169ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__7__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7569868130054017914ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__7__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17903009249238741777ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__8__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16976253508738990664ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__8__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3085217849644718442ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__9__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6690006483187658968ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__9__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 59903712678665540ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__10__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8254159213477385893ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__10__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15959678897842229011ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__11__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8678632217266204664ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__11__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14097380575022274689ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__12__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7419720573110369723ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__12__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7622537938708258416ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__13__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12945277228908484099ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__13__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9492872184391680454ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__14__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3081941537391183392ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__14__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7826821682924362515ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__15__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6258626777180386108ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__15__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11202832581689567738ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__16__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2986046754657648967ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__16__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9619017061310047083ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__17__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4814510512791603228ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__17__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16212409932623486019ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__18__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13876649618787868946ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__18__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1999945937542950614ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__19__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13550410545910828349ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__19__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16590004824151303603ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__20__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11729718696273944235ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__20__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4730436960731068038ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__21__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16840315466249065633ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__21__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6522034753455576963ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__22__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2945617833134834581ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__22__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9292510061140346876ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__23__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9740672966899292603ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__23__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8427634851704327105ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__24__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16048187662579554811ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__24__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11248044575811583888ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__25__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2154888371791392313ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__25__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6846176498823004674ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__26__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7959345642240608824ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__26__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 994581741952352974ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__27__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7512886365199356288ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__27__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13562830383699011720ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__28__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6276631325249736779ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__28__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4780215640931438013ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__29__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7336375703850840829ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__29__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15472217542737317893ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__30__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1442315832748081873ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__30__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13763189855021136990ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__31__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2570412785897866234ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__31__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9731750653778895334ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__32__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3183219736059619224ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__32__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7378028083799338012ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__33__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4057425494623923957ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__33__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3994928169491855374ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__34__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3646189533258836610ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__34__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8913622939639606841ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__35__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10568537207200567834ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__35__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 269384616530719619ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__36__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12285249634900769723ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__36__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9125257620637068334ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__37__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3508581094259629000ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__37__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17608255610152672313ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__38__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13117187784091672030ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__38__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3130745059004056713ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__39__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14123176149207306830ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__39__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17494171446148322504ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__40__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11090517220258176223ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__40__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18321020170202874849ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__41__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16615163436793341276ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__41__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 237025917838150836ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__42__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5671330854240746540ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__42__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8826968801556894993ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__43__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8817228993959752432ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__43__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13968648785125355531ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__44__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14105035449504822915ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__44__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11182865054401551495ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__45__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15539334785194169886ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__45__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6907583135275703280ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__46__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4388191455315218344ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__46__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14685105242567544597ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__47__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4946954997810102006ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__47__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10871993718379987749ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__48__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 383290510234207602ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__48__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17740836336927475150ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__49__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13616431320334692763ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__49__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3687669608970115601ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__50__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4536565408154072361ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__50__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14283621670311892167ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__51__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7344641794637097931ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__51__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5409923783012986595ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__52__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14436537694404165122ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__52__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8683033093103914602ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__53__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17730247896573424566ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__53__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5942476556672319190ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__54__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18093072110523427175ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__54__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15052299390365602153ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__55__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5569533253957828556ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__55__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10719201865745512683ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__56__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5698017719289147120ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__56__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8588295115726857641ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__57__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12051302423570906517ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__57__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 508782442509047866ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__58__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8514521567790659983ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__58__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7091445556607751521ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__59__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14545444053566669715ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__59__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16677673181018263652ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__60__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7448725147959500880ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__60__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11434373640016966630ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__61__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14892499171251481389ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__61__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13944141776625358138ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__62__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9047234055080984190ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__62__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15871344720482486918ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__63__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9188871879577907972ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__63__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5807092932199955626ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__64__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16459334744503853365ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__64__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10269554427580715461ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__65__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7290493801609833730ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__65__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3137212299949864258ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__66__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13268463275982480519ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__66__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16441802936430444017ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__67__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1137608962217548702ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__67__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3372135530650521924ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__68__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2826121062117319059ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__68__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4412781548921558245ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__69__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10438992152630768957ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__69__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7788050094479774374ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__70__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1270731058896369263ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__70__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17548434040804004349ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__71__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13477895726380130815ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__71__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12784052869300776747ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__72__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10096899066109204046ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__72__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8926385614224100983ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__73__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10404264423900661973ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__73__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5749173723683577187ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__74__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3779283962938329274ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__74__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14941231538464962264ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__75__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3644813020997624389ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__75__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13794417705915987961ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__76__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8921391596859270731ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__76__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3034231734167887290ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__77__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15283752243412594807ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__77__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15031817605852408319ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__78__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2619254280762463918ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__78__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18303165897739690842ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__79__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8969108249441176297ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__79__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17620006598048078873ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__80__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18341122539024073611ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__80__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 99132814562369542ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__81__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15875647428778185960ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__81__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4875578689348666136ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__82__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12431792011583706212ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__82__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7424757475646024488ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__83__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4989330717753700874ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__83__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12053272143272361162ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__84__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15531606277489058609ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__84__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15330975646727977282ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__85__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4643120568601104433ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__85__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7595210821882726264ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__86__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924063959882238218ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__86__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 727427705485855245ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__87__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8725911808305470391ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__87__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9296088882909280070ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__88__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4977668147556356239ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__88__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10547570430340788937ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__89__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3926414055685392793ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__89__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10880493439717123184ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__90__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9365015960244921215ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__90__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17476751986277526345ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__91__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7417552837309696019ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__91__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7866542710785087318ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__92__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3736231766998946727ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__92__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6448257657162787190ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__93__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4716026616109198485ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__93__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9912016455354623554ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__94__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13653252491149080524ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__94__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3100706017645736586ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__95__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1762538752139198910ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__95__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11473868705230816310ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__96__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15381833123551434302ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__96__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9475273132329931614ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__97__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5970991964481228549ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__97__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13464495688638551656ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__98__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12227179656630230413ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__98__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9972916487949942538ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__99__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11567090580258037280ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__99__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1105897505534653043ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__100__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15193476299040327145ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__100__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8502083065675410709ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__101__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4699291913962066506ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__101__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 918477166125649779ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__102__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1622731563487390484ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__102__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3857269085238639857ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__103__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16404366108016404362ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__103__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5935089307980095431ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__104__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 535046890003054977ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__104__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12641879948586499146ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__105__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3618555482520653104ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__105__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10561422306476799930ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__106__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12170255700281383277ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__106__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5335335685878826392ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__107__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4596131708840103304ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__107__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15046014024240446828ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__108__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15868722690281852820ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__108__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17847377151966805286ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__109__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18084469708368758427ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__109__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 828781316231012813ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__110__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12981844691158442574ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__110__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8410330210446443218ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__111__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 488366117272829621ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__111__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4869310454058598692ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__112__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3630867073878239185ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__112__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 845003955754162981ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__113__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 730270942200373031ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__113__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 602690838520900186ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__114__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1282523777147737653ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__114__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8147907806517467555ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__115__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15521650208433492865ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__115__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12261682628434416652ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__116__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7489246267409684637ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__116__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3082009612099549374ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__117__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15056218535903142017ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__117__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7860429582692453211ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__118__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3926980909485969285ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__118__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3392815170442540179ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__119__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11898209928450449907ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__119__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16183700471698641173ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__120__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13204291617202269722ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__120__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16395985286481297398ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__121__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7908918534151384223ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__121__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11365800446941534419ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__122__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12694411204216475052ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__122__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2308649335978518524ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__123__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13297076515956803204ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__123__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5013782673071161789ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__124__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12480027915799685199ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__124__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14010658130092024484ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__125__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4105617188569966111ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__125__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15403607604706313742ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__126__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5469874172585819360ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__126__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5801903965351470487ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__127__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13146726359663571940ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__127__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13282951305445555244ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__128__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11959176764291464156ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__128__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9111480878977694135ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__129__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3775471630572596001ull);
    vlSelf->__Vfunc_mubi4_test_true_strict__129__val = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8353787922132760502ull);
}
