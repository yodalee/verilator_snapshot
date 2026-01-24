// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___nba_comb__TOP__96(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__96\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__108__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank_cfg_regwen__DOT__we) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.__PVT__wr_en_data_arb__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__108__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_bank_cfg_regwen__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.__PVT__wr_en_data_arb__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_update_err__DOT__de 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.err_update) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_1.err_update));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__53__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__107__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__108__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__107__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__108__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__107__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__108__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_update_err__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_update_err__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_macro_err__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_update_err__DOT__wr_data 
        = ((~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_socket__tl_d_o
                [2U][0U] >> 0x0000001eU) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_macro_err__DOT__we))) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_update_err__DOT__de) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_err_code_update_err__DOT__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__53__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__54__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__53__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__54__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__25__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__26__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__26__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__12__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__2__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__5__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__13__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__));
}

void Vsim___024root___nba_comb__TOP__97(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__97\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timer_en_shadowed__DOT__err_storage 
        = ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timer_en_shadowed__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timer_en_shadowed__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timeout_cyc_shadowed__DOT__err_storage 
        = ((0x0000ffffU & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timeout_cyc_shadowed__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timeout_cyc_shadowed__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e2__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e2__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e2__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e3__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e3__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e3__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_accum_thresh_shadowed__DOT__err_storage 
        = ((0x0000ffffU & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_accum_thresh_shadowed__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_accum_thresh_shadowed__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e2__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e2__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e2__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e3__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e3__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e3__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_accum_thresh_shadowed__DOT__err_storage 
        = ((0x0000ffffU & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_accum_thresh_shadowed__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_accum_thresh_shadowed__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e2__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e2__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e2__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e3__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e3__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e3__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_accum_thresh_shadowed__DOT__err_storage 
        = ((0x0000ffffU & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_accum_thresh_shadowed__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_accum_thresh_shadowed__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e2__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e2__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e2__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e3__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e3__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e3__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_accum_thresh_shadowed__DOT__err_storage 
        = ((0x0000ffffU & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_accum_thresh_shadowed__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_accum_thresh_shadowed__DOT__committed_q));
}

void Vsim___024root___nba_comb__TOP__98(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__98\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__271__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__271__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__271__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__271__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__271__payload;
    __Vfunc_extract_d2h_rsp_intg__271__payload = 0;
    CData/*31:0*/ __Vdeeptemp_h171001ef__0;
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_889 = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o));
    __Vdeeptemp_h171001ef__0 = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_30.err_storage) 
                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_31.err_storage) 
                                   | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_32.err_storage) 
                                      | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_33.err_storage) 
                                         | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_34.err_storage) 
                                            | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_35.err_storage) 
                                               | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_36.err_storage) 
                                                  | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_37.err_storage) 
                                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_38.err_storage) 
                                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_39.err_storage) 
                                                           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_40.err_storage) 
                                                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_41.err_storage) 
                                                                 | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_42.err_storage) 
                                                                    | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_43.err_storage) 
                                                                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_44.err_storage) 
                                                                          | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_45.err_storage) 
                                                                             | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_46.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_47.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_48.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_49.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_50.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_51.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_52.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_53.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_54.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_55.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_56.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_57.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_58.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_59.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_60.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_61.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_62.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_63.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_64.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_0.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_1.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_2.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_3.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_4.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_5.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_en_shadowed_6.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_0.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_1.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_2.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_3.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_4.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_5.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_loc_alert_class_shadowed_6.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_lock.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e0.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e1.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e2.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_en_e3.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e0.err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e1__DOT__err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e2__DOT__err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_ctrl_shadowed_map_e3__DOT__err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_clr_shadowed.err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_accum_thresh_shadowed__DOT__err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_crashdump_trigger_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_timeout_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase0_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase1_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase2_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classa_phase3_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_lock.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e0.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e1.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e2.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_en_e3.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e0.err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e1__DOT__err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e2__DOT__err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_ctrl_shadowed_map_e3__DOT__err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_clr_shadowed.err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_accum_thresh_shadowed__DOT__err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_timeout_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_crashdump_trigger_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase0_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase1_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase2_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classb_phase3_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_lock.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e0.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e1.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e2.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_en_e3.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e0.err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e1__DOT__err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e2__DOT__err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_ctrl_shadowed_map_e3__DOT__err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_clr_shadowed.err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_accum_thresh_shadowed__DOT__err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_timeout_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_crashdump_trigger_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase0_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase1_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase2_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classc_phase3_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_lock.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e0.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e1.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e2.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_en_e3.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e0.err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e1__DOT__err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e2__DOT__err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_ctrl_shadowed_map_e3__DOT__err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_clr_shadowed.err_storage) 
                                                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_accum_thresh_shadowed__DOT__err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_timeout_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_crashdump_trigger_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase0_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase1_cyc_shadowed.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase2_cyc_shadowed.err_storage) 
                                                                                | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_classd_phase3_cyc_shadowed.err_storage)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__shadowed_storage_err_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timeout_cyc_shadowed__DOT__err_storage) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_ping_timer_en_shadowed__DOT__err_storage) 
              | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_0.err_storage) 
                  | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_1.err_storage) 
                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_2.err_storage) 
                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_3.err_storage) 
                           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_4.err_storage) 
                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_5.err_storage) 
                                 | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_6.err_storage) 
                                    | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_7.err_storage) 
                                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_8.err_storage) 
                                          | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_9.err_storage) 
                                             | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_10.err_storage) 
                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_11.err_storage) 
                                                   | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_12.err_storage) 
                                                      | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_13.err_storage) 
                                                         | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_14.err_storage) 
                                                            | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_15.err_storage) 
                                                               | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_16.err_storage) 
                                                                  | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_17.err_storage) 
                                                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_18.err_storage) 
                                                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_19.err_storage) 
                                                                           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_20.err_storage) 
                                                                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_21.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_22.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_23.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_24.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_25.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_26.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_27.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_28.err_storage) 
                                                                                | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_29.err_storage)))))))))))))))))))))))))))))) 
                 | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_30.err_storage) 
                    | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_31.err_storage) 
                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_32.err_storage) 
                           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_33.err_storage) 
                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_34.err_storage) 
                                 | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_35.err_storage) 
                                    | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_36.err_storage) 
                                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_37.err_storage) 
                                          | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_38.err_storage) 
                                             | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_39.err_storage) 
                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_40.err_storage) 
                                                   | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_41.err_storage) 
                                                      | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_42.err_storage) 
                                                         | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_43.err_storage) 
                                                            | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_44.err_storage) 
                                                               | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_45.err_storage) 
                                                                  | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_46.err_storage) 
                                                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_47.err_storage) 
                                                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_48.err_storage) 
                                                                           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_49.err_storage) 
                                                                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_50.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_51.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_52.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_53.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_54.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_55.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_56.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_57.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_58.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_59.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_60.err_storage) 
                                                                                | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_61.err_storage))))))))))))))))))))))))))))))) 
                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_62.err_storage) 
                          | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_63.err_storage) 
                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_en_shadowed_64.err_storage) 
                                 | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.err_storage) 
                                    | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_1.err_storage) 
                                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_2.err_storage) 
                                          | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_3.err_storage) 
                                             | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_4.err_storage) 
                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_5.err_storage) 
                                                   | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_6.err_storage) 
                                                      | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_7.err_storage) 
                                                         | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_8.err_storage) 
                                                            | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_9.err_storage) 
                                                               | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_10.err_storage) 
                                                                  | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_11.err_storage) 
                                                                     | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_12.err_storage) 
                                                                        | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_13.err_storage) 
                                                                           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_14.err_storage) 
                                                                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_15.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_16.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_17.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_18.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_19.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_20.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_21.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_22.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_23.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_24.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_25.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_26.err_storage) 
                                                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_27.err_storage) 
                                                                                | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_28.err_storage))))))))))))))))))))))))))))))) 
                             | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_29.err_storage) 
                                | __Vdeeptemp_h171001ef__0))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1150[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_889))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1150[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1150[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_889))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1150[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1150[1U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1150[2U] 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1150[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1150[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1150[2U]);
    __Vfunc_extract_d2h_rsp_intg__271__tl[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__271__tl[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__271__tl[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__271__payload = ((0x00000038U 
                                                   & ((__Vfunc_extract_d2h_rsp_intg__271__tl[2U] 
                                                       << 5U) 
                                                      | (0x00000018U 
                                                         & (__Vfunc_extract_d2h_rsp_intg__271__tl[1U] 
                                                            >> 0x0000001bU)))) 
                                                  | ((6U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__271__tl[1U] 
                                                         >> 0x00000018U)) 
                                                     | (1U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__271__tl[0U] 
                                                           >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__271__Vfuncout = __Vfunc_extract_d2h_rsp_intg__271__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__271__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1149 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_889)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000013U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000013U][0U]) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1149));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000013U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h
            [0x00000013U][0U]) | ((IData)((0x0003ffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000013U][1U] 
        = (((IData)((0x0003ffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                               << 0x00000030U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                  << 0x00000010U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                    >> 0x00000010U))))) 
            >> 0x00000010U) | ((IData)(((0x0003ffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                                             << 0x00000030U) 
                                            | (((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                << 0x00000010U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                  >> 0x00000010U)))) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__tl_s1n_28_ds_d2h[0x00000013U][2U] 
        = (3U & ((IData)(((0x0003ffffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U])) 
                             << 0x00000030U) | (((QData)((IData)(
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U])) 
                                                   >> 0x00000010U)))) 
                          >> 0x00000020U)) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000013U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000013U][0U]) | ((0x0000fffeU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1149)) 
                                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__19__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000013U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000013U][0U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000013U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000013U][1U]) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q))
                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q
                                    : 0U) >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000013U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000013U][1U]) | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1150[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000013U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000013U][2U]) | (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1150[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i[0x00000013U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__tl_u_i
            [0x00000013U][2U]) | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                        << 1U)));
}

void Vsim___024root___nba_comb__TOP__99(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__99\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__269__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__269__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__269__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__269__tl);
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[0U] 
        = (IData)((0x0f00000000048001ULL | ((QData)((IData)(
                                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                            << 0x00000018U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[1U]) 
           | (IData)(((0x0f00000000048001ULL | ((QData)((IData)(
                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U])) 
                                                << 0x00000018U)) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[1U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__g_multiple_reqs__DOT__source_q)) 
                        << 0x0000001eU) | (QData)((IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                           >> 2U))))) 
              << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[2U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__g_multiple_reqs__DOT__source_q)) 
                      << 0x0000001eU) | (QData)((IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                         >> 2U))))) 
            >> 2U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__g_multiple_reqs__DOT__source_q)) 
                                 << 0x0000001eU) | (QData)((IData)(
                                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                                    >> 2U)))) 
                               >> 0x00000020U)) << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[3U] 
        = ((0x00001ff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[3U]) 
           | (0x00001fffU & ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__g_multiple_reqs__DOT__source_q)) 
                                        << 0x0000001eU) 
                                       | (QData)((IData)(
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U] 
                                                          >> 2U)))) 
                                      >> 0x00000020U)) 
                             >> 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[3U] 
        = ((0x0000000fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[3U]) 
           | (0x00001ff0U & (0x00000020U | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__req_i) 
                                             << 0x0000000cU) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[1U]))
                                                 ? 0U
                                                 : 4U) 
                                               << 9U)))));
    __Vfunc_extract_h2d_cmd_intg__269__tl[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__269__tl[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__269__tl[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__269__tl[3U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__269__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 12130036982276930406ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__269__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__269__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__269__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__269__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__269__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__269__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__269__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__269__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__269__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__269__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__269__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__cmd 
        = __Vfunc_extract_h2d_cmd_intg__269__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__u_cmd_gen__DOT__data_o 
        = (((QData)((IData)(((((2U & (VL_REDXOR_64(
                                                   (0x000005a769a46910ULL 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__cmd)) 
                                      << 1U)) | (1U 
                                                 & (~ 
                                                    VL_REDXOR_64(
                                                                 (0x00000356d5525488ULL 
                                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__cmd))))) 
                              << 2U) | ((2U & (VL_REDXOR_64(
                                                            (0x000006cdb2c93244ULL 
                                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__cmd)) 
                                               << 1U)) 
                                        | (1U & (~ 
                                                 VL_REDXOR_64(
                                                              (0x0000063b8e388e22ULL 
                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__cmd)))))))) 
            << 0x0000003cU) | (((QData)((IData)((1U 
                                                 & VL_REDXOR_64(
                                                                (0x000001f87e0781e1ULL 
                                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__cmd))))) 
                                << 0x0000003bU) | (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        VL_REDXOR_64(
                                                                                (0x000007f801ff801fULL 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__cmd)))))) 
                                                    << 0x0000003aU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & VL_REDXOR_64(
                                                                                (0x000007f800007fffULL 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__cmd))))) 
                                                       << 0x00000039U) 
                                                      | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__cmd))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[0U] 
        = (0x00048001U | ((0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[0U]) 
                          | ((0x00007f00U & ((IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__u_cmd_gen__DOT__data_o 
                                                      >> 0x00000039U)) 
                                             << 8U)) 
                             | (0x000000feU & ((IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__gen_data_intg__DOT__u_data_gen__DOT__data_o 
                                                        >> 0x00000020U)) 
                                               << 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[0U] 
        = ((0x00ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[0U]) 
           | (0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[0U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[1U] 
        = ((0x00ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[1U]) 
           | (0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[2U] 
        = ((0x00ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[2U]) 
           | (0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
        = (0x00001fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_tap_tlul_host__DOT__u_cmd_intg_gen__DOT__tl_i[3U]);
}

void Vsim___024root___nba_comb__TOP__100(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__100\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_3 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
            >> 2U) & (7U == (7U & (- (IData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_4 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
            >> 1U) & (7U == (7U & (- (IData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____VdfgRegularize_h6ec6ab18_0_5 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__gen_tap_tlul__DOT__u_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__data_q[0U] 
           & (7U == (7U & (- (IData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.__PVT__u_alert_test_fatal_bus_integ_error__DOT__we))))));
}

void Vsim___024root___nba_sequent__TOP__204(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__204\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__staged_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__staged_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__staged_reg__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__staged_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__staged_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__staged_reg__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__staged_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__staged_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__staged_reg__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__staged_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__staged_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__staged_reg__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__staged_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__staged_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__staged_reg__DOT__wr_data;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__staged_reg__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__staged_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__staged_reg__DOT__wr_data;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__staged_q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__staged_q = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__staged_q = 2U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__staged_q = 0x1fU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__staged_q = 6U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__staged_q = 6U;
    }
}

void Vsim___024root___nba_comb__TOP__101(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__101\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__1169__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__1169__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__1169__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__1169__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__1169__payload;
    __Vfunc_extract_d2h_rsp_intg__1169__payload = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__err_storage 
        = ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__err_storage 
        = ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__err_storage 
        = ((3U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__err_storage 
        = ((0x0000003fU & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__err_storage 
        = ((7U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__err_storage 
        = ((7U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__shadow_q))) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__committed_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_388 = (1U 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__rst_done) 
                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__shadow_rst_done))) 
                                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_979 = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_388))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1173[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_979))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1173[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1173[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_979))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1173[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1173[1U]) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1173[2U] 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1173[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1173[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1173[2U]);
    __Vfunc_extract_d2h_rsp_intg__1169__tl[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__1169__tl[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__1169__tl[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__1169__payload = (
                                                   (0x00000038U 
                                                    & ((__Vfunc_extract_d2h_rsp_intg__1169__tl[2U] 
                                                        << 5U) 
                                                       | (0x00000018U 
                                                          & (__Vfunc_extract_d2h_rsp_intg__1169__tl[1U] 
                                                             >> 0x0000001bU)))) 
                                                   | ((6U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__1169__tl[1U] 
                                                          >> 0x00000018U)) 
                                                      | (1U 
                                                         & (__Vfunc_extract_d2h_rsp_intg__1169__tl[0U] 
                                                            >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__1169__Vfuncout = __Vfunc_extract_d2h_rsp_intg__1169__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__1169__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1272 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_979)))));
}

void Vsim___024root___nba_comb__TOP__102(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__102\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage_d 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__err_storage) 
            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__err_storage) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__err_storage) 
                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__err_storage) 
                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__err_storage) 
                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__err_storage)))))) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.err_storage) 
              | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed.err_storage)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage_d) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__cfg_valid 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____VdfgRegularize_hdf41bb1a_0_0));
}

void Vsim___024root___nba_comb__TOP__103(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__103\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__empty_rclk) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__storage
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__storage
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__storage
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__storage
            [0U][3U];
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1188[0U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
            << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__rspfifo__DOT__wdepth_o))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1188[1U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[0U] 
            >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1188[2U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[1U] 
            >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U] 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1188[3U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[2U] 
            >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__rdata_o[3U] 
                               << 1U));
}

void Vsim___024root___nba_comb__TOP__104(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__104\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__empty_rclk) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__storage
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__storage
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__storage
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__storage
            [0U][3U];
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1189[0U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
            << 1U) | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__rspfifo__DOT__wdepth_o))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1189[1U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[0U] 
            >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1189[2U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[1U] 
            >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U] 
                               << 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1189[3U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[2U] 
            >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__rdata_o[3U] 
                               << 1U));
}

void Vsim___024root___nba_comb__TOP__105(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__105\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__wdepth_o)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_no_stubbed_memory__DOT__u_tlul2sram__DOT__u_reqfifo__DOT__rready_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__rspfifo__DOT__wdepth_o)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i));
}

