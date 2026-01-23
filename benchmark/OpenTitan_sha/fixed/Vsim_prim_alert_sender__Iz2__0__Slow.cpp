// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_alert_tx__BRA__2__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_bus_integ_error_q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_set_d = (((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_fault_status_reg_intg_err__q) 
                                     | ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_fault_status_esc_timeout__q) 
                                        | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_reg__DOT____Vcellout__u_fault_status_main_pd_glitch__q))) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_fsm_err__q) 
           | (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_reg_intg_err__q));
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSelfRef.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_set_d = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_reg__DOT____Vcellout__u_err_code_reset_consistency_err__q) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_set_d = ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_897)) 
                                    | (IData)(vlSelfRef.__PVT__alert_set_q));
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__0(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__gen_alert_senders__BRA__1__KET____DOT__u_alert_sender__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__alert_set_d = (IData)(((0U != 
                                             (0x0003fe00U 
                                              & vlSymsp->TOP.__VdfgRegularize_he50b618e_0_959[2U])) 
                                            | (IData)(vlSelfRef.__PVT__alert_set_q)));
    vlSelfRef.__PVT__ping_trigger = (((IData)(vlSelf->__PVT__u_decode_ping->__PVT__fall_o) 
                                      | (IData)(vlSelf->__PVT__u_decode_ping->__PVT__rise_o)) 
                                     | (IData)(vlSelfRef.__PVT__ping_set_q));
}

VL_ATTR_COLD void Vsim_prim_alert_sender__Iz2___ctor_var_reset(Vsim_prim_alert_sender__Iz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsim_prim_alert_sender__Iz2___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->alert_test_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17462262601123946775ull);
    vlSelf->alert_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2967653272698415251ull);
    vlSelf->alert_ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5035762474647222145ull);
    vlSelf->__PVT__alert_state_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16538130280503528403ull);
    vlSelf->alert_rx_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3626835617410658616ull);
    vlSelf->alert_tx_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 268840600036833065ull);
    vlSelf->__PVT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14154348034863170373ull);
    vlSelf->__PVT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14578357007859236226ull);
    vlSelf->__PVT__alert_pd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15912843319051513721ull);
    vlSelf->__PVT__alert_nd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2296402280898104743ull);
    vlSelf->__PVT__alert_set_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11636324003098006005ull);
    vlSelf->__PVT__alert_set_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2420539631998501609ull);
    vlSelf->__PVT__alert_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13032352323795100004ull);
    vlSelf->__PVT__alert_test_set_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1898591458282920399ull);
    vlSelf->__PVT__ping_set_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16469075055425197591ull);
    vlSelf->__PVT__ping_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14310796678677263235ull);
    vlSelf->__PVT__alert_test_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7305396672946502687ull);
    vlSelf->__PVT__ping_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12816964357515214252ull);
    vlSelf->__PVT__alert_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 676603347776998452ull);
    vlSelf->__Vcellout__u_prim_flop_alert__q_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6781813045241873676ull);
    vlSelf->__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4754539413357182205ull);
}
