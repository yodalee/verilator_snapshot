// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__4__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__4__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__4__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__4__KET____DOT__u_prim_alert_sender__1\n"); );
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

extern const VlUnpacked<CData/*2:0*/, 512> Vsim__ConstPool__TABLE_hc773ee05_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hd6c4ddd9_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hcc28197f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_hdf28c255_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vsim__ConstPool__TABLE_h2dcb2245_0;

void Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__4__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__4__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
                               >> 4U) & (0x0000001fU 
                                         == (0x0000001fU 
                                             & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_bus_integ_error__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_q) 
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
    vlSelfRef.__PVT__alert_set_d = ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                    & (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
                                    && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                        & (IData)(vlSelfRef.__PVT__alert_req_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_measure_err__DOT__de) 
           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_timeout_err__DOT__de) 
              | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div2_measure_err__DOT__de) 
                 | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div2_timeout_err__DOT__de) 
                    | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div4_measure_err__DOT__de) 
                       | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_io_div4_timeout_err__DOT__de) 
                          | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_main_measure_err__DOT__de) 
                             | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_main_timeout_err__DOT__de) 
                                | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_usb_measure_err__DOT__de) 
                                   | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_shadow_update_err__DOT__de) 
                                      | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_recov_err_code_usb_timeout_err__DOT__de)))))))))));
    vlSelfRef.__PVT__alert_req_trigger = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.alert_test_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__reg_wdata 
                              & (3U == (3U & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_alert_test_fatal_fault__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_req_trigger) 
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

void Vsim_prim_alert_sender___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (1U & (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__sw_ctrl_done) 
                  & (0U != (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__sw_ctrl_err))) 
                 | ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_phy_rsp[1U] 
                     >> 0x00000010U) | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_update_err__DOT__de))));
    vlSelfRef.__PVT__alert_req_trigger = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_req_trigger) 
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

void Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__0\n"); );
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
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                    && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                        & (IData)(vlSelfRef.__PVT__alert_req_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__1(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

void Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                               [2U][0U] >> 0x00000018U) 
                              & (0x0000001fU == (0x0000001fU 
                                                 & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_err__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__0\n"); );
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
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                    && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                        & (IData)(vlSelfRef.__PVT__alert_req_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
    vlSelfRef.__PVT__alert_req_trigger = ((0U != (0x00000fffU 
                                                  & ((vlSymsp->TOP.__VdfgRegularize_he50b618e_0_958[2U] 
                                                      << 3U) 
                                                     | (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_958[1U] 
                                                        >> 0x0000001dU)))) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                               [2U][0U] >> 0x0000001aU) 
                              & (0x0000001fU == (0x0000001fU 
                                                 & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_err__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_req_trigger) 
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

void Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__4__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__4__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__state_d;
        vlSelfRef.__Vcellout__u_prim_flop_alert__q_o 
            = (((IData)(vlSelfRef.__PVT__alert_nd) 
                << 1U) | (IData)(vlSelfRef.__PVT__alert_pd));
    } else {
        vlSelfRef.__PVT__state_q = 0U;
        vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 2U;
    }
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__4__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__4__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                               [2U][0U] >> 0x0000001cU) 
                              & (0x0000001fU == (0x0000001fU 
                                                 & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_err__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_q) 
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
    vlSelfRef.__PVT__alert_set_d = ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                    & (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT____VdfgRegularize_h03522d36_0_2) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__done_core));
    vlSelfRef.__PVT__alert_req_trigger = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_req_trigger) 
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

void Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                               [2U][0U] >> 0x00000019U) 
                              & (3U == (3U & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_alert_test_fatal__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__0\n"); );
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
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                    && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                        & (IData)(vlSelfRef.__PVT__alert_req_trigger)));
}

void Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_dbus_addr_matching_0__DOT__wd 
                               >> 1U) & (0x0000000fU 
                                         == (0x0000000fU 
                                             & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_alert_test_fatal_hw_err__DOT__we))))));
    vlSelfRef.__PVT__alert_req_trigger = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__alert_events__BRA__1__KET__) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_req_trigger) 
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

void Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_dbus_addr_matching_0__DOT__wd 
                               >> 3U) & (0x0000000fU 
                                         == (0x0000000fU 
                                             & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_alert_test_fatal_hw_err__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__1(Vsim_prim_alert_sender* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ecc_error_o) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_prim_buf_alert_minor__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
    vlSelfRef.__PVT__alert_req_trigger = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                          | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_req_trigger) 
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
