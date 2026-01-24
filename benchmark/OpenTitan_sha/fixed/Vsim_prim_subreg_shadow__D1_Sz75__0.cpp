// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_0__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x011cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_0__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.rst_shadowed_ni) {
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_0__2(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = (1U & ((~ (IData)(vlSelfRef.__PVT__staged_reg__DOT__we)) 
                                               | (~ (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd))));
        }
    } else {
        vlSelfRef.__PVT__staged_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_0__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.err_storage = ((1U & (~ (IData)(vlSelfRef.__PVT__shadow_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_q));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_0__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x011cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_0__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_1__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0120U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_1__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0120U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_1__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_2__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0124U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_2__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0124U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_2__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_3__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0128U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_3__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0128U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_3__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_4__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x012cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_4__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x012cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_4__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_5__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0130U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_5__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0130U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_5__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_6__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0134U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_6__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0134U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_6__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_7__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0138U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_7__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0138U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_7__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_8__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x013cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_8__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x013cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_8__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_9__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0140U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_9__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0140U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_9__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_10__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0144U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_10__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_10__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0144U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_10__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_11__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0148U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_11__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_11__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0148U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_11__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_12__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_12__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x014cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_12__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_12__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x014cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_12__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_13__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_13__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0150U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_13__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_13__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0150U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_13__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_14__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_14__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0154U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_14__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_14__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0154U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_14__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_15__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_15__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0158U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_15__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_15__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0158U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_15__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_16__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_16__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x015cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_16__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_16__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x015cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_16__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_17__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0160U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_17__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_17__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0160U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_17__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_18__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_18__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0164U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_18__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_18__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0164U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_18__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_19__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_19__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0168U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_19__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_19__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0168U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_19__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_20__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_20__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x016cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_20__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_20__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x016cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_20__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_21__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_21__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0170U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_21__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_21__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0170U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_21__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_22__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_22__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0174U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_22__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_22__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0174U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_22__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_23__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_23__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0178U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_23__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_23__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0178U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_23__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_24__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_24__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x017cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_24__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_24__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x017cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_24__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_25__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_25__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0180U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_25__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_25__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0180U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_25__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_26__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_26__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0184U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_26__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_26__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0184U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_26__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_27__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_27__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0188U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_27__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_27__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0188U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_27__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_28__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_28__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x018cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_28__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_28__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x018cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_28__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_29__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_29__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0190U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_29__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_29__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0190U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_29__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_30__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_30__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0194U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_30__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_30__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0194U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_30__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_31__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_31__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0198U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_31__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_31__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0198U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_31__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_32__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_32__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x019cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_32__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_32__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x019cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_32__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_33__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_33__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01a0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_33__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_33__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01a0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_33__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_34__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_34__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01a4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_34__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_34__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01a4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_34__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_35__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_35__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01a8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_35__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_35__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01a8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_35__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_36__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_36__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01acU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_36__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_36__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01acU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_36__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_37__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_37__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01b0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_37__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_37__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01b0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_37__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_38__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_38__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01b4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_38__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_38__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01b4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_38__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_39__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_39__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01b8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_39__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_39__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01b8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_39__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_40__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_40__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01bcU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_40__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_40__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01bcU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_40__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_41__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_41__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01c0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_41__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_41__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01c0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_41__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_42__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_42__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01c4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_42__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_42__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01c4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_42__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_43__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_43__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01c8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_43__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_43__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01c8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_43__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_44__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_44__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01ccU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_44__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_44__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01ccU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_44__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_45__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_45__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01d0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_45__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_45__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01d0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_45__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_46__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_46__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01d4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_46__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_46__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01d4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_46__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_47__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_47__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01d8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_47__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_47__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01d8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_47__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_48__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_48__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01dcU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_48__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_48__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01dcU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_48__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_49__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_49__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01e0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_49__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_49__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01e0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_49__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_50__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_50__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01e4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_50__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_50__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01e4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_50__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_51__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_51__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01e8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_51__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_51__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01e8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_51__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_52__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_52__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01ecU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_52__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_52__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01ecU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_52__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_53__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_53__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01f0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_53__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_53__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01f0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_53__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_54__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_54__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01f4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_54__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_54__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01f4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_54__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_55__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_55__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01f8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_55__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_55__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01f8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_55__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_56__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_56__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x01fcU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_56__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_56__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x01fcU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_56__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_57__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_57__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0200U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_57__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_57__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0200U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_57__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_58__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_58__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0204U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_58__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_58__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0204U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_58__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_59__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_59__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0208U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_59__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_59__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0208U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_59__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_60__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_60__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x020cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_60__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_60__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x020cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_60__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_61__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_61__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0210U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_61__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_61__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0210U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_61__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_62__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_62__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0214U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_62__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_62__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0214U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_62__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_63__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_63__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0218U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_63__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_63__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0218U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_63__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_64__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_64__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x021cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_64__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_64__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x021cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____Vcellout__u_alert_regwen_64__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_0__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0444U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_0__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0444U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_0__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_1__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0448U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_1__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0448U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_1__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_2__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x044cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_2__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x044cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_2__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_3__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0450U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_3__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0450U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_3__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_4__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0454U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_4__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0454U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_4__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_5__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0458U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_5__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0458U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_5__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_6__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x045cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_6__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x045cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_regwen_6__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en__0\n"); );
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
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_lock__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_lock__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 1U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_clr_shadowed__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_clr_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04a4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_clr_shadowed__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_clr_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.rst_shadowed_ni) {
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_clr_shadowed__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_clr_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04a4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_clr_regwen__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en__0\n"); );
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
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_lock__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_lock__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 1U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_clr_shadowed__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_clr_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04dcU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_clr_shadowed__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_clr_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.rst_shadowed_ni) {
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_clr_shadowed__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_clr_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04dcU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_clr_regwen__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en__0\n"); );
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
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_lock__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_lock__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 1U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_clr_shadowed__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_clr_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0514U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_clr_shadowed__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_clr_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.rst_shadowed_ni) {
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_clr_shadowed__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_clr_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0514U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_clr_regwen__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en__0\n"); );
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
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_lock__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_lock__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd 
                                                  >> 1U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_clr_shadowed__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_clr_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x054cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_clr_shadowed__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_clr_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.rst_shadowed_ni) {
        if (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_clr_shadowed0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_clr_shadowed__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_clr_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x054cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_clr_regwen__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((IData)(vlSelfRef.re) | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.rst_shadowed_ni) {
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0__2(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = (1U & ((~ (IData)(vlSelfRef.__PVT__staged_reg__DOT__we)) 
                                               | (~ (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd))));
        }
    } else {
        vlSelfRef.__PVT__staged_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.re = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____VdfgBinToOneHot_Tab_hf0ee20c3_0_0
                    [0x016cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h108903ea_0_7));
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____VdfgBinToOneHot_Tab_hf0ee20c3_0_0
                                                 [0x016cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____VdfgRegularize_h108903ea_0_8)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank_cfg_regwen__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][0U] 
                                                  >> 0x00000018U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_1__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.re) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we) 
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_1__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.__PVT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][0U] 
                                                  >> 0x00000019U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_shadowed_ni) {
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 1U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__3(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_shadowed_ni = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed.__Vcellinp__u_rst_mux__sel_i) 
                                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_d0_lc_shadowed__u_rst_sync.q_o));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.re = ((0x1eU == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                 >> 0x0000001eU)))) 
                    & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_39));
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = (((0x1eU 
                                                  == 
                                                  (0x0000003fU 
                                                   & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 0x0000001eU)))) 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____VdfgRegularize_h0938ff7d_0_38)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__q));
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  >> 0x00000019U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kmac_en__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kmac_en__0\n"); );
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
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kmac_en__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kmac_en__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][0U] 
                                                  >> 0x00000018U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_msg_endianness__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_msg_endianness__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                               & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][1U]);
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_state_endianness__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_state_endianness__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][1U] 
                                                  >> 1U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_sideload__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_sideload__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][1U] 
                                                  >> 4U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][1U] 
                                                  >> 0x0000000bU));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_msg_mask__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_msg_mask__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][1U] 
                                                  >> 0x0000000cU));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_ready__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_ready__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][1U] 
                                                  >> 0x00000010U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_en_unsupported_modestrength__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_en_unsupported_modestrength__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][1U] 
                                                  >> 0x00000012U));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_kstrength__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_cdi_sel__0(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_cdi_sel__0\n"); );
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
                                            & (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd));
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_cdi_sel__1(Vsim_prim_subreg_shadow__D1_Sz75* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__D1_Sz75___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_cdi_sel__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__staged_reg__DOT__we = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__wr_en_data_arb__DOT__we) 
                                            & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                               & (~ (IData)(vlSelfRef.err_storage))));
    vlSelfRef.__PVT__committed_reg__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__wr_en_data_arb__DOT__we) 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                  >> 0x0000001fU));
    vlSelfRef.err_update = (((1U & (~ (IData)(vlSelfRef.__PVT__staged_q))) 
                             != (IData)(vlSelfRef.__PVT__committed_reg__DOT__wd)) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}
