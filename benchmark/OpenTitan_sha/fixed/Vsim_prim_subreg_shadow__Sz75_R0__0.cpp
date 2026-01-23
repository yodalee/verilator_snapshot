// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_timeout_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_timeout_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04b0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_timeout_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_timeout_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.rst_shadowed_ni) {
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 0xffffffffU;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_timeout_cyc_shadowed__2(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_timeout_cyc_shadowed__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = ((IData)(vlSelfRef.__PVT__staged_reg__DOT__we)
                                          ? ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)
                                              ? vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_1693
                                              : 0xffffffffU)
                                          : 0xffffffffU);
        }
    } else {
        vlSelfRef.__PVT__staged_q = 0xffffffffU;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_timeout_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_timeout_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.err_storage = ((~ vlSelfRef.__PVT__shadow_q) 
                             != vlSelfRef.__PVT__committed_q);
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_timeout_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_timeout_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04b0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04b8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__wd = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__19__KET____DOT__dev_select)
                                                 ? 
                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  << 9U) 
                                                 | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                                                    >> 0x00000017U))
                                                 : 0xffffffffU);
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed__2(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04b8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSelfRef.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase1_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase1_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04bcU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase1_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase1_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04bcU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase2_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase2_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04c0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase2_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase2_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04c0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase3_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase3_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04c4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase3_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase3_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04c4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_timeout_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_timeout_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04e8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_timeout_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_timeout_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04e8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase0_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase0_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04f0U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase0_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase0_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04f0U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase1_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase1_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04f4U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase1_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase1_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04f4U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase2_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase2_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04f8U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase2_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase2_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04f8U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase3_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase3_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x04fcU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase3_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase3_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x04fcU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_timeout_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_timeout_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0520U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_timeout_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_timeout_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0520U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase0_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase0_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0528U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase0_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase0_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0528U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase1_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase1_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x052cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase1_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase1_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x052cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase2_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase2_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0530U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase2_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase2_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0530U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase3_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase3_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0534U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase3_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase3_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0534U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_timeout_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_timeout_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0558U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_timeout_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_timeout_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0558U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase0_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase0_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0560U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase0_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase0_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0560U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase1_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase1_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0564U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase1_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase1_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0564U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase2_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase2_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x0568U] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase2_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase2_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x0568U] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase3_cyc_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase3_cyc_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if (((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                     [0x056cU] & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_5)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase3_cyc_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase3_cyc_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgBinToOneHot_Tab_h075f7720_0_0
                                                 [0x056cU] 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT____VdfgRegularize_he66b0b02_0_6)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.__PVT__wr_en_data_arb__DOT__wd;
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_creator_key_ver_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_creator_key_ver_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if ((((0x25U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
                     & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____VdfgRegularize_h2c44af4c_0_69)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_creator_key_ver_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_creator_key_ver_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.rst_shadowed_ni) {
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__shadow_q = vlSelfRef.__PVT__staged_q;
        }
    } else {
        vlSelfRef.__PVT__shadow_q = 0xffffffffU;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_creator_key_ver_shadowed__2(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_creator_key_ver_shadowed__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__staged_reg__DOT__we) {
            vlSelfRef.__PVT__staged_q = ((IData)(vlSelfRef.__PVT__staged_reg__DOT__we)
                                          ? ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)
                                              ? (~ 
                                                 ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                     >> 0x00000018U)))
                                              : 0xffffffffU)
                                          : 0xffffffffU);
        }
    } else {
        vlSelfRef.__PVT__staged_q = 0xffffffffU;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_creator_key_ver_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_creator_key_ver_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = (((0x25U 
                                                  == 
                                                  (0x0000003fU 
                                                   & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 0x0000001eU)))) 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____VdfgRegularize_h2c44af4c_0_68)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_creator_key_ver_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (
                                                   (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000018U));
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_owner_key_ver_shadowed__0(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_owner_key_ver_shadowed__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
             & (~ (IData)(vlSelfRef.err_storage)))) {
            vlSelfRef.__PVT__phase_q = (1U & (~ (IData)(vlSelfRef.__PVT__phase_q)));
        } else if ((((0x29U == (0x0000003fU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                << 2U) 
                                               | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                  >> 0x0000001eU)))) 
                     & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____VdfgRegularize_h2c44af4c_0_69)) 
                    | (IData)(vlSelfRef.err_storage))) {
            vlSelfRef.__PVT__phase_q = 0U;
        }
        if (vlSelfRef.__PVT__committed_reg__DOT__we) {
            vlSelfRef.__PVT__committed_q = ((IData)(vlSelfRef.__PVT__committed_reg__DOT__we)
                                             ? vlSelfRef.__PVT__committed_reg__DOT__wd
                                             : 0U);
        }
    } else {
        vlSelfRef.__PVT__phase_q = 0U;
        vlSelfRef.__PVT__committed_q = 0U;
    }
}

void Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_owner_key_ver_shadowed__1(Vsim_prim_subreg_shadow__Sz75_R0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_prim_subreg_shadow__Sz75_R0___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_owner_key_ver_shadowed__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_en_data_arb__DOT__we = (((0x29U 
                                                  == 
                                                  (0x0000003fU 
                                                   & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 0x0000001eU)))) 
                                                 & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____VdfgRegularize_h2c44af4c_0_68)) 
                                                & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_owner_key_ver_regwen__DOT__q));
    if (vlSelfRef.__PVT__wr_en_data_arb__DOT__we) {
        vlSelfRef.__PVT__staged_reg__DOT__we = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__phase_q)) 
                                                   & (~ (IData)(vlSelfRef.err_storage))));
        vlSelfRef.__PVT__committed_reg__DOT__wd = (
                                                   (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                                                      >> 0x00000018U));
    } else {
        vlSelfRef.__PVT__staged_reg__DOT__we = 0U;
        vlSelfRef.__PVT__committed_reg__DOT__wd = 0U;
    }
    vlSelfRef.err_update = (((~ vlSelfRef.__PVT__staged_q) 
                             != vlSelfRef.__PVT__committed_reg__DOT__wd) 
                            & ((IData)(vlSelfRef.__PVT__phase_q) 
                               & (IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we)));
    vlSelfRef.__PVT__committed_reg__DOT__we = ((IData)(vlSelfRef.__PVT__phase_q) 
                                               & ((IData)(vlSelfRef.__PVT__wr_en_data_arb__DOT__we) 
                                                  & ((~ (IData)(vlSelfRef.err_update)) 
                                                     & (~ (IData)(vlSelfRef.err_storage)))));
}
