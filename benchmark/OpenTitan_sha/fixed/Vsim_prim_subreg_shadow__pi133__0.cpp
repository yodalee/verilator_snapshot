// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0220U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_shadowed_ni) {
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 3U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__2(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = ((IData)(vlSelfRef.__PVT__staged_reg__DOT__we)
                                          ? ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)
                                              ? (3U 
                                                 & (~ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd))
                                              : 3U)
                                          : 3U);
        }
    } else {
        vlSelfRef.__PVT__staged_q = 3U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.err_storage = ((3U & (~ (IData)(vlSelfRef.__PVT__shadow_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_q));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__3(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_shadowed_ni = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div4_shadowed__DOT____Vcellinp__u_rst_mux__sel_i) 
                                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_io_div4_shadowed__DOT__u_rst_sync.q_o));
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0220U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_0__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_1__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0224U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_1__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.rst_shadowed_ni) {
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 3U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_1__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0224U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_1__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_2__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0228U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_2__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0228U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_2__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_3__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x022cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_3__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x022cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_3__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_4__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0230U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_4__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0230U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_4__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_5__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0234U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_5__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0234U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_5__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_6__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0238U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_6__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0238U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_6__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_7__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x023cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_7__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x023cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_7__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_8__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0240U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_8__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0240U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_8__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_9__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0244U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_9__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0244U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_9__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_10__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0248U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_10__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_10__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0248U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_10__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_11__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x024cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_11__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_11__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x024cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_11__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_12__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_12__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0250U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_12__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_12__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0250U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_12__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_13__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_13__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0254U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_13__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_13__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0254U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_13__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_14__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_14__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0258U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_14__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_14__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0258U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_14__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_15__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_15__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x025cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_15__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_15__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x025cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_15__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_16__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_16__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0260U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_16__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_16__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0260U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_16__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_17__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0264U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_17__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_17__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0264U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_17__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_18__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_18__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0268U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_18__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_18__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0268U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_18__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_19__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_19__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x026cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_19__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_19__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x026cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_19__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_20__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_20__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0270U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_20__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_20__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0270U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_20__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_21__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_21__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0274U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_21__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_21__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0274U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_21__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_22__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_22__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0278U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_22__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_22__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0278U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_22__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_23__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_23__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x027cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_23__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_23__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x027cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_23__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_24__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_24__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0280U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_24__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_24__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0280U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_24__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_25__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_25__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0284U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_25__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_25__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0284U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_25__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_26__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_26__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0288U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_26__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_26__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0288U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_26__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_27__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_27__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x028cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_27__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_27__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x028cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_27__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_28__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_28__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0290U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_28__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_28__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0290U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_28__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_29__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_29__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0294U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_29__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_29__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0294U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_29__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_30__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_30__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0298U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_30__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_30__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0298U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_30__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_31__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_31__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x029cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_31__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_31__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x029cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_31__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_32__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_32__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02a0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_32__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_32__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02a0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_32__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_33__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_33__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02a4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_33__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_33__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02a4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_33__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_34__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_34__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02a8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_34__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_34__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02a8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_34__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_35__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_35__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02acU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_35__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_35__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02acU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_35__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_36__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_36__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02b0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_36__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_36__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02b0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_36__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_37__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_37__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02b4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_37__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_37__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02b4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_37__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_38__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_38__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02b8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_38__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_38__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02b8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_38__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_39__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_39__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02bcU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_39__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_39__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02bcU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_39__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_40__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_40__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02c0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_40__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_40__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02c0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_40__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_41__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_41__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02c4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_41__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_41__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02c4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_41__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_42__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_42__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02c8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_42__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_42__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02c8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_42__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_43__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_43__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02ccU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_43__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_43__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02ccU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_43__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_44__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_44__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02d0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_44__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_44__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02d0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_44__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_45__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_45__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02d4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_45__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_45__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02d4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_45__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_46__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_46__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02d8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_46__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_46__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02d8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_46__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_47__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_47__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02dcU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_47__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_47__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02dcU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_47__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_48__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_48__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02e0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_48__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_48__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02e0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_48__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_49__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_49__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02e4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_49__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_49__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02e4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_49__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_50__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_50__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02e8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_50__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_50__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02e8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_50__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_51__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_51__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02ecU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_51__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_51__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02ecU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_51__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_52__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_52__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02f0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_52__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_52__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02f0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_52__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_53__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_53__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02f4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_53__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_53__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02f4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_53__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_54__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_54__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02f8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_54__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_54__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02f8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_54__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_55__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_55__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x02fcU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_55__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_55__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x02fcU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_55__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_56__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_56__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0300U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_56__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_56__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0300U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_56__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_57__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_57__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0304U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_57__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_57__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0304U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_57__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_58__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_58__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0308U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_58__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_58__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0308U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_58__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_59__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_59__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x030cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_59__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_59__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x030cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_59__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_60__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_60__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0310U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_60__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_60__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0310U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_60__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_61__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_61__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0314U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_61__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_61__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0314U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_61__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_62__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_62__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0318U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_62__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_62__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0318U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_62__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_63__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_63__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x031cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_63__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_63__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x031cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_63__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_64__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_64__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0320U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_64__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_64__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0320U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_64__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_0__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0460U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_0__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0460U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_0__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_1__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0464U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_1__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0464U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_1__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_2__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0468U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_2__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0468U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_2__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_3__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x046cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_3__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x046cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_3__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_4__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0470U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_4__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0470U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_4__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_5__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0474U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_5__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0474U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_5__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_6__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0478U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_6__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0478U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_6__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e0__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e0__0\n"); );
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
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e0__2(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = ((IData)(vlSelfRef.__PVT__staged_reg__DOT__we)
                                          ? ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)
                                              ? (3U 
                                                 & (~ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                     >> 6U)))
                                              : 3U)
                                          : 3U);
        }
    } else {
        vlSelfRef.__PVT__staged_q = 3U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e0__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                      >> 6U));
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_crashdump_trigger_shadowed__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_crashdump_trigger_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04b4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_crashdump_trigger_shadowed__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_crashdump_trigger_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04b4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e0__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e0__0\n"); );
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
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e0__2(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = ((IData)(vlSelfRef.__PVT__staged_reg__DOT__we)
                                          ? ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)
                                              ? (3U 
                                                 & (~ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                     >> 6U)))
                                              : 3U)
                                          : 3U);
        }
    } else {
        vlSelfRef.__PVT__staged_q = 3U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e0__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                      >> 6U));
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_crashdump_trigger_shadowed__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_crashdump_trigger_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04ecU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_crashdump_trigger_shadowed__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_crashdump_trigger_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04ecU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e0__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e0__0\n"); );
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
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e0__2(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = ((IData)(vlSelfRef.__PVT__staged_reg__DOT__we)
                                          ? ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)
                                              ? (3U 
                                                 & (~ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                     >> 6U)))
                                              : 3U)
                                          : 3U);
        }
    } else {
        vlSelfRef.__PVT__staged_q = 3U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e0__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                      >> 6U));
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_crashdump_trigger_shadowed__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_crashdump_trigger_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0524U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_crashdump_trigger_shadowed__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_crashdump_trigger_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0524U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e0__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e0__0\n"); );
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
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e0__2(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = ((IData)(vlSelfRef.__PVT__staged_reg__DOT__we)
                                          ? ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)
                                              ? (3U 
                                                 & (~ 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                     >> 6U)))
                                              : 3U)
                                          : 3U);
        }
    } else {
        vlSelfRef.__PVT__staged_q = 3U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e0__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                      >> 6U));
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_crashdump_trigger_shadowed__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_crashdump_trigger_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x055cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_crashdump_trigger_shadowed__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_crashdump_trigger_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x055cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_mode__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_mode__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__re) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_mode__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_mode__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.rst_shadowed_ni) {
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 3U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_mode__2(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_mode__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = ((IData)(vlSelfRef.__PVT__staged_reg__DOT__we)
                                          ? ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)
                                              ? (3U 
                                                 & (~ 
                                                    ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [2U][0U] 
                                                      << 4U) 
                                                     | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][0U] 
                                                        >> 0x0000001cU))))
                                              : 3U)
                                          : 3U);
        }
    } else {
        vlSelfRef.__PVT__staged_q = 3U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_mode__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_mode__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [2U][0U] 
                                                      >> 0x0000001cU));
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode__2(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = ((IData)(vlSelfRef.__PVT__staged_reg__DOT__we)
                                          ? ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)
                                              ? (3U 
                                                 & (~ 
                                                    ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [2U][1U] 
                                                      << 0x00000018U) 
                                                     | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 8U))))
                                              : 3U)
                                          : 3U);
        }
    } else {
        vlSelfRef.__PVT__staged_q = 3U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [2U][1U] 
                                                      >> 8U));
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_dest_sel__0(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_dest_sel__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__re) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_dest_sel__2(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_dest_sel__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = ((IData)(vlSelfRef.__PVT__staged_reg__DOT__we)
                                          ? ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__wr_en_data_arb__DOT__we)
                                              ? (3U 
                                                 & (~ 
                                                    ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      << 0x0000001cU) 
                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 4U))))
                                              : 3U)
                                          : 3U);
        }
    } else {
        vlSelfRef.__PVT__staged_q = 3U;
    }
}

void Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_dest_sel__1(Vsim_prim_subreg_shadow__pi133* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__pi133___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_dest_sel__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (3U 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 4U));
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((3U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}
