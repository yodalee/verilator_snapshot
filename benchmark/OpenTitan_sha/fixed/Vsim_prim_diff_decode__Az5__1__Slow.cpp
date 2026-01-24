// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__43__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__43__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[43].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__44__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__44__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[44].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__45__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__45__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[45].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__46__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__46__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[46].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[47].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[48].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[49].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[50].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[51].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[52].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[53].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[54].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__55__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__55__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[55].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__56__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__56__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[56].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__57__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__57__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[57].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__58__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__58__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[58].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[59].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[60].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[61].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[62].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[63].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[64].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_usbdev.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_usbdev.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pwrmgr_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pwrmgr_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.gen_alert_tx[1].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rstmgr_aon.gen_alert_tx[1].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.gen_alert_tx[1].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_clkmgr_aon.gen_alert_tx[1].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sysrst_ctrl_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sysrst_ctrl_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_adc_ctrl_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pwm_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pwm_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pinmux_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pinmux_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aon_timer_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aon_timer_aon.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_recov_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_recov_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sensor_ctrl_aon.u_prim_recov_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_recov_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_recov_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sensor_ctrl_aon.u_prim_recov_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_fatal_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_fatal_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sensor_ctrl_aon.u_prim_fatal_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_fatal_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_fatal_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sensor_ctrl_aon.u_prim_fatal_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_alert_sender_parity__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_alert_sender_parity__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_ret_aon.u_prim_alert_sender_parity.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_alert_sender_parity__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_alert_sender_parity__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_ret_aon.u_prim_alert_sender_parity.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.gen_alert_senders[0].u_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.gen_alert_senders[0].u_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.gen_alert_senders[1].u_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.gen_alert_senders[1].u_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.gen_alert_senders[2].u_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.gen_alert_senders[2].u_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.gen_alert_senders[3].u_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.gen_alert_senders[3].u_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__4__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__4__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.gen_alert_senders[4].u_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__4__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__4__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.gen_alert_senders[4].u_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_dm.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_dm.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_plic.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_plic.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aes.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aes.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aes.gen_alert_tx[1].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aes.gen_alert_tx[1].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_hmac.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_hmac.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_kmac.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_kmac.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_kmac.gen_alert_tx[1].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_kmac.gen_alert_tx[1].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otbn.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otbn.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otbn.gen_alert_tx[1].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otbn.gen_alert_tx[1].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_keymgr.u_fault_alert.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_keymgr.u_fault_alert.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_op_err_alert__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_op_err_alert__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_keymgr.u_op_err_alert.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_op_err_alert__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_op_err_alert__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_keymgr.u_op_err_alert.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_csrng.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_csrng.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_csrng.gen_alert_tx[1].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_csrng.gen_alert_tx[1].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_entropy_src.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_entropy_src.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_entropy_src.gen_alert_tx[1].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_entropy_src.gen_alert_tx[1].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_main.u_prim_alert_sender_parity.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_sram_ctrl_main.u_prim_alert_sender_parity.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgExtracted_he1794ed1__0;
    __VdfgExtracted_he1794ed1__0 = 0;
    CData/*0:0*/ __VdfgExtracted_he19cf238__0;
    __VdfgExtracted_he19cf238__0 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rom_ctrl.gen_alert_tx[0].u_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/prim_diff_decode.sv", 115, "");
            }
        }
    }
    vlSelfRef.__PVT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_p_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_pq) 
         ^ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__level_d = vlSelfRef.__PVT__level_q;
    __VdfgExtracted_he19cf238__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    | (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    __VdfgExtracted_he1794ed1__0 = ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_p_edge) 
                                    & (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_async__DOT__state_d = vlSelfRef.__PVT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__sigint_o = 0U;
    vlSelfRef.__PVT__fall_o = 0U;
    vlSelfRef.__PVT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            if (__VdfgExtracted_he1794ed1__0) {
                if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                    vlSelfRef.__PVT__fall_o = 1U;
                }
                if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                    vlSelfRef.__PVT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_async__DOT__state_d 
                = ((IData)(__VdfgExtracted_he19cf238__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(__VdfgExtracted_he19cf238__0)))) {
                vlSelfRef.__PVT__sigint_o = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__level_d = vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o;
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o)))) {
                vlSelfRef.__PVT__fall_o = 1U;
            }
            if (vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o) {
                vlSelfRef.__PVT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__sigint_o = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__sigint_o = 1U;
        if (vlSelfRef.__PVT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__sigint_o = 0U;
        }
    }
}