void Vsim___024root___nba_comb__TOP__106(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__106\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__empty_rclk) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__storage
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__storage
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__storage
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__storage
            [0U][3U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__addr_hit 
        = (((QData)((IData)(((((((0x002aU == (0x000003ffU 
                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                  << 3U) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                    >> 0x0000001dU)))) 
                                 << 5U) | (((0x0029U 
                                             == (0x000003ffU 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                     << 3U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                       >> 0x0000001dU)))) 
                                            << 4U) 
                                           | ((0x0028U 
                                               == (0x000003ffU 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 0x0000001dU)))) 
                                              << 3U))) 
                               | (((0x0027U == (0x000003ffU 
                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                    << 3U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 0x0000001dU)))) 
                                   << 2U) | (((0x0026U 
                                               == (0x000003ffU 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 3U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                         >> 0x0000001dU)))) 
                                              << 1U) 
                                             | (0x0025U 
                                                == 
                                                (0x000003ffU 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                     << 3U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                       >> 0x0000001dU))))))) 
                              << 5U) | ((((0x0024U 
                                           == (0x000003ffU 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                   << 3U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                     >> 0x0000001dU)))) 
                                          << 4U) | 
                                         (((0x0023U 
                                            == (0x000003ffU 
                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                    << 3U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 0x0000001dU)))) 
                                           << 3U) | 
                                          ((0x0022U 
                                            == (0x000003ffU 
                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                    << 3U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      >> 0x0000001dU)))) 
                                           << 2U))) 
                                        | (((0x0021U 
                                             == (0x000003ffU 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                     << 3U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                       >> 0x0000001dU)))) 
                                            << 1U) 
                                           | (0x0020U 
                                              == (0x000003ffU 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                      << 3U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x0000001dU))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   ((((0x001fU 
                                                       == 
                                                       (0x000003ffU 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 3U) 
                                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001dU)))) 
                                                      << 3U) 
                                                     | ((0x001eU 
                                                         == 
                                                         (0x000003ffU 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 3U) 
                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001dU)))) 
                                                        << 2U)) 
                                                    | (((0x001dU 
                                                         == 
                                                         (0x000003ffU 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 3U) 
                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001dU)))) 
                                                        << 1U) 
                                                       | (0x001cU 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 3U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001dU)))))) 
                                                   << 0x0000000cU) 
                                                  | (((((0x001bU 
                                                         == 
                                                         (0x000003ffU 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 3U) 
                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001dU)))) 
                                                        << 3U) 
                                                       | ((0x001aU 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                << 3U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  >> 0x0000001dU)))) 
                                                          << 2U)) 
                                                      | (((0x0019U 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                << 3U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  >> 0x0000001dU)))) 
                                                          << 1U) 
                                                         | (0x0018U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 3U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001dU)))))) 
                                                     << 8U)) 
                                                 | ((((((0x0017U 
                                                         == 
                                                         (0x000003ffU 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                              << 3U) 
                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001dU)))) 
                                                        << 3U) 
                                                       | ((0x0016U 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                << 3U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  >> 0x0000001dU)))) 
                                                          << 2U)) 
                                                      | (((0x0015U 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                << 3U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  >> 0x0000001dU)))) 
                                                          << 1U) 
                                                         | (0x0014U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 3U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001dU)))))) 
                                                     << 4U) 
                                                    | ((((0x0013U 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 3U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001dU)))) 
                                                         << 3U) 
                                                        | ((0x0012U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 3U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001dU)))) 
                                                           << 2U)) 
                                                       | (((0x0011U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 3U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001dU)))) 
                                                           << 1U) 
                                                          | (0x0010U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    >> 0x0000001dU)))))))) 
                                                << 0x00000010U) 
                                               | (((((((0x000fU 
                                                        == 
                                                        (0x000003ffU 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                             << 3U) 
                                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001dU)))) 
                                                       << 3U) 
                                                      | ((0x000eU 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 3U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001dU)))) 
                                                         << 2U)) 
                                                     | (((0x000dU 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 3U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001dU)))) 
                                                         << 1U) 
                                                        | (0x000cU 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                << 3U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  >> 0x0000001dU)))))) 
                                                    << 0x0000000cU) 
                                                   | (((((0x000bU 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 3U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001dU)))) 
                                                         << 3U) 
                                                        | ((0x000aU 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 3U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001dU)))) 
                                                           << 2U)) 
                                                       | (((9U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 3U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001dU)))) 
                                                           << 1U) 
                                                          | (8U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    >> 0x0000001dU)))))) 
                                                      << 8U)) 
                                                  | ((((((7U 
                                                          == 
                                                          (0x000003ffU 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                               << 3U) 
                                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001dU)))) 
                                                         << 3U) 
                                                        | ((6U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 3U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001dU)))) 
                                                           << 2U)) 
                                                       | (((5U 
                                                            == 
                                                            (0x000003ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                 << 3U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x0000001dU)))) 
                                                           << 1U) 
                                                          | (4U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    >> 0x0000001dU)))))) 
                                                      << 4U) 
                                                     | ((((3U 
                                                           == 
                                                           (0x000003ffU 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                << 3U) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                  >> 0x0000001dU)))) 
                                                          << 3U) 
                                                         | ((2U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    >> 0x0000001dU)))) 
                                                            << 2U)) 
                                                        | (((1U 
                                                             == 
                                                             (0x000003ffU 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    >> 0x0000001dU)))) 
                                                            << 1U) 
                                                           | (0U 
                                                              == 
                                                              (0x000003ffU 
                                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                     >> 0x0000001dU))))))))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_63 = ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] 
                                                      >> 8U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[3U] 
                                                        >> 8U))));
    if ((1U & (~ VL_ONEHOT_Q(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__addr_hit)))) {
        if ((0ULL != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__addr_hit)) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: usbdev_reg_top.sv:9432: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_usbdev.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/usbdev_reg_top.sv", 9432, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__addr_hit 
                                            >> 0x00000024U))))))) {
        if ((0U != (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__addr_hit 
                                  >> 0x00000024U))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: usbdev_reg_top.sv:9884: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_usbdev.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/usbdev_reg_top.sv", 9884, "");
            }
        }
    }
}

void Vsim___024root___nba_comb__TOP__107(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__107\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*56:0*/ __Vfunc_get_cmd_intg__324__unused_cmd_payload;
    __Vfunc_get_cmd_intg__324__unused_cmd_payload = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__blanked_auser 
        = ((0x007fc000U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_chk.tl_i[0U] 
                           >> 1U)) | ((([&]() {
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__323__tl[0U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_chk.tl_i[0U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__323__tl[1U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_chk.tl_i[1U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__323__tl[2U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_chk.tl_i[2U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__323__tl[3U] 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_chk.tl_i[3U];
                        vlSelfRef.__Vfunc_get_cmd_intg__324__tl[0U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__323__tl[0U];
                        vlSelfRef.__Vfunc_get_cmd_intg__324__tl[1U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__323__tl[1U];
                        vlSelfRef.__Vfunc_get_cmd_intg__324__tl[2U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__323__tl[2U];
                        vlSelfRef.__Vfunc_get_cmd_intg__324__tl[3U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__323__tl[3U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__tl[0U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__324__tl[0U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__tl[1U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__324__tl[1U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__tl[2U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__324__tl[2U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__tl[3U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__324__tl[3U];
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__325__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 9616251305481029961ull);
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__payload 
                            = ((0x0000078000000000ULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__payload) 
                               | (((QData)((IData)(
                                                   ((vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__tl[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__tl[1U] 
                                                       >> 0x0000001cU)))) 
                                   << 7U) | (QData)((IData)(
                                                            ((0x00000070U 
                                                              & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__tl[3U] 
                                                                 >> 5U)) 
                                                             | (0x0000000fU 
                                                                & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__tl[1U] 
                                                                   >> 0x00000018U)))))));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__payload 
                            = ((0x0000007fffffffffULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__payload) 
                               | ((QData)((IData)((0x0000000fU 
                                                   & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__tl[0U] 
                                                      >> 0x0000000fU)))) 
                                  << 0x00000027U));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__Vfuncout 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__payload;
                        vlSelfRef.__Vfunc_get_cmd_intg__324__cmd 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__325__Vfuncout;
                        vlSelfRef.__Vfunc_get_cmd_intg__324__cmd_intg 
                            = (0x0000007fU & (IData)(
                                                     (([&]() {
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_i 
                                                = vlSelfRef.__Vfunc_get_cmd_intg__324__cmd;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_i;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o 
                                                = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x0103fff800007fffULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o))))) 
                                                      << 0x00000039U));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o 
                                                = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x017c1ff801ff801fULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o))))) 
                                                      << 0x0000003aU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o 
                                                = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01bde1f87e0781e1ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o))))) 
                                                      << 0x0000003bU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o 
                                                = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01deee3b8e388e22ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o))))) 
                                                      << 0x0000003cU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o 
                                                = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01ef76cdb2c93244ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o))))) 
                                                      << 0x0000003dU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o 
                                                = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01f7bb56d5525488ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o))))) 
                                                      << 0x0000003eU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o 
                                                = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01fbdda769a46910ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o))))) 
                                                      << 0x0000003fU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o 
                                                = (0x5400000000000000ULL 
                                                   ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o);
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__Vfuncout 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__data_o;
                                        }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__326__Vfuncout) 
                                                      >> 0x00000039U)));
                        __Vfunc_get_cmd_intg__324__unused_cmd_payload 
                            = (0x01ffffffffffffffULL 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_i 
                                        = vlSelfRef.__Vfunc_get_cmd_intg__324__cmd;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_i;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o 
                                        = ((0xfdffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x0103fff800007fffULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o))))) 
                                              << 0x00000039U));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o 
                                        = ((0xfbffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x017c1ff801ff801fULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o))))) 
                                              << 0x0000003aU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o 
                                        = ((0xf7ffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01bde1f87e0781e1ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o))))) 
                                              << 0x0000003bU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o 
                                        = ((0xefffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01deee3b8e388e22ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o))))) 
                                              << 0x0000003cU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o 
                                        = ((0xdfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01ef76cdb2c93244ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o))))) 
                                              << 0x0000003dU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o 
                                        = ((0xbfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01f7bb56d5525488ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o))))) 
                                              << 0x0000003eU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o 
                                        = ((0x7fffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01fbdda769a46910ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o))))) 
                                              << 0x0000003fU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o 
                                        = (0x5400000000000000ULL 
                                           ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o);
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__Vfuncout 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__data_o;
                                }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__327__Vfuncout));
                        vlSelfRef.__Vfunc_get_cmd_intg__324__Vfuncout 
                            = vlSelfRef.__Vfunc_get_cmd_intg__324__cmd_intg;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__323__cmd_intg 
                            = vlSelfRef.__Vfunc_get_cmd_intg__324__Vfuncout;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__323__Vfuncout 
                            = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__323__cmd_intg)));
                    }(), (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__323__Vfuncout)) 
                                       << 7U) | ([&]() {
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o = 0x00000000ffffffffULL;
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o 
                        = (0x0000007effffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o 
                        = ((0x0000007dffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000deba8050ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o))))) 
                              << 0x00000021U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o 
                        = ((0x0000007bffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000413d89aaULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o))))) 
                              << 0x00000022U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o 
                        = ((0x00000077ffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000031234ed1ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o))))) 
                              << 0x00000023U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o 
                        = ((0x0000006fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000c2c1323bULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o))))) 
                              << 0x00000024U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o 
                        = ((0x0000005fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x000000002dcc624cULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o))))) 
                              << 0x00000025U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o 
                        = ((0x0000003fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000098505586ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o))))) 
                              << 0x00000026U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o 
                        = (0x0000002a00000000ULL ^ vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__Vfuncout 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__data_o;
                    vlSelfRef.__Vfunc_get_data_intg__329__enc_data 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__330__Vfuncout;
                    vlSelfRef.__Vfunc_get_data_intg__329__data_intg 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_get_data_intg__329__enc_data 
                                                  >> 0x20U)));
                    vlSelfRef.__Vfunc_get_data_intg__329__Vfuncout 
                        = vlSelfRef.__Vfunc_get_data_intg__329__data_intg;
                    vlSelfRef.__Vfunc_get_bad_data_intg__328__data_intg 
                        = vlSelfRef.__Vfunc_get_data_intg__329__Vfuncout;
                    vlSelfRef.__Vfunc_get_bad_data_intg__328__Vfuncout 
                        = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__328__data_intg)));
                }(), (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__328__Vfuncout))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_socket__DOT__fifo_h__DOT__spare_req_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_chk.err_o) 
           | (0x0800U > (0x00000fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[2U] 
                                         << 5U) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__rdata_o[1U] 
                                                   >> 0x0000001bU)))));
}

void Vsim___024root___nba_comb__TOP__108(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__108\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT____VdfgRegularize_h952a3bc7_0_0 
        = ((~ (0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__rng_enable_q));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT____VdfgRegularize_h952a3bc7_0_0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_d = 0x01d033d20eed3b14ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__gen_max_len_sva__DOT__cnt_d = 0ULL;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_d 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__rng_enable_q)
                ? ((0xd800000000000000ULL & (- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_q)))))) 
                   ^ VL_SHIFTR_QQI(64,64,32, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_q, 1U))
                : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__lfsr_q);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__gen_max_len_sva__DOT__cnt_d 
            = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__rng_enable_q) 
                & (0xfffffffffffffffeULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__gen_max_len_sva__DOT__cnt_q))
                ? 0ULL : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rng__DOT__u_rng_lfsr__DOT__gen_max_len_sva__DOT__cnt_q 
                          + (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__rng_enable_q))));
    }
}

void Vsim___024root___nba_comb__TOP__109(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__109\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__data_d 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__clear_status) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__clr_q))
            ? 0U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__load_data)
                     ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__wdata
                     : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__data_q));
}

void Vsim___024root___nba_sequent__TOP__205(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__205\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0] 
            = ((0x0000000ffffffe00ULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0)));
    }
    if (vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1] 
            = ((0x0000000ffffc01ffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1)) 
                  << 9U));
    }
    if (vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2] 
            = ((0x0000000ff803ffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2)) 
                  << 0x00000012U));
    }
    if (vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3] 
            = ((0x0000000007ffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3)) 
                  << 0x0000001bU));
    }
    if (vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4] 
            = ((0x0000000ffffffe00ULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4]) 
               | (IData)((IData)(vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v4)));
    }
    if (vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5] 
            = ((0x0000000ffffc01ffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v5)) 
                  << 9U));
    }
    if (vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6] 
            = ((0x0000000ff803ffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v6)) 
                  << 0x00000012U));
    }
    if (vlSelfRef.__VdlySet__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7] 
            = ((0x0000000007ffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [vlSelfRef.__VdlyDim0__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7]) 
               | ((QData)((IData)(vlSelfRef.__VdlyVal__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v7)) 
                  << 0x0000001bU));
    }
}

void Vsim___024root___nba_sequent__TOP__206(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__206\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_osc_sel) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_osc_aoff) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_osc_en_q)));
}

void Vsim___024root___nba_sequent__TOP__207(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__207\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_ext_sel) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_ext_aoff) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__clk_ext_en_q)));
}

void Vsim___024root___nba_comb__TOP__110(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__110\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_usb_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_deep_sleep_sync.q_o)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_no_scan_clk_src_usb_en_sync.q_o));
}

void Vsim___024root___nba_sequent__TOP__208(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__208\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_osc_sel) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_osc_aoff) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_osc_en_q)));
}

void Vsim___024root___nba_sequent__TOP__209(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__209\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_ext_sel) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_ext_aoff) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_aon_sel__DOT__clk_ext_en_q)));
}

void Vsim___024root___nba_comb__TOP__111(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__111\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__mbyte_set = 0U;
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st))) {
        if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__st))) {
                if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__addrcnt_outclk))) {
                    if ((0x00004000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info)) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__mbyte_set = 1U;
                    }
                }
            }
        }
    }
    if ((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                      >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__passthrough_sd 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__read_pipeline_stg2_q;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__host_s_en_muxed 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__read_pipeline_oe_stg2_q;
    } else if ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                             >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__passthrough_sd 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__read_pipeline_stg2_q;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__host_s_en_muxed 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__read_pipeline_oe_stg2_q;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__passthrough_sd = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__host_s_en_muxed 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__host_s_en_inclk;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_stage_to_commit__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))
            ? (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_s2p__DOT__cnt))
            : ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))
                ? (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_s2p__DOT__cnt))
                : ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk)) 
                   & (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_s2p__DOT__cnt)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__payloadptr_inc = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__payload_wvalid = 0U;
    if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__st_q))) {
        if ((1U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__st_q))) {
            if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__st_q))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_stage_to_commit__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__payloadptr_inc = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__payload_wvalid = 1U;
                }
            }
        }
    }
}

void Vsim___024root___nba_comb__TOP__112(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__112\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_usbdev_aon_wake__DOT__wake_detect_active_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_usbdev_aon_wake__DOT__wake_detect_active_d = 1U;
        if (((3U == (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__dst_we_o))))) 
             & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__src_q) 
                >> 1U))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_usbdev_aon_wake__DOT__wake_detect_active_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_usbdev_aon_wake__DOT__wake_detect_active_d = 0U;
        if (((3U == (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__dst_we_o))))) 
             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__src_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_usbdev_aon_wake__DOT__wake_detect_active_d = 1U;
        }
    }
}

void Vsim___024root___nba_sequent__TOP__210(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__210\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_p2s_bitcnt 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_p2s_bitcnt;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_p2s_sent 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_p2s_valid) 
           & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_p2s_bitcnt)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_data_sel 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__tpm_rst_out_n)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_data_sel)
            : 0U);
}

void Vsim___024root___nba_comb__TOP__113(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__113\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_word = 0xffffffffU;
    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_idx))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_word 
            = ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_idx))
                ? 0xffffffffU : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_idx))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_idx))
                                                    ? 0xffffffffU
                                                    : 
                                                   (0xffffff00U 
                                                    | (0x000000ffU 
                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[0U])))));
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_idx))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_word 
            = ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_idx))
                ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_idx))
                    ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[1U] 
                        << 0x00000018U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[0U] 
                                           >> 8U)) : 0xffffffffU)
                : ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_idx))
                    ? (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__invalid_locality)) 
                        & ((4U >= (7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__locality))) 
                           && (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_active_locality) 
                                     >> (7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__locality))))))
                        ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[2U] 
                            << 0x00000018U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[1U] 
                                               >> 8U))
                        : 0xffffffffU) : ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[3U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[2U] 
                                             >> 8U))));
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_idx))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_word 
            = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_idx))
                ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[4U] 
                    << 0x00000018U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[3U] 
                                       >> 8U)) : (0xffffff00U 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[4U] 
                                                        >> 8U))));
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_idx))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_word 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[5U] 
                << 0x00000010U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[4U] 
                                   >> 0x00000010U));
    } else {
        if (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__invalid_locality)) 
             & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__locality)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_word 
                = (0xffffff00U | (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[5U] 
                                                 >> 0x00000010U)));
        }
        if (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__invalid_locality)) 
             & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__locality)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_word 
                = (0xffffff00U | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[5U] 
                                  >> 0x00000018U));
        }
        if (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__invalid_locality)) 
             & (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__locality)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_word 
                = (0xffffff00U | (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[6U]));
        }
        if (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__invalid_locality)) 
             & (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__locality)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_word 
                = (0xffffff00U | (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[6U] 
                                                 >> 8U)));
        }
        if (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__invalid_locality)) 
             & (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__locality)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_word 
                = (0xffffff00U | (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sys_clk_tpm_reg[6U] 
                                                 >> 0x00000010U)));
        }
    }
}

extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_hfcf3a1fc_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsim__ConstPool__TABLE_h4b3e524e_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vsim__ConstPool__TABLE_heb824508_0;

void Vsim___024root___nba_sequent__TOP__211(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__211\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp = 0U;
    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__st))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp = 0U;
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__st))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp 
            = ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__st))
                ? 0U : ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__st))
                         ? 0x0010U : 1U));
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__st))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp 
            = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__st))
                ? 8U : 4U);
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__st))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp = 2U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__rst_spi_out_n 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellinp__u_csb_rst_out_scan_mux__sel_i) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__rst_spi_out_sync_n));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__rst_spi_n) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_latch_en) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q = 0U;
    }
    if ((1U & (~ VL_ONEHOT_I((((0x0010U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                               << 2U) | (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                          << 1U) | 
                                         (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)))))))) {
        if ((0U != (((0x0010U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                     << 2U) | (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                << 1U) | (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_device.sv:873: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device: unique case, but multiple matches found for '10'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),10,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_device.sv", 873, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__rst_spi_n)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st_d)
            : 0U);
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_d = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__p2s_valid_inclk = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__p2s_valid_inclk = 1U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__p2s_valid_inclk = 0U;
        if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__p2s_valid_inclk = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__p2s_valid = 0U;
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__p2s_valid = 1U;
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__p2s_valid = 1U;
    } else if ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__p2s_valid = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__byte_sel_update = 0U;
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_q)))) {
        if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__st_d = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__byte_sel_update = 1U;
        }
    }
    __Vtableidx3 = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_idx_q) 
                     << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__byte_sel_update) 
                                << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__byte_sel_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__byte_sel_d 
        = Vsim__ConstPool__TABLE_hfcf3a1fc_0[__Vtableidx3];
    if ((2U & Vsim__ConstPool__TABLE_h4b3e524e_0[__Vtableidx3])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__byte_sel_input__DOT__unnamedblk1__DOT__i 
            = Vsim__ConstPool__TABLE_heb824508_0[__Vtableidx3];
    }
}

