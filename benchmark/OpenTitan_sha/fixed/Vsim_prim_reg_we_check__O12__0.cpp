// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_prim_reg_we_check__O12___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_prim_reg_we_check__0(Vsim_prim_reg_we_check__O12* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_reg_we_check__O12___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0__u_reg__DOT__u_prim_reg_we_check__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_boot_ins_cmd__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_boot_gen_cmd__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_regwen__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_ctrl_auto_req_mode__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_intr_enable_edn_cmd_req_done__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_sw_cmd_req__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reseed_cmd__DOT__we));
    vlSelfRef.__PVT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_err_code_test0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
            << 0x00000010U) | ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we) 
                                 << 0x0000000eU) | 
                                ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_max_num_reqs_between_reseeds0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                 << 0x0000000dU)) | 
                               (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_generate_cmd__DOT__we) 
                                 << 0x0000000cU) | 
                                (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reseed_cmd__DOT__we) 
                                  << 0x0000000bU) | 
                                 ((((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_sw_cmd_req__DOT__we) 
                                      << 4U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_boot_gen_cmd__DOT__we) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_boot_ins_cmd__DOT__we) 
                                                   << 2U))) 
                                    | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_ctrl_auto_req_mode__DOT__we) 
                                        << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_regwen__DOT__we))) 
                                   << 4U) | ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we) 
                                                 << 2U)) 
                                             | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_intr_enable_edn_cmd_req_done__DOT__we) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we))))))));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_generate_cmd__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_max_num_reqs_between_reseeds0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_err_code_test0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)) 
            | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
               | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                    & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                   | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                        & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
                       | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we) 
                           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_intr_enable_edn_cmd_req_done__DOT__we)) 
                          | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we) 
                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we)))) 
                      | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
                          & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__)) 
                         | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_regwen__DOT__we) 
                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_ctrl_auto_req_mode__DOT__we)) 
                            | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_boot_ins_cmd__DOT__we) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_boot_gen_cmd__DOT__we)))))) 
                  | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                     | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_sw_cmd_req__DOT__we) 
                         & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reseed_cmd__DOT__we)) 
                        | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
                           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_generate_cmd__DOT__we) 
                              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_max_num_reqs_between_reseeds0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)))))))) 
           | ((~ ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn0.__PVT__u_reg__DOT__u_err_code_test0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i))));
}

void Vsim_prim_reg_we_check__O12___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_prim_reg_we_check__0(Vsim_prim_reg_we_check__O12* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_reg_we_check__O12___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1__u_reg__DOT__u_prim_reg_we_check__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_boot_ins_cmd__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_boot_gen_cmd__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_regwen__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_ctrl_auto_req_mode__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_intr_enable_edn_cmd_req_done__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_sw_cmd_req__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reseed_cmd__DOT__we));
    vlSelfRef.__PVT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_err_code_test0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
            << 0x00000010U) | ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we) 
                                 << 0x0000000eU) | 
                                ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_max_num_reqs_between_reseeds0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                 << 0x0000000dU)) | 
                               (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_generate_cmd__DOT__we) 
                                 << 0x0000000cU) | 
                                (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reseed_cmd__DOT__we) 
                                  << 0x0000000bU) | 
                                 ((((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_sw_cmd_req__DOT__we) 
                                      << 4U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_boot_gen_cmd__DOT__we) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_boot_ins_cmd__DOT__we) 
                                                   << 2U))) 
                                    | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_ctrl_auto_req_mode__DOT__we) 
                                        << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_regwen__DOT__we))) 
                                   << 4U) | ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we) 
                                                 << 2U)) 
                                             | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_intr_enable_edn_cmd_req_done__DOT__we) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we))))))));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_generate_cmd__DOT__we) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_max_num_reqs_between_reseeds0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
           | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_err_code_test0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)) 
            | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
               | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                    & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                   | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                        & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
                       | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_intr_state_edn_cmd_req_done__DOT__we) 
                           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_intr_enable_edn_cmd_req_done__DOT__we)) 
                          | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_intr_test_edn_cmd_req_done__DOT__we) 
                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_alert_test_fatal_alert__DOT__we)))) 
                      | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__17__KET__) 
                          & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__)) 
                         | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_regwen__DOT__we) 
                             & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_ctrl_auto_req_mode__DOT__we)) 
                            | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_boot_ins_cmd__DOT__we) 
                               & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_boot_gen_cmd__DOT__we)))))) 
                  | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                      & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                     | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_sw_cmd_req__DOT__we) 
                         & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reseed_cmd__DOT__we)) 
                        | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_recov_alert_sts_auto_req_mode_field_alert__DOT__we)) 
                           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_generate_cmd__DOT__we) 
                              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_max_num_reqs_between_reseeds0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)))))))) 
           | ((~ ((~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_edn1.__PVT__u_reg__DOT__u_err_code_test0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i))));
}

void Vsim_prim_reg_we_check__O12___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_prim_reg_we_check__0(Vsim_prim_reg_we_check__O12* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_reg_we_check__O12___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_prim_reg_we_check__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_state__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_enable__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_out_lower_data__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_out_upper_data__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_direct_oe__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_oe_lower_data__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_oe_upper_data__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__we));
    vlSelfRef.__PVT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__we) 
                << 3U) | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__we) 
                          << 2U)) | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__we) 
                                      << 1U) | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__we))) 
             << 0x0000000cU) | (((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__we) 
                                   << 3U) | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_oe_upper_data__DOT__we) 
                                             << 2U)) 
                                 | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_oe_lower_data__DOT__we) 
                                     << 1U) | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_direct_oe__DOT__we))) 
                                << 8U)) | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_out_upper_data__DOT__we) 
                                            << 7U) 
                                           | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_out_lower_data__DOT__we) 
                                               << 6U) 
                                              | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_direct_out__DOT__we) 
                                                  << 5U) 
                                                 | ((((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_alert_test__DOT__we) 
                                                      << 3U) 
                                                     | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_test__DOT__we) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_enable__DOT__we) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_state__DOT__we)))))));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_test__DOT__we) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_alert_test__DOT__we));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_direct_out__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
             & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                     & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
                    | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_state__DOT__we) 
                        & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_enable__DOT__we)) 
                       | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_test__DOT__we) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_alert_test__DOT__we)))) 
                   | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_direct_out__DOT__we) 
                       & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__18__KET__)) 
                      | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_out_lower_data__DOT__we) 
                         & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_out_upper_data__DOT__we))))) 
               | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                  | ((((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
                       & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__20__KET__)) 
                      | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_direct_oe__DOT__we) 
                          & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_oe_lower_data__DOT__we)) 
                         | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_masked_oe_upper_data__DOT__we) 
                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__we)))) 
                     | (((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__21__KET__) 
                         & (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__22__KET__)) 
                        | (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__we) 
                            & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__we)) 
                           | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__we) 
                              & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__we)))))))) 
           | ((~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_gpio__DOT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__))));
}

void Vsim_prim_reg_we_check__O12___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_prim_reg_we_check__0(Vsim_prim_reg_we_check__O12* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_prim_reg_we_check__O12___nba_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_prim_reg_we_check__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_onehot_check__DOT__err_o 
        = ((~ ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__addrmiss)) 
               & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_reg_if__DOT__we_o))) 
           & (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_alert_test__DOT__we));
}
