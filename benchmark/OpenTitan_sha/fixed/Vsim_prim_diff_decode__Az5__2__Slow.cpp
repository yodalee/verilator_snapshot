// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rom_ctrl.gen_alert_tx[0].u_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.gen_alert_senders[0].u_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.gen_alert_senders[0].u_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.gen_alert_senders[1].u_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.gen_alert_senders[1].u_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.gen_alert_senders[2].u_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.gen_alert_senders[2].u_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.gen_alert_senders[3].u_alert_sender.u_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_core_ibex.gen_alert_senders[3].u_alert_sender.u_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
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

VL_ATTR_COLD void Vsim_prim_diff_decode__Az5___ctor_var_reset(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->__PVT__diff_pi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4413145211717705513ull);
    vlSelf->__PVT__diff_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18376417558533455306ull);
    vlSelf->__PVT__level_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9426794543493121298ull);
    vlSelf->__PVT__rise_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18266246863856947357ull);
    vlSelf->__PVT__fall_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14635569312678737442ull);
    vlSelf->__PVT__event_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6632286976241420028ull);
    vlSelf->__PVT__sigint_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3590733200018638049ull);
    vlSelf->__PVT__level_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16326100940448233694ull);
    vlSelf->__PVT__level_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3571006781652411078ull);
    vlSelf->__PVT__gen_async__DOT__state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4297706938186700511ull);
    vlSelf->__PVT__gen_async__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17858325159373137677ull);
    vlSelf->__PVT__gen_async__DOT__diff_p_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5748425734630024946ull);
    vlSelf->__PVT__gen_async__DOT__diff_n_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18185910354803006384ull);
    vlSelf->__PVT__gen_async__DOT__diff_check_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13920328731875783511ull);
    vlSelf->__PVT__gen_async__DOT__diff_pq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12315297933473500776ull);
    vlSelf->__PVT__gen_async__DOT__diff_nq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13710698749902904575ull);
    vlSelf->__PVT__gen_async__DOT__diff_nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12399577213864366108ull);
    vlSelf->__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 498864412298298743ull);
}