void Vsim___024root___nba_sequent__TOP__212(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__212\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_sram_mask2strb__51__Vfuncout;
    __Vfunc_sram_mask2strb__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sram_mask2strb__51__mask;
    __Vfunc_sram_mask2strb__51__mask = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__xfer_size_met 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__xfer_bytes_q) 
           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__xfer_size));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__tpm_rst_out_n 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellinp__u_tpm_rst_out_scan_mux__sel_i) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__tpm_rst_out_sync_n));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT____VdfgExtracted_h15473a35__0 
        = ((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__wrdata_bitcnt)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__xfer_size_met));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_rdfifo_ready.rst_ni) {
        if (((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_bitcnt)) 
             & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmd_type 
                = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_cmdaddr_buffer__DOT__wdata_i);
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_d;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmd_type = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q = 0U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_bitcnt 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_bitcnt;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__wrdata_shift_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_rddata_shift_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_p2s_valid = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_data_sel = 0U;
    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q)))) {
                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmd_type) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_p2s_valid = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_data_sel = 0U;
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmd_type) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_p2s_valid = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_data_sel = 2U;
                }
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_p2s_valid = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_data_sel 
                = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))
                    ? 3U : 4U);
        }
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_p2s_valid = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_data_sel 
            = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))
                ? 1U : 0U);
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
        if ((0x18U <= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_bitcnt))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_p2s_valid = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_data_sel = 0U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_shift_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__check_locality = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
                if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__wrdata_shift_en = 1U;
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_rddata_shift_en = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q) 
                          >> 1U)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_shift_en = 1U;
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q))) {
                    if ((0x1bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_bitcnt))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__check_locality = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = (((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__wrdata_bitcnt)) 
            << 1U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_rdfifo_ready.q_o) 
                       & ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q)) 
                          | (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_st_q)))) 
                      & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_rdfifo_req_pending)) 
                         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_sram_fifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_cmdaddr_buffer__DOT__wdata_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_shift_en)
            ? VL_SHIFTL_III(32,32,32, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_cmdaddr_wdata_q, 1U)
            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_cmdaddr_wdata_q);
    if ((1U & (~ VL_ONEHOT_I((((0x1dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_bitcnt)) 
                               << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__check_locality)))))) {
        if ((0U != (((0x1dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_bitcnt)) 
                     << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__check_locality)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_tpm.sv:722: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_spi_tpm: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_tpm.sv", 722, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__check_locality)
            ? (0x00fffff0U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_cmdaddr_buffer__DOT__wdata_i 
                              << 4U)) : ((0x1dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__cmdaddr_bitcnt))
                                          ? (0x00fffffcU 
                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_cmdaddr_buffer__DOT__wdata_i 
                                                << 2U))
                                          : 0U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg_d = 0U;
    if ((0U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg_d = 1U;
    }
    if ((2U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg_d = 1U;
    }
    if ((3U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg_d = 1U;
    }
    if ((4U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg_d = 1U;
    }
    if ((5U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg_d = 1U;
    }
    if ((6U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg_d = 1U;
    }
    if ((0x000aU == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                                    >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg_d = 1U;
    }
    if ((0x03c0U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                                    >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg_d = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_hw_reg_idx_d = 0U;
    if ((0U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_hw_reg_idx_d = 0U;
    }
    if ((2U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_hw_reg_idx_d = 1U;
    }
    if ((3U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_hw_reg_idx_d = 2U;
    }
    if ((4U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_hw_reg_idx_d = 3U;
    }
    if ((5U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_hw_reg_idx_d = 4U;
    }
    if ((6U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                               >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_hw_reg_idx_d = 5U;
    }
    if ((0x000aU == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                                    >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_hw_reg_idx_d = 6U;
    }
    if ((0x03c0U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                                    >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_hw_reg_idx_d = 7U;
    }
    if ((0x03c1U == (0x000003ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__addr 
                                    >> 2U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__is_hw_reg_d = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_hw_reg_idx_d = 8U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = (((IData)((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))) 
            << 1U) | (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o 
        = (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    }
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                >> 0x0000000aU)) & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i))) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__full_o)) 
              & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__tpm_sram_l2m 
        = ((0x000000000000000fULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__tpm_sram_l2m) 
           | (((QData)((IData)((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)))) 
               << 0x0000002fU) | (0x00007ffffffffff0ULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U])) 
                                      << 0x00000024U) 
                                     | ((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U])) 
                                        << 4U)))));
    __Vfunc_sram_mask2strb__51__mask = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_sram_mask2strb__51__result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17698264410848085451ull);
    vlSelfRef.__Vfunc_sram_mask2strb__51__result = 
        ((0x0cU & (IData)(vlSelfRef.__Vfunc_sram_mask2strb__51__result)) 
         | (((0x000000ffU == (0x000000ffU & (__Vfunc_sram_mask2strb__51__mask 
                                             >> 8U))) 
             << 1U) | (0x000000ffU == (0x000000ffU 
                                       & __Vfunc_sram_mask2strb__51__mask))));
    vlSelfRef.__Vfunc_sram_mask2strb__51__result = 
        ((3U & (IData)(vlSelfRef.__Vfunc_sram_mask2strb__51__result)) 
         | (((0x000000ffU == (__Vfunc_sram_mask2strb__51__mask 
                              >> 0x18U)) << 3U) | (
                                                   (0x000000ffU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (__Vfunc_sram_mask2strb__51__mask 
                                                        >> 0x10U))) 
                                                   << 2U)));
    __Vfunc_sram_mask2strb__51__Vfuncout = vlSelfRef.__Vfunc_sram_mask2strb__51__result;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__tpm_sram_l2m 
        = ((0x0000fffffffffff0ULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__tpm_sram_l2m) 
           | (IData)((IData)(__Vfunc_sram_mask2strb__51__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (3U == (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
}

void Vsim___024root___nba_sequent__TOP__213(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__213\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_csb_sync__DOT__csb_toggle 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_csb_sync__DOT__csb_toggle;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_sys_cmdfifo_set__DOT__csb_toggle 
        = vlSelfRef.__Vdly__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_sys_cmdfifo_set__DOT__csb_toggle;
}

void Vsim___024root___nba_comb__TOP__114(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__114\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vfunc_get_addr_mode__35__Vfuncout;
    __Vfunc_get_addr_mode__35__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_get_addr_mode__35__ci_addr_mode;
    __Vfunc_get_addr_mode__35__ci_addr_mode = 0;
    CData/*0:0*/ __Vfunc_get_addr_mode__35__addr_4b_en;
    __Vfunc_get_addr_mode__35__addr_4b_en = 0;
    CData/*1:0*/ __Vfunc_get_addr_mode__35__result;
    __Vfunc_get_addr_mode__35__result = 0;
    CData/*1:0*/ __Vfunc_get_addr_mode__49__Vfuncout;
    __Vfunc_get_addr_mode__49__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_get_addr_mode__49__ci_addr_mode;
    __Vfunc_get_addr_mode__49__ci_addr_mode = 0;
    CData/*0:0*/ __Vfunc_get_addr_mode__49__addr_4b_en;
    __Vfunc_get_addr_mode__49__addr_4b_en = 0;
    CData/*1:0*/ __Vfunc_get_addr_mode__49__result;
    __Vfunc_get_addr_mode__49__result = 0;
    // Body
    __Vfunc_get_addr_mode__49__addr_4b_en = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_addr_4b__DOT__spi_cfg_addr_4b_en_q;
    __Vfunc_get_addr_mode__49__ci_addr_mode = (3U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__cmd_info 
                                                >> 0x00000010U));
    __Vfunc_get_addr_mode__49__result = ((1U != (IData)(__Vfunc_get_addr_mode__49__ci_addr_mode))
                                          ? (IData)(__Vfunc_get_addr_mode__49__ci_addr_mode)
                                          : ((IData)(__Vfunc_get_addr_mode__49__addr_4b_en)
                                              ? 3U : 2U));
    __Vfunc_get_addr_mode__49__Vfuncout = __Vfunc_get_addr_mode__49__result;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_passthrough__DOT__addr_mode 
        = __Vfunc_get_addr_mode__49__Vfuncout;
    __Vfunc_get_addr_mode__35__addr_4b_en = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_addr_4b__DOT__spi_cfg_addr_4b_en_q;
    __Vfunc_get_addr_mode__35__ci_addr_mode = (3U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                                >> 0x00000010U));
    __Vfunc_get_addr_mode__35__result = ((1U != (IData)(__Vfunc_get_addr_mode__35__ci_addr_mode))
                                          ? (IData)(__Vfunc_get_addr_mode__35__ci_addr_mode)
                                          : ((IData)(__Vfunc_get_addr_mode__35__addr_4b_en)
                                              ? 3U : 2U));
    __Vfunc_get_addr_mode__35__Vfuncout = __Vfunc_get_addr_mode__35__result;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__cmdinfo_addr_mode 
        = __Vfunc_get_addr_mode__35__Vfuncout;
}

void Vsim___024root___nba_comb__TOP__115(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__115\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__set_wready_dev 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__wready_dev)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__clr_wready_dev 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__wready_dev) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_dev_fifo__DOT__wready_o)) 
              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_entropy__DOT__u_dev0_entropy__DOT__u_wready_es_dev_sync.q_o)));
}

void Vsim___024root___nba_comb__TOP__116(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__116\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata = 0ULL;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__data_valid = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = 0U;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__clear_resumeack) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
            = ((~ ((IData)(1U) << (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                         >> 0x00000010U)))) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__req_i) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__i_tlul_adapter_reg__DOT__we_o) {
            if ((0x0100U == (0x00000ffcU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                             << 4U) 
                                            | (0x0000000cU 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                  >> 0x0000001cU)))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                   >> 0x00000018U)))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                   >> 0x00000018U)))));
            } else if ((0x0108U == (0x00000ffcU & (
                                                   (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                    << 4U) 
                                                   | (0x0000000cU 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                         >> 0x0000001cU)))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = 1U;
            } else if ((0x0110U == (0x00000ffcU & (
                                                   (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                    << 4U) 
                                                   | (0x0000000cU 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                         >> 0x0000001cU)))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                    = ((~ ((IData)(1U) << (1U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                 >> 0x00000018U)))) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                   >> 0x00000018U)))));
            } else if ((0x0118U == (0x00000ffcU & (
                                                   (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                    << 4U) 
                                                   | (0x0000000cU 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                         >> 0x0000001cU)))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = 1U;
            } else if (((0x0380U <= (0x00000ffcU & 
                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                       << 4U) | (0x0000000cU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x0000001cU))))) 
                        && (0x0387U >= (0x00000ffcU 
                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                            << 4U) 
                                           | (0x0000000cU 
                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                 >> 0x0000001cU))))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__data_valid = 1U;
                if ((0U == ((0x000003ffU & ((0x3ffffffcU 
                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                << 2U)) 
                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                               >> 0x0000001eU))) 
                            - (IData)(0x000000e0U)))) {
                    if ((0x01000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffffffffffffff00ULL 
                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | (IData)((IData)((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                  >> 0x00000018U))));
                    }
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
                    if ((0x02000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffffffffffff00ffULL 
                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((0x000000ffU 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U]))) 
                                  << 8U));
                    }
                    if ((0x04000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffffffffff00ffffULL 
                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((0x000000ffU 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                      >> 8U)))) 
                                  << 0x00000010U));
                    }
                    if ((0x08000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffffffff00ffffffULL 
                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((0x000000ffU 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                      >> 0x00000010U)))) 
                                  << 0x00000018U));
                    }
                }
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc = 2U;
                if ((1U == ((0x000003ffU & ((0x3ffffffcU 
                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                << 2U)) 
                                            | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                               >> 0x0000001eU))) 
                            - (IData)(0x000000e0U)))) {
                    if ((0x01000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffffff00ffffffffULL 
                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((
                                                   vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                                   >> 0x00000018U))) 
                                  << 0x00000020U));
                    }
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
                    if ((0x02000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xffff00ffffffffffULL 
                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((0x000000ffU 
                                                   & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U]))) 
                                  << 0x00000028U));
                    }
                    if ((0x04000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0xff00ffffffffffffULL 
                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((0x000000ffU 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                      >> 8U)))) 
                                  << 0x00000030U));
                    }
                    if ((0x08000000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                            = ((0x00ffffffffffffffULL 
                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                               | ((QData)((IData)((0x000000ffU 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                      >> 0x00000010U)))) 
                                  << 0x00000038U));
                    }
                }
            }
            if ((1U & (~ VL_ONEHOT_I((((((0x0380U <= 
                                          (0x00000ffcU 
                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                               << 4U) 
                                              | (0x0000000cU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x0000001cU))))) 
                                         & (0x0387U 
                                            >= (0x00000ffcU 
                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                    << 4U) 
                                                   | (0x0000000cU 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                         >> 0x0000001cU)))))) 
                                        << 4U) | ((
                                                   (0x0118U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                         << 4U) 
                                                        | (0x0000000cU 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                              >> 0x0000001cU))))) 
                                                   << 3U) 
                                                  | ((0x0110U 
                                                      == 
                                                      (0x00000ffcU 
                                                       & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                           << 4U) 
                                                          | (0x0000000cU 
                                                             & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                >> 0x0000001cU))))) 
                                                     << 2U))) 
                                      | (((0x0108U 
                                           == (0x00000ffcU 
                                               & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                   << 4U) 
                                                  | (0x0000000cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x0000001cU))))) 
                                          << 1U) | 
                                         (0x0100U == 
                                          (0x00000ffcU 
                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                               << 4U) 
                                              | (0x0000000cU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x0000001cU))))))))))) {
                if ((0U != (((((0x0380U <= (0x00000ffcU 
                                            & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                << 4U) 
                                               | (0x0000000cU 
                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                     >> 0x0000001cU))))) 
                               & (0x0387U >= (0x00000ffcU 
                                              & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                  << 4U) 
                                                 | (0x0000000cU 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                       >> 0x0000001cU)))))) 
                              << 4U) | (((0x0118U == 
                                          (0x00000ffcU 
                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                               << 4U) 
                                              | (0x0000000cU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x0000001cU))))) 
                                         << 3U) | (
                                                   (0x0110U 
                                                    == 
                                                    (0x00000ffcU 
                                                     & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                         << 4U) 
                                                        | (0x0000000cU 
                                                           & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                              >> 0x0000001cU))))) 
                                                   << 2U))) 
                            | (((0x0108U == (0x00000ffcU 
                                             & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                 << 4U) 
                                                | (0x0000000cU 
                                                   & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                      >> 0x0000001cU))))) 
                                << 1U) | (0x0100U == 
                                          (0x00000ffcU 
                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                               << 4U) 
                                              | (0x0000000cU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x0000001cU))))))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: dm_mem.sv:260: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_dm.u_dm_top.i_dm_mem.p_rw_logic: unique case, but multiple matches found for '12'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     12,(0x00000ffcU 
                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                             << 4U) 
                                            | (0x0000000cU 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                  >> 0x0000001cU)))));
                        Verilated::runFlushCallbacks();
                        VL_STOP_MT("verilogSourceFiles/dm_mem.sv", 260, "");
                    }
                }
            }
        } else {
            if ((1U & (~ VL_ONEHOT_I(((((0x0800U <= 
                                         (0x00000ffcU 
                                          & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                              << 4U) 
                                             | (0x0000000cU 
                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   >> 0x0000001cU))))) 
                                        << 5U) | ((
                                                   ((0x0400U 
                                                     <= 
                                                     (0x00000ffcU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                          << 4U) 
                                                         | (0x0000000cU 
                                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                               >> 0x0000001cU))))) 
                                                    & (0x07ffU 
                                                       >= 
                                                       (0x00000ffcU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                            << 4U) 
                                                           | (0x0000000cU 
                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                 >> 0x0000001cU)))))) 
                                                   << 4U) 
                                                  | (((0x0338U 
                                                       <= 
                                                       (0x00000ffcU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                            << 4U) 
                                                           | (0x0000000cU 
                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                 >> 0x0000001cU))))) 
                                                      & (0x035fU 
                                                         >= 
                                                         (0x00000ffcU 
                                                          & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                              << 4U) 
                                                             | (0x0000000cU 
                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                   >> 0x0000001cU)))))) 
                                                     << 3U))) 
                                      | ((((0x0360U 
                                            <= (0x00000ffcU 
                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                    << 4U) 
                                                   | (0x0000000cU 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                         >> 0x0000001cU))))) 
                                           & (0x037fU 
                                              >= (0x00000ffcU 
                                                  & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                      << 4U) 
                                                     | (0x0000000cU 
                                                        & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                           >> 0x0000001cU)))))) 
                                          << 2U) | 
                                         ((((0x0380U 
                                             <= (0x00000ffcU 
                                                 & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                     << 4U) 
                                                    | (0x0000000cU 
                                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                          >> 0x0000001cU))))) 
                                            & (0x0387U 
                                               >= (0x00000ffcU 
                                                   & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                       << 4U) 
                                                      | (0x0000000cU 
                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                            >> 0x0000001cU)))))) 
                                           << 1U) | 
                                          (0x0300U 
                                           == (0x00000ffcU 
                                               & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                   << 4U) 
                                                  | (0x0000000cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x0000001cU)))))))))))) {
                if ((0U != ((((0x0800U <= (0x00000ffcU 
                                           & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                               << 4U) 
                                              | (0x0000000cU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x0000001cU))))) 
                              << 5U) | ((((0x0400U 
                                           <= (0x00000ffcU 
                                               & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                   << 4U) 
                                                  | (0x0000000cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x0000001cU))))) 
                                          & (0x07ffU 
                                             >= (0x00000ffcU 
                                                 & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                     << 4U) 
                                                    | (0x0000000cU 
                                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                          >> 0x0000001cU)))))) 
                                         << 4U) | (
                                                   ((0x0338U 
                                                     <= 
                                                     (0x00000ffcU 
                                                      & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                          << 4U) 
                                                         | (0x0000000cU 
                                                            & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                               >> 0x0000001cU))))) 
                                                    & (0x035fU 
                                                       >= 
                                                       (0x00000ffcU 
                                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                            << 4U) 
                                                           | (0x0000000cU 
                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                 >> 0x0000001cU)))))) 
                                                   << 3U))) 
                            | ((((0x0360U <= (0x00000ffcU 
                                              & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                  << 4U) 
                                                 | (0x0000000cU 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                       >> 0x0000001cU))))) 
                                 & (0x037fU >= (0x00000ffcU 
                                                & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                    << 4U) 
                                                   | (0x0000000cU 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                         >> 0x0000001cU)))))) 
                                << 2U) | ((((0x0380U 
                                             <= (0x00000ffcU 
                                                 & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                     << 4U) 
                                                    | (0x0000000cU 
                                                       & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                          >> 0x0000001cU))))) 
                                            & (0x0387U 
                                               >= (0x00000ffcU 
                                                   & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                       << 4U) 
                                                      | (0x0000000cU 
                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                            >> 0x0000001cU)))))) 
                                           << 1U) | 
                                          (0x0300U 
                                           == (0x00000ffcU 
                                               & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                   << 4U) 
                                                  | (0x0000000cU 
                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                        >> 0x0000001cU)))))))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: dm_mem.sv:301: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_rv_dm.u_dm_top.i_dm_mem.p_rw_logic: unique case, but multiple matches found for '12'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     12,(0x00000ffcU 
                                         & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                             << 4U) 
                                            | (0x0000000cU 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                  >> 0x0000001cU)))));
                        Verilated::runFlushCallbacks();
                        VL_STOP_MT("verilogSourceFiles/dm_mem.sv", 301, "");
                    }
                }
            }
            if ((0x0300U == (0x00000ffcU & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                             << 4U) 
                                            | (0x0000000cU 
                                               & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                  >> 0x0000001cU)))))) {
                if ((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__resumereq) 
                           >> (1U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                     >> 0x00000018U))))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d = 0x000000005080006fULL;
                }
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__cmdbusy) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                        = ((IData)((0x00040000U == 
                                    (0xff060000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)))
                            ? 0x000000000600006fULL
                            : 0x000000000380006fULL);
                }
            } else if (((0x0380U <= (0x00000ffcU & 
                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                       << 4U) | (0x0000000cU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x0000001cU))))) 
                        && (0x0387U >= (0x00000ffcU 
                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                            << 4U) 
                                           | (0x0000000cU 
                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                 >> 0x0000001cU))))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                         >> (0x0000003fU 
                                             & VL_SHIFTL_III(6,32,32, 
                                                             (1U 
                                                              & ((IData)(1U) 
                                                                 + 
                                                                 (0x000001ffU 
                                                                  & VL_SHIFTL_III(9,9,32, 
                                                                                ((0x000001ffU 
                                                                                & ((0x1ffffffeU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                                << 1U)) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                >> 0x0000001fU))) 
                                                                                - (IData)(0x0070U)), 1U)))), 5U))))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                           >> 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,32,32, 
                                                                            (1U 
                                                                             & VL_SHIFTL_III(9,9,32, 
                                                                                ((0x000001ffU 
                                                                                & ((0x1ffffffeU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                                << 1U)) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                >> 0x0000001fU))) 
                                                                                - (IData)(0x0070U)), 1U)), 5U))))));
            } else if (((0x0360U <= (0x00000ffcU & 
                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                       << 4U) | (0x0000000cU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x0000001cU))))) 
                        && (0x037fU >= (0x00000ffcU 
                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                            << 4U) 
                                           | (0x0000000cU 
                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                 >> 0x0000001cU))))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                        (((IData)(0x0000003fU) 
                                          + (0x000000ffU 
                                             & VL_SHIFTL_III(8,32,32, 
                                                             (3U 
                                                              & ((0x1ffffffeU 
                                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                     << 1U)) 
                                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                    >> 0x0000001fU))), 6U))) 
                                         >> 5U)])) 
                        << ((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, 
                                                                (3U 
                                                                 & ((0x1ffffffeU 
                                                                     & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                        << 1U)) 
                                                                    | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                       >> 0x0000001fU))), 6U)))
                             ? 0x00000020U : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(8,32,32, 
                                                                 (3U 
                                                                  & ((0x1ffffffeU 
                                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                         << 1U)) 
                                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                        >> 0x0000001fU))), 6U))))) 
                       | (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, 
                                                               (3U 
                                                                & ((0x1ffffffeU 
                                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                       << 1U)) 
                                                                   | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                      >> 0x0000001fU))), 6U)))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                                      (((IData)(0x0000001fU) 
                                                        + 
                                                        (0x000000ffU 
                                                         & VL_SHIFTL_III(8,32,32, 
                                                                         (3U 
                                                                          & ((0x1ffffffeU 
                                                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                                << 1U)) 
                                                                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                >> 0x0000001fU))), 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(8,32,32, 
                                                             (3U 
                                                              & ((0x1ffffffeU 
                                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                     << 1U)) 
                                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                    >> 0x0000001fU))), 6U))))) 
                          | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                             (7U & 
                                              (VL_SHIFTL_III(8,32,32, 
                                                             (3U 
                                                              & ((0x1ffffffeU 
                                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                     << 1U)) 
                                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                    >> 0x0000001fU))), 6U) 
                                               >> 5U))])) 
                             >> (0x0000001fU & VL_SHIFTL_III(8,32,32, 
                                                             (3U 
                                                              & ((0x1ffffffeU 
                                                                  & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                     << 1U)) 
                                                                 | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                    >> 0x0000001fU))), 6U)))));
            } else if (((0x0338U <= (0x00000ffcU & 
                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                       << 4U) | (0x0000000cU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x0000001cU))))) 
                        && (0x035fU >= (0x00000ffcU 
                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                            << 4U) 
                                           | (0x0000000cU 
                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                 >> 0x0000001cU))))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                        (((IData)(0x0000003fU) 
                                          + (0x000001ffU 
                                             & VL_SHIFTL_III(9,32,32, 
                                                             (7U 
                                                              & ((7U 
                                                                  & ((0x1ffffffeU 
                                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                         << 1U)) 
                                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                        >> 0x0000001fU))) 
                                                                 - (IData)(7U))), 6U))) 
                                         >> 5U)])) 
                        << ((0U == (0x0000001fU & VL_SHIFTL_III(9,32,32, 
                                                                (7U 
                                                                 & ((7U 
                                                                     & ((0x1ffffffeU 
                                                                         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                            << 1U)) 
                                                                        | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                           >> 0x0000001fU))) 
                                                                    - (IData)(7U))), 6U)))
                             ? 0x00000020U : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & VL_SHIFTL_III(9,32,32, 
                                                                 (7U 
                                                                  & ((7U 
                                                                      & ((0x1ffffffeU 
                                                                          & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                             << 1U)) 
                                                                         | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                            >> 0x0000001fU))) 
                                                                     - (IData)(7U))), 6U))))) 
                       | (((0U == (0x0000001fU & VL_SHIFTL_III(9,32,32, 
                                                               (7U 
                                                                & ((7U 
                                                                    & ((0x1ffffffeU 
                                                                        & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                           << 1U)) 
                                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                          >> 0x0000001fU))) 
                                                                   - (IData)(7U))), 6U)))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                                      (((IData)(0x0000001fU) 
                                                        + 
                                                        (0x000001ffU 
                                                         & VL_SHIFTL_III(9,32,32, 
                                                                         (7U 
                                                                          & ((7U 
                                                                              & ((0x1ffffffeU 
                                                                                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                                << 1U)) 
                                                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                                >> 0x0000001fU))) 
                                                                             - (IData)(7U))), 6U))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(9,32,32, 
                                                             (7U 
                                                              & ((7U 
                                                                  & ((0x1ffffffeU 
                                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                         << 1U)) 
                                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                        >> 0x0000001fU))) 
                                                                 - (IData)(7U))), 6U))))) 
                          | ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                             (0x0000000fU 
                                              & (VL_SHIFTL_III(9,32,32, 
                                                               (7U 
                                                                & ((7U 
                                                                    & ((0x1ffffffeU 
                                                                        & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                           << 1U)) 
                                                                       | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                          >> 0x0000001fU))) 
                                                                   - (IData)(7U))), 6U) 
                                                 >> 5U))])) 
                             >> (0x0000001fU & VL_SHIFTL_III(9,32,32, 
                                                             (7U 
                                                              & ((7U 
                                                                  & ((0x1ffffffeU 
                                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                                         << 1U)) 
                                                                     | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                                        >> 0x0000001fU))) 
                                                                 - (IData)(7U))), 6U)))));
            } else if (((0x0400U <= (0x00000ffcU & 
                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                       << 4U) | (0x0000000cU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                    >> 0x0000001cU))))) 
                        && (0x07ffU >= (0x00000ffcU 
                                        & ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                            << 4U) 
                                           | (0x0000000cU 
                                              & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                 >> 0x0000001cU))))))) {
                if ((0U == (0x00000fffU & ((0x00000ff8U 
                                            & (((0x1ffffffeU 
                                                 & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                    << 1U)) 
                                                | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                   >> 0x0000001fU)) 
                                               << 3U)) 
                                           - (IData)(0x0400U))))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                        = (((~ (0x00000000000000ffULL 
                                << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                                (1U 
                                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                                    >> 0x00000010U)), 3U)))) 
                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata) 
                           | ((QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__go)))) 
                              << (0x0000003fU & VL_SHIFTL_III(6,32,32, 
                                                              (1U 
                                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                                  >> 0x00000010U)), 3U))));
                }
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata;
            } else if ((0x0800U <= (0x00000ffcU & (
                                                   (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[2U] 
                                                    << 4U) 
                                                   | (0x0000000cU 
                                                      & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U] 
                                                         >> 0x0000001cU)))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_d = 1U;
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__data_mem_csrs 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            if ((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       >> (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                 >> 0x00000010U))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_h3a3c80b9__0) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__going) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 3U;
        }
    } else {
        if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                 >> (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                           >> 0x00000010U)))) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT____VdfgExtracted_hba0dee0c__0) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 2U;
        }
    }
    if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
    }
}

