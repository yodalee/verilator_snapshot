// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__46__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__47__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__48__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__50__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_op_err_alert__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_op_err_alert__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_op_err_alert__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_op_err_alert__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__49__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__51__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__52__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__53__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__54__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__59__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__60__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__61__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__62__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__63__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ping__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ping__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ping__q_o) 
                     >> 1U)));
}

void Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ack__0(Vsim_prim_diff_decode__Az5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_prim_diff_decode__Az5___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__u_decode_ack__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__level_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__level_d));
    vlSelfRef.__PVT__gen_async__DOT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
                                                 ? (IData)(vlSelfRef.__PVT__gen_async__DOT__state_d)
                                                 : 0U);
    vlSelfRef.__PVT__gen_async__DOT__diff_nq = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_async__DOT__diff_pq = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                && (IData)(vlSelf->__PVT__gen_async__DOT__i_sync_p->q_o));
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
    vlSelfRef.__PVT__gen_async__DOT__diff_nd = ((1U 
                                                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
                                                || (IData)(vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_async__DOT__diff_n_edge = 
        ((IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nd) 
         ^ (IData)(vlSelfRef.__PVT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni))) 
           || (1U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__gen_alerts__BRA__64__KET____DOT__u_alert_receiver.__Vcellout__u_prim_generic_flop_ack__q_o) 
                     >> 1U)));
}
