// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e0__0(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__re) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e0__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.rst_shadowed_ni) {
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e0__2(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = (1U & ((~ (IData)(vlSelfRef.__PVT__staged_reg__DOT__we)) 
                                               | (~ (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd))));
        }
    } else {
        vlSelfRef.__PVT__staged_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e0__0(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.err_storage = ((1U & (~ (IData)(vlSelfRef.__PVT__shadow_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_q));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e0__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 2U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e1__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 3U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e2__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 4U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e3__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 5U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e0__0(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__re) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e0__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 2U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e1__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 3U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e2__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 4U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e3__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 5U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e0__0(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__re) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e0__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 2U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e1__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 3U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e2__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 4U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e3__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 5U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e0__0(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__re) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e0__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 2U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e1__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 3U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e2__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 4U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e3__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 5U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__0(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.re) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.rst_shadowed_ni) {
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__2(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = (1U & ((~ (IData)(vlSelfRef.__PVT__staged_reg__DOT__we)) 
                                               | (~ (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd))));
        }
    } else {
        vlSelfRef.__PVT__staged_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__1(Vsim_prim_subreg_shadow__pi124* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi124___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.__PVT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  >> 0x00000018U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}