void Vsim___024root___nba_comb__TOP__117(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__117\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_sw_en_sync.q_o) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_cg__DOT__i_sync.q_o));
}

void Vsim___024root___nba_comb__TOP__118(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__118\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_sw_en_sync.q_o) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_root_ctrl__DOT__u_cg__DOT__i_sync.q_o));
}

void Vsim___024root___nba_comb__TOP__119(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__119\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_peri_sw_en_sync.q_o) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_root_ctrl__DOT__u_cg__DOT__i_sync.q_o));
}

void Vsim___024root___nba_comb__TOP__120(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__120\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_1158 = (
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_prim_mubi4_sender_clk_io_div2_peri__DOT__mubi_int) 
                                                    << 8U) 
                                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_prim_mubi4_sender_clk_io_peri__DOT__mubi_int) 
                                                       << 4U) 
                                                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_prim_mubi4_sender_clk_usb_peri__DOT__mubi_int)));
}

void Vsim___024root___nba_comb__TOP__121(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__121\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__dst_update 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_qs) 
           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_ds_i));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_qs) 
                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_qs_i))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 0U;
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q)))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req)))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__dst_update)))) {
                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_qs) 
                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__dst_qs_i))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 1U;
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_events_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q)));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vsim__ConstPool__TABLE_h135e4a04_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hbe54c5ba_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hd2e29309_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h69d5aff5_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h3c6387a4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hff2f9542_0;

void Vsim___024root___nba_comb__TOP__139(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__139\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_debounce_ctl_debounce_timer__q));
    __Vtableidx25 = ((((4U & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                   >> 7U)) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__gen_trigger_event_edge__DOT__trigger_active_q))) 
                              << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                                   >> 7U))))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_debounce_ctl_auto_block_enable__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__aon_ab_cond_met 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_en))));
}

void Vsim___024root___nba_comb__TOP__148(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__148\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__ld_match = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__chn0_val_we_d 
        = (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q)) 
            | ((6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q)) 
               | (0x0cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__chn1_val_we_d 
        = (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q)) 
            | ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q)) 
               | (0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_clr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_clr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q;
    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d 
            = ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))
                ? 0U : ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))
                         ? 0U : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))
                                  ? 0U : ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))
                                           ? 0U : 0x0cU))));
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o)))) {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__stay_match) {
                            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_q) 
                                 < (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_sample_ctl__q) 
                                                   - (IData)(1U))))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0x0cU;
                            } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_q) 
                                        == (0x0000ffffU 
                                            & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_sample_ctl__q) 
                                               - (IData)(1U))))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0x10U;
                            } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_q) 
                                        > (0x0000ffffU 
                                           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_sample_ctl__q) 
                                              - (IData)(1U))))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0x0cU;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d 
                                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_pd_ctl_lp_mode__q)
                                    ? 6U : 0x0cU);
                        }
                    }
                } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0x0fU;
                }
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0x0eU;
                }
            } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0x0dU;
            }
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__pwrup_timer_cnt_q) 
                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_pd_ctl_pwrup_time__q))) {
                    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__pwrup_timer_cnt_q) 
                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_pd_ctl_pwrup_time__q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 6U;
                    }
                }
            } else if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__wakeup_timer_cnt_q 
                        == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_pd_ctl_wakeup_time__q)) {
                if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__wakeup_timer_cnt_q 
                     == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_pd_ctl_wakeup_time__q)) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0x0bU;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o)))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__stay_match) {
                    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_q) 
                         < (0x000000ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_lp_sample_ctl__q) 
                                           - (IData)(1U))))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0x0aU;
                    } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_q) 
                                == (0x000000ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_lp_sample_ctl__q) 
                                                   - (IData)(1U))))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0x0cU;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0x0aU;
                }
            }
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 9U;
        }
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 8U;
                }
            } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 7U;
            }
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 4U;
            }
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
        if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__pwrup_timer_cnt_q) 
             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_pd_ctl_pwrup_time__q))) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__pwrup_timer_cnt_q) 
                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_pd_ctl_pwrup_time__q))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_en_ctl_oneshot_mode__q) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 2U;
                } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_pd_ctl_lp_mode__q) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 6U;
                } else if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_pd_ctl_lp_mode__q)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 0x0cU;
                }
            }
        }
    } else if (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__trigger_q)) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_en_ctl_adc_enable__q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_d = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__aon_fsm_trans = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o)))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__ld_match = 1U;
                            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__stay_match)))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_clr = 1U;
                            }
                            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__stay_match) {
                                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_q) 
                                     < (0x0000ffffU 
                                        & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_sample_ctl__q) 
                                           - (IData)(1U))))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_en = 1U;
                                } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_q) 
                                            == (0x0000ffffU 
                                                & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_sample_ctl__q) 
                                                   - (IData)(1U))))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_en = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o)))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__ld_match = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__fsm_state_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_val_o)))) {
                            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__stay_match) {
                                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_q) 
                                     >= (0x000000ffU 
                                         & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_lp_sample_ctl__q) 
                                            - (IData)(1U))))) {
                                    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_q) 
                                         == (0x000000ffU 
                                             & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_lp_sample_ctl__q) 
                                                - (IData)(1U))))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_clr = 1U;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__aon_fsm_trans = 1U;
                                    }
                                }
                                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_q) 
                                     < (0x000000ffU 
                                        & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_adc_lp_sample_ctl__q) 
                                           - (IData)(1U))))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_en = 1U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_clr = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__chn0_val_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__chn0_val_we_d)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_o)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__chn0_val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__chn1_val_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__chn1_val_we_d)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT____Vcellout__u_ast__adc_d_o)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__chn1_val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_d 
        = (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__np_sample_cnt_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_d 
        = (0x000000ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_fsm__DOT__lp_sample_cnt_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__aon_reqs 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__aon_fsm_trans) 
            << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__aon_filter_match_i));
}

void Vsim___024root___nba_sequent__TOP__214(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__214\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__usb_clk_en_q 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni) 
           && ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__fsm_invalid_q) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__clk_active)
                   ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_usb_clk_en_active)
                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__usb_clk_en_lp))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__pd_nq 
        = ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni))) 
           || (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__pd_nd));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__clk_active = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__usb_clk_en_lp 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_main_pd_n) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_usb_clk_en_lp));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__all_clks_invalid 
        = (1U & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_ast) 
                      >> 3U)) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__core_clk_en)) 
                 & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_ast) 
                         >> 2U)) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__io_clk_en)) 
                    & ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_ast) 
                           >> 1U)) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__usb_clk_en_lp)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__fsm_invalid_q 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__fsm_invalid_d));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_scdc_sync__DOT__src_pulse_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_usb_clk_en_active 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_control_usb_clk_en_active__q;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_usb_clk_en_active = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__pd_nd 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__pd_nq;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__pwr_clamp_env_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__pwr_clamp_env_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_scdc_sync__DOT__src_pulse_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_slow_cdc_sync__DOT__dst_level_q) 
           ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_slow_cdc_sync__DOT__prim_flop_2sync.q_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__fsm_invalid_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__fsm_invalid_q;
    if ((1U & (~ ((((((((0x0022U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw)) 
                        | (0x02c7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x01afU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x0191U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
                     | (0x02bcU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x00daU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x03e0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
                  | (0x0075U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw)))))) {
        if ((0x037bU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x014cU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x0209U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__fsm_invalid_d = 1U;
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw;
    if (((((((((0x0022U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw)) 
               | (0x02c7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
              | (0x01afU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
             | (0x0191U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
            | (0x02bcU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
           | (0x00daU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
          | (0x03e0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) 
         | (0x0075U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x0022U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x02c7U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x01afU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x0191U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__clk_active = 1U;
                    }
                }
                if ((0x01afU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__pd_nd = 1U;
                    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_main_pok_sync.q_o) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__pwr_clamp_env_d = 0U;
                    }
                }
            }
        }
        if ((0x0022U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d = 0x01afU;
        } else if ((0x02c7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT____VdfgRegularize_hbdf05dc4_0_0)) 
                 | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT____VdfgRegularize_hbdf05dc4_0_1)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d = 0x01afU;
            }
        } else if ((0x01afU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_main_pok_sync.q_o) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d = 0x0191U;
            }
        } else if ((0x0191U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d = 0x02bcU;
        } else if ((0x02bcU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(((0x0cU == (0x0cU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_ast))) 
                               & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_usb_clk_en_active)) 
                                  | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_ast) 
                                     >> 1U)))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d = 0x00daU;
            }
        } else if ((0x00daU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_ack_pwrup_sync.q_o) 
                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_req_pwrdn_sync.q_o)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d = 0x03e0U;
            }
        } else if ((0x03e0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_req_pwrdn_sync.q_o) 
                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_ack_pwrup_sync.q_o)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d = 0x0075U;
            }
        } else if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_cdc__DOT__u_req_pwrdn_sync.q_o)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d = 0x037bU;
        }
    } else {
        if ((0x037bU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x014cU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__pd_nd 
                    = ((0x0209U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw)) 
                       && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_main_pd_n));
            }
        }
        if ((0x037bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__all_clks_invalid) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__pwr_clamp_env_d 
                    = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_main_pd_n)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d = 0x014cU;
            }
        } else if ((0x014cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d = 0x0209U;
        } else if ((0x0209U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__u_main_pok_sync.q_o)) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__slow_main_pd_n)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__state_d = 0x02c7U;
            }
        }
    }
}

void Vsim___024root___nba_sequent__TOP__215(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__215\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__385__Vfuncout;
    __Vfunc_mubi4_test_true_strict__385__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__385__val;
    __Vfunc_mubi4_test_true_strict__385__val = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div4_div__DOT__gen_generic__DOT__u_impl_generic__DOT__step_down_req 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellinp__u_no_scan_io_div4_div__test_en_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellinp__u_no_scan_io_div4_div__step_down_req_i));
    __Vfunc_mubi4_test_true_strict__385__val = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync.mubi_o;
    __Vfunc_mubi4_test_true_strict__385__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__385__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellinp__u_no_scan_io_div2_div__step_down_req_i 
        = __Vfunc_mubi4_test_true_strict__385__Vfuncout;
}

