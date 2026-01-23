// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
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
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart0.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
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

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart1.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
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

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart2.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
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

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_uart3.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
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

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
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

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
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

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
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

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [2U][0U] 
                                             >> 0x00000018U) 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
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

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [2U][0U] 
                                             >> 0x00000018U) 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
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

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__wd 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_prim_reg_we_check.__PVT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
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

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [2U][0U] 
                                             >> 0x00000018U) 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
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

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_data_ch0_0__DOT__wd 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pattgen__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
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

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1\n"); );
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

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_compare_lower0_0__DOT__wd 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_timer__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
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

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
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
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    vlSelfRef.alert_test_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
                              & (0x0000001fU == (0x0000001fU 
                                                 & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_bus_integ_error__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx14 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx14];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx14];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx14];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx14];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx14];
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
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
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
                               >> 1U) & (0x0000001fU 
                                         == (0x0000001fU 
                                             & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_bus_integ_error__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx15 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx15];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx15];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx15];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx15];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx15];
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__0\n"); );
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
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_bus_integ_error_q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
                               >> 2U) & (0x0000001fU 
                                         == (0x0000001fU 
                                             & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_bus_integ_error__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx16 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx16];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx16];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx16];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx16];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx16];
}

void Vsim_prim_alert_sender__Iz2___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__fsm_err) 
           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__err_q) 
              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.err_o) 
                 | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx17 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx17];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx17];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx17];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx17];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx17];
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__fsm_err) 
           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__err_q) 
              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.err_o) 
                 | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
                               >> 3U) & (0x0000001fU 
                                         == (0x0000001fU 
                                             & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_bus_integ_error__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__3__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx17 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx17];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx17];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx17];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx17];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx17];
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_prim_reg_we_check.__PVT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx18 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx18];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx18];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx18];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx18];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx18];
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
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
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_fault_status_reg_intg_err__q) 
                                     | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_fault_status_esc_timeout__q) 
                                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_fault_status_main_pd_glitch__q))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx19 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx19];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx19];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx19];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx19];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx19];
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_fsm_err__q) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_reg_intg_err__q));
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
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    vlSelfRef.alert_test_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                              & (3U == (3U & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_alert_test_fatal_cnsty_fault__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx20 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx20];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx20];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx20];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx20];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx20];
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
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
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_reset_consistency_err__q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__reg_wdata 
                               >> 1U) & (3U == (3U 
                                                & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT__u_alert_test_fatal_cnsty_fault__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx21 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx21];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx21];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx21];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx21];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx21];
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
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
    vlSelfRef.__PVT__alert_set_d = ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_897)) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__reg_wdata 
                               >> 1U) & (3U == (3U 
                                                & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_reg__DOT__u_alert_test_fatal_fault__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx22 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx22];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx22];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx22];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx22];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx22];
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
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

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_com_det_ctl_0_cdc.src_wd_i 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_prim_reg_we_check.__PVT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx23 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx23];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx23];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx23];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx23];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx23];
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_adc_pd_ctl_cdc__DOT__src_wd_i 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx24 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx24];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx24];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx24];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx24];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx24];
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_cfg_cdc__DOT__src_wd_i 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwm_aon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx25 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx25];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx25];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx25];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx25];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx25];
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx26 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx26];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx26];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx26];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx26];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx26];
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_wdog_count_cdc__DOT__src_wd_i 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    // Body
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aon_timer_aon__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx27 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx27];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx27];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx27];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx27];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx27];
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__0\n"); );
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
    vlSelfRef.__PVT__alert_set_d = (IData)(((0U != 
                                             (0x0003fe00U 
                                              & vlSymsp->TOP.__VdfgRegularize_he50b618e_0_959[2U])) 
                                            | (IData)(vlSelfRef.__PVT__alert_set_q)));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                               [2U][0U] >> 0x00000019U) 
                              & (0x0000001fU == (0x0000001fU 
                                                 & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_err__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx28 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx28];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx28];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx28];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx28];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx28];
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__0\n"); );
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

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__err_q) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_chk.err_o) 
              | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_flash__DOT__gen_generic__DOT__u_impl_generic__DOT__u_reg_top__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o)));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__1(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__3__KET____DOT__u_alert_sender__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                               [2U][0U] >> 0x0000001bU) 
                              & (0x0000001fU == (0x0000001fU 
                                                 & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_alert_test_fatal_err__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx29 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx29];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx29];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx29];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx29];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx29];
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__state_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
                                 ? (IData)(vlSelfRef.__PVT__state_d)
                                 : 0U);
    vlSelfRef.__PVT__alert_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                    && (IData)(vlSelfRef.__PVT__alert_set_d));
    vlSelfRef.__PVT__ping_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                   && ((~ (IData)(vlSelfRef.__PVT__ping_clr)) 
                                       & (IData)(vlSelfRef.__PVT__ping_trigger)));
    vlSelfRef.__PVT__alert_test_set_q = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                         && ((~ (IData)(vlSelfRef.__PVT__alert_clr)) 
                                             & (IData)(vlSelfRef.__PVT__alert_test_trigger)));
}

void Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__u_prim_flop_alert__q_o = 
        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)
          ? (((IData)(vlSelfRef.__PVT__alert_nd) << 1U) 
             | (IData)(vlSelfRef.__PVT__alert_pd)) : 2U);
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_34.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U) 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__err_q) 
                                      | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_chk.err_o) 
                                         | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_reg_regs__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                     | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__gen_cmd_intg_check__DOT__intg_error_q) 
                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.err_o) 
                                           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_sba.err_o)))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx30 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx30];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx30];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx30];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx30];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx30];
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_51.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U) 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_plic__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx31 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx31];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx31];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx31];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx31];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx31];
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    vlSelfRef.__PVT__alert_test_trigger = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_prim_sha2_512__DOT__gen_multimode_logic__DOT__u_prim_sha2_multimode__DOT__wipe_v_i 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__err_q) 
                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_chk.err_o) 
                                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_hmac__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx32 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx32];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx32];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx32];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx32];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx32];
}

void Vsim_prim_alert_sender__Iz2___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    // Body
    vlSelfRef.__PVT__alert_set_d = (IData)(((0U != 
                                             (0xff00U 
                                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__err_bits))) 
                                            | (IData)(vlSelfRef.__PVT__alert_set_q)));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx33 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx33];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx33];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx33];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx33];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx33];
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                               [2U][0U] >> 0x00000018U) 
                              & (3U == (3U & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_alert_test_fatal__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender__Iz2___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    // Body
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_fatal_alert_cause_integrity_error__DOT__de) 
                                     | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_fatal_alert_cause_checker_error__DOT__de)) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx34 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx34];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx34];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx34];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx34];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx34];
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_test_trigger = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_33.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                             >> 0x00000018U) 
                                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_alert_test__DOT__we)) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__0__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    // Body
    vlSelfRef.alert_test_i = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_dbus_addr_matching_0__DOT__wd 
                              & (0x0000000fU == (0x0000000fU 
                                                 & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_alert_test_fatal_hw_err__DOT__we))))));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__alert_events__BRA__0__KET__) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx35 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx35];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx35];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx35];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx35];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx35];
}

void Vsim_prim_alert_sender__Iz2___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_err_status_reg_intg_err__DOT__de) 
           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_err_status_fatal_intg_err__DOT__de) 
              | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_err_status_fatal_core_err__DOT__de)));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__alert_trigger = ((IData)(vlSelfRef.__PVT__alert_set_d) 
                                      | (IData)(vlSelfRef.__PVT__alert_test_trigger));
    __Vtableidx36 = (((((IData)(vlSelf->__PVT__u_decode_ack->__PVT__sigint_o) 
                        | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__sigint_o)) 
                       << 8U) | ((((IData)(vlSelfRef.__PVT__alert_trigger)
                                    ? 1U : 3U) << 5U) 
                                 | (((IData)(vlSelfRef.__PVT__alert_trigger) 
                                     | (IData)(vlSelfRef.__PVT__ping_trigger)) 
                                    << 4U))) | (((IData)(vlSelf->__PVT__u_decode_ack->__PVT__level_d) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.__PVT__state_q)));
    vlSelfRef.__PVT__state_d = Vsim__ConstPool__TABLE_hc773ee05_0
        [__Vtableidx36];
    vlSelfRef.__PVT__alert_pd = Vsim__ConstPool__TABLE_hd6c4ddd9_0
        [__Vtableidx36];
    vlSelfRef.__PVT__alert_nd = Vsim__ConstPool__TABLE_hcc28197f_0
        [__Vtableidx36];
    vlSelfRef.__PVT__ping_clr = Vsim__ConstPool__TABLE_hdf28c255_0
        [__Vtableidx36];
    vlSelfRef.__PVT__alert_clr = Vsim__ConstPool__TABLE_h2dcb2245_0
        [__Vtableidx36];
}

void Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__gen_alert_senders__BRA__2__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alert_test_i = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_dbus_addr_matching_0__DOT__wd 
                               >> 2U) & (0x0000000fU 
                                         == (0x0000000fU 
                                             & (- (IData)((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT__u_alert_test_fatal_hw_err__DOT__we))))));
    vlSelfRef.__PVT__alert_test_trigger = ((IData)(vlSelfRef.alert_test_i) 
                                           | (IData)(vlSelfRef.__PVT__alert_test_set_q));
}
