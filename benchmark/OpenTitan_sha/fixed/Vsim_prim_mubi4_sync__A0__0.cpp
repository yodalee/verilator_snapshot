// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSelfRef.rst_ni) ? (0x0000000fU 
                                        & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U])
            : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en__1(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div4__DOT____Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div4__DOT__u_rst_sync.q_o));
}

void Vsim_prim_mubi4_sync__A0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk_i = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch) 
                       & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div4_div__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_int));
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__1__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__1__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U])
            : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__5__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__5__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                              >> 4U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__6__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__6__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                              >> 8U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__7__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__7__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                              >> 0x0000000cU)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__8__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__8__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                              >> 0x00000010U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__10__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__10__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                              >> 0x00000014U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__11__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__11__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
                              >> 0x00000018U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__19__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__19__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[0U] 
               >> 0x0000001cU) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__20__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__20__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U])
            : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__21__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__21__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                              >> 4U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__22__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__22__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                              >> 8U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__23__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__23__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                              >> 0x0000000cU)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__27__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__27__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                              >> 0x00000010U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__28__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__28__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                              >> 0x00000014U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__31__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__31__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[1U] 
                              >> 0x00000018U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__34__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__34__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U])
            : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__35__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__35__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                              >> 4U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__40__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__40__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                              >> 8U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__41__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__41__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                              >> 0x0000000cU)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__42__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__42__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                              >> 0x00000010U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__44__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__44__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                              >> 0x00000014U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__45__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__45__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (0x0000000fU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
                              >> 0x00000018U)) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__47__KET____DOT__u_prim_mubi4_sync_lpg_en__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__47__KET____DOT__u_prim_mubi4_sync_lpg_en__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni)
            ? (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__lpg_init_trig[2U] 
               >> 0x0000001cU) : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_ctrl_scanmode_sync__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_ctrl_scanmode_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync.rst_ni)
            ? 1U : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__u_scanmode_sync__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__u_scanmode_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni)
            ? 1U : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSelfRef.rst_ni) ? 1U : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync__1(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div4__DOT____Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_io_div4__DOT__u_rst_sync.q_o));
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync__1(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc__u_rst_sync.q_o));
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans__u_scanmode_sync__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans__u_scanmode_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni)
            ? 1U : 9U);
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_scanmode_sync__1(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_scanmode_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por__u_rst_sync.q_o));
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_root_ctrl__DOT__u_scanmode_sync__1(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_root_ctrl__DOT__u_scanmode_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io__u_rst_sync.q_o));
}

void Vsim_prim_mubi4_sync__A0___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___act_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk_i = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__clk_i) 
                        & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div2_div__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_div2__DOT__step_down_nq)) 
                       | ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div2_div__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_div2__DOT__step_down_nq)) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div2_div__DOT__gen_generic__DOT__u_impl_generic__DOT__gen_div2__DOT__q_p)));
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync__1(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div2__u_rst_sync.q_o));
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync__1(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_io_div4__u_rst_sync.q_o));
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_root_ctrl__DOT__u_scanmode_sync__1(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_root_ctrl__DOT__u_scanmode_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_por_usb__u_rst_sync.q_o));
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync__1(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4.__Vcellinp__u_rst_mux__sel_i) 
                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_sys_io_div4__u_rst_sync.q_o));
}

void Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_mubi4_sync_es_enable_pulse__0(Vsim_prim_mubi4_sync__A0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_mubi4_sync__A0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_mubi4_sync_es_enable_pulse__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_no_flops__DOT__unused_logic 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni)
            ? (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__mubi_module_en_pulse)
            : 9U);
}