void Vsim___024root___nba_comb__TOP__149(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__149\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_20;
    VlWide<7>/*223:0*/ __Vtemp_34;
    VlWide<8>/*255:0*/ __Vtemp_50;
    VlWide<10>/*319:0*/ __Vtemp_74;
    VlWide<11>/*351:0*/ __Vtemp_88;
    VlWide<12>/*383:0*/ __Vtemp_104;
    VlWide<13>/*415:0*/ __Vtemp_116;
    VlWide<14>/*447:0*/ __Vtemp_130;
    VlWide<15>/*479:0*/ __Vtemp_146;
    VlWide<17>/*543:0*/ __Vtemp_170;
    VlWide<18>/*575:0*/ __Vtemp_184;
    VlWide<19>/*607:0*/ __Vtemp_200;
    VlWide<20>/*639:0*/ __Vtemp_212;
    VlWide<21>/*671:0*/ __Vtemp_226;
    VlWide<22>/*703:0*/ __Vtemp_242;
    VlWide<24>/*767:0*/ __Vtemp_266;
    VlWide<25>/*799:0*/ __Vtemp_280;
    VlWide<26>/*831:0*/ __Vtemp_296;
    VlWide<27>/*863:0*/ __Vtemp_308;
    VlWide<28>/*895:0*/ __Vtemp_322;
    VlWide<29>/*927:0*/ __Vtemp_338;
    VlWide<31>/*991:0*/ __Vtemp_362;
    VlWide<32>/*1023:0*/ __Vtemp_376;
    // Body
    __Vtemp_1[0U] = (0xaaaaaaaaU | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_7__DOT__de) 
                                         << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_6__DOT__de) 
                                                   << 4U)) 
                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_5__DOT__de) 
                                           << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_4__DOT__de))) 
                                      << 0x00000018U) 
                                     | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_3__DOT__de) 
                                           << 6U) | 
                                          ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_2__DOT__de) 
                                           << 4U)) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_1__DOT__de) 
                                             << 2U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_0__DOT__de))) 
                                        << 0x00000010U)) 
                                    | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____Vcellout__gen_wkup_detect__BRA__7__KET____DOT__u_pinmux_wkup__aon_wkup_pulse_o) 
                                           << 6U) | 
                                          ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____Vcellout__gen_wkup_detect__BRA__6__KET____DOT__u_pinmux_wkup__aon_wkup_pulse_o) 
                                           << 4U)) 
                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____Vcellout__gen_wkup_detect__BRA__5__KET____DOT__u_pinmux_wkup__aon_wkup_pulse_o) 
                                             << 2U) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____Vcellout__gen_wkup_detect__BRA__4__KET____DOT__u_pinmux_wkup__aon_wkup_pulse_o))) 
                                        << 8U) | ((
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____Vcellout__gen_wkup_detect__BRA__3__KET____DOT__u_pinmux_wkup__aon_wkup_pulse_o) 
                                                    << 6U) 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____Vcellout__gen_wkup_detect__BRA__2__KET____DOT__u_pinmux_wkup__aon_wkup_pulse_o) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____Vcellout__gen_wkup_detect__BRA__1__KET____DOT__u_pinmux_wkup__aon_wkup_pulse_o) 
                                                      << 2U) 
                                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____Vcellout__gen_wkup_detect__BRA__0__KET____DOT__u_pinmux_wkup__aon_wkup_pulse_o))))));
    __Vtemp_1[1U] = (IData)((((QData)((IData)((0xaaaaaaaaU 
                                               | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_23__DOT__de) 
                                                       << 6U) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_22__DOT__de) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_21__DOT__de) 
                                                         << 2U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_20__DOT__de))) 
                                                    << 0x00000018U) 
                                                   | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_19__DOT__de) 
                                                         << 6U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_18__DOT__de) 
                                                           << 4U)) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_17__DOT__de) 
                                                           << 2U) 
                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_16__DOT__de))) 
                                                      << 0x00000010U)) 
                                                  | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_15__DOT__de) 
                                                         << 6U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_14__DOT__de) 
                                                           << 4U)) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_13__DOT__de) 
                                                           << 2U) 
                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_12__DOT__de))) 
                                                      << 8U) 
                                                     | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_11__DOT__de) 
                                                          << 6U) 
                                                         | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_10__DOT__de) 
                                                            << 4U)) 
                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_9__DOT__de) 
                                                            << 2U) 
                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_8__DOT__de)))))))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                (0xaaaaaaaaU 
                                                                 | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_7__DOT__de) 
                                                                         << 6U) 
                                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_6__DOT__de) 
                                                                           << 4U)) 
                                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_5__DOT__de) 
                                                                           << 2U) 
                                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_4__DOT__de))) 
                                                                      << 0x00000018U) 
                                                                     | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_3__DOT__de) 
                                                                           << 6U) 
                                                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_2__DOT__de) 
                                                                             << 4U)) 
                                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_1__DOT__de) 
                                                                             << 2U) 
                                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__de))) 
                                                                        << 0x00000010U)) 
                                                                    | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_15__DOT__de) 
                                                                           << 6U) 
                                                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_14__DOT__de) 
                                                                             << 4U)) 
                                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_13__DOT__de) 
                                                                             << 2U) 
                                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_12__DOT__de))) 
                                                                        << 8U) 
                                                                       | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_11__DOT__de) 
                                                                            << 6U) 
                                                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_10__DOT__de) 
                                                                              << 4U)) 
                                                                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_9__DOT__de) 
                                                                              << 2U) 
                                                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_8__DOT__de))))))))));
    __Vtemp_1[2U] = (IData)(((((QData)((IData)((0xaaaaaaaaU 
                                                | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_23__DOT__de) 
                                                        << 6U) 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_22__DOT__de) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_21__DOT__de) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_20__DOT__de))) 
                                                     << 0x00000018U) 
                                                    | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_19__DOT__de) 
                                                          << 6U) 
                                                         | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_18__DOT__de) 
                                                            << 4U)) 
                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_17__DOT__de) 
                                                            << 2U) 
                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_16__DOT__de))) 
                                                       << 0x00000010U)) 
                                                   | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_15__DOT__de) 
                                                          << 6U) 
                                                         | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_14__DOT__de) 
                                                            << 4U)) 
                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_13__DOT__de) 
                                                            << 2U) 
                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_12__DOT__de))) 
                                                       << 8U) 
                                                      | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_11__DOT__de) 
                                                           << 6U) 
                                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_10__DOT__de) 
                                                             << 4U)) 
                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_9__DOT__de) 
                                                             << 2U) 
                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_8__DOT__de)))))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (0xaaaaaaaaU 
                                                                  | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_7__DOT__de) 
                                                                          << 6U) 
                                                                         | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_6__DOT__de) 
                                                                            << 4U)) 
                                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_5__DOT__de) 
                                                                            << 2U) 
                                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_4__DOT__de))) 
                                                                       << 0x00000018U) 
                                                                      | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_3__DOT__de) 
                                                                            << 6U) 
                                                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_2__DOT__de) 
                                                                              << 4U)) 
                                                                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_1__DOT__de) 
                                                                              << 2U) 
                                                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_0__DOT__de))) 
                                                                         << 0x00000010U)) 
                                                                     | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_15__DOT__de) 
                                                                            << 6U) 
                                                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_14__DOT__de) 
                                                                              << 4U)) 
                                                                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_13__DOT__de) 
                                                                              << 2U) 
                                                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_12__DOT__de))) 
                                                                         << 8U) 
                                                                        | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_11__DOT__de) 
                                                                             << 6U) 
                                                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_10__DOT__de) 
                                                                               << 4U)) 
                                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_9__DOT__de) 
                                                                               << 2U) 
                                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_dio_pad_sleep_status_en_8__DOT__de))))))))) 
                             >> 0x00000020U));
    __Vtemp_2[3U] = (IData)((((QData)((IData)((0x00002aaaU 
                                               | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_46__DOT__de) 
                                                      << 5U) 
                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_45__DOT__de) 
                                                        << 3U)) 
                                                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_44__DOT__de) 
                                                       << 1U)) 
                                                   << 7U) 
                                                  | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_43__DOT__de) 
                                                       << 6U) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_42__DOT__de) 
                                                         << 4U)) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_41__DOT__de) 
                                                         << 2U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_40__DOT__de))))))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                (0xaaaaaaaaU 
                                                                 | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_39__DOT__de) 
                                                                         << 6U) 
                                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_38__DOT__de) 
                                                                           << 4U)) 
                                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_37__DOT__de) 
                                                                           << 2U) 
                                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_36__DOT__de))) 
                                                                      << 0x00000018U) 
                                                                     | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_35__DOT__de) 
                                                                           << 6U) 
                                                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_34__DOT__de) 
                                                                             << 4U)) 
                                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_33__DOT__de) 
                                                                             << 2U) 
                                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__de))) 
                                                                        << 0x00000010U)) 
                                                                    | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_31__DOT__de) 
                                                                           << 6U) 
                                                                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_30__DOT__de) 
                                                                             << 4U)) 
                                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_29__DOT__de) 
                                                                             << 2U) 
                                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_28__DOT__de))) 
                                                                        << 8U) 
                                                                       | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_27__DOT__de) 
                                                                            << 6U) 
                                                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_26__DOT__de) 
                                                                              << 4U)) 
                                                                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_25__DOT__de) 
                                                                              << 2U) 
                                                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_24__DOT__de))))))))));
    __Vtemp_2[4U] = (IData)(((((QData)((IData)((0x00002aaaU 
                                                | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_46__DOT__de) 
                                                       << 5U) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_45__DOT__de) 
                                                         << 3U)) 
                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_44__DOT__de) 
                                                        << 1U)) 
                                                    << 7U) 
                                                   | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_43__DOT__de) 
                                                        << 6U) 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_42__DOT__de) 
                                                          << 4U)) 
                                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_41__DOT__de) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_40__DOT__de))))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (0xaaaaaaaaU 
                                                                  | (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_39__DOT__de) 
                                                                          << 6U) 
                                                                         | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_38__DOT__de) 
                                                                            << 4U)) 
                                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_37__DOT__de) 
                                                                            << 2U) 
                                                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_36__DOT__de))) 
                                                                       << 0x00000018U) 
                                                                      | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_35__DOT__de) 
                                                                            << 6U) 
                                                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_34__DOT__de) 
                                                                              << 4U)) 
                                                                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_33__DOT__de) 
                                                                              << 2U) 
                                                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_1_en_32__DOT__de))) 
                                                                         << 0x00000010U)) 
                                                                     | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_31__DOT__de) 
                                                                            << 6U) 
                                                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_30__DOT__de) 
                                                                              << 4U)) 
                                                                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_29__DOT__de) 
                                                                              << 2U) 
                                                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_28__DOT__de))) 
                                                                         << 8U) 
                                                                        | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_27__DOT__de) 
                                                                             << 6U) 
                                                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_26__DOT__de) 
                                                                               << 4U)) 
                                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_25__DOT__de) 
                                                                               << 2U) 
                                                                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__u_mio_pad_sleep_status_0_en_24__DOT__de))))))))) 
                             >> 0x00000020U));
    __Vtemp_20[5U] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                               >> 0x0000001bU)) | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                                                      >> 0x0000001dU))) 
                       << 0x00000016U) | ((0x00200000U 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                                              >> 9U)) 
                                          | ((0x00100000U 
                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                                                 >> 0x0000000bU)) 
                                             | ((0x00010000U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[1U] 
                                                    << 0x0000000dU)) 
                                                | ((((2U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                                                         >> 0x0000000dU)) 
                                                     | (1U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                                                           >> 0x0000000fU))) 
                                                    << 8U) 
                                                   | ((0x00000080U 
                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                                                          >> 9U)) 
                                                      | ((0x00000040U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                                                             >> 0x0000000bU)) 
                                                         | (4U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                                                               >> 0x00000013U)))))))));
    __Vtemp_34[6U] = ((0x04000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[2U] 
                                      << 0x0000000dU)) 
                      | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[1U] 
                                  >> 0x00000017U)) 
                           | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[1U] 
                                    >> 0x00000019U))) 
                          << 0x00000012U) | ((0x00020000U 
                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[1U] 
                                                 >> 9U)) 
                                             | ((0x00010000U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[1U] 
                                                    >> 0x0000000bU)) 
                                                | ((0x00001000U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[1U] 
                                                       >> 0x00000013U)) 
                                                   | ((((2U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[1U] 
                                                            >> 9U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[1U] 
                                                              >> 0x0000000bU))) 
                                                       << 4U) 
                                                      | ((8U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[1U] 
                                                             >> 9U)) 
                                                         | (4U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[1U] 
                                                               >> 0x0000000bU)))))))));
    __Vtemp_50[7U] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                               >> 1U)) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                                                >> 3U))) 
                       << 0x0000001cU) | ((0x08000000U 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                                              << 0x00000017U)) 
                                          | ((0x04000000U 
                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                                                 << 0x00000015U)) 
                                             | ((0x00400000U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                                                    << 0x0000000dU)) 
                                                | ((((2U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[2U] 
                                                         >> 0x00000013U)) 
                                                     | (1U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[2U] 
                                                           >> 0x00000015U))) 
                                                    << 0x0000000eU) 
                                                   | ((0x00002000U 
                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[2U] 
                                                          >> 9U)) 
                                                      | ((0x00001000U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[2U] 
                                                             >> 0x0000000bU)) 
                                                         | ((0x00000100U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[2U] 
                                                                >> 0x00000013U)) 
                                                            | ((2U 
                                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[2U] 
                                                                   >> 5U)) 
                                                               | (1U 
                                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[2U] 
                                                                     >> 7U)))))))))));
    __Vtemp_74[9U] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                               >> 0x00000019U)) | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                                                      >> 0x0000001bU))) 
                       << 0x00000014U) | ((0x00080000U 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                                              >> 9U)) 
                                          | ((0x00040000U 
                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                                                 >> 0x0000000bU)) 
                                             | ((0x00004000U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[5U] 
                                                    << 0x0000000dU)) 
                                                | ((((2U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                                                           >> 0x0000000dU))) 
                                                    << 6U) 
                                                   | ((0x00000020U 
                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                                                          >> 9U)) 
                                                      | ((0x00000010U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                                                             >> 0x0000000bU)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                                                               >> 0x00000013U)))))))));
    __Vtemp_88[0x0000000aU] = ((0x01000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[6U] 
                                               << 0x0000000dU)) 
                               | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[5U] 
                                           >> 0x00000015U)) 
                                    | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[5U] 
                                             >> 0x00000017U))) 
                                   << 0x00000010U) 
                                  | ((0x00008000U & 
                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[5U] 
                                       >> 9U)) | ((0x00004000U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[5U] 
                                                      >> 0x0000000bU)) 
                                                  | ((0x00000400U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[5U] 
                                                         >> 0x00000013U)) 
                                                     | ((((2U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[5U] 
                                                              >> 7U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[5U] 
                                                                >> 9U))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[5U] 
                                                               >> 9U)) 
                                                           | (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[5U] 
                                                                 >> 0x0000000bU)))))))));
    __Vtemp_104[0x0000000bU] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                         << 1U)) | 
                                  (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                         >> 1U))) << 0x0000001aU) 
                                | ((0x02000000U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                                   << 0x00000017U)) 
                                   | ((0x01000000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                          << 0x00000015U)) 
                                      | ((0x00100000U 
                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                             << 0x0000000dU)) 
                                         | ((((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[6U] 
                                                >> 0x00000011U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[6U] 
                                                    >> 0x00000013U))) 
                                             << 0x0000000cU) 
                                            | ((0x00000800U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[6U] 
                                                   >> 9U)) 
                                               | ((0x00000400U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[6U] 
                                                      >> 0x0000000bU)) 
                                                  | (0x00000040U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[6U] 
                                                        >> 0x00000013U)))))))));
    __Vtemp_116[0x0000000cU] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                         >> 0x0000001bU)) 
                                  | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                           >> 0x0000001dU))) 
                                 << 0x00000016U) | 
                                ((0x00200000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                                 >> 9U)) 
                                 | ((0x00100000U & 
                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                      >> 0x0000000bU)) 
                                    | ((0x00010000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                           << 0x0000000dU)) 
                                       | ((((2U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                                   >> 0x0000000dU)) 
                                            | (1U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                                >> 0x0000000fU))) 
                                           << 8U) | 
                                          ((0x00000080U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                               >> 9U)) 
                                           | ((0x00000040U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                                  >> 0x0000000bU)) 
                                              | (4U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0U] 
                                                    >> 0x00000013U)))))))));
    __Vtemp_130[0x0000000dU] = ((0x04000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                << 0x0000000dU)) 
                                | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                            >> 0x00000017U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                              >> 0x00000019U))) 
                                    << 0x00000012U) 
                                   | ((0x00020000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                          >> 9U)) | 
                                      ((0x00010000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                           >> 0x0000000bU)) 
                                       | ((0x00001000U 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                              >> 0x00000013U)) 
                                          | ((((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                                   >> 9U)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                                     >> 0x0000000bU))) 
                                              << 4U) 
                                             | ((8U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                                    >> 9U)) 
                                                | (4U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                                                      >> 0x0000000bU)))))))));
    __Vtemp_146[0x0000000eU] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                         >> 1U)) | 
                                  (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                         >> 3U))) << 0x0000001cU) 
                                | ((0x08000000U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                   << 0x00000017U)) 
                                   | ((0x04000000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                          << 0x00000015U)) 
                                      | ((0x00400000U 
                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                             << 0x0000000dU)) 
                                         | ((((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                >> 0x00000013U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                    >> 0x00000015U))) 
                                             << 0x0000000eU) 
                                            | ((0x00002000U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                   >> 9U)) 
                                               | ((0x00001000U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                      >> 0x0000000bU)) 
                                                  | ((0x00000100U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                         >> 0x00000013U)) 
                                                     | ((2U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                              >> 7U)))))))))));
    __Vtemp_170[0x00000010U] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                         >> 0x00000019U)) 
                                  | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                           >> 0x0000001bU))) 
                                 << 0x00000014U) | 
                                ((0x00080000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                 >> 9U)) 
                                 | ((0x00040000U & 
                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                      >> 0x0000000bU)) 
                                    | ((0x00004000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                           << 0x0000000dU)) 
                                       | ((((2U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                   >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                >> 0x0000000dU))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                               >> 9U)) 
                                           | ((0x00000010U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                  >> 0x0000000bU)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                    >> 0x00000013U)))))))));
    __Vtemp_184[0x00000011U] = ((0x01000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[6U] 
                                                << 0x0000000dU)) 
                                | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                            >> 0x00000015U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                              >> 0x00000017U))) 
                                    << 0x00000010U) 
                                   | ((0x00008000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                          >> 9U)) | 
                                      ((0x00004000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                           >> 0x0000000bU)) 
                                       | ((0x00000400U 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                              >> 0x00000013U)) 
                                          | ((((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                                   >> 7U)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                                     >> 9U))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                                    >> 9U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                                                      >> 0x0000000bU)))))))));
    __Vtemp_200[0x00000012U] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                         << 1U)) | 
                                  (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                         >> 1U))) << 0x0000001aU) 
                                | ((0x02000000U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                                   << 0x00000017U)) 
                                   | ((0x01000000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                          << 0x00000015U)) 
                                      | ((0x00100000U 
                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                             << 0x0000000dU)) 
                                         | ((((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[6U] 
                                                >> 0x00000011U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[6U] 
                                                    >> 0x00000013U))) 
                                             << 0x0000000cU) 
                                            | ((0x00000800U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[6U] 
                                                   >> 9U)) 
                                               | ((0x00000400U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[6U] 
                                                      >> 0x0000000bU)) 
                                                  | (0x00000040U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[6U] 
                                                        >> 0x00000013U)))))))));
    __Vtemp_212[0x00000013U] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                         >> 0x0000001bU)) 
                                  | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                           >> 0x0000001dU))) 
                                 << 0x00000016U) | 
                                ((0x00200000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                                 >> 9U)) 
                                 | ((0x00100000U & 
                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                      >> 0x0000000bU)) 
                                    | ((0x00010000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                           << 0x0000000dU)) 
                                       | ((((2U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                                   >> 0x0000000dU)) 
                                            | (1U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                                >> 0x0000000fU))) 
                                           << 8U) | 
                                          ((0x00000080U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                               >> 9U)) 
                                           | ((0x00000040U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                                  >> 0x0000000bU)) 
                                              | (4U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[7U] 
                                                    >> 0x00000013U)))))))));
    __Vtemp_226[0x00000014U] = ((0x04000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                << 0x0000000dU)) 
                                | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                            >> 0x00000017U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                              >> 0x00000019U))) 
                                    << 0x00000012U) 
                                   | ((0x00020000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                          >> 9U)) | 
                                      ((0x00010000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                           >> 0x0000000bU)) 
                                       | ((0x00001000U 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                              >> 0x00000013U)) 
                                          | ((((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                                   >> 9U)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                                     >> 0x0000000bU))) 
                                              << 4U) 
                                             | ((8U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                                    >> 9U)) 
                                                | (4U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                                                      >> 0x0000000bU)))))))));
    __Vtemp_242[0x00000015U] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                         >> 1U)) | 
                                  (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                         >> 3U))) << 0x0000001cU) 
                                | ((0x08000000U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                   << 0x00000017U)) 
                                   | ((0x04000000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                          << 0x00000015U)) 
                                      | ((0x00400000U 
                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                             << 0x0000000dU)) 
                                         | ((((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                >> 0x00000013U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                    >> 0x00000015U))) 
                                             << 0x0000000eU) 
                                            | ((0x00002000U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                   >> 9U)) 
                                               | ((0x00001000U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                      >> 0x0000000bU)) 
                                                  | ((0x00000100U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                         >> 0x00000013U)) 
                                                     | ((2U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                              >> 7U)))))))))));
    __Vtemp_266[0x00000017U] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                         >> 0x00000019U)) 
                                  | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                           >> 0x0000001bU))) 
                                 << 0x00000014U) | 
                                ((0x00080000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                 >> 9U)) 
                                 | ((0x00040000U & 
                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                      >> 0x0000000bU)) 
                                    | ((0x00004000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                           << 0x0000000dU)) 
                                       | ((((2U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                   >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                >> 0x0000000dU))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                               >> 9U)) 
                                           | ((0x00000010U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                  >> 0x0000000bU)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                    >> 0x00000013U)))))))));
    __Vtemp_280[0x00000018U] = ((0x01000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000dU] 
                                                << 0x0000000dU)) 
                                | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                            >> 0x00000015U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                              >> 0x00000017U))) 
                                    << 0x00000010U) 
                                   | ((0x00008000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                          >> 9U)) | 
                                      ((0x00004000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                           >> 0x0000000bU)) 
                                       | ((0x00000400U 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                              >> 0x00000013U)) 
                                          | ((((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                                   >> 7U)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                                     >> 9U))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                                    >> 9U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                                                      >> 0x0000000bU)))))))));
    __Vtemp_296[0x00000019U] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                         << 1U)) | 
                                  (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                         >> 1U))) << 0x0000001aU) 
                                | ((0x02000000U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                                   << 0x00000017U)) 
                                   | ((0x01000000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                          << 0x00000015U)) 
                                      | ((0x00100000U 
                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                             << 0x0000000dU)) 
                                         | ((((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000dU] 
                                                >> 0x00000011U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000dU] 
                                                    >> 0x00000013U))) 
                                             << 0x0000000cU) 
                                            | ((0x00000800U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000dU] 
                                                   >> 9U)) 
                                               | ((0x00000400U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000dU] 
                                                      >> 0x0000000bU)) 
                                                  | (0x00000040U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000dU] 
                                                        >> 0x00000013U)))))))));
    __Vtemp_308[0x0000001aU] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                         >> 0x0000001bU)) 
                                  | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                           >> 0x0000001dU))) 
                                 << 0x00000016U) | 
                                ((0x00200000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                                 >> 9U)) 
                                 | ((0x00100000U & 
                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                      >> 0x0000000bU)) 
                                    | ((0x00010000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                           << 0x0000000dU)) 
                                       | ((((2U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                                   >> 0x0000000dU)) 
                                            | (1U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                                >> 0x0000000fU))) 
                                           << 8U) | 
                                          ((0x00000080U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                               >> 9U)) 
                                           | ((0x00000040U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                                  >> 0x0000000bU)) 
                                              | (4U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000eU] 
                                                    >> 0x00000013U)))))))));
    __Vtemp_322[0x0000001bU] = ((0x04000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000010U] 
                                                << 0x0000000dU)) 
                                | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                            >> 0x00000017U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                              >> 0x00000019U))) 
                                    << 0x00000012U) 
                                   | ((0x00020000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                          >> 9U)) | 
                                      ((0x00010000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                           >> 0x0000000bU)) 
                                       | ((0x00001000U 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                              >> 0x00000013U)) 
                                          | ((((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                                   >> 9U)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                                     >> 0x0000000bU))) 
                                              << 4U) 
                                             | ((8U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                                    >> 9U)) 
                                                | (4U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                                                      >> 0x0000000bU)))))))));
    __Vtemp_338[0x0000001cU] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                                         >> 1U)) | 
                                  (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                                         >> 3U))) << 0x0000001cU) 
                                | ((0x08000000U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                                                   << 0x00000017U)) 
                                   | ((0x04000000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                                          << 0x00000015U)) 
                                      | ((0x00400000U 
                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                                             << 0x0000000dU)) 
                                         | ((((2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000010U] 
                                                >> 0x00000013U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000010U] 
                                                    >> 0x00000015U))) 
                                             << 0x0000000eU) 
                                            | ((0x00002000U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000010U] 
                                                   >> 9U)) 
                                               | ((0x00001000U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000010U] 
                                                      >> 0x0000000bU)) 
                                                  | ((0x00000100U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000010U] 
                                                         >> 0x00000013U)) 
                                                     | ((2U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000010U] 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000010U] 
                                                              >> 7U)))))))))));
    __Vtemp_362[0x0000001eU] = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                         >> 0x00000019U)) 
                                  | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                           >> 0x0000001bU))) 
                                 << 0x00000014U) | 
                                ((0x00080000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                                 >> 9U)) 
                                 | ((0x00040000U & 
                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                      >> 0x0000000bU)) 
                                    | ((0x00004000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000013U] 
                                           << 0x0000000dU)) 
                                       | ((((2U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                                   >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                                >> 0x0000000dU))) 
                                           << 6U) | 
                                          ((0x00000020U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                               >> 9U)) 
                                           | ((0x00000010U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                                  >> 0x0000000bU)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                                    >> 0x00000013U)))))))));
    __Vtemp_376[0x0000001fU] = ((0x01000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000014U] 
                                                << 0x0000000dU)) 
                                | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000013U] 
                                            >> 0x00000015U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000013U] 
                                              >> 0x00000017U))) 
                                    << 0x00000010U) 
                                   | ((0x00008000U 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000013U] 
                                          >> 9U)) | 
                                      ((0x00004000U 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000013U] 
                                           >> 0x0000000bU)) 
                                       | ((0x00000400U 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000013U] 
                                              >> 0x00000013U)) 
                                          | ((((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000013U] 
                                                   >> 7U)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000013U] 
                                                     >> 9U))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000013U] 
                                                    >> 9U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000013U] 
                                                      >> 0x0000000bU)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0U] 
        = __Vtemp_1[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[4U] 
        = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                    << 1U)) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                                     >> 1U))) << 0x0000001aU) 
           | ((0x02000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                              << 0x00000017U)) | ((0x01000000U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                                                      << 0x00000015U)) 
                                                  | ((0x00100000U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[0U] 
                                                         << 0x0000000dU)) 
                                                     | __Vtemp_2[4U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[5U] 
        = ((0x40000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[1U] 
                           << 0x0000000dU)) | __Vtemp_20[5U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[6U] 
        = ((0x80000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[2U] 
                           << 0x00000017U)) | ((0x40000000U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[2U] 
                                                   << 0x00000015U)) 
                                               | __Vtemp_34[6U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[7U] 
        = __Vtemp_50[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[8U] 
        = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                    >> 0x0000001dU)) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                                        >> 0x0000001fU)) 
            << 0x00000018U) | ((0x00800000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                                               << 0x00000017U)) 
                               | ((0x00400000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                                                  << 0x00000015U)) 
                                  | ((0x00040000U & 
                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[4U] 
                                       << 0x0000000dU)) 
                                     | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                                                 >> 0x0000000fU)) 
                                          | (1U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                                                   >> 0x00000011U))) 
                                         << 0x0000000aU) 
                                        | ((0x00000200U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                                               >> 9U)) 
                                           | ((0x00000100U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                                                  >> 0x0000000bU)) 
                                              | (0x00000010U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[3U] 
                                                    >> 0x00000013U)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[9U] 
        = ((0x10000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[5U] 
                           << 0x0000000dU)) | __Vtemp_74[9U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000000aU] 
        = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[6U] 
                    >> 3U)) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[6U] 
                                     >> 5U))) << 0x0000001eU) 
           | ((0x20000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[6U] 
                              << 0x00000017U)) | ((0x10000000U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_pad_attr_q[6U] 
                                                      << 0x00000015U)) 
                                                  | __Vtemp_88[0x0000000aU])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000000bU] 
        = __Vtemp_104[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000000cU] 
        = ((0x40000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[1U] 
                           << 0x0000000dU)) | __Vtemp_116[0x0000000cU]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000000dU] 
        = ((0x80000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                           << 0x00000017U)) | ((0x40000000U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[2U] 
                                                   << 0x00000015U)) 
                                               | __Vtemp_130[0x0000000dU]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000000eU] 
        = __Vtemp_146[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000000fU] 
        = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                    >> 0x0000001dU)) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                        >> 0x0000001fU)) 
            << 0x00000018U) | ((0x00800000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                               << 0x00000017U)) 
                               | ((0x00400000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                                  << 0x00000015U)) 
                                  | ((0x00040000U & 
                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[4U] 
                                       << 0x0000000dU)) 
                                     | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                 >> 0x0000000fU)) 
                                          | (1U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                   >> 0x00000011U))) 
                                         << 0x0000000aU) 
                                        | ((0x00000200U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                               >> 9U)) 
                                           | ((0x00000100U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                  >> 0x0000000bU)) 
                                              | (0x00000010U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[3U] 
                                                    >> 0x00000013U)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x00000010U] 
        = ((0x10000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[5U] 
                           << 0x0000000dU)) | __Vtemp_170[0x00000010U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x00000011U] 
        = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[6U] 
                    >> 3U)) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[6U] 
                                     >> 5U))) << 0x0000001eU) 
           | ((0x20000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[6U] 
                              << 0x00000017U)) | ((0x10000000U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[6U] 
                                                      << 0x00000015U)) 
                                                  | __Vtemp_184[0x00000011U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x00000012U] 
        = __Vtemp_200[0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x00000013U] 
        = ((0x40000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[8U] 
                           << 0x0000000dU)) | __Vtemp_212[0x00000013U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x00000014U] 
        = ((0x80000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                           << 0x00000017U)) | ((0x40000000U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[9U] 
                                                   << 0x00000015U)) 
                                               | __Vtemp_226[0x00000014U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x00000015U] 
        = __Vtemp_242[0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x00000016U] 
        = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                    >> 0x0000001dU)) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                        >> 0x0000001fU)) 
            << 0x00000018U) | ((0x00800000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                               << 0x00000017U)) 
                               | ((0x00400000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                                  << 0x00000015U)) 
                                  | ((0x00040000U & 
                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000bU] 
                                       << 0x0000000dU)) 
                                     | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                 >> 0x0000000fU)) 
                                          | (1U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                   >> 0x00000011U))) 
                                         << 0x0000000aU) 
                                        | ((0x00000200U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                               >> 9U)) 
                                           | ((0x00000100U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                  >> 0x0000000bU)) 
                                              | (0x00000010U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000aU] 
                                                    >> 0x00000013U)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x00000017U] 
        = ((0x10000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000cU] 
                           << 0x0000000dU)) | __Vtemp_266[0x00000017U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x00000018U] 
        = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000dU] 
                    >> 3U)) | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000dU] 
                                     >> 5U))) << 0x0000001eU) 
           | ((0x20000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000dU] 
                              << 0x00000017U)) | ((0x10000000U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000dU] 
                                                      << 0x00000015U)) 
                                                  | __Vtemp_280[0x00000018U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x00000019U] 
        = __Vtemp_296[0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000001aU] 
        = ((0x40000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x0000000fU] 
                           << 0x0000000dU)) | __Vtemp_308[0x0000001aU]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000001bU] 
        = ((0x80000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000010U] 
                           << 0x00000017U)) | ((0x40000000U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000010U] 
                                                   << 0x00000015U)) 
                                               | __Vtemp_322[0x0000001bU]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000001cU] 
        = __Vtemp_338[0x0000001cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000001dU] 
        = ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                    >> 0x0000001dU)) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                                        >> 0x0000001fU)) 
            << 0x00000018U) | ((0x00800000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                               << 0x00000017U)) 
                               | ((0x00400000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                                  << 0x00000015U)) 
                                  | ((0x00040000U & 
                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000012U] 
                                       << 0x0000000dU)) 
                                     | ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                                                 >> 0x0000000fU)) 
                                          | (1U & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                                                   >> 0x00000011U))) 
                                         << 0x0000000aU) 
                                        | ((0x00000200U 
                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                                               >> 9U)) 
                                           | ((0x00000100U 
                                               & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                                                  >> 0x0000000bU)) 
                                              | (0x00000010U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000011U] 
                                                    >> 0x00000013U)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000001eU] 
        = ((0x10000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000013U] 
                           << 0x0000000dU)) | __Vtemp_362[0x0000001eU]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000001fU] 
        = ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000001fU]) 
           | __Vtemp_376[0x0000001fU]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000001fU] 
        = ((0x0fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT__hw2reg[0x0000001fU]) 
           | (0xf0000000U & ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000014U] 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000014U] 
                                                    >> 5U))) 
                              << 0x0000001eU) | (((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000014U] 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__mio_pad_attr_q[0x00000014U] 
                                                        >> 7U))) 
                                                 << 0x0000001cU))));
}

