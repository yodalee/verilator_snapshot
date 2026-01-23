// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart0.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart0.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart1.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart1.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart2.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart2.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart3.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_uart3.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c0.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c0.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c1.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c1.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c2.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c2.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host0.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_host1.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.gen_alert_tx[1].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn0.gen_alert_tx[1].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.gen_alert_tx[1].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_edn1.gen_alert_tx[1].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_gpio.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_gpio.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pattgen.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_pattgen.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_timer.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_timer.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.gen_alert_tx[1].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.gen_alert_tx[1].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.gen_alert_tx[2].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.gen_alert_tx[2].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.gen_alert_tx[3].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.gen_alert_tx[3].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__4__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__4__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.gen_alert_tx[4].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__4__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__4__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.gen_alert_tx[4].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.gen_alert_tx[0].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.gen_alert_tx[0].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.gen_alert_tx[1].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.gen_alert_tx[1].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.gen_alert_tx[2].u_prim_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_lc_ctrl.gen_alert_tx[2].u_prim_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__0__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__0__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[0].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__1__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__1__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[1].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__2__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__2__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[2].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__3__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__3__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[3].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__4__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__4__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[4].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__5__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__5__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[5].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__6__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__6__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[6].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__7__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__7__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[7].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__8__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__8__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[8].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__9__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__9__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[9].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__10__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__10__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[10].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__11__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__11__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[11].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__12__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__12__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[12].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__13__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__13__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[13].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__14__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__14__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[14].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__15__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__15__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[15].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__16__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__16__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[16].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__17__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__17__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[17].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__18__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__18__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[18].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__19__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__19__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[19].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__20__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__20__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[20].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__21__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__21__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[21].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__22__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__22__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[22].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__23__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__23__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[23].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__24__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__24__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[24].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__25__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__25__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[25].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__26__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__26__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[26].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__27__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__27__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[27].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__28__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__28__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[28].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__29__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__29__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[29].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__30__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__30__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[30].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__31__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__31__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[31].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__32__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__32__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[32].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__33__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__33__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[33].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__34__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__34__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[34].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__35__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__35__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[35].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__36__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__36__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[36].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__37__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__37__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[37].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__38__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__38__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[38].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__39__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__39__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[39].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__40__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__40__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[40].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__41__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__41__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[41].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__42__KET____DOT__u_alert_receiver__u_decode_alert__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__42__KET____DOT__u_alert_receiver__u_decode_alert__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_alert_handler.gen_alerts[42].u_alert_receiver.u_decode_alert.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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
