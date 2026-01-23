// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_flop_alert__q_o 
            = (((IData)(vlSelfRef.__PVT__alert_nd) 
                << 1U) | (IData)(vlSelfRef.__PVT__alert_pd));
    } else {
        vlSelfRef.__PVT__state_q = 0U;
        vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 2U;
    }
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

extern const VlUnpacked<CData/*2:0*/, 512> Vsim__ConstPool__TABLE_hc773ee05_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hd6c4ddd9_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hcc28197f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hdf28c255_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_h2dcb2245_0;

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_48.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000019U) 
                                            & (3U == 
                                               (3U 
                                                & (- (IData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we)))))) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_edn_core__DOT__u_intr_hw_edn_fatal_err__DOT__event_intr_i) 
                                      | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_33)) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__err_q) 
                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_chk.err_o) 
                                           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_prim_reg_we_check.__PVT__u_prim_onehot_check__DOT__err_o)))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx1 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx1];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx1];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx1];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx1];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx1];
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_49.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000019U) 
                                            & (3U == 
                                               (3U 
                                                & (- (IData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we)))))) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_edn_core__DOT__u_intr_hw_edn_fatal_err__DOT__event_intr_i) 
                                      | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.u_edn_core__DOT____VdfgRegularize_h91f6274d_0_33)) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__err_q) 
                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_chk.err_o) 
                                           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_prim_reg_we_check.__PVT__u_prim_onehot_check__DOT__err_o)))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx2 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx2];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx2];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx2];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx2];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx2];
}

void Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__fatal_prog_error_q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_2) 
                                            | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_5)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx3 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx3];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx3];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx3];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx3];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx3];
}

void Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__fatal_state_error_q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_1) 
                                            | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_4)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx4 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx4];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx4];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx4];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx4];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx4];
}

void Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__fatal_bus_integ_error_q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_0) 
                                            | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_3)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx5 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx5];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx5];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx5];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx5];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx5];
}

void Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_fatal_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_fatal_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_fatal_alert_sender__2(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_fatal_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_fatal_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_prim_fatal_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.alert_test_i = ((3U == (3U & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we))))) 
                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sensor_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                 >> 1U));
    vlSelfRef.__PVT__alert_set_d = (IData)(((0ULL != 
                                             (0x0000000fff000000ULL 
                                              & vlSymsp->TOP.__VdfgRegularize_he50b618e_0_944)) 
                                            | (IData)(vlSelfRef.__PVT__alert_set_q)));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx6 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx6];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx6];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx6];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx6];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx6];
}

void Vsim_prim_alert_sender__I1___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_alert_sender_parity__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_alert_sender_parity__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.__PVT__alert_set_d = (((0U != (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__bus_integ_error)) 
                                     | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__err_q) 
                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_status_readback_error__DOT__de) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_alert)))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx7 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx7];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx7];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx7];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx7];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx7];
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_alert_sender_parity__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_alert_sender_parity__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_reg_if__DOT__wdata_o 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender__I1___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage) 
           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert) 
               | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert) 
                  | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert))) 
              | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__alert) 
                  | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__alert) 
                     | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__alert))) 
                 | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert) 
                     | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert) 
                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert))) 
                    | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__err_q) 
                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_chk.err_o) 
                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o)))))));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1707 = (1U 
                                                   & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__rnd_ctr_err) 
                                                      | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_78) 
                                                         | ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____VdfgRegularize_hdf41bb1a_0_0)) 
                                                            | (IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)))));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx8 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx8];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx8];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx8];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx8];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx8];
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                               >> 0x00000019U) & (3U 
                                                  == 
                                                  (3U 
                                                   & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_alert_test_fatal_fault__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender__I1___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (1U & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kmac_en.err_storage) 
                  | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__err_storage) 
                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_mode.err_storage) 
                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_msg_endianness.err_storage) 
                           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_state_endianness.err_storage) 
                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_sideload.err_storage) 
                                 | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode.err_storage) 
                                    | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process.err_storage) 
                                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_msg_mask.err_storage) 
                                          | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_ready.err_storage) 
                                             | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_en_unsupported_modestrength.err_storage) 
                                                | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_entropy_refresh_threshold_shadowed__DOT__err_storage)))))))))))) 
                 | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__err_q) 
                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_chk.err_o) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_prim_reg_we_check.__PVT__u_prim_onehot_check__DOT__err_o))) 
                    | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_errchk_state_error) 
                        | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error) 
                            | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_round_state_error) 
                               | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error))) 
                           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_app_state_error) 
                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error) 
                                 | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_entropy_state_error) 
                                    | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error)))))) 
                       | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__err_q) 
                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__err_q) 
                               | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__err_q)) 
                              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__err_q) 
                                 | (IData)((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_err 
                                            >> 0x00000020U))))) 
                          | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__rst_storage_error))))));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx9 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                       | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                      << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                   ? 1U : 3U) << 5U) 
                                | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                    | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                   << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx9];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx9];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx9];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx9];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx9];
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                               [2U][0U] >> 0x00000019U) 
                              & (3U == (3U & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_alert_test_fatal_fault_err__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_flop_alert__q_o 
            = (((IData)(vlSelfRef.__PVT__alert_nd) 
                << 1U) | (IData)(vlSelfRef.__PVT__alert_pd));
    } else {
        vlSelfRef.__PVT__state_q = 0U;
        vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 2U;
    }
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__fault_err_req_q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_fault_alert__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000019U) 
                                            & (3U == 
                                               (3U 
                                                & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_alert_test_fatal_fault_err__DOT__we)))))) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx10 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx10];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx10];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx10];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx10];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx10];
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_47.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                               >> 0x00000019U) & (3U 
                                                  == 
                                                  (3U 
                                                   & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_intr_hw_cs_fatal_err__DOT__event_intr_i) 
                                     | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__err_q) 
                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_chk.err_o) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o)))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx11 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx11];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx11];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx11];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx11];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx11];
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_46.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                               >> 0x00000019U) & (3U 
                                                  == 
                                                  (3U 
                                                   & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we))))));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__fatal_alert_o) 
                                     | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__err_q) 
                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_chk.err_o) 
                                           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_reg__DOT__u_prim_reg_we_check.__PVT__u_prim_onehot_check__DOT__err_o)))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx12 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx12];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx12];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx12];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx12];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx12];
}

void Vsim_prim_alert_sender__I1___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    vlSelfRef.__PVT__alert_set_d = (((0U != (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__bus_integ_error)) 
                                     | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_count__DOT__err_q) 
                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_status_readback_error__DOT__de) 
                                           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__sram_alert)))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx13 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx13];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx13];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx13];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx13];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx13];
}

void Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__0(Vsim_prim_alert_sender__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__I1___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_alert_sender_parity__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_55.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U) 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}