void Vsim___024root___nba_comb__TOP__150(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__150\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__pwrb_int_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_pwrb_in__q) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__cio_pwrb_in_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key0_int_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_key0_in__q) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__cio_key0_in_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key1_int_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_key1_in__q) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__cio_key1_in_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key2_int_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_invert_ctl_key2_in__q) 
           ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__cio_key2_in_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__pwrb_out_int_o 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_pwrb_out__q) 
               & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_pwrb_out__q)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_pwrb_out_0__q)))) 
           & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_pwrb_out__q) 
               & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_pwrb_out_1__q) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_pwrb_out__q))) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__pwrb_int_i)));
}

void Vsim___024root___nba_sequent__TOP__216(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__216\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync.rst_ni) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_control_core_clk_en__DOT__we) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_control_usb_clk_en_active__q 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT__u_control_usb_clk_en_active__DOT__wr_data;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_control_usb_clk_en_active__q = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__ip_clk_en_q 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync.rst_ni) 
           && (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__ip_clk_en_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__pwr_i 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__ip_clk_en_q) 
            << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT__ip_clk_en_q) 
                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_fsm__DOT____Vcellout__u_usb_ip_clk_en__q_o)));
}

void Vsim___024root___nba_sequent__TOP__217(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__217\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__por_sync_n 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_aon_clk__DOT__u_no_scan_val_sync.rst_ni) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_no_scan_poks_por_dasrt.q_o));
}

void Vsim___024root___nba_sequent__TOP__218(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__218\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rglts_pdm_3p3v__DOT__vcc_pok_fe_h 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rglts_pdm_3p3v__DOT__vcc_pok_str_no_scan_h__BRA__3__KET__) 
           && (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_all_clk_byp_req.rst_ni));
}

void Vsim___024root___nba_comb__TOP__151(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__151\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                                                : 0U))) 
                              << 0x00000018U) | (QData)((IData)(
                                                                ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                    ? 
                                                                   ((0x007fff80U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
                                                                    | (((((2U 
                                                                           & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                         << 5U) 
                                                                        | (((2U 
                                                                             & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                           << 3U)) 
                                                                       | ((4U 
                                                                           & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                              << 2U)) 
                                                                          | ((2U 
                                                                              & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))))
                                                                    : 0U) 
                                                                  << 1U) 
                                                                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1717))))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((0x00010000U 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                       ? 0U
                                                       : 4U) 
                                                     << 0x0000000dU) 
                                                    | ((0x00001c00U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                           << 5U)) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                             ? 2U
                                                             : 
                                                            (3U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                >> 3U))) 
                                                           << 8U) 
                                                          | (0x000000ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                 << 5U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                   >> 0x0000001bU))))))))) 
                                << 0x00000024U) | (
                                                   ((QData)((IData)(
                                                                    ((0xfffffffcU 
                                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                          << 5U) 
                                                                         | (0x0000001cU 
                                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                               >> 0x0000001bU)))) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                         ? 0U
                                                                         : 
                                                                        (3U 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                            >> 0x0000001bU)))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                       ? 0x0000000fU
                                                                       : 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                          >> 0x00000017U)))))))) 
                      << 0x00000018U) | (IData)(((((QData)((IData)(
                                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                     ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                                                                     : 0U))) 
                                                   << 0x00000018U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                        ? 
                                                                       ((0x007fff80U 
                                                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
                                                                        | (((((2U 
                                                                               & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                             << 5U) 
                                                                            | (((2U 
                                                                                & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))))
                                                                        : 0U) 
                                                                      << 1U) 
                                                                     | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1717))))) 
                                                 >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)((0x00010000U 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                       ? 0U
                                                       : 4U) 
                                                     << 0x0000000dU) 
                                                    | ((0x00001c00U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                           << 5U)) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                             ? 2U
                                                             : 
                                                            (3U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                >> 3U))) 
                                                           << 8U) 
                                                          | (0x000000ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                 << 5U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                   >> 0x0000001bU))))))))) 
                                << 0x00000024U) | (
                                                   ((QData)((IData)(
                                                                    ((0xfffffffcU 
                                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                          << 5U) 
                                                                         | (0x0000001cU 
                                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                               >> 0x0000001bU)))) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                         ? 0U
                                                                         : 
                                                                        (3U 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                            >> 0x0000001bU)))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                       ? 0x0000000fU
                                                                       : 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                          >> 0x00000017U)))))))) 
                      >> 8U) | ((IData)(((((QData)((IData)(
                                                           (0x00010000U 
                                                            | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                  ? 0U
                                                                  : 4U) 
                                                                << 0x0000000dU) 
                                                               | ((0x00001c00U 
                                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                      << 5U)) 
                                                                  | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                        ? 2U
                                                                        : 
                                                                       (3U 
                                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                           >> 3U))) 
                                                                      << 8U) 
                                                                     | (0x000000ffU 
                                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                            << 5U) 
                                                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                              >> 0x0000001bU))))))))) 
                                           << 0x00000024U) 
                                          | (((QData)((IData)(
                                                              ((0xfffffffcU 
                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                    << 5U) 
                                                                   | (0x0000001cU 
                                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                         >> 0x0000001bU)))) 
                                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                   ? 0U
                                                                   : 
                                                                  (3U 
                                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                      >> 0x0000001bU)))))) 
                                              << 4U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                 ? 0x0000000fU
                                                                 : 
                                                                (0x0000000fU 
                                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                    >> 0x00000017U))))))) 
                                         >> 0x00000020U)) 
                                << 0x00000018U));
    __Vtemp_1[3U] = ((IData)(((((QData)((IData)((0x00010000U 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                       ? 0U
                                                       : 4U) 
                                                     << 0x0000000dU) 
                                                    | ((0x00001c00U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                           << 5U)) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                             ? 2U
                                                             : 
                                                            (3U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                >> 3U))) 
                                                           << 8U) 
                                                          | (0x000000ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                 << 5U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                   >> 0x0000001bU))))))))) 
                                << 0x00000024U) | (
                                                   ((QData)((IData)(
                                                                    ((0xfffffffcU 
                                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                          << 5U) 
                                                                         | (0x0000001cU 
                                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                               >> 0x0000001bU)))) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                         ? 0U
                                                                         : 
                                                                        (3U 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                            >> 0x0000001bU)))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                       ? 0x0000000fU
                                                                       : 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                          >> 0x00000017U))))))) 
                              >> 0x00000020U)) >> 8U);
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__compound_txn_in_progress_o) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
            = __Vtemp_1[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
            = __Vtemp_1[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
            = __Vtemp_1[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            = __Vtemp_1[3U];
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_phase) {
        if ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i)) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                = (IData)((0x0f00000000000000ULL | 
                           (0x00ffffffffffffffULL & 
                            (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[1U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[0U]))))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                = (((IData)((0x000000ffffffffffULL 
                             & (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[3U])) 
                                 << 0x00000024U) | 
                                (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[2U])) 
                                  << 4U) | ((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[1U])) 
                                            >> 0x0000001cU))))) 
                    << 0x0000001cU) | (IData)(((0x0f00000000000000ULL 
                                                | (0x00ffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[1U])) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[0U]))))) 
                                               >> 0x00000020U)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
                = (((IData)((0x000000ffffffffffULL 
                             & (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[3U])) 
                                 << 0x00000024U) | 
                                (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[2U])) 
                                  << 4U) | ((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[1U])) 
                                            >> 0x0000001cU))))) 
                    >> 4U) | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[1U])) 
                                                 >> 0x0000001cU)))) 
                                       >> 0x00000020U)) 
                              << 0x0000001cU));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                = ((0xfffffff0U & (0x00000820U | ((
                                                   ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host)) 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                       >> 0x0000000cU)) 
                                                   << 0x0000000cU) 
                                                  | (0x000001c0U 
                                                     & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])))) 
                   | ((IData)(((0x000000ffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[3U])) 
                                    << 0x00000024U) 
                                   | (((QData)((IData)(
                                                       vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[2U])) 
                                       << 4U) | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[1U])) 
                                                 >> 0x0000001cU)))) 
                               >> 0x00000020U)) >> 4U));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[3U];
        }
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            = (0x00000fffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[3U]);
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[3U];
    }
    if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__we_o 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            >> 0x0000000cU) & ((0U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                                             >> 9U))) 
                               | (1U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                                               >> 9U)))));
}

void Vsim___024root___nba_comb__TOP__152(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__152\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__gnt_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__incr_en_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__key_valid_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT____VdfgRegularize_hba58573d_0_0 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__gnt_i) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__missed_err_gnt_q)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wready_o) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sramreqfifo__DOT__wready_o)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_948[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid)
                                      ? (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid)
                                         ? (0x000000ffU 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_data)) 
                          << 0x00000010U) | (QData)((IData)(
                                                            ((((0x00004000U 
                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                                                ? 0x0000002aU
                                                                : 
                                                               ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__vld_rd_rsp)
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 1U)))
                                                                 : 0x0000002aU)) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_error) 
                                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid)) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT____VdfgRegularize_hba58573d_0_0)))))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_948[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_he50b618e_0_948[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid)
                                          ? (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid)
                                             ? (0x000000ffU 
                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_data)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                ((((0x00004000U 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o)
                                                                    ? 0x0000002aU
                                                                    : 
                                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__vld_rd_rsp)
                                                                     ? 
                                                                    (0x0000007fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rspfifo__DOT__rdata_o 
                                                                                >> 1U)))
                                                                     : 0x0000002aU)) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_error) 
                                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid)) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT____VdfgRegularize_hba58573d_0_0)))))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_948[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_948[1U]) 
           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid) 
                & (1U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                >> 0x0000000fU)))) ? 0U
                : 1U) << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_948[2U] 
        = (1U & ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid) 
                   & (1U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rdata_o 
                                   >> 0x0000000fU))))
                   ? 0U : 1U) >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_i[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_948[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_i[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_948[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_i[2U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid) 
            << 1U) | vlSelfRef.__VdfgRegularize_he50b618e_0_948[2U]);
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h6783a830_0;
extern const VlWide<20>/*639:0*/ Vsim__ConstPool__CONST_h7ca4bd95_0;
extern const VlWide<36>/*1151:0*/ Vsim__ConstPool__CONST_hb029ca01_0;
extern const VlWide<24>/*767:0*/ Vsim__ConstPool__CONST_h96a84c0e_0;

void Vsim___024root___nba_comb__TOP__154(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__154\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0 = 0;
    VlWide<144>/*4607:0*/ __Vtemp_16;
    VlWide<62>/*1983:0*/ __Vtemp_20;
    VlWide<32>/*1023:0*/ __Vtemp_22;
    VlWide<62>/*1983:0*/ __Vtemp_24;
    VlWide<62>/*1983:0*/ __Vtemp_31;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    IData/*31:0*/ __VExpandSel_WordIdx_3;
    IData/*31:0*/ __VExpandSel_LoShift_3;
    CData/*0:0*/ __VExpandSel_Aligned_3;
    IData/*31:0*/ __VExpandSel_HiShift_3;
    IData/*31:0*/ __VExpandSel_HiMask_3;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__de 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__devid_vld)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT____VdfgRegularize_h58989f08_0_0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__invalid_data 
        = ((0x0000000cU & ((- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT____VdfgRegularize_h58989f08_0_3))) 
                           << 2U)) | ((2U & ((~ (3U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__key_chk))) 
                                             << 1U)) 
                                      | (1U & ((~ (3U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__key_chk))) 
                                               | (~ 
                                                  ((0x0000000cU 
                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__owner_seed_vld) 
                                                        << 1U) 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__creator_seed_vld) 
                                                          & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__devid_vld) 
                                                             & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__health_state_vld) 
                                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__rom_digest_vld)))))) 
                                                   >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_q;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__clr_err) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d = 0U;
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d 
            = ((0x0eU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                  & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__invalid_data) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_q))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d 
            = ((0x0dU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
               | (0xfffffffeU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                                  << 1U) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__invalid_data) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_q)))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d 
            = ((0x0bU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
               | (0xfffffffcU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                  << 2U) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__invalid_data) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_q)))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d 
            = ((7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
               | (0xfffffff8U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                  << 3U) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__invalid_data) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_q)))));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[0U] 
        = ((0xfffffe00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[0U]) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__strb) 
               << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__last)));
    __Vtemp_16[0U] = Vsim__ConstPool__CONST_h6783a830_0[0U];
    __Vtemp_16[1U] = Vsim__ConstPool__CONST_h6783a830_0[1U];
    __Vtemp_16[2U] = Vsim__ConstPool__CONST_h6783a830_0[2U];
    __Vtemp_16[3U] = Vsim__ConstPool__CONST_h6783a830_0[3U];
    __Vtemp_16[4U] = Vsim__ConstPool__CONST_h6783a830_0[4U];
    __Vtemp_16[5U] = Vsim__ConstPool__CONST_h6783a830_0[5U];
    __Vtemp_16[6U] = Vsim__ConstPool__CONST_h6783a830_0[6U];
    __Vtemp_16[7U] = Vsim__ConstPool__CONST_h6783a830_0[7U];
    __Vtemp_16[8U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[1U] 
                       << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[0U] 
                                          >> 1U));
    __Vtemp_16[9U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[2U] 
                       << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[1U] 
                                          >> 1U));
    __Vtemp_16[0x0000000aU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[3U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[2U] 
                                                   >> 1U));
    __Vtemp_16[0x0000000bU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[4U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[3U] 
                                                   >> 1U));
    __Vtemp_16[0x0000000cU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[5U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[4U] 
                                                   >> 1U));
    __Vtemp_16[0x0000000dU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[6U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[5U] 
                                                   >> 1U));
    __Vtemp_16[0x0000000eU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[7U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[6U] 
                                                   >> 1U));
    __Vtemp_16[0x0000000fU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[8U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[7U] 
                                                   >> 1U));
    __Vtemp_16[0x00000010U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__lc_keymgr_div_q[0U];
    __Vtemp_16[0x00000011U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__lc_keymgr_div_q[1U];
    __Vtemp_16[0x00000012U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__lc_keymgr_div_q[2U];
    __Vtemp_16[0x00000013U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__lc_keymgr_div_q[3U];
    __Vtemp_16[0x00000014U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0U];
    __Vtemp_16[0x00000015U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[1U];
    __Vtemp_16[0x00000016U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[2U];
    __Vtemp_16[0x00000017U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[3U];
    __Vtemp_16[0x00000018U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[4U];
    __Vtemp_16[0x00000019U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[5U];
    __Vtemp_16[0x0000001aU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[6U];
    __Vtemp_16[0x0000001bU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[7U];
    __Vtemp_16[0x0000001cU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[0U];
    __Vtemp_16[0x0000001dU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[1U];
    __Vtemp_16[0x0000001eU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[2U];
    __Vtemp_16[0x0000001fU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[3U];
    __Vtemp_16[0x00000020U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[4U];
    __Vtemp_16[0x00000021U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[5U];
    __Vtemp_16[0x00000022U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[6U];
    __Vtemp_16[0x00000023U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[7U];
    __Vtemp_16[0x00000024U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0U];
    __Vtemp_16[0x00000025U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[1U];
    __Vtemp_16[0x00000026U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[2U];
    __Vtemp_16[0x00000027U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[3U];
    __Vtemp_16[0x00000028U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[4U];
    __Vtemp_16[0x00000029U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[5U];
    __Vtemp_16[0x0000002aU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[6U];
    __Vtemp_16[0x0000002bU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[7U];
    __Vtemp_16[0x0000002cU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[0U];
    __Vtemp_16[0x0000002dU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[1U];
    __Vtemp_16[0x0000002eU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[2U];
    __Vtemp_16[0x0000002fU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[3U];
    __Vtemp_16[0x00000030U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[4U];
    __Vtemp_16[0x00000031U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[5U];
    __Vtemp_16[0x00000032U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[6U];
    __Vtemp_16[0x00000033U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[7U];
    __Vtemp_16[0x00000034U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0U];
    __Vtemp_16[0x00000035U] = Vsim__ConstPool__CONST_h7ca4bd95_0[1U];
    __Vtemp_16[0x00000036U] = Vsim__ConstPool__CONST_h7ca4bd95_0[2U];
    __Vtemp_16[0x00000037U] = Vsim__ConstPool__CONST_h7ca4bd95_0[3U];
    __Vtemp_16[0x00000038U] = Vsim__ConstPool__CONST_h7ca4bd95_0[4U];
    __Vtemp_16[0x00000039U] = Vsim__ConstPool__CONST_h7ca4bd95_0[5U];
    __Vtemp_16[0x0000003aU] = Vsim__ConstPool__CONST_h7ca4bd95_0[6U];
    __Vtemp_16[0x0000003bU] = Vsim__ConstPool__CONST_h7ca4bd95_0[7U];
    __Vtemp_16[0x0000003cU] = Vsim__ConstPool__CONST_h7ca4bd95_0[8U];
    __Vtemp_16[0x0000003dU] = Vsim__ConstPool__CONST_h7ca4bd95_0[9U];
    __Vtemp_16[0x0000003eU] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000aU];
    __Vtemp_16[0x0000003fU] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000bU];
    __Vtemp_16[0x00000040U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000cU];
    __Vtemp_16[0x00000041U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000dU];
    __Vtemp_16[0x00000042U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000eU];
    __Vtemp_16[0x00000043U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000fU];
    __Vtemp_16[0x00000044U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000010U];
    __Vtemp_16[0x00000045U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000011U];
    __Vtemp_16[0x00000046U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000012U];
    __Vtemp_16[0x00000047U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000013U];
    __Vtemp_16[0x00000048U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[8U];
    __Vtemp_16[0x00000049U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[9U];
    __Vtemp_16[0x0000004aU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000aU];
    __Vtemp_16[0x0000004bU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000bU];
    __Vtemp_16[0x0000004cU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000cU];
    __Vtemp_16[0x0000004dU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000dU];
    __Vtemp_16[0x0000004eU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000eU];
    __Vtemp_16[0x0000004fU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000fU];
    __Vtemp_16[0x00000050U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[0U];
    __Vtemp_16[0x00000051U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[1U];
    __Vtemp_16[0x00000052U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[2U];
    __Vtemp_16[0x00000053U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[3U];
    __Vtemp_16[0x00000054U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[4U];
    __Vtemp_16[0x00000055U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[5U];
    __Vtemp_16[0x00000056U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[6U];
    __Vtemp_16[0x00000057U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[7U];
    __Vtemp_16[0x00000058U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0U];
    __Vtemp_16[0x00000059U] = Vsim__ConstPool__CONST_h7ca4bd95_0[1U];
    __Vtemp_16[0x0000005aU] = Vsim__ConstPool__CONST_h7ca4bd95_0[2U];
    __Vtemp_16[0x0000005bU] = Vsim__ConstPool__CONST_h7ca4bd95_0[3U];
    __Vtemp_16[0x0000005cU] = Vsim__ConstPool__CONST_h7ca4bd95_0[4U];
    __Vtemp_16[0x0000005dU] = Vsim__ConstPool__CONST_h7ca4bd95_0[5U];
    __Vtemp_16[0x0000005eU] = Vsim__ConstPool__CONST_h7ca4bd95_0[6U];
    __Vtemp_16[0x0000005fU] = Vsim__ConstPool__CONST_h7ca4bd95_0[7U];
    __Vtemp_16[0x00000060U] = Vsim__ConstPool__CONST_h7ca4bd95_0[8U];
    __Vtemp_16[0x00000061U] = Vsim__ConstPool__CONST_h7ca4bd95_0[9U];
    __Vtemp_16[0x00000062U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000aU];
    __Vtemp_16[0x00000063U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000bU];
    __Vtemp_16[0x00000064U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000cU];
    __Vtemp_16[0x00000065U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000dU];
    __Vtemp_16[0x00000066U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000eU];
    __Vtemp_16[0x00000067U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000fU];
    __Vtemp_16[0x00000068U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000010U];
    __Vtemp_16[0x00000069U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000011U];
    __Vtemp_16[0x0000006aU] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000012U];
    __Vtemp_16[0x0000006bU] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000013U];
    __Vtemp_16[0x0000006cU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000006dU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000006eU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000006fU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000070U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000071U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000072U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000073U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000074U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000075U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000076U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000077U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000078U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000079U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000007aU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000007bU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000007cU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000007dU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000007eU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000007fU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000080U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000081U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000082U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000083U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000084U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000085U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000086U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000087U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000088U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x00000089U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000008aU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000008bU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000008cU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000008dU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000008eU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_16[0x0000008fU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __VExpandSel_WordIdx_2 = (0x000000ffU & (((IData)(0x00000480U) 
                                              * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel)) 
                                             >> 5U));
    __VExpandSel_LoShift_2 = (0x0000001fU & ((IData)(0x00000480U) 
                                             * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel)));
    __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
    if (__VExpandSel_Aligned_2) {
        __VExpandSel_HiShift_2 = 0U;
        __VExpandSel_HiMask_2 = 0U;
    } else {
        __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_2);
        __VExpandSel_HiMask_2 = 0xffffffffU;
    }
    if ((0x11ffU >= (0x00001fffU & ((IData)(0x00000480U) 
                                    * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel))))) {
        __Vtemp_20[0U] = (((__Vtemp_16[((IData)(1U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_16[__VExpandSel_WordIdx_2] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_20[1U] = (((__Vtemp_16[((IData)(2U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_16[((IData)(1U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_20[2U] = (((__Vtemp_16[((IData)(3U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_16[((IData)(2U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_20[3U] = (((__Vtemp_16[((IData)(4U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_16[((IData)(3U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_20[4U] = (((__Vtemp_16[((IData)(5U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_16[((IData)(4U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_20[5U] = (((__Vtemp_16[((IData)(6U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_16[((IData)(5U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_20[6U] = (((__Vtemp_16[((IData)(7U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_16[((IData)(6U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_20[7U] = (((__Vtemp_16[((IData)(8U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_16[((IData)(7U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_20[8U] = (((__Vtemp_16[((IData)(9U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_16[((IData)(8U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_20[9U] = (((__Vtemp_16[((IData)(0x0000000aU) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_16[((IData)(9U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000000aU] = (((__Vtemp_16[((IData)(0x0000000bU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000000aU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000000bU] = (((__Vtemp_16[((IData)(0x0000000cU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000000bU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000000cU] = (((__Vtemp_16[((IData)(0x0000000dU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000000cU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000000dU] = (((__Vtemp_16[((IData)(0x0000000eU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000000dU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000000eU] = (((__Vtemp_16[((IData)(0x0000000fU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000000eU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000000fU] = (((__Vtemp_16[((IData)(0x00000010U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000000fU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000010U] = (((__Vtemp_16[((IData)(0x00000011U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000010U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000011U] = (((__Vtemp_16[((IData)(0x00000012U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000011U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000012U] = (((__Vtemp_16[((IData)(0x00000013U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000012U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000013U] = (((__Vtemp_16[((IData)(0x00000014U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000013U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000014U] = (((__Vtemp_16[((IData)(0x00000015U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000014U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000015U] = (((__Vtemp_16[((IData)(0x00000016U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000015U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000016U] = (((__Vtemp_16[((IData)(0x00000017U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000016U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000017U] = (((__Vtemp_16[((IData)(0x00000018U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000017U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000018U] = (((__Vtemp_16[((IData)(0x00000019U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000018U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000019U] = (((__Vtemp_16[((IData)(0x0000001aU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000019U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000001aU] = (((__Vtemp_16[((IData)(0x0000001bU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000001aU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000001bU] = (((__Vtemp_16[((IData)(0x0000001cU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000001bU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000001cU] = (((__Vtemp_16[((IData)(0x0000001dU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000001cU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000001dU] = (((__Vtemp_16[((IData)(0x0000001eU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000001dU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000001eU] = (((__Vtemp_16[((IData)(0x0000001fU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000001eU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x0000001fU] = (((__Vtemp_16[((IData)(0x00000020U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x0000001fU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000020U] = (((__Vtemp_16[((IData)(0x00000021U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000020U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000021U] = (((__Vtemp_16[((IData)(0x00000022U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000021U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000022U] = (((__Vtemp_16[((IData)(0x00000023U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000022U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_20[0x00000023U] = (((((0x0000006cU 
                                       <= __VExpandSel_WordIdx_2)
                                       ? 0U : __Vtemp_16[
                                      ((IData)(0x00000024U) 
                                       + __VExpandSel_WordIdx_2)]) 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_16[((IData)(0x00000023U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
    } else {
        __Vtemp_20[0U] = Vsim__ConstPool__CONST_hb029ca01_0[0U];
        __Vtemp_20[1U] = Vsim__ConstPool__CONST_hb029ca01_0[1U];
        __Vtemp_20[2U] = Vsim__ConstPool__CONST_hb029ca01_0[2U];
        __Vtemp_20[3U] = Vsim__ConstPool__CONST_hb029ca01_0[3U];
        __Vtemp_20[4U] = Vsim__ConstPool__CONST_hb029ca01_0[4U];
        __Vtemp_20[5U] = Vsim__ConstPool__CONST_hb029ca01_0[5U];
        __Vtemp_20[6U] = Vsim__ConstPool__CONST_hb029ca01_0[6U];
        __Vtemp_20[7U] = Vsim__ConstPool__CONST_hb029ca01_0[7U];
        __Vtemp_20[8U] = Vsim__ConstPool__CONST_hb029ca01_0[8U];
        __Vtemp_20[9U] = Vsim__ConstPool__CONST_hb029ca01_0[9U];
        __Vtemp_20[0x0000000aU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000aU];
        __Vtemp_20[0x0000000bU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000bU];
        __Vtemp_20[0x0000000cU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000cU];
        __Vtemp_20[0x0000000dU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000dU];
        __Vtemp_20[0x0000000eU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000eU];
        __Vtemp_20[0x0000000fU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000fU];
        __Vtemp_20[0x00000010U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000010U];
        __Vtemp_20[0x00000011U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000011U];
        __Vtemp_20[0x00000012U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000012U];
        __Vtemp_20[0x00000013U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000013U];
        __Vtemp_20[0x00000014U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000014U];
        __Vtemp_20[0x00000015U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000015U];
        __Vtemp_20[0x00000016U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000016U];
        __Vtemp_20[0x00000017U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000017U];
        __Vtemp_20[0x00000018U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000018U];
        __Vtemp_20[0x00000019U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000019U];
        __Vtemp_20[0x0000001aU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001aU];
        __Vtemp_20[0x0000001bU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001bU];
        __Vtemp_20[0x0000001cU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001cU];
        __Vtemp_20[0x0000001dU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001dU];
        __Vtemp_20[0x0000001eU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001eU];
        __Vtemp_20[0x0000001fU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001fU];
        __Vtemp_20[0x00000020U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000020U];
        __Vtemp_20[0x00000021U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000021U];
        __Vtemp_20[0x00000022U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000022U];
        __Vtemp_20[0x00000023U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000023U];
    }
    __Vtemp_20[0x00000024U] = 0U;
    __Vtemp_20[0x00000025U] = 0U;
    __Vtemp_20[0x00000026U] = 0U;
    __Vtemp_20[0x00000027U] = 0U;
    __Vtemp_20[0x00000028U] = 0U;
    __Vtemp_20[0x00000029U] = 0U;
    __Vtemp_20[0x0000002aU] = 0U;
    __Vtemp_20[0x0000002bU] = 0U;
    __Vtemp_20[0x0000002cU] = 0U;
    __Vtemp_20[0x0000002dU] = 0U;
    __Vtemp_20[0x0000002eU] = 0U;
    __Vtemp_20[0x0000002fU] = 0U;
    __Vtemp_20[0x00000030U] = 0U;
    __Vtemp_20[0x00000031U] = 0U;
    __Vtemp_20[0x00000032U] = 0U;
    __Vtemp_20[0x00000033U] = 0U;
    __Vtemp_20[0x00000034U] = 0U;
    __Vtemp_20[0x00000035U] = 0U;
    __Vtemp_20[0x00000036U] = 0U;
    __Vtemp_20[0x00000037U] = 0U;
    __Vtemp_20[0x00000038U] = 0U;
    __Vtemp_20[0x00000039U] = 0U;
    __Vtemp_20[0x0000003aU] = 0U;
    __Vtemp_20[0x0000003bU] = 0U;
    __Vtemp_20[0x0000003cU] = 0U;
    __Vtemp_20[0x0000003dU] = 0U;
    __Vtemp_22[0U] = Vsim__ConstPool__CONST_h96a84c0e_0[0U];
    __Vtemp_22[1U] = Vsim__ConstPool__CONST_h96a84c0e_0[1U];
    __Vtemp_22[2U] = Vsim__ConstPool__CONST_h96a84c0e_0[2U];
    __Vtemp_22[3U] = Vsim__ConstPool__CONST_h96a84c0e_0[3U];
    __Vtemp_22[4U] = Vsim__ConstPool__CONST_h96a84c0e_0[4U];
    __Vtemp_22[5U] = Vsim__ConstPool__CONST_h96a84c0e_0[5U];
    __Vtemp_22[6U] = Vsim__ConstPool__CONST_h96a84c0e_0[6U];
    __Vtemp_22[7U] = Vsim__ConstPool__CONST_h96a84c0e_0[7U];
    __Vtemp_22[8U] = Vsim__ConstPool__CONST_h96a84c0e_0[8U];
    __Vtemp_22[9U] = Vsim__ConstPool__CONST_h96a84c0e_0[9U];
    __Vtemp_22[0x0000000aU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000aU];
    __Vtemp_22[0x0000000bU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000bU];
    __Vtemp_22[0x0000000cU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000cU];
    __Vtemp_22[0x0000000dU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000dU];
    __Vtemp_22[0x0000000eU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000eU];
    __Vtemp_22[0x0000000fU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000fU];
    __Vtemp_22[0x00000010U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000010U];
    __Vtemp_22[0x00000011U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000011U];
    __Vtemp_22[0x00000012U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000012U];
    __Vtemp_22[0x00000013U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000013U];
    __Vtemp_22[0x00000014U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000014U];
    __Vtemp_22[0x00000015U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000015U];
    __Vtemp_22[0x00000016U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000016U];
    __Vtemp_22[0x00000017U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000017U];
    __Vtemp_22[0x00000018U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_22[0x00000019U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_22[0x0000001aU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_22[0x0000001bU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_22[0x0000001cU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_22[0x0000001dU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_22[0x0000001eU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_22[0x0000001fU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __VExpandSel_WordIdx_3 = (0x0000001fU & (VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel), 8U) 
                                             >> 5U));
    __VExpandSel_LoShift_3 = (0x0000001fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel), 8U));
    __VExpandSel_Aligned_3 = (0U == __VExpandSel_LoShift_3);
    if (__VExpandSel_Aligned_3) {
        __VExpandSel_HiShift_3 = 0U;
        __VExpandSel_HiMask_3 = 0U;
    } else {
        __VExpandSel_HiShift_3 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_3);
        __VExpandSel_HiMask_3 = 0xffffffffU;
    }
    __Vtemp_24[0U] = (((__Vtemp_22[((IData)(1U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_22[__VExpandSel_WordIdx_3] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_24[1U] = (((__Vtemp_22[((IData)(2U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_22[
                                                   ((IData)(1U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_24[2U] = (((__Vtemp_22[((IData)(3U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_22[
                                                   ((IData)(2U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_24[3U] = (((__Vtemp_22[((IData)(4U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_22[
                                                   ((IData)(3U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_24[4U] = (((__Vtemp_22[((IData)(5U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_22[
                                                   ((IData)(4U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_24[5U] = (((__Vtemp_22[((IData)(6U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_22[
                                                   ((IData)(5U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_24[6U] = (((__Vtemp_22[((IData)(7U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_22[
                                                   ((IData)(6U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_24[7U] = (((((0x00000018U <= __VExpandSel_WordIdx_3)
                          ? 0U : __Vtemp_22[((IData)(8U) 
                                             + __VExpandSel_WordIdx_3)]) 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_22[
                                                   ((IData)(7U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 8U;
    while ((__Vilp1 <= 0x0000003dU)) {
        __Vtemp_24[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT____VdfgRegularize_ha40fb8ef_0_4) {
        __Vtemp_31[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[0U];
        __Vtemp_31[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[1U];
        __Vtemp_31[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[2U];
        __Vtemp_31[3U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[3U];
        __Vtemp_31[4U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[4U];
        __Vtemp_31[5U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[5U];
        __Vtemp_31[6U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[6U];
        __Vtemp_31[7U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[7U];
        __Vtemp_31[8U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[0U];
        __Vtemp_31[9U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[1U];
        __Vtemp_31[0x0000000aU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[2U];
        __Vtemp_31[0x0000000bU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[3U];
        __Vtemp_31[0x0000000cU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[4U];
        __Vtemp_31[0x0000000dU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[5U];
        __Vtemp_31[0x0000000eU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[6U];
        __Vtemp_31[0x0000000fU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[7U];
        __Vtemp_31[0x00000010U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[5U] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[4U] 
                                      >> 0x0000000eU));
        __Vtemp_31[0x00000011U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[6U] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[5U] 
                                      >> 0x0000000eU));
        __Vtemp_31[0x00000012U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[7U] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[6U] 
                                      >> 0x0000000eU));
        __Vtemp_31[0x00000013U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[8U] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[7U] 
                                      >> 0x0000000eU));
        __Vtemp_31[0x00000014U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[9U] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[8U] 
                                      >> 0x0000000eU));
        __Vtemp_31[0x00000015U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000aU] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[9U] 
                                      >> 0x0000000eU));
        __Vtemp_31[0x00000016U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000bU] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000aU] 
                                      >> 0x0000000eU));
        __Vtemp_31[0x00000017U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000cU] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000bU] 
                                      >> 0x0000000eU));
        __Vtemp_31[0x00000018U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_key_version__q;
    } else {
        __Vtemp_31[0U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[1U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[2U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[3U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[4U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[5U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[6U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[7U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[8U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[9U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x0000000aU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x0000000bU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x0000000cU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x0000000dU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x0000000eU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x0000000fU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x00000010U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x00000011U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x00000012U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x00000013U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x00000014U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x00000015U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x00000016U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x00000017U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_31[0x00000018U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
    }
    __Vtemp_31[0x00000019U] = 0U;
    __Vtemp_31[0x0000001aU] = 0U;
    __Vtemp_31[0x0000001bU] = 0U;
    __Vtemp_31[0x0000001cU] = 0U;
    __Vtemp_31[0x0000001dU] = 0U;
    __Vtemp_31[0x0000001eU] = 0U;
    __Vtemp_31[0x0000001fU] = 0U;
    __Vtemp_31[0x00000020U] = 0U;
    __Vtemp_31[0x00000021U] = 0U;
    __Vtemp_31[0x00000022U] = 0U;
    __Vtemp_31[0x00000023U] = 0U;
    __Vtemp_31[0x00000024U] = 0U;
    __Vtemp_31[0x00000025U] = 0U;
    __Vtemp_31[0x00000026U] = 0U;
    __Vtemp_31[0x00000027U] = 0U;
    __Vtemp_31[0x00000028U] = 0U;
    __Vtemp_31[0x00000029U] = 0U;
    __Vtemp_31[0x0000002aU] = 0U;
    __Vtemp_31[0x0000002bU] = 0U;
    __Vtemp_31[0x0000002cU] = 0U;
    __Vtemp_31[0x0000002dU] = 0U;
    __Vtemp_31[0x0000002eU] = 0U;
    __Vtemp_31[0x0000002fU] = 0U;
    __Vtemp_31[0x00000030U] = 0U;
    __Vtemp_31[0x00000031U] = 0U;
    __Vtemp_31[0x00000032U] = 0U;
    __Vtemp_31[0x00000033U] = 0U;
    __Vtemp_31[0x00000034U] = 0U;
    __Vtemp_31[0x00000035U] = 0U;
    __Vtemp_31[0x00000036U] = 0U;
    __Vtemp_31[0x00000037U] = 0U;
    __Vtemp_31[0x00000038U] = 0U;
    __Vtemp_31[0x00000039U] = 0U;
    __Vtemp_31[0x0000003aU] = 0U;
    __Vtemp_31[0x0000003bU] = 0U;
    __Vtemp_31[0x0000003cU] = 0U;
    __Vtemp_31[0x0000003dU] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[0U] 
        = ((0x000001ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[0U]) 
           | ((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_cmd_err) 
                        | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_fsm_err)))
                        ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))
                        : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                            ? ((0x07bfU >= (0x000007ffU 
                                            & VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & ((IData)(0x11U) 
                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                ? (((QData)((IData)(
                                                    __Vtemp_20[
                                                    (((IData)(0x0000003fU) 
                                                      + 
                                                      (0x000007ffU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(0x11U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x0000001fU 
                                                & VL_SHIFTL_III(11,11,32, 
                                                                (0x0000001fU 
                                                                 & ((IData)(0x11U) 
                                                                    - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                         ? 0x00000020U
                                         : ((IData)(0x00000040U) 
                                            - (0x0000001fU 
                                               & VL_SHIFTL_III(11,11,32, 
                                                               (0x0000001fU 
                                                                & ((IData)(0x11U) 
                                                                   - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                   | (((0U == (0x0000001fU 
                                               & VL_SHIFTL_III(11,11,32, 
                                                               (0x0000001fU 
                                                                & ((IData)(0x11U) 
                                                                   - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_20[
                                                                  (((IData)(0x0000001fU) 
                                                                    + 
                                                                    (0x000007ffU 
                                                                     & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & VL_SHIFTL_III(11,11,32, 
                                                                    (0x0000001fU 
                                                                     & ((IData)(0x11U) 
                                                                        - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_20[
                                                         (0x0000003fU 
                                                          & (VL_SHIFTL_III(11,11,32, 
                                                                           (0x0000001fU 
                                                                            & ((IData)(0x11U) 
                                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                             >> 5U))])) 
                                         >> (0x0000001fU 
                                             & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & ((IData)(0x11U) 
                                                                 - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                : 0ULL) : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                            ? ((0x07bfU 
                                                >= 
                                                (0x000007ffU 
                                                 & VL_SHIFTL_III(11,11,32, 
                                                                 (0x0000001fU 
                                                                  & ((IData)(3U) 
                                                                     - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    __Vtemp_24[
                                                                    (((IData)(0x0000003fU) 
                                                                      + 
                                                                      (0x000007ffU 
                                                                       & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                      ? 0x00000020U
                                                      : 
                                                     ((IData)(0x00000040U) 
                                                      - 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(3U) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vtemp_24[
                                                                        (((IData)(0x0000001fU) 
                                                                          + 
                                                                          (0x000007ffU 
                                                                           & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(3U) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp_24[
                                                                         (0x0000003fU 
                                                                          & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                             >> 5U))])) 
                                                         >> 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(3U) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                : 0ULL)
                                            : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                                ? (
                                                   (0x07bfU 
                                                    >= 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(0x0cU) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     __Vtemp_31[
                                                                     (((IData)(0x0000003fU) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                       ? 0x00000020U
                                                       : 
                                                      ((IData)(0x00000040U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(0x0cU) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         __Vtemp_31[
                                                                         (((IData)(0x0000001fU) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(11,11,32, 
                                                                           (0x0000001fU 
                                                                            & ((IData)(0x0cU) 
                                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp_31[
                                                                          (0x0000003fU 
                                                                           & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(11,11,32, 
                                                                           (0x0000001fU 
                                                                            & ((IData)(0x0cU) 
                                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                    : 0ULL)
                                                : (
                                                   ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))))))) 
              << 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[1U] 
        = (((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_cmd_err) 
                      | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_fsm_err)))
                      ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                          << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))
                      : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                          ? ((0x07bfU >= (0x000007ffU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & ((IData)(0x11U) 
                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                              ? (((QData)((IData)(__Vtemp_20[
                                                  (((IData)(0x0000003fU) 
                                                    + 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(0x11U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x0000001fU 
                                              & VL_SHIFTL_III(11,11,32, 
                                                              (0x0000001fU 
                                                               & ((IData)(0x11U) 
                                                                  - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                       ? 0x00000020U
                                       : ((IData)(0x00000040U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & ((IData)(0x11U) 
                                                                 - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                 | (((0U == (0x0000001fU 
                                             & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & ((IData)(0x11U) 
                                                                 - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                __Vtemp_20[
                                                                (((IData)(0x0000001fU) 
                                                                  + 
                                                                  (0x000007ffU 
                                                                   & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0x0000001fU 
                                                                   & ((IData)(0x11U) 
                                                                      - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                    | ((QData)((IData)(
                                                       __Vtemp_20[
                                                       (0x0000003fU 
                                                        & (VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x11U) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                           >> 5U))])) 
                                       >> (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & ((IData)(0x11U) 
                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                              : 0ULL) : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                          ? ((0x07bfU 
                                              >= (0x000007ffU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0x0000001fU 
                                                                   & ((IData)(3U) 
                                                                      - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                              ? (((QData)((IData)(
                                                                  __Vtemp_24[
                                                                  (((IData)(0x0000003fU) 
                                                                    + 
                                                                    (0x000007ffU 
                                                                     & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(3U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(3U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      __Vtemp_24[
                                                                      (((IData)(0x0000001fU) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(3U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_24[
                                                                       (0x0000003fU 
                                                                        & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(3U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                              : 0ULL)
                                          : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                              ? ((0x07bfU 
                                                  >= 
                                                  (0x000007ffU 
                                                   & VL_SHIFTL_III(11,11,32, 
                                                                   (0x0000001fU 
                                                                    & ((IData)(0x0cU) 
                                                                       - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp_31[
                                                                   (((IData)(0x0000003fU) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x0cU) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                     ? 0x00000020U
                                                     : 
                                                    ((IData)(0x00000040U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x0cU) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_31[
                                                                       (((IData)(0x0000001fU) 
                                                                         + 
                                                                         (0x000007ffU 
                                                                          & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x0cU) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_31[
                                                                        (0x0000003fU 
                                                                         & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x0cU) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                  : 0ULL)
                                              : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))))))) 
            >> 0x00000017U) | ((IData)(((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_cmd_err) 
                                          | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_fsm_err)))
                                          ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))
                                          : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                              ? ((0x07bfU 
                                                  >= 
                                                  (0x000007ffU 
                                                   & VL_SHIFTL_III(11,11,32, 
                                                                   (0x0000001fU 
                                                                    & ((IData)(0x11U) 
                                                                       - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp_20[
                                                                   (((IData)(0x0000003fU) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x11U) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                     ? 0x00000020U
                                                     : 
                                                    ((IData)(0x00000040U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x11U) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x11U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_20[
                                                                       (((IData)(0x0000001fU) 
                                                                         + 
                                                                         (0x000007ffU 
                                                                          & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x11U) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_20[
                                                                        (0x0000003fU 
                                                                         & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x11U) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                  : 0ULL)
                                              : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                                  ? 
                                                 ((0x07bfU 
                                                   >= 
                                                   (0x000007ffU 
                                                    & VL_SHIFTL_III(11,11,32, 
                                                                    (0x0000001fU 
                                                                     & ((IData)(3U) 
                                                                        - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    __Vtemp_24[
                                                                    (((IData)(0x0000003fU) 
                                                                      + 
                                                                      (0x000007ffU 
                                                                       & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                      ? 0x00000020U
                                                      : 
                                                     ((IData)(0x00000040U) 
                                                      - 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(3U) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vtemp_24[
                                                                        (((IData)(0x0000001fU) 
                                                                          + 
                                                                          (0x000007ffU 
                                                                           & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(3U) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp_24[
                                                                         (0x0000003fU 
                                                                          & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                             >> 5U))])) 
                                                         >> 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(3U) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                   : 0ULL)
                                                  : 
                                                 (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                                   ? 
                                                  ((0x07bfU 
                                                    >= 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(0x0cU) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     __Vtemp_31[
                                                                     (((IData)(0x0000003fU) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                       ? 0x00000020U
                                                       : 
                                                      ((IData)(0x00000040U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(0x0cU) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         __Vtemp_31[
                                                                         (((IData)(0x0000001fU) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(11,11,32, 
                                                                           (0x0000001fU 
                                                                            & ((IData)(0x0cU) 
                                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp_31[
                                                                          (0x0000003fU 
                                                                           & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(11,11,32, 
                                                                           (0x0000001fU 
                                                                            & ((IData)(0x0cU) 
                                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                    : 0ULL)
                                                   : 
                                                  (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy))))))) 
                                        >> 0x00000020U)) 
                               << 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[2U] 
        = ((0xfffffe00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[2U]) 
           | ((IData)(((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_cmd_err) 
                         | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_fsm_err)))
                         ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))
                         : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                             ? ((0x07bfU >= (0x000007ffU 
                                             & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & ((IData)(0x11U) 
                                                                 - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                 ? (((QData)((IData)(
                                                     __Vtemp_20[
                                                     (((IData)(0x0000003fU) 
                                                       + 
                                                       (0x000007ffU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x11U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x0000001fU 
                                                 & VL_SHIFTL_III(11,11,32, 
                                                                 (0x0000001fU 
                                                                  & ((IData)(0x11U) 
                                                                     - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                          ? 0x00000020U
                                          : ((IData)(0x00000040U) 
                                             - (0x0000001fU 
                                                & VL_SHIFTL_III(11,11,32, 
                                                                (0x0000001fU 
                                                                 & ((IData)(0x11U) 
                                                                    - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                    | (((0U == (0x0000001fU 
                                                & VL_SHIFTL_III(11,11,32, 
                                                                (0x0000001fU 
                                                                 & ((IData)(0x11U) 
                                                                    - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                         ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_20[
                                                                   (((IData)(0x0000001fU) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(0x11U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                       | ((QData)((IData)(
                                                          __Vtemp_20[
                                                          (0x0000003fU 
                                                           & (VL_SHIFTL_III(11,11,32, 
                                                                            (0x0000001fU 
                                                                             & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                              >> 5U))])) 
                                          >> (0x0000001fU 
                                              & VL_SHIFTL_III(11,11,32, 
                                                              (0x0000001fU 
                                                               & ((IData)(0x11U) 
                                                                  - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                 : 0ULL) : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                             ? ((0x07bfU 
                                                 >= 
                                                 (0x000007ffU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0x0000001fU 
                                                                   & ((IData)(3U) 
                                                                      - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  __Vtemp_24[
                                                                  (((IData)(0x0000003fU) 
                                                                    + 
                                                                    (0x000007ffU 
                                                                     & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(3U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(3U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      __Vtemp_24[
                                                                      (((IData)(0x0000001fU) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(3U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_24[
                                                                       (0x0000003fU 
                                                                        & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(3U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                 : 0ULL)
                                             : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                                 ? 
                                                ((0x07bfU 
                                                  >= 
                                                  (0x000007ffU 
                                                   & VL_SHIFTL_III(11,11,32, 
                                                                   (0x0000001fU 
                                                                    & ((IData)(0x0cU) 
                                                                       - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp_31[
                                                                   (((IData)(0x0000003fU) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x0cU) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                     ? 0x00000020U
                                                     : 
                                                    ((IData)(0x00000040U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x0cU) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_31[
                                                                       (((IData)(0x0000001fU) 
                                                                         + 
                                                                         (0x000007ffU 
                                                                          & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x0cU) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_31[
                                                                        (0x0000003fU 
                                                                         & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x0cU) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                  : 0ULL)
                                                 : 
                                                (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy))))))) 
                       >> 0x00000020U)) >> 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[2U] 
        = ((0x000001ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[2U]) 
           | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[0U] 
               << 0x0000000aU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid) 
                                  << 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[3U] 
        = (((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[0U] 
                            >> 0x00000016U)) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid) 
                                                >> 0x00000017U)) 
           | ((0x00000200U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[0U] 
                              >> 0x00000016U)) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[1U] 
                                                  << 0x0000000aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[4U] 
        = ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[1U] 
                           >> 0x00000016U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                                                << 0x0000001dU) 
                                               | (((0xfffff800U 
                                                    & (0x0001f000U 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__last_nontop_q) 
                                                          << 0x0000000bU))) 
                                                   | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[1U] 
                                                       >> 0x0000001fU) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[2U] 
                                                         << 1U))) 
                                                  << 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[5U] 
        = (((0x000001ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                            >> 3U)) | (((0xfffff800U 
                                         & (0x0001f000U 
                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__last_nontop_q) 
                                               << 0x0000000bU))) 
                                        | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[1U] 
                                            >> 0x0000001fU) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[2U] 
                                              << 1U))) 
                                       >> 0x00000017U)) 
           | ((0x1ffffe00U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                              >> 3U)) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr 
                                                  >> 0x00000020U)) 
                                         << 0x0000001dU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[6U] 
        = ((0x20000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[6U]) 
           | (0x3fffffffU & ((0x000001ffU & ((IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr 
                                                      >> 0x00000020U)) 
                                             >> 3U)) 
                             | (0x1ffffe00U & ((IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr 
                                                        >> 0x00000020U)) 
                                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[6U] 
        = ((0x1fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[6U]) 
           | (0x3fffffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__kmac_rom_vld_q) 
                             << 0x0000001dU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0 
        = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[2U] 
                 >> 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs 
        = ((6U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs)) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0 
        = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[4U] 
                 >> 0x00000013U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs 
        = ((5U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0) 
              << 1U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0 
        = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[6U] 
                 >> 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs 
        = ((3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs) 
            >> 2U) & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vcellinp__u_appid_arb__data_i
           [2U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1__KET__ 
        = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs))
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vcellinp__u_appid_arb__data_i
           [0U] : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vcellinp__u_appid_arb__data_i
           [1U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__idx_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs))
                               ? 2U : 0U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__valid_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs) 
              >> 2U));
}
