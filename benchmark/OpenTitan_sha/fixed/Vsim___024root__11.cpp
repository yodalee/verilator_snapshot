// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___act_comb__TOP__74(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__74\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_4 
        = (1U & ((~ ((0x20U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage))) 
                 & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
        = ((0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U]) 
           | (3U & (- (IData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)))));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender.__VdfgRegularize_h6e95ff9d_0_1707) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__u_state_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x17U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__u_state_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x17U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__u_state_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x17U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__u_state_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                ? ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                    ? ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                        ? ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                            ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                ? 0x17U : ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1484)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw))
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1487)
                                                      ? 9U
                                                      : 0x10U)
                                                     : 0x10U)
                                                    : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                            : 0x17U))
                            : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                    ? 0x17U : 0x0eU)
                                : 0x17U)) : 0x17U) : 
                   ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                     ? 0x17U : ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                 ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                     ? 0x17U : ((1U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 ? 0x17U
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1483)
                                                  ? 9U
                                                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))))
                                 : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                     ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                         ? ((4U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_q))
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1482)
                                                 ? 0x3dU
                                                 : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                             : 0x3dU)
                                         : 0x17U) : 0x17U))))
                : ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                    ? ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                        ? 0x17U : ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                    ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                        ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)
                                            : 0x17U)
                                        : 0x17U) : 
                                   ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                     ? 0x17U : ((1U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 ? 0x17U
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1481)
                                                  ? 9U
                                                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))))))
                    : ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                        ? ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                            ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                    ? 0x17U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready)
                                                ? 9U
                                                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))
                                : 0x17U) : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                             ? 0x17U
                                             : ((1U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1664)
                                                   ? 0x24U
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1474)
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_cipher_data_out_clear))
                                                     ? 0x3aU
                                                     : 0x0eU)
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1662)
                                                     ? 0x23U
                                                     : 0x17U)))
                                                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 : 0x17U)))
                        : 0x17U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__u_state_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                ? ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                    ? ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                        ? ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                            ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                ? 0x17U : ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1507)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82)
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw))
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1509)
                                                      ? 9U
                                                      : 0x10U)
                                                     : 0x10U)
                                                    : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                            : 0x17U))
                            : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                    ? 0x17U : 0x0eU)
                                : 0x17U)) : 0x17U) : 
                   ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                     ? 0x17U : ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                 ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                     ? 0x17U : ((1U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 ? 0x17U
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1506)
                                                  ? 9U
                                                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))))
                                 : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                     ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                         ? ((4U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_q))
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1505)
                                                 ? 0x3dU
                                                 : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                             : 0x3dU)
                                         : 0x17U) : 0x17U))))
                : ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                    ? ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                        ? 0x17U : ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                    ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                        ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)
                                            : 0x17U)
                                        : 0x17U) : 
                                   ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                     ? 0x17U : ((1U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 ? 0x17U
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1504)
                                                  ? 9U
                                                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))))))
                    : ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                        ? ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                            ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                    ? 0x17U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready)
                                                ? 9U
                                                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))
                                : 0x17U) : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                             ? 0x17U
                                             : ((1U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1648)
                                                   ? 0x24U
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1474)
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_cipher_data_out_clear))
                                                     ? 0x3aU
                                                     : 0x0eU)
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1646)
                                                     ? 0x23U
                                                     : 0x17U)))
                                                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 : 0x17U)))
                        : 0x17U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__u_state_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                ? ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                    ? ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                        ? ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                            ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                ? 0x17U : ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1516)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw))
                                                     ? 0x10U
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1518)
                                                      ? 9U
                                                      : 0x10U))
                                                    : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                            : 0x17U))
                            : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                    ? 0x17U : 0x0eU)
                                : 0x17U)) : 0x17U) : 
                   ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                     ? 0x17U : ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                 ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                     ? 0x17U : ((1U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 ? 0x17U
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1515)
                                                  ? 9U
                                                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))))
                                 : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                     ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                         ? ((4U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_q))
                                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1514)
                                                 ? 0x3dU
                                                 : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                             : 0x3dU)
                                         : 0x17U) : 0x17U))))
                : ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                    ? ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                        ? 0x17U : ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                    ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                        ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)
                                            : 0x17U)
                                        : 0x17U) : 
                                   ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                     ? 0x17U : ((1U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 ? 0x17U
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1513)
                                                  ? 9U
                                                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))))))
                    : ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                        ? ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                            ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                    ? 0x17U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready)
                                                ? 9U
                                                : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw)))
                                : 0x17U) : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                             ? 0x17U
                                             : ((1U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1632)
                                                   ? 0x24U
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1474)
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_cipher_data_out_clear))
                                                     ? 0x3aU
                                                     : 0x0eU)
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1631)
                                                     ? 0x23U
                                                     : 0x17U)))
                                                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw))
                                                 : 0x17U)))
                        : 0x17U)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
        = ((0xfffffff3U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U]) 
           | (0xfffffffcU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                              << 3U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender.__PVT__u_prim_buf_in_req__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i) 
                                         | (7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_ctrl_we))) 
                                        << 2U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[5U] 
                  >> 6U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_0__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in1_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[6U] 
                  >> 7U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_1__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in2_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[7U] 
                  >> 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_2__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in3_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[8U] 
                  >> 9U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_3__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_start__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                  >> 0x00000014U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_key_iv_data_in_clear__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                  >> 0x00000012U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                  >> 0x00000010U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_prng_reseed__DOT__qe 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                  >> 0x0000000eU) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_0__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_0__DOT__we)
            ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000018U)) : ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[6U] 
                                               << 0x00000019U) 
                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[5U] 
                                                 >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_1__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_1__DOT__we)
            ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000018U)) : ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[7U] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[6U] 
                                                 >> 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_2__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_2__DOT__we)
            ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000018U)) : ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[8U] 
                                               << 0x00000017U) 
                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[7U] 
                                                 >> 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_3__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_data_in_3__DOT__we)
            ? ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                << 8U) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000018U)) : ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[9U] 
                                               << 0x00000016U) 
                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[8U] 
                                                 >> 0x0000000aU)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__we) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_start__DOT__wr_data 
            = (1U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                     >> 0x00000018U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_key_iv_data_in_clear__DOT__wr_data 
            = (1U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                     >> 0x00000019U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__wr_data 
            = (1U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                     >> 0x0000001aU));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_prng_reseed__DOT__wr_data 
            = (1U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_45.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                     >> 0x0000001bU));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_start__DOT__wr_data 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                     >> 0x00000015U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_key_iv_data_in_clear__DOT__wr_data 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                     >> 0x00000013U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__wr_data 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                     >> 0x00000011U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_trigger_prng_reseed__DOT__wr_data 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                     >> 0x0000000fU));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0ULL != (0x00000000000000ffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next 
            = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit))
                ? (0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next)
                : 0U);
    } else if ((IData)((0ULL != (0x000000000000ff00ULL 
                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next = 0U;
    } else if ((IData)((0ULL != (0x0000000000ff0000ULL 
                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next 
            = ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                              >> 0x10U))) ? 0U : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                                                              >> 0x11U)))
                                                   ? 
                                                  ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0x0000000aU] 
                                                    << 0x00000016U) 
                                                   | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[9U] 
                                                      >> 0x0000000aU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                                                               >> 0x12U)))
                                                    ? 
                                                   ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0x0000000bU] 
                                                     << 0x00000016U) 
                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0x0000000aU] 
                                                       >> 0x0000000aU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                                                                >> 0x13U)))
                                                     ? 
                                                    ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0x0000000cU] 
                                                      << 0x00000016U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0x0000000bU] 
                                                        >> 0x0000000aU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                                                                 >> 0x14U)))
                                                      ? 
                                                     ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0x0000000dU] 
                                                       << 0x00000016U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0x0000000cU] 
                                                         >> 0x0000000aU))
                                                      : 0U)))));
    } else if ((IData)((0ULL != (0x00000000ff000000ULL 
                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit)))) {
        if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                           >> 0x18U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next = 0U;
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                                  >> 0x19U)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[2U] 
                    << 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[1U] 
                                       >> 6U));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                                  >> 0x1aU)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[3U] 
                    << 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[2U] 
                                       >> 6U));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                                  >> 0x1bU)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[4U] 
                    << 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[3U] 
                                       >> 6U));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                                  >> 0x1cU)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next 
                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[5U] 
                    << 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[4U] 
                                       >> 6U));
        } else if ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                                  >> 0x1dU)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((((8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                               >> 0x00000017U)) | (7U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                                                      >> 0x0000001bU))) 
                       << 8U) | ((0x000000fcU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[1U] 
                                                  << 4U) 
                                                 | (0x0000000cU 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                                                       >> 0x0000001cU)))) 
                                 | (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[1U] 
                                          >> 4U)))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffff0fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                              >> 0x00000013U)) | (7U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
                                                     >> 0x00000017U))) 
                      << 0x0000000cU));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next 
                = ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                                  >> 0x1eU))) ? ((0xfffffffcU 
                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next) 
                                                 | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.__PVT__committed_q) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed.__PVT__committed_q)))
                    : ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__q)));
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next 
            = ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                              >> 0x20U))) ? (0xfffffff0U 
                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next)
                : ((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__addr_hit 
                                  >> 0x21U))) ? ((0xffffff80U 
                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next) 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_status_alert_fatal_fault__DOT__q) 
                                                      << 6U) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_status_alert_recov_ctrl_update_err__DOT__q) 
                                                         << 5U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_status_input_ready__DOT__q) 
                                                           << 4U))) 
                                                    | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_status_output_valid__DOT__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_output_lost__q) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_status_stall__DOT__q) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_idle__q)))))
                    : 0xffffffffU));
    }
}

void Vsim___024root___act_comb__TOP__75(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__75\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h92a6447f__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h92a6447f__0 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x0000000fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__idx_o)
                                    : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__storage) 
                                       >> (7U & VL_SHIFTL_III(3,3,32, 
                                                              (1U 
                                                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 2U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h92a6447f__0 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__valid_q) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rvalid_o));
    if ((0x0dU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rdata_o))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rdata_o))) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid)) 
               | (0x3fffU & ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h92a6447f__0) 
                             << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rdata_o))));
    }
}

void Vsim___024root___act_comb__TOP__76(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__76\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_entropy_state_error = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__timer_enable = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__timer_update = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__threshold_hit_clr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_valid_set = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_valid_clear = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__mode_latch = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__seed_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__seed_ack = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__entropy_req = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__data_update = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__aux_update = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_err = 0ULL;
    if (((((((((0x0278U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
               | (0x0184U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
              | (0x0327U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
             | (0x02f6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
            | (0x000cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
           | (0x0063U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
          | (0x0390U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
         | (0x021eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x0278U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__entropy_ready_i) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_valid_clear = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__mode_latch = 1U;
                if ((2U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode.__PVT__committed_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__seed_en = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x02f6U;
                } else if ((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode.__PVT__committed_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__seed_en = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0327U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__timer_update = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0390U;
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(
                                                      (((1U 
                                                         == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode.__PVT__committed_q)) 
                                                        << 1U) 
                                                       | (2U 
                                                          == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode.__PVT__committed_q))))))))) {
                    if ((0U != (((1U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode.__PVT__committed_q)) 
                                 << 1U) | (2U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode.__PVT__committed_q))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: kmac_entropy.sv:535: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_kmac.gen_entropy.u_entropy: unique case, but multiple matches found for '2'h%x'\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name(),
                                         2,(IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_mode.__PVT__committed_q));
                            Verilated::runFlushCallbacks();
                            VL_STOP_MT("verilogSourceFiles/kmac_entropy.sv", 535, "");
                        }
                    }
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0278U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_valid_set = 1U;
            }
        } else if ((0x0184U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__timer_enable = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en 
                = (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en_rand_q));
            if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update) 
                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed)) 
                 & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process.__PVT__committed_q) 
                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_in_keyblock)) 
                    | (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process.__PVT__committed_q))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__data_update = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x000cU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_valid_clear = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0184U;
                }
            } else if (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__mode_q)) 
                        & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__entropy_refresh_req_i) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__threshold_hit_q)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__seed_en = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0327U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__timer_update = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__threshold_hit_clr = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0184U;
            }
        } else if ((0x0327U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__entropy_req 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_o;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__timer_enable = 1U;
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__timer_expired) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__non_zero_wait_timer_limit))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0063U;
            } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_req_i) 
                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__seed_ack = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_done_o) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x000cU;
                    if ((1U & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process.__PVT__committed_q) 
                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_in_keyblock)) 
                               | (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process.__PVT__committed_q))))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__data_update = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_valid_clear = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0327U;
                }
            } else if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update) 
                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed)) 
                        & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process.__PVT__committed_q) 
                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_in_keyblock)) 
                           | (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process.__PVT__committed_q))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0327U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__data_update = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_valid_clear 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0327U;
            }
        } else if ((0x02f6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__seed_ack 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_o) 
                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_entropy_seed__DOT__we));
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_done_o) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x000cU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__data_update = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_valid_clear = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x02f6U;
            }
        } else if ((0x000cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__aux_update = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_valid_set = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en 
                = (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en_rand_q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0184U;
        } else if ((0x0063U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x021eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_err 
                = (0x0000000104000000ULL | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__timer_value)));
        } else if ((0x0390U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x021eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_err 
                = (0x0000000105000000ULL | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__mode_q)));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en 
                = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed)) 
                   & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process.__PVT__committed_q) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_in_keyblock)) 
                      | (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_entropy_fast_process.__PVT__committed_q))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_valid_set = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__data_update 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__err_processed_i)
                    ? 0x0278U : 0x021eU);
        }
    } else if ((0x0098U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_entropy_state_error = 1U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0098U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_entropy_state_error = 1U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x0098U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                               << 4U) 
                                              | (((0x021eU 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                                  << 3U) 
                                                 | ((0x0390U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                                    << 2U))) 
                                             | (((0x0063U 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                                 << 1U) 
                                                | (0x000cU 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))) 
                                            << 4U) 
                                           | ((((0x02f6U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x0327U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                                  << 2U)) 
                                              | (((0x0184U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                                  << 1U) 
                                                 | (0x0278U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))))))))))) {
        if ((0U != ((((((0x0098U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                        << 4U) | (((0x021eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                   << 3U) | ((0x0390U 
                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                             << 2U))) 
                      | (((0x0063U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                          << 1U) | (0x000cU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))) 
                     << 4U) | ((((0x02f6U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x0327U 
                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                           << 2U)) 
                               | (((0x0184U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                                   << 1U) | (0x0278U 
                                             == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: kmac_entropy.sv:526: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_kmac.gen_entropy.u_entropy: unique case, but multiple matches found for '10'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),10,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/kmac_entropy.sv", 526, "");
            }
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__1579__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__lc_escalate_en__BRA__23__03a20__KET__;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__1579__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1579__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1579__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__st_d = 0x0098U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__seed_en) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_q));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__aux_update) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__aux_rand_d 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_data_q[0x00000018U] 
                     >> 0x0000001fU));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en_rand_d 
            = (0x0000000fU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_data_q[0x00000018U] 
                               << 5U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__rand_data_q[0x00000018U] 
                                         >> 0x0000001bU)));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__aux_rand_d 
            = (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__aux_rand_q));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en_rand_d 
            = (0x0000000fU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en_rand_q), 1U));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_req_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__entropy_req) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__entropy_req_hold_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__wr_en_seed 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_o) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__seed_ack));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__en_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__msg_mask_en_i) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__prng_en));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_ack_o) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__src_req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_done_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__wr_en_seed) 
           & (5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__en_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[5U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U];
    }
    if ((5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U] 
            = (0x0001ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_state_partial_i);
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h743a411b__0 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_state_partial_i;
        if ((0xb0U >= (0x000000ffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q), 5U)))) {
            VL_ASSIGNSEL_WI(177, 32, (0x000000ffU & 
                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q), 5U)), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h743a411b__0);
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_done_o)
            ? 0U : (7U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q) 
                          + ((5U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q)) 
                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__wr_en_seed)))));
    if ((0U != (((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U] 
                    | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U]) 
                   | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U]) 
                  | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U]) 
                 | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U]) 
                | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U]))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__wr_en_seed) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U];
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__en_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[5U];
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U];
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] = 0xb4b9762dU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] = 0x1fe72ffbU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] = 0x6dfed26fU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] = 0xd32c9bd8U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] = 0xbf9b24d1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] = 0x00016c8cU;
    }
}

void Vsim___024root___act_comb__TOP__77(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__77\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__rd_data_ctrl[1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.rd_data_ctrl_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__rd_data_host[1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.rd_data_host_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT____Vcellinp__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__wdata_i 
        = (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.rd_err_o)) 
            << 0x00000027U) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.rd_data_host_o);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__rvalid_o)
            ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__gen_singleton_fifo__DOT__full_q)
                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__gen_singleton_fifo__DOT__storage
                : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT____Vcellinp__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__wdata_i)
            : 0ULL);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__host_rsp_data[1U] 
        = (0x0000007fffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__rdata_o);
}

void Vsim___024root___act_comb__TOP__78(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__78\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__rd_data_ctrl[0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.rd_data_ctrl_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__rd_data_host[0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.rd_data_host_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT____Vcellinp__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__wdata_i 
        = (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.rd_err_o)) 
            << 0x00000027U) | vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.rd_data_host_o);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__rdata_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__rvalid_o)
            ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__gen_singleton_fifo__DOT__full_q)
                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__gen_singleton_fifo__DOT__storage
                : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT____Vcellinp__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__wdata_i)
            : 0ULL);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__host_rsp_data[0U] 
        = (0x0000007fffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__rdata_o);
}

void Vsim___024root___act_comb__TOP__79(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__79\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_phy_rsp[0U] 
        = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_phy_rsp[0U]) 
           | (((((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q) 
                   | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__gen_prog_data__DOT__u_prog__DOT__data_invalid_q)) 
                  << 3U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.relbl_ecc_err_o) 
                             | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.relbl_ecc_err_o)) 
                            << 2U)) | (((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i) 
                                          & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_rd__DOT__u_intg_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                         | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_addr_xor_storage__DOT__rready_i) 
                                            & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_rd__DOT__u_intg_buf__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
                                        << 1U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__fsm_err) 
                                                   | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__prog_fsm_err)) 
                                                  | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__fsm_err) 
                                                     | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__prog_fsm_err))))) 
               << 4U) | (((((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__ctrl_fsm_idle) 
                              & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__ctrl_rsp_vld)) 
                             | ((0U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__wvalid_i))) 
                            | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__ctrl_fsm_idle) 
                                & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__ctrl_rsp_vld)) 
                               | ((0U == (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_host_outstanding_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__wvalid_i)))) 
                           << 3U) | ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_host_arb__DOT__err_q) 
                                       | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_host_arb__DOT__err_q)) 
                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__err_q) 
                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_calc__DOT__err_q))) 
                                     << 2U)) | (((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.host_gnt_err_o) 
                                                   | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.host_gnt_err_o)) 
                                                  | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core.__PVT__u_host_outstanding_cnt__DOT__err_q) 
                                                     | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core.__PVT__u_host_outstanding_cnt__DOT__err_q))) 
                                                 << 1U) 
                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q)) 
                                                   | ((((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q) 
                                                        | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q)) 
                                                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q) 
                                                          | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q))) 
                                                      | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q) 
                                                          | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rd_storage__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q)) 
                                                         | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_rptr__DOT__err_q) 
                                                            | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_core__u_rd__DOT__u_rsp_order_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt.__PVT__gen_secure_ptrs__DOT__u_wptr__DOT__err_q)))))))));
}

void Vsim___024root___act_comb__TOP__80(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__80\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__rready_i 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__rvalid_o) 
                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__rvalid_o)) 
                    >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__rdata_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__rready_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__rready_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__rdata_o)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__rready_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__rready_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__rdata_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__rready_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__rvalid_o)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__rready_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__0__KET____DOT__u_host_rsp_fifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__rvalid_o)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__rready_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__gen_flash_cores__BRA__1__KET____DOT__u_host_rsp_fifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__d_valid 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (IData)(((0x00008000U != (0x0001c000U 
                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__rdata_o)) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__rvalid_o)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__vld_rd_rsp 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__d_valid) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_rspfifo__DOT__rvalid_o) 
              & (0x00008000U == (0x00018000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__rdata_o))));
}

void Vsim___024root___act_comb__TOP__81(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__81\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*91:0*/ __VdfgRegularize_he50b618e_0_1043;
    VL_ZERO_W(92, __VdfgRegularize_he50b618e_0_1043);
    IData/*23:0*/ __VdfgRegularize_he50b618e_0_1061;
    __VdfgRegularize_he50b618e_0_1061 = 0;
    VlWide<4>/*107:0*/ __VdfgRegularize_he50b618e_0_1062;
    VL_ZERO_W(108, __VdfgRegularize_he50b618e_0_1062);
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__3333__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__3333__Vfuncout = 0;
    VlWide<4>/*108:0*/ __Vfunc_extract_h2d_cmd_intg__3333__tl;
    VL_ZERO_W(109, __Vfunc_extract_h2d_cmd_intg__3333__tl);
    QData/*56:0*/ __Vfunc_get_cmd_intg__3353__unused_cmd_payload;
    __Vfunc_get_cmd_intg__3353__unused_cmd_payload = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__g_clock_en_secure__DOT__u_prim_core_busy_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((((2U & ((~ (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h2dc7b7d1_1_10))) 
                    << 1U)) | (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h2dc7b7d1_1_10))) 
            << 2U) | ((2U & ((~ (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h2dc7b7d1_1_10))) 
                             << 1U)) | (0U != (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__VdfgRegularize_h2dc7b7d1_1_10))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_837 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT____Vcellout__u_ibus_addr_en_1__q) 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT____Vcellout__u_ibus_addr_matching_1__q 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__input_masks 
                                                                 >> 0x00000020U))) 
                                                     == 
                                                     ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_addr 
                                                       << 2U) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__input_masks 
                                                                 >> 0x00000020U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT____Vcellout__u_ibus_addr_en_0__q) 
           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_reg_cfg__DOT____Vcellout__u_ibus_addr_matching_0__q 
               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT____VdfgRegularize_hb07557d4_0_0) 
              == ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_addr 
                   << 2U) & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT____VdfgRegularize_hb07557d4_0_0)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__data_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__data_tree__BRA__127__03a64__KET__
            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__data_tree__BRA__191__03a128__KET__);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__valid_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
           | (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_837));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__gnt_tree__BRA__2__KET__ 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__valid_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__gnt_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__valid_o));
    __VdfgRegularize_he50b618e_0_1043[0U] = (IData)(
                                                    (0x0f00000000030000ULL 
                                                     | (QData)((IData)(
                                                                       (1U 
                                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__instr_wdata_intg) 
                                                                           << 1U))))));
    __VdfgRegularize_he50b618e_0_1043[1U] = ((0xc0000000U 
                                              & __VdfgRegularize_he50b618e_0_1043[1U]) 
                                             | (IData)(
                                                       ((0x0f00000000030000ULL 
                                                         | (QData)((IData)(
                                                                           (1U 
                                                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__instr_wdata_intg) 
                                                                               << 1U))))) 
                                                        >> 0x00000020U)));
    __VdfgRegularize_he50b618e_0_1043[1U] = ((0x3fffffffU 
                                              & __VdfgRegularize_he50b618e_0_1043[1U]) 
                                             | (0xc0000000U 
                                                & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__valid_o)
                                                     ? 
                                                    (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_addr 
                                                       << 2U) 
                                                      & (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__data_o 
                                                                 >> 0x00000020U))) 
                                                     | ((~ (IData)(
                                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__data_o 
                                                                    >> 0x00000020U))) 
                                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__data_o)))
                                                     : 
                                                    (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_addr 
                                                     << 2U)) 
                                                   << 0x0000001cU)));
    __VdfgRegularize_he50b618e_0_1043[2U] = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__valid_o)
                                               ? ((
                                                   (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_addr 
                                                    << 2U) 
                                                   & (IData)(
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__data_o 
                                                              >> 0x00000020U))) 
                                                  | ((~ (IData)(
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__data_o 
                                                                 >> 0x00000020U))) 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_ibus_trans__DOT__u_sel_region__DOT__data_o)))
                                               : (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_addr 
                                                  << 2U)) 
                                             >> 4U);
    __VdfgRegularize_he50b618e_0_1062[0U] = __VdfgRegularize_he50b618e_0_1043[0U];
    __VdfgRegularize_he50b618e_0_1062[1U] = __VdfgRegularize_he50b618e_0_1043[1U];
    __VdfgRegularize_he50b618e_0_1062[2U] = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q) 
                                              << 0x0000001cU) 
                                             | __VdfgRegularize_he50b618e_0_1043[2U]);
    __VdfgRegularize_he50b618e_0_1062[3U] = (0x00000820U 
                                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q) 
                                                >> 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_27 = 4U;
    if ((0x00008000U == (0xffff8000U & ((__VdfgRegularize_he50b618e_0_1043[2U] 
                                         << 4U) | (
                                                   __VdfgRegularize_he50b618e_0_1043[1U] 
                                                   >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_27 = 0U;
    } else if ((0x00010000U == (0xfffff000U & ((__VdfgRegularize_he50b618e_0_1043[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1043[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_27 = 1U;
    } else if ((0x10000000U == (0xfffe0000U & ((__VdfgRegularize_he50b618e_0_1043[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1043[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_27 = 2U;
    } else if ((0x20000000U == (0xfff00000U & ((__VdfgRegularize_he50b618e_0_1043[2U] 
                                                << 4U) 
                                               | (__VdfgRegularize_he50b618e_0_1043[1U] 
                                                  >> 0x0000001cU))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_27 = 3U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[0U] 
        = __VdfgRegularize_he50b618e_0_1062[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[1U] 
        = __VdfgRegularize_he50b618e_0_1062[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[2U] 
        = __VdfgRegularize_he50b618e_0_1062[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[3U] 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o) 
            << 0x0000000cU) | __VdfgRegularize_he50b618e_0_1062[3U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__hold_all_requests 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__num_req_outstanding)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_27) 
              != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__dev_select_outstanding)));
    __Vfunc_extract_h2d_cmd_intg__3333__tl[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__3333__tl[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__3333__tl[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__3333__tl[3U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[3U];
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_extract_h2d_cmd_intg__3333__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 2447543324669687771ull);
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3333__payload 
        = ((0x0000078000000000ULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3333__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__3333__tl[2U] 
                                 << 4U) | (__Vfunc_extract_h2d_cmd_intg__3333__tl[1U] 
                                           >> 0x0000001cU)))) 
               << 7U) | (QData)((IData)(((0x00000070U 
                                          & (__Vfunc_extract_h2d_cmd_intg__3333__tl[3U] 
                                             >> 5U)) 
                                         | (0x0000000fU 
                                            & (__Vfunc_extract_h2d_cmd_intg__3333__tl[1U] 
                                               >> 0x00000018U)))))));
    vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3333__payload 
        = ((0x0000007fffffffffULL & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3333__payload) 
           | ((QData)((IData)((0x0000000fU & (__Vfunc_extract_h2d_cmd_intg__3333__tl[0U] 
                                              >> 0x0000000fU)))) 
              << 0x00000027U));
    __Vfunc_extract_h2d_cmd_intg__3333__Vfuncout = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3333__payload;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__cmd 
        = __Vfunc_extract_h2d_cmd_intg__3333__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__1__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__hold_all_requests)) 
           & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_27)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__3__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__hold_all_requests)) 
           & (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_27)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__0__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__hold_all_requests)) 
           & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_27)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__2__KET____DOT__dev_select 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__hold_all_requests)) 
           & (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_27)));
    __VdfgRegularize_he50b618e_0_1061 = (0x00030001U 
                                         | ((((4U & 
                                               (VL_REDXOR_64(
                                                             (0x000005a769a46910ULL 
                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__cmd)) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((~ 
                                                      VL_REDXOR_64(
                                                                   (0x00000356d5525488ULL 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__cmd))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_64(
                                                                   (0x000006cdb2c93244ULL 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__cmd))))) 
                                             << 0x0000000cU) 
                                            | (((((2U 
                                                   & ((~ 
                                                       VL_REDXOR_64(
                                                                    (0x0000063b8e388e22ULL 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__cmd))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x000001f87e0781e1ULL 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__cmd)))) 
                                                 << 0x0000000aU) 
                                                | (((2U 
                                                     & ((~ 
                                                         VL_REDXOR_64(
                                                                      (0x000007f801ff801fULL 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__cmd))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x000007f800007fffULL 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__cmd)))) 
                                                   << 8U)) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__instr_wdata_intg) 
                                                  << 1U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[0U] 
        = ((0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[0U]) 
           | __VdfgRegularize_he50b618e_0_1061);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[1U] 
        = ((0x00ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[1U]) 
           | (0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[2U] 
        = ((0x00ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[2U]) 
           | (0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[3U] 
        = (0x00001fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_i[3U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[0U] 
        = (1U | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[0U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[1U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[1U]) 
           | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[2U]) 
           | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U] 
        = ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U]) 
           | (0x00001fffU & ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[3U]) 
                             | (0x00000ffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[3U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U] 
        = ((0x00000fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U]) 
           | (0x00001fffU & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o) 
                              & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__hold_all_requests)) 
                                 & (4U <= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__dev_sel_s1n_27)))) 
                             << 0x0000000cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__fifo_h__DOT__tl_h_i[0U] 
        = (1U | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[0U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__fifo_h__DOT__tl_h_i[1U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[1U]) 
           | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__fifo_h__DOT__tl_h_i[2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[2U]) 
           | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__fifo_h__DOT__tl_h_i[3U] 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o) 
            << 0x0000000cU) | ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[3U]) 
                               | (0x00000ffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__u_cmd_intg_gen__DOT__tl_o[3U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[4U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[4U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[4U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[4U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT____Vcellinp__gen_err_resp__DOT__err_resp__tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__blanked_auser 
        = ((0x007fc000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__fifo_h__DOT__tl_h_i[0U] 
                           >> 1U)) | ((([&]() {
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__tl[0U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__fifo_h__DOT__tl_h_i[0U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__tl[1U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__fifo_h__DOT__tl_h_i[1U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__tl[2U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__fifo_h__DOT__tl_h_i[2U];
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__tl[3U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__fifo_h__DOT__tl_h_i[3U];
                        vlSelfRef.__Vfunc_get_cmd_intg__3353__tl[0U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__tl[0U];
                        vlSelfRef.__Vfunc_get_cmd_intg__3353__tl[1U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__tl[1U];
                        vlSelfRef.__Vfunc_get_cmd_intg__3353__tl[2U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__tl[2U];
                        vlSelfRef.__Vfunc_get_cmd_intg__3353__tl[3U] 
                            = vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__tl[3U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__tl[0U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__3353__tl[0U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__tl[1U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__3353__tl[1U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__tl[2U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__3353__tl[2U];
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__tl[3U] 
                            = vlSelfRef.__Vfunc_get_cmd_intg__3353__tl[3U];
                        vlSelf->__Vfunc_extract_h2d_cmd_intg__3354__payload = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 18131413024908578666ull);
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__payload 
                            = ((0x0000078000000000ULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__payload) 
                               | (((QData)((IData)(
                                                   ((vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__tl[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__tl[1U] 
                                                       >> 0x0000001cU)))) 
                                   << 7U) | (QData)((IData)(
                                                            ((0x00000070U 
                                                              & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__tl[3U] 
                                                                 >> 5U)) 
                                                             | (0x0000000fU 
                                                                & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__tl[1U] 
                                                                   >> 0x00000018U)))))));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__payload 
                            = ((0x0000007fffffffffULL 
                                & vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__payload) 
                               | ((QData)((IData)((0x0000000fU 
                                                   & (vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__tl[0U] 
                                                      >> 0x0000000fU)))) 
                                  << 0x00000027U));
                        vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__Vfuncout 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__payload;
                        vlSelfRef.__Vfunc_get_cmd_intg__3353__cmd 
                            = vlSelfRef.__Vfunc_extract_h2d_cmd_intg__3354__Vfuncout;
                        vlSelfRef.__Vfunc_get_cmd_intg__3353__cmd_intg 
                            = (0x0000007fU & (IData)(
                                                     (([&]() {
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_i 
                                                = vlSelfRef.__Vfunc_get_cmd_intg__3353__cmd;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_i;
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o 
                                                = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x0103fff800007fffULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o))))) 
                                                      << 0x00000039U));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o 
                                                = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x017c1ff801ff801fULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o))))) 
                                                      << 0x0000003aU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o 
                                                = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01bde1f87e0781e1ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o))))) 
                                                      << 0x0000003bU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o 
                                                = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01deee3b8e388e22ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o))))) 
                                                      << 0x0000003cU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o 
                                                = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01ef76cdb2c93244ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o))))) 
                                                      << 0x0000003dU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o 
                                                = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01f7bb56d5525488ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o))))) 
                                                      << 0x0000003eU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o 
                                                = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & VL_REDXOR_64(
                                                                                (0x01fbdda769a46910ULL 
                                                                                & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o))))) 
                                                      << 0x0000003fU));
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o 
                                                = (0x5400000000000000ULL 
                                                   ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o);
                                            vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__Vfuncout 
                                                = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__data_o;
                                        }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3355__Vfuncout) 
                                                      >> 0x00000039U)));
                        __Vfunc_get_cmd_intg__3353__unused_cmd_payload 
                            = (0x01ffffffffffffffULL 
                               & ([&]() {
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_i 
                                        = vlSelfRef.__Vfunc_get_cmd_intg__3353__cmd;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_i;
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o 
                                        = ((0xfdffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x0103fff800007fffULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o))))) 
                                              << 0x00000039U));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o 
                                        = ((0xfbffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x017c1ff801ff801fULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o))))) 
                                              << 0x0000003aU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o 
                                        = ((0xf7ffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01bde1f87e0781e1ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o))))) 
                                              << 0x0000003bU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o 
                                        = ((0xefffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01deee3b8e388e22ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o))))) 
                                              << 0x0000003cU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o 
                                        = ((0xdfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01ef76cdb2c93244ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o))))) 
                                              << 0x0000003dU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o 
                                        = ((0xbfffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01f7bb56d5525488ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o))))) 
                                              << 0x0000003eU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o 
                                        = ((0x7fffffffffffffffULL 
                                            & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & VL_REDXOR_64(
                                                                              (0x01fbdda769a46910ULL 
                                                                               & vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o))))) 
                                              << 0x0000003fU));
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o 
                                        = (0x5400000000000000ULL 
                                           ^ vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o);
                                    vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__Vfuncout 
                                        = vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__data_o;
                                }(), vlSelfRef.__Vfunc_prim_secded_inv_64_57_enc__3356__Vfuncout));
                        vlSelfRef.__Vfunc_get_cmd_intg__3353__Vfuncout 
                            = vlSelfRef.__Vfunc_get_cmd_intg__3353__cmd_intg;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__cmd_intg 
                            = vlSelfRef.__Vfunc_get_cmd_intg__3353__Vfuncout;
                        vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__Vfuncout 
                            = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__cmd_intg)));
                    }(), (IData)(vlSelfRef.__Vfunc_get_bad_cmd_intg__3352__Vfuncout)) 
                                       << 7U) | ([&]() {
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o = 0x00000000ffffffffULL;
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o 
                        = (0x0000007effffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o 
                        = ((0x0000007dffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000deba8050ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o))))) 
                              << 0x00000021U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o 
                        = ((0x0000007bffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000413d89aaULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o))))) 
                              << 0x00000022U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o 
                        = ((0x00000077ffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000031234ed1ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o))))) 
                              << 0x00000023U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o 
                        = ((0x0000006fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x00000000c2c1323bULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o))))) 
                              << 0x00000024U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o 
                        = ((0x0000005fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x000000002dcc624cULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o))))) 
                              << 0x00000025U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o 
                        = ((0x0000003fffffffffULL & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x0000000098505586ULL 
                                                             & vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o))))) 
                              << 0x00000026U));
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o 
                        = (0x0000002a00000000ULL ^ vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o);
                    vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__Vfuncout 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__data_o;
                    vlSelfRef.__Vfunc_get_data_intg__3358__enc_data 
                        = vlSelfRef.__Vfunc_prim_secded_inv_39_32_enc__3359__Vfuncout;
                    vlSelfRef.__Vfunc_get_data_intg__3358__data_intg 
                        = (0x0000007fU & (IData)((vlSelfRef.__Vfunc_get_data_intg__3358__enc_data 
                                                  >> 0x20U)));
                    vlSelfRef.__Vfunc_get_data_intg__3358__Vfuncout 
                        = vlSelfRef.__Vfunc_get_data_intg__3358__data_intg;
                    vlSelfRef.__Vfunc_get_bad_data_intg__3357__data_intg 
                        = vlSelfRef.__Vfunc_get_data_intg__3358__Vfuncout;
                    vlSelfRef.__Vfunc_get_bad_data_intg__3357__Vfuncout 
                        = (0x0000007fU & (~ (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__3357__data_intg)));
                }(), (IData)(vlSelfRef.__Vfunc_get_bad_data_intg__3357__Vfuncout))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1283[0U] 
        = (1U | ((0xff000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1283[0U]) 
                 | (0x00fffffeU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                                     ? (__VdfgRegularize_he50b618e_0_1061 
                                        >> 1U) : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__blanked_auser) 
                                   << 1U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1283[0U] 
        = ((0x00ffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1283[0U]) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
                ? 0U : 0xffffffffU) << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1283[1U] 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__1__KET____DOT__dev_select)
              ? 0U : 0xffffffffU) >> 8U) | ((IData)(
                                                    (0x000fffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         __VdfgRegularize_he50b618e_0_1062[3U])) 
                                                         << 0x00000028U) 
                                                        | (((QData)((IData)(
                                                                            __VdfgRegularize_he50b618e_0_1062[2U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                              >> 0x00000018U))))) 
                                            << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1283[2U] 
        = (((IData)((0x000fffffffffffffULL & (((QData)((IData)(
                                                               __VdfgRegularize_he50b618e_0_1062[3U])) 
                                               << 0x00000028U) 
                                              | (((QData)((IData)(
                                                                  __VdfgRegularize_he50b618e_0_1062[2U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                    >> 0x00000018U))))) 
            >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                & (((QData)((IData)(
                                                    __VdfgRegularize_he50b618e_0_1062[3U])) 
                                    << 0x00000028U) 
                                   | (((QData)((IData)(
                                                       __VdfgRegularize_he50b618e_0_1062[2U])) 
                                       << 8U) | ((QData)((IData)(
                                                                 __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                 >> 0x00000018U)))) 
                               >> 0x00000020U)) << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1283[3U] 
        = (0x00000fffU & ((IData)(((0x000fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        __VdfgRegularize_he50b618e_0_1062[3U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           __VdfgRegularize_he50b618e_0_1062[2U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           __VdfgRegularize_he50b618e_0_1062[1U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1285[0U] 
        = (1U | ((0xff000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1285[0U]) 
                 | (0x00fffffeU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)
                                     ? (__VdfgRegularize_he50b618e_0_1061 
                                        >> 1U) : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__blanked_auser) 
                                   << 1U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1285[0U] 
        = ((0x00ffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1285[0U]) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)
                ? 0U : 0xffffffffU) << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1285[1U] 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__3__KET____DOT__dev_select)
              ? 0U : 0xffffffffU) >> 8U) | ((IData)(
                                                    (0x000fffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         __VdfgRegularize_he50b618e_0_1062[3U])) 
                                                         << 0x00000028U) 
                                                        | (((QData)((IData)(
                                                                            __VdfgRegularize_he50b618e_0_1062[2U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                              >> 0x00000018U))))) 
                                            << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1285[2U] 
        = (((IData)((0x000fffffffffffffULL & (((QData)((IData)(
                                                               __VdfgRegularize_he50b618e_0_1062[3U])) 
                                               << 0x00000028U) 
                                              | (((QData)((IData)(
                                                                  __VdfgRegularize_he50b618e_0_1062[2U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                    >> 0x00000018U))))) 
            >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                & (((QData)((IData)(
                                                    __VdfgRegularize_he50b618e_0_1062[3U])) 
                                    << 0x00000028U) 
                                   | (((QData)((IData)(
                                                       __VdfgRegularize_he50b618e_0_1062[2U])) 
                                       << 8U) | ((QData)((IData)(
                                                                 __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                 >> 0x00000018U)))) 
                               >> 0x00000020U)) << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1285[3U] 
        = (0x00000fffU & ((IData)(((0x000fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        __VdfgRegularize_he50b618e_0_1062[3U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           __VdfgRegularize_he50b618e_0_1062[2U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           __VdfgRegularize_he50b618e_0_1062[1U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1282[0U] 
        = (1U | ((0xff000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1282[0U]) 
                 | (0x00fffffeU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                                     ? (__VdfgRegularize_he50b618e_0_1061 
                                        >> 1U) : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__blanked_auser) 
                                   << 1U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1282[0U] 
        = ((0x00ffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1282[0U]) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
                ? 0U : 0xffffffffU) << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1282[1U] 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__0__KET____DOT__dev_select)
              ? 0U : 0xffffffffU) >> 8U) | ((IData)(
                                                    (0x000fffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         __VdfgRegularize_he50b618e_0_1062[3U])) 
                                                         << 0x00000028U) 
                                                        | (((QData)((IData)(
                                                                            __VdfgRegularize_he50b618e_0_1062[2U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                              >> 0x00000018U))))) 
                                            << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1282[2U] 
        = (((IData)((0x000fffffffffffffULL & (((QData)((IData)(
                                                               __VdfgRegularize_he50b618e_0_1062[3U])) 
                                               << 0x00000028U) 
                                              | (((QData)((IData)(
                                                                  __VdfgRegularize_he50b618e_0_1062[2U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                    >> 0x00000018U))))) 
            >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                & (((QData)((IData)(
                                                    __VdfgRegularize_he50b618e_0_1062[3U])) 
                                    << 0x00000028U) 
                                   | (((QData)((IData)(
                                                       __VdfgRegularize_he50b618e_0_1062[2U])) 
                                       << 8U) | ((QData)((IData)(
                                                                 __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                 >> 0x00000018U)))) 
                               >> 0x00000020U)) << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1282[3U] 
        = (0x00000fffU & ((IData)(((0x000fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        __VdfgRegularize_he50b618e_0_1062[3U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           __VdfgRegularize_he50b618e_0_1062[2U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           __VdfgRegularize_he50b618e_0_1062[1U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284[0U] 
        = (1U | ((0xff000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284[0U]) 
                 | (0x00fffffeU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                                     ? (__VdfgRegularize_he50b618e_0_1061 
                                        >> 1U) : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__blanked_auser) 
                                   << 1U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284[0U] 
        = ((0x00ffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284[0U]) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
                ? 0U : 0xffffffffU) << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284[1U] 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_u_o__BRA__2__KET____DOT__dev_select)
              ? 0U : 0xffffffffU) >> 8U) | ((IData)(
                                                    (0x000fffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         __VdfgRegularize_he50b618e_0_1062[3U])) 
                                                         << 0x00000028U) 
                                                        | (((QData)((IData)(
                                                                            __VdfgRegularize_he50b618e_0_1062[2U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                              >> 0x00000018U))))) 
                                            << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284[2U] 
        = (((IData)((0x000fffffffffffffULL & (((QData)((IData)(
                                                               __VdfgRegularize_he50b618e_0_1062[3U])) 
                                               << 0x00000028U) 
                                              | (((QData)((IData)(
                                                                  __VdfgRegularize_he50b618e_0_1062[2U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                    >> 0x00000018U))))) 
            >> 8U) | ((IData)(((0x000fffffffffffffULL 
                                & (((QData)((IData)(
                                                    __VdfgRegularize_he50b618e_0_1062[3U])) 
                                    << 0x00000028U) 
                                   | (((QData)((IData)(
                                                       __VdfgRegularize_he50b618e_0_1062[2U])) 
                                       << 8U) | ((QData)((IData)(
                                                                 __VdfgRegularize_he50b618e_0_1062[1U])) 
                                                 >> 0x00000018U)))) 
                               >> 0x00000020U)) << 0x00000018U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284[3U] 
        = (0x00000fffU & ((IData)(((0x000fffffffffffffULL 
                                    & (((QData)((IData)(
                                                        __VdfgRegularize_he50b618e_0_1062[3U])) 
                                        << 0x00000028U) 
                                       | (((QData)((IData)(
                                                           __VdfgRegularize_he50b618e_0_1062[2U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           __VdfgRegularize_he50b618e_0_1062[1U])) 
                                           >> 0x00000018U)))) 
                                   >> 0x00000020U)) 
                          >> 8U));
}

extern const VlUnpacked<CData/*1:0*/, 8> Vsim__ConstPool__TABLE_h5e996ecf_0;
extern const VlUnpacked<IData/*31:0*/, 8> Vsim__ConstPool__TABLE_hb7245781_0;

void Vsim___024root___act_comb__TOP__82(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__82\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx95;
    __Vtableidx95 = 0;
    CData/*2:0*/ __Vtableidx96;
    __Vtableidx96 = 0;
    CData/*2:0*/ __Vtableidx97;
    __Vtableidx97 = 0;
    CData/*2:0*/ __Vtableidx98;
    __Vtableidx98 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1548;
    __VdfgRegularize_h6e95ff9d_0_1548 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1549;
    __VdfgRegularize_h6e95ff9d_0_1549 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1550;
    __VdfgRegularize_h6e95ff9d_0_1550 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1551;
    __VdfgRegularize_h6e95ff9d_0_1551 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
            << 2U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[1U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[1U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d[0U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[1U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[1U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o[0U][0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1283[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o[0U][1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1283[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o[0U][2U] 
        = ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
            [0U][2U]) | (0x0fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1283[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o[0U][2U] 
        = ((0x0fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
            [0U][2U]) | (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q), 2U) 
                         << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o[0U][3U] 
        = ((0x00001ff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
            [0U][3U]) | (0x0000000fU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q), 2U) 
                                        >> 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o[0U][3U] 
        = ((0x0000000fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
            [0U][3U]) | (0x00001ff0U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_i[3U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
            << 2U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[3U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[3U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[3U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[3U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d[0U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[3U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[3U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[3U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[3U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o[0U][0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1285[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o[0U][1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1285[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o[0U][2U] 
        = ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
            [0U][2U]) | (0x0fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1285[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o[0U][2U] 
        = ((0x0fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
            [0U][2U]) | (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q), 2U) 
                         << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o[0U][3U] 
        = ((0x00001ff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
            [0U][3U]) | (0x0000000fU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q), 2U) 
                                        >> 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o[0U][3U] 
        = ((0x0000000fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
            [0U][3U]) | (0x00001ff0U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_i[3U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
            << 2U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[0U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d[0U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[0U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o[0U][0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1282[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o[0U][1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1282[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o[0U][2U] 
        = ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
            [0U][2U]) | (0x0fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1282[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o[0U][2U] 
        = ((0x0fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
            [0U][2U]) | (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q), 2U) 
                         << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o[0U][3U] 
        = ((0x00001ff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
            [0U][3U]) | (0x0000000fU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q), 2U) 
                                        >> 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o[0U][3U] 
        = ((0x0000000fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
            [0U][3U]) | (0x00001ff0U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_i[3U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i 
        = (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
            << 2U) | (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i) 
                       << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[2U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_o[2U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d[0U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[2U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o[2U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o[0U][0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o[0U][1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o[0U][2U] 
        = ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
            [0U][2U]) | (0x0fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1284[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o[0U][2U] 
        = ((0x0fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
            [0U][2U]) | (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q), 2U) 
                         << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o[0U][3U] 
        = ((0x00001ff0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
            [0U][3U]) | (0x0000000fU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__tl_adapter_host_i_ibex__DOT__g_multiple_reqs__DOT__source_q), 2U) 
                                        >> 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o[0U][3U] 
        = ((0x0000000fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
            [0U][3U]) | (0x00001ff0U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_i[3U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_h2d
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hreq_fifo_o
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_h2d
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hreq_fifo_o
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rvalid_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) 
           | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_h2d
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hreq_fifo_o
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_30_us_h2d
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[3U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [3U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[3U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [3U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[3U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [3U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_d_o[3U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [3U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[3U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [3U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[3U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [3U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[3U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [3U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_h2d[3U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_s1n_27__tl_d_o
        [3U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__hreq_fifo_o
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_29__tl_h_i
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_31__tl_h_i
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_28__tl_h_i
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__tl_h_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellinp__u_sm1_30__tl_h_i
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__data_i[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
        [2U][3U];
    __VdfgRegularize_h6e95ff9d_0_1550 = (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))));
    __VdfgRegularize_h6e95ff9d_0_1548 = (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))));
    __VdfgRegularize_h6e95ff9d_0_1551 = (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))));
    __VdfgRegularize_h6e95ff9d_0_1549 = (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((((IData)(__VdfgRegularize_h6e95ff9d_0_1550) 
             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                >> 2U)) << 2U) | (((IData)(__VdfgRegularize_h6e95ff9d_0_1550) 
                                   << 1U) | (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((((IData)(__VdfgRegularize_h6e95ff9d_0_1548) 
             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                >> 2U)) << 2U) | (((IData)(__VdfgRegularize_h6e95ff9d_0_1548) 
                                   << 1U) | (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((((IData)(__VdfgRegularize_h6e95ff9d_0_1551) 
             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                >> 2U)) << 2U) | (((IData)(__VdfgRegularize_h6e95ff9d_0_1551) 
                                   << 1U) | (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out 
        = ((((IData)(__VdfgRegularize_h6e95ff9d_0_1549) 
             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req) 
                >> 2U)) << 2U) | (((IData)(__VdfgRegularize_h6e95ff9d_0_1549) 
                                   << 1U) | (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = (7U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
            = (1U & (~ vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__u_tlul_lc_gate_rom.tl_d2h_o[0U]));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o = 0U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
            = (1U & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__req_i)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = (7U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = (7U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner 
        = (7U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                 ^ VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out), 1U)));
    __Vtableidx96 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o 
        = Vsim__ConstPool__TABLE_h5e996ecf_0[__Vtableidx96];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = Vsim__ConstPool__TABLE_hb7245781_0[__Vtableidx96];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][3U];
    }
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][3U];
    }
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][3U];
    }
    __Vtableidx98 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o 
        = Vsim__ConstPool__TABLE_h5e996ecf_0[__Vtableidx98];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = Vsim__ConstPool__TABLE_hb7245781_0[__Vtableidx98];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][3U];
    }
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][3U];
    }
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][3U];
    }
    __Vtableidx95 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o 
        = Vsim__ConstPool__TABLE_h5e996ecf_0[__Vtableidx95];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = Vsim__ConstPool__TABLE_hb7245781_0[__Vtableidx95];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][3U];
    }
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][3U];
    }
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][3U];
    }
    __Vtableidx97 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o 
        = Vsim__ConstPool__TABLE_h5e996ecf_0[__Vtableidx97];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i 
        = Vsim__ConstPool__TABLE_hb7245781_0[__Vtableidx97];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] = 0U;
    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [0U][3U];
    }
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [1U][3U];
    }
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_30__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i
            [2U][3U];
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rvalid_o) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__full_q) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__gen_singleton_fifo__DOT__storage[3U];
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                = (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U]);
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]) 
                   | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U]));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]) 
                   | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U]));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]) 
                   | (0x00000ffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3U]));
        }
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__addr_o 
            = (0x00001fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] 
                               << 2U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] 
                                         >> 0x0000001eU)));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__addr_o = 0U;
    }
    vlSelfRef.__VdfgRegularize_he50b618e_0_832 = ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                       >> 9U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                         >> 9U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U] 
        = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U]) 
           | (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__rspfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]) 
           | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]) 
           | (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rvalid_o) 
            << 0x0000000cU) | ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]) 
                               | (0x00000ffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rvalid_o) 
           & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_832));
    if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__instr_error 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__3159__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_invalid__3159__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3159__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3159__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3159__Vfuncout)) 
           | (0U & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__3160__val 
                        = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_rom_h2d_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U] 
                                          >> 0x0000000fU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__3160__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3160__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3160__Vfuncout))));
}

void Vsim___024root___act_comb__TOP__83(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__83\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1291[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1291[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[2U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i
            [2U][2U]) | (3U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1291[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[2U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i
            [2U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[2U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [2U][0U]) | ((0x0000fffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1291[0U]) 
                         | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                  >> 2U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[2U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [2U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_516 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[2U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [2U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_516 
                         >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[2U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [2U][1U]) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                  >> 0x0000002eU)) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[2U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [2U][2U]) | (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                        >> 0x0000002eU)) 
                               >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[2U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [2U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1289[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1289[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[0U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i
            [0U][2U]) | (3U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1289[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[0U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i
            [0U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[1U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [1U][0U]) | ((0x0000fffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1289[0U]) 
                         | (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[1U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [1U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_516 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[1U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [1U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_516 
                         >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[1U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [1U][1U]) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                  >> 0x0000002eU)) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[1U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [1U][2U]) | (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                        >> 0x0000002eU)) 
                               >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[1U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [1U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1290[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1290[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[1U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i
            [1U][2U]) | (3U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1290[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i[1U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__hrsp_fifo_i
            [1U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[2U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [2U][0U]) | ((0x0000fffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1290[0U]) 
                         | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                  >> 1U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[2U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [2U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_516 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[2U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [2U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_516 
                         >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[2U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [2U][1U]) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                  >> 0x0000002eU)) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[2U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [2U][2U]) | (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT____VdfgRegularize_h081bd319_0_3 
                                        >> 0x0000002eU)) 
                               >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[2U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [2U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1297[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1297[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[2U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i
            [2U][2U]) | (3U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1297[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[2U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i
            [2U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0x0000000bU][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0000000bU][0U]) | ((0x0000fffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1297[0U]) 
                                  | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                           >> 2U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0x0000000bU][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0000000bU][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_519 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0x0000000bU][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0000000bU][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_519 
                                  >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0x0000000bU][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0000000bU][1U]) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                           >> 0x0000002eU)) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0x0000000bU][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0000000bU][2U]) | (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                                 >> 0x0000002eU)) 
                                        >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0x0000000bU][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0x0000000bU][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                        << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1295[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1295[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[0U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i
            [0U][2U]) | (3U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1295[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[0U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i
            [0U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[3U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [3U][0U]) | ((0x0000fffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1295[0U]) 
                         | (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[3U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [3U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_519 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[3U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [3U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_519 
                         >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[3U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [3U][1U]) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                  >> 0x0000002eU)) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[3U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [3U][2U]) | (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                        >> 0x0000002eU)) 
                               >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[3U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [3U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1296[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1296[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[1U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i
            [1U][2U]) | (3U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1296[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i[1U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__hrsp_fifo_i
            [1U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0x0000000bU][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0000000bU][0U]) | ((0x0000fffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1296[0U]) 
                                  | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                           >> 1U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0x0000000bU][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0000000bU][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_519 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0x0000000bU][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0000000bU][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_519 
                                  >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0x0000000bU][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0000000bU][1U]) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                           >> 0x0000002eU)) 
                                  << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0x0000000bU][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0000000bU][2U]) | (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT____VdfgRegularize_h081bd319_0_3 
                                                 >> 0x0000002eU)) 
                                        >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0x0000000bU][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0x0000000bU][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                                        << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1288[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1288[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[2U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i
            [2U][2U]) | (3U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1288[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[2U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i
            [2U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0U][0U]) | ((0x0000fffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1288[0U]) 
                         | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                  >> 2U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_514 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_514 
                         >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0U][1U]) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                  >> 0x0000002eU)) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0U][2U]) | (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                        >> 0x0000002eU)) 
                               >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i[0U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__tl_u_i
            [0U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_57__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1286[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1286[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[0U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i
            [0U][2U]) | (3U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1286[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[0U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i
            [0U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[0U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [0U][0U]) | ((0x0000fffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1286[0U]) 
                         | (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[0U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_514 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[0U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_514 
                         >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[0U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [0U][1U]) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                  >> 0x0000002eU)) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[0U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [0U][2U]) | (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                        >> 0x0000002eU)) 
                               >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i[0U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__tl_u_i
            [0U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_27__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1287[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1287[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[1U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i
            [1U][2U]) | (3U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1287[2U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i[1U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__hrsp_fifo_i
            [1U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0U][0U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0U][0U]) | ((0x0000fffeU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__VdfgRegularize_h6e95ff9d_0_1287[0U]) 
                         | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gnt_o) 
                                  >> 1U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0U][0U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0U][0U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_514 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0U][1U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0U][1U]) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_514 
                         >> 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0U][1U] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0U][1U]) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                  >> 0x0000002eU)) 
                         << 0x00000010U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0U][2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0U][2U]) | (1U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT____VdfgRegularize_h57fe2072_0_3 
                                        >> 0x0000002eU)) 
                               >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i[0U][2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__tl_u_i
            [0U][2U]) | (3U & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_s1n_32__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.__PVT__rspfifo__DOT__wvalid_i) 
                               << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_fatal_alert_cause_integrity_error__DOT__de 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__err_q) 
            | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_chk.err_o) 
               | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_reg_regs__DOT__u_prim_reg_we_check.__PVT__u_prim_onehot_check__DOT__err_o))) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk.err_o) 
              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_rspfifo__DOT__err_o) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_sramreqfifo__DOT__err_o) 
                    | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__intg_error_q) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__err_o))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_sram_byte__DOT__error_i 
        = (1U & ((((((0x0800U != (0x0e00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U])) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__instr_error)) 
                    | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk.err_o)) 
                   | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_err.__PVT__instr_type_err)) 
                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_err.__PVT__instr_wr_err)) 
                 | (((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_832) 
                     & (IData)(((0x0f000000U != (0x0f000000U 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[1U])) 
                                | (0x0020U != (0x0030U 
                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U]))))) 
                    | (~ (((0U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                         >> 9U))) | 
                           ((1U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                          >> 9U))) 
                            | (4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                            >> 9U))))) 
                          & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_err.__PVT__addr_sz_chk) 
                             & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_err.__PVT__mask_chk) 
                                & ((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                                 >> 9U))) 
                                   | ((1U == (7U & 
                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[3U] 
                                               >> 9U))) 
                                      | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_err.__PVT__fulldata_chk))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__req_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__u_devicefifo__DOT__reqfifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_sram_byte__DOT__error_i)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__u_reqfifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__rom_req 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__3174__val 
                    = (0x0000000fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_state_regs__DOT__state_raw));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__3174__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3174__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__3174__Vfuncout))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__u_tl_adapter_rom__DOT__req_o)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__req_q));
}

void Vsim___024root___act_comb__TOP__84(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__84\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o[2U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[2U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[1U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o[1U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[2U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o[2U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[0x0000000bU][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[0x0000000bU][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[0x0000000bU][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[3U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[3U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[3U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o[1U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[0x0000000bU][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[0x0000000bU][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[0x0000000bU][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o[2U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_57_ds_d2h[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_27_ds_d2h[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o[1U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_s1n_32_ds_d2h[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_o[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_o[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_o[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_o[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_o[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_o[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_o[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_o[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_29__DOT__tl_h_o[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_d2h[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_d2h[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_d2h[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_d2h[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_d2h[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_d2h[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_d2h[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_d2h[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_29_us_d2h[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_29__tl_h_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_o[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_o[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_o[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_o[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_o[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_o[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_o[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_o[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_31__DOT__tl_h_o[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_d2h[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_d2h[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_d2h[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_d2h[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_d2h[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_d2h[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_d2h[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_d2h[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_31_us_d2h[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_31__tl_h_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_o[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_o[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_o[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_o[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_o[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_o[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_o[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_o[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_28__DOT__tl_h_o[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_d2h[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_d2h[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_d2h[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_d2h[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_d2h[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_d2h[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_d2h[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_d2h[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__tl_sm1_28_us_d2h[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT____Vcellout__u_sm1_28__tl_h_o
        [2U][2U];
}

void Vsim___024root___act_comb__TOP__85(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__85\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__492__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__492__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__492__val;
    __Vfunc_mubi4_bool_to_mubi__492__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__493__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__493__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__493__val;
    __Vfunc_mubi4_bool_to_mubi__493__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__494__Vfuncout;
    __Vfunc_mubi4_and_hi__494__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__494__a;
    __Vfunc_mubi4_and_hi__494__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__494__b;
    __Vfunc_mubi4_and_hi__494__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__495__Vfuncout;
    __Vfunc_mubi4_and_hi__495__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__495__a;
    __Vfunc_mubi4_and_hi__495__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__495__b;
    __Vfunc_mubi4_and_hi__495__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__496__Vfuncout;
    __Vfunc_mubi4_or_hi__496__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__496__a;
    __Vfunc_mubi4_or_hi__496__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__496__b;
    __Vfunc_mubi4_or_hi__496__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__497__Vfuncout;
    __Vfunc_mubi4_or__497__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__497__a;
    __Vfunc_mubi4_or__497__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__497__b;
    __Vfunc_mubi4_or__497__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__497__a_in;
    __Vfunc_mubi4_or__497__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__497__b_in;
    __Vfunc_mubi4_or__497__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__498__Vfuncout;
    __Vfunc_mubi4_and__498__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__498__a;
    __Vfunc_mubi4_and__498__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__498__b;
    __Vfunc_mubi4_and__498__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__498__a_in;
    __Vfunc_mubi4_and__498__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__498__b_in;
    __Vfunc_mubi4_and__498__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__499__Vfuncout;
    __Vfunc_mubi4_and__499__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__499__a;
    __Vfunc_mubi4_and__499__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__499__b;
    __Vfunc_mubi4_and__499__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__499__a_in;
    __Vfunc_mubi4_and__499__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__499__b_in;
    __Vfunc_mubi4_and__499__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__509__Vfuncout;
    __Vfunc_mubi4_test_true_loose__509__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__509__val;
    __Vfunc_mubi4_test_true_loose__509__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__510__Vfuncout;
    __Vfunc_mubi4_and_hi__510__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__510__a;
    __Vfunc_mubi4_and_hi__510__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__510__b;
    __Vfunc_mubi4_and_hi__510__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__511__Vfuncout;
    __Vfunc_mubi4_and__511__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__511__a;
    __Vfunc_mubi4_and__511__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__511__b;
    __Vfunc_mubi4_and__511__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__511__a_in;
    __Vfunc_mubi4_and__511__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__511__b_in;
    __Vfunc_mubi4_and__511__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__522__Vfuncout;
    __Vfunc_mubi4_test_true_loose__522__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__522__val;
    __Vfunc_mubi4_test_true_loose__522__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__523__Vfuncout;
    __Vfunc_mubi4_test_true_loose__523__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__523__val;
    __Vfunc_mubi4_test_true_loose__523__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__524__Vfuncout;
    __Vfunc_mubi4_test_true_loose__524__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__524__val;
    __Vfunc_mubi4_test_true_loose__524__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__525__Vfuncout;
    __Vfunc_mubi4_test_true_loose__525__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__525__val;
    __Vfunc_mubi4_test_true_loose__525__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__530__Vfuncout;
    __Vfunc_mubi4_and_hi__530__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__530__a;
    __Vfunc_mubi4_and_hi__530__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__530__b;
    __Vfunc_mubi4_and_hi__530__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__531__Vfuncout;
    __Vfunc_mubi4_and__531__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__531__a;
    __Vfunc_mubi4_and__531__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__531__b;
    __Vfunc_mubi4_and__531__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__531__a_in;
    __Vfunc_mubi4_and__531__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__531__b_in;
    __Vfunc_mubi4_and__531__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__532__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__532__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__532__val;
    __Vfunc_mubi4_bool_to_mubi__532__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__533__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__533__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__533__val;
    __Vfunc_mubi4_bool_to_mubi__533__val = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_wait = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_phase = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase_wrreadback = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_wait = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__hold_tx_data = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_q;
    if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase = 1U;
                                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0xe7U;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase = 1U;
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mubi4_test_true_loose__483__val 
                                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                        vlSelfRef.__Vfunc_mubi4_test_true_loose__483__Vfuncout 
                                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__483__val));
                                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__483__Vfuncout))
                                    ? 0x57U : 0x7eU);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_d 
                                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                                    << 8U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                                              >> 0x00000018U));
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_d 
                                = (0x0000007fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                                                  >> 1U));
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mubi4_test_true_loose__484__val 
                                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                        vlSelfRef.__Vfunc_mubi4_test_true_loose__484__Vfuncout 
                                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__484__val));
                                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__484__Vfuncout))
                                    ? 6U : 9U);
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase_wrreadback = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0x7eU;
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0x7eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d 
                        = (([&]() {
                                vlSelfRef.__Vfunc_mubi4_test_true_loose__485__val 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                vlSelfRef.__Vfunc_mubi4_test_true_loose__485__Vfuncout 
                                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__485__val));
                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__485__Vfuncout))
                            ? 6U : 9U);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_d 
                        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
                            << 0x00000010U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
                                               >> 0x00000010U));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_d 
                        = (0x0000007fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
                                          >> 2U));
                }
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                        if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__depth_o))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase = 1U;
                            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0x7eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d 
                                    = (([&]() {
                                            vlSelfRef.__Vfunc_mubi4_test_true_loose__486__val 
                                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                            vlSelfRef.__Vfunc_mubi4_test_true_loose__486__Vfuncout 
                                                = (9U 
                                                   != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__486__val));
                                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__486__Vfuncout))
                                        ? 6U : 9U);
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_d 
                                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_d 
                                    = (0x0000007fU 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
                                          >> 2U));
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0xc0U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__depth_o))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_mubi4_test_true_loose__487__val 
                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                    vlSelfRef.__Vfunc_mubi4_test_true_loose__487__Vfuncout 
                                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__487__val));
                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__487__Vfuncout))
                                ? 6U : 9U);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_d 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                << 9U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
                                          >> 0x00000017U));
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_d 
                            = (0x0000007fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d 
                            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i)
                                ? 0x0fU : 0x30U);
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
        }
    } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                            } else {
                                if ((([&]() {
                                                vlSelfRef.__Vfunc_mubi4_test_true_loose__488__val 
                                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                                vlSelfRef.__Vfunc_mubi4_test_true_loose__488__Vfuncout 
                                                    = 
                                                    (9U 
                                                     != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__488__val));
                                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__488__Vfuncout)) 
                                     & ([&]() {
                                                vlSelfRef.__Vfunc_mubi4_test_true_loose__489__val 
                                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_q;
                                                vlSelfRef.__Vfunc_mubi4_test_true_loose__489__Vfuncout 
                                                    = 
                                                    (9U 
                                                     != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__489__val));
                                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__489__Vfuncout)))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_wait = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d = 9U;
                                    if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_q 
                                         != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_data)) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                                    }
                                }
                                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__byte_wr_txn) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_phase = 1U;
                                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__byte_req_ack) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 2U;
                                    }
                                } else if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__wvalid_i) 
                                             & ([&]() {
                                                    vlSelfRef.__Vfunc_mubi4_test_true_loose__490__val 
                                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                                    vlSelfRef.__Vfunc_mubi4_test_true_loose__490__Vfuncout 
                                                        = 
                                                        (9U 
                                                         != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__490__val));
                                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__490__Vfuncout))) 
                                            & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i)))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__hold_tx_data = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d 
                                        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_txn)
                                            ? 0x99U
                                            : 0xacU);
                                }
                                if ((((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                                          >> 0x0000000cU)) 
                                      & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U] 
                                            >> 1U))) 
                                     & ([&]() {
                                                vlSelfRef.__Vfunc_mubi4_test_false_strict__491__val 
                                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_q;
                                                vlSelfRef.__Vfunc_mubi4_test_false_strict__491__Vfuncout 
                                                    = 
                                                    (9U 
                                                     == (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__491__val));
                                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__491__Vfuncout)))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_d 
                                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__Vcellout__u_readback__q;
                                }
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d 
                            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i)
                                ? 0xe7U : 0xffU);
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0x0fU;
                }
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0x7eU;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_phase = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
            if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__depth_o))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_wait = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0xf1U;
                }
            }
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase_wrreadback) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__compound_txn_in_progress_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase_wrreadback)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__wvalid_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__hold_tx_data) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__byte_req_ack));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_285 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_wait) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_wait));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT____VdfgRegularize_hb672d1f3_0_2 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_285)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__req_o 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            >> 0x0000000cU) & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_o)) 
                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__key_valid_i) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__req_o) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__incr_en_i)));
    __Vfunc_mubi4_bool_to_mubi__493__val = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_i));
    __Vfunc_mubi4_bool_to_mubi__493__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__493__val)
                                                  ? 6U
                                                  : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_d 
        = __Vfunc_mubi4_bool_to_mubi__493__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__492__val = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) 
                                            & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_i)));
    __Vfunc_mubi4_bool_to_mubi__492__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__492__val)
                                                  ? 6U
                                                  : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__read_en 
        = __Vfunc_mubi4_bool_to_mubi__492__Vfuncout;
    __Vfunc_mubi4_test_true_loose__523__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_d;
    __Vfunc_mubi4_test_true_loose__523__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__523__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_b 
        = __Vfunc_mubi4_test_true_loose__523__Vfuncout;
    __Vfunc_mubi4_test_true_loose__522__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__read_en;
    __Vfunc_mubi4_test_true_loose__522__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__522__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__read_en_b 
        = __Vfunc_mubi4_test_true_loose__522__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__addr_mux 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__514__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__read_en;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__514__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__514__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__514__Vfuncout))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__waddr_scr_q));
    __Vfunc_mubi4_and_hi__510__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__read_en;
    __Vfunc_mubi4_and_hi__510__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_q;
    __Vfunc_mubi4_and__511__b = __Vfunc_mubi4_and_hi__510__b;
    __Vfunc_mubi4_and__511__a = __Vfunc_mubi4_and_hi__510__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__511__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2570644469333789357ull);
    __Vfunc_mubi4_and__511__a_in = __Vfunc_mubi4_and__511__a;
    __Vfunc_mubi4_and__511__b_in = __Vfunc_mubi4_and__511__b;
    vlSelfRef.__Vfunc_mubi4_and__511__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__511__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__511__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__511__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__511__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__511__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__511__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__511__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__511__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__511__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__511__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__511__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__511__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__511__out;
    __Vfunc_mubi4_and_hi__510__Vfuncout = __Vfunc_mubi4_and__511__Vfuncout;
    __Vfunc_mubi4_test_true_loose__509__val = __Vfunc_mubi4_and_hi__510__Vfuncout;
    __Vfunc_mubi4_test_true_loose__509__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__509__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rw_collision 
        = __Vfunc_mubi4_test_true_loose__509__Vfuncout;
    __Vfunc_mubi4_and_hi__494__b = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o) 
                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__waddr_scr_q))
                                     ? 6U : 9U);
    __Vfunc_mubi4_and_hi__495__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__read_en;
    __Vfunc_mubi4_or_hi__496__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_pending_q;
    __Vfunc_mubi4_or_hi__496__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_q;
    __Vfunc_mubi4_or__497__b = __Vfunc_mubi4_or_hi__496__b;
    __Vfunc_mubi4_or__497__a = __Vfunc_mubi4_or_hi__496__a;
    vlSelf->__Vfunc_mubi4_or__497__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10972263895096982968ull);
    __Vfunc_mubi4_or__497__a_in = __Vfunc_mubi4_or__497__a;
    __Vfunc_mubi4_or__497__b_in = __Vfunc_mubi4_or__497__b;
    vlSelfRef.__Vfunc_mubi4_or__497__out = ((0x0cU 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_or__497__out)) 
                                            | ((2U 
                                                & ((IData)(__Vfunc_mubi4_or__497__a_in) 
                                                   | (IData)(__Vfunc_mubi4_or__497__b_in))) 
                                               | (1U 
                                                  & ((IData)(__Vfunc_mubi4_or__497__a_in) 
                                                     & (IData)(__Vfunc_mubi4_or__497__b_in)))));
    vlSelfRef.__Vfunc_mubi4_or__497__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__497__out)) 
                                            | (((2U 
                                                 & (((IData)(__Vfunc_mubi4_or__497__a_in) 
                                                     & (IData)(__Vfunc_mubi4_or__497__b_in)) 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (((IData)(__Vfunc_mubi4_or__497__a_in) 
                                                       | (IData)(__Vfunc_mubi4_or__497__b_in)) 
                                                      >> 2U))) 
                                               << 2U));
    __Vfunc_mubi4_or__497__Vfuncout = vlSelfRef.__Vfunc_mubi4_or__497__out;
    __Vfunc_mubi4_or_hi__496__Vfuncout = __Vfunc_mubi4_or__497__Vfuncout;
    __Vfunc_mubi4_and_hi__495__a = __Vfunc_mubi4_or_hi__496__Vfuncout;
    __Vfunc_mubi4_and__498__b = __Vfunc_mubi4_and_hi__495__b;
    __Vfunc_mubi4_and__498__a = __Vfunc_mubi4_and_hi__495__a;
    vlSelf->__Vfunc_mubi4_and__498__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14161626628312454134ull);
    __Vfunc_mubi4_and__498__a_in = __Vfunc_mubi4_and__498__a;
    __Vfunc_mubi4_and__498__b_in = __Vfunc_mubi4_and__498__b;
    vlSelfRef.__Vfunc_mubi4_and__498__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__498__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__498__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__498__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__498__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__498__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__498__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__498__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__498__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__498__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__498__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__498__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__498__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__498__out;
    __Vfunc_mubi4_and_hi__495__Vfuncout = __Vfunc_mubi4_and__498__Vfuncout;
    __Vfunc_mubi4_and_hi__494__a = __Vfunc_mubi4_and_hi__495__Vfuncout;
    __Vfunc_mubi4_and__499__b = __Vfunc_mubi4_and_hi__494__b;
    __Vfunc_mubi4_and__499__a = __Vfunc_mubi4_and_hi__494__a;
    vlSelf->__Vfunc_mubi4_and__499__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11338969140890906555ull);
    __Vfunc_mubi4_and__499__a_in = __Vfunc_mubi4_and__499__a;
    __Vfunc_mubi4_and__499__b_in = __Vfunc_mubi4_and__499__b;
    vlSelfRef.__Vfunc_mubi4_and__499__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__499__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__499__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__499__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__499__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__499__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__499__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__499__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__499__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__499__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__499__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__499__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__499__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__499__out;
    __Vfunc_mubi4_and_hi__494__Vfuncout = __Vfunc_mubi4_and__499__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__addr_collision_d 
        = __Vfunc_mubi4_and_hi__494__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__macro_write 
        = ((([&]() {
                    vlSelfRef.__Vfunc_mubi4_or_hi__506__b 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_pending_q;
                    vlSelfRef.__Vfunc_mubi4_or_hi__506__a 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_q;
                    vlSelfRef.__Vfunc_mubi4_or__507__b 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__506__b;
                    vlSelfRef.__Vfunc_mubi4_or__507__a 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__506__a;
                    vlSelf->__Vfunc_mubi4_or__507__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13307107361505304004ull);
                    vlSelfRef.__Vfunc_mubi4_or__507__a_in 
                        = vlSelfRef.__Vfunc_mubi4_or__507__a;
                    vlSelfRef.__Vfunc_mubi4_or__507__b_in 
                        = vlSelfRef.__Vfunc_mubi4_or__507__b;
                    vlSelfRef.__Vfunc_mubi4_or__507__out 
                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__507__out)) 
                           | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__507__a_in) 
                                     | (IData)(vlSelfRef.__Vfunc_mubi4_or__507__b_in))) 
                              | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__507__a_in) 
                                       & (IData)(vlSelfRef.__Vfunc_mubi4_or__507__b_in)))));
                    vlSelfRef.__Vfunc_mubi4_or__507__out 
                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__507__out)) 
                           | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__507__a_in) 
                                       & (IData)(vlSelfRef.__Vfunc_mubi4_or__507__b_in)) 
                                      >> 2U)) | (1U 
                                                 & (((IData)(vlSelfRef.__Vfunc_mubi4_or__507__a_in) 
                                                     | (IData)(vlSelfRef.__Vfunc_mubi4_or__507__b_in)) 
                                                    >> 2U))) 
                              << 2U));
                    vlSelfRef.__Vfunc_mubi4_or__507__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_or__507__out;
                    vlSelfRef.__Vfunc_mubi4_or_hi__506__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_or__507__Vfuncout;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__505__val 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__506__Vfuncout;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__505__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__505__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__505__Vfuncout)) 
            & (~ ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__508__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__read_en;
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__508__Vfuncout 
                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__508__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__508__Vfuncout)))) 
           & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__intg_error_w_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__macro_req 
        = (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__intg_error_w_q)) 
            & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_intg_error__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_or_hi__501__b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_pending_q;
                vlSelfRef.__Vfunc_mubi4_or_hi__502__b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_q;
                vlSelfRef.__Vfunc_mubi4_or_hi__502__a 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__read_en;
                vlSelfRef.__Vfunc_mubi4_or__503__b 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__502__b;
                vlSelfRef.__Vfunc_mubi4_or__503__a 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__502__a;
                vlSelf->__Vfunc_mubi4_or__503__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5756045394850525873ull);
                vlSelfRef.__Vfunc_mubi4_or__503__a_in 
                    = vlSelfRef.__Vfunc_mubi4_or__503__a;
                vlSelfRef.__Vfunc_mubi4_or__503__b_in 
                    = vlSelfRef.__Vfunc_mubi4_or__503__b;
                vlSelfRef.__Vfunc_mubi4_or__503__out 
                    = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__503__out)) 
                       | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__503__a_in) 
                                 | (IData)(vlSelfRef.__Vfunc_mubi4_or__503__b_in))) 
                          | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__503__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__503__b_in)))));
                vlSelfRef.__Vfunc_mubi4_or__503__out 
                    = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__503__out)) 
                       | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__503__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__503__b_in)) 
                                  >> 2U)) | (1U & (
                                                   ((IData)(vlSelfRef.__Vfunc_mubi4_or__503__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_or__503__b_in)) 
                                                   >> 2U))) 
                          << 2U));
                vlSelfRef.__Vfunc_mubi4_or__503__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__503__out;
                vlSelfRef.__Vfunc_mubi4_or_hi__502__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__503__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_or_hi__501__a 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__502__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_or__504__b 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__501__b;
                vlSelfRef.__Vfunc_mubi4_or__504__a 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__501__a;
                vlSelf->__Vfunc_mubi4_or__504__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3039486936915210962ull);
                vlSelfRef.__Vfunc_mubi4_or__504__a_in 
                    = vlSelfRef.__Vfunc_mubi4_or__504__a;
                vlSelfRef.__Vfunc_mubi4_or__504__b_in 
                    = vlSelfRef.__Vfunc_mubi4_or__504__b;
                vlSelfRef.__Vfunc_mubi4_or__504__out 
                    = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__504__out)) 
                       | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__504__a_in) 
                                 | (IData)(vlSelfRef.__Vfunc_mubi4_or__504__b_in))) 
                          | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__504__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__504__b_in)))));
                vlSelfRef.__Vfunc_mubi4_or__504__out 
                    = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__504__out)) 
                       | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__504__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__504__b_in)) 
                                  >> 2U)) | (1U & (
                                                   ((IData)(vlSelfRef.__Vfunc_mubi4_or__504__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_or__504__b_in)) 
                                                   >> 2U))) 
                          << 2U));
                vlSelfRef.__Vfunc_mubi4_or__504__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__504__out;
                vlSelfRef.__Vfunc_mubi4_or_hi__501__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__504__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__500__val 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__501__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__500__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__500__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__500__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_write_pending_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__macro_write)
            ? 9U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rw_collision)
                     ? 6U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_pending_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_wpending 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__macro_write) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__512__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_d;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__512__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__512__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__512__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__533__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__macro_write;
    __Vfunc_mubi4_bool_to_mubi__533__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__533__val)
                                                  ? 6U
                                                  : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__533__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__532__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__macro_req;
    __Vfunc_mubi4_bool_to_mubi__532__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__532__val)
                                                  ? 6U
                                                  : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_d 
        = __Vfunc_mubi4_bool_to_mubi__532__Vfuncout;
    __Vfunc_mubi4_test_true_loose__525__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__525__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__525__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__525__Vfuncout;
    __Vfunc_mubi4_test_true_loose__524__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_test_true_loose__524__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__524__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_q_b 
        = __Vfunc_mubi4_test_true_loose__524__Vfuncout;
    __Vfunc_mubi4_and_hi__530__b = (0x0000000fU & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_d)));
    __Vfunc_mubi4_and_hi__530__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_and__531__b = __Vfunc_mubi4_and_hi__530__b;
    __Vfunc_mubi4_and__531__a = __Vfunc_mubi4_and_hi__530__a;
    vlSelf->__Vfunc_mubi4_and__531__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14016411720356238106ull);
    __Vfunc_mubi4_and__531__a_in = __Vfunc_mubi4_and__531__a;
    __Vfunc_mubi4_and__531__b_in = __Vfunc_mubi4_and__531__b;
    vlSelfRef.__Vfunc_mubi4_and__531__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__531__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__531__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__531__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__531__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__531__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__531__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__531__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__531__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__531__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__531__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__531__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__531__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__531__out;
    __Vfunc_mubi4_and_hi__530__Vfuncout = __Vfunc_mubi4_and__531__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_d 
        = __Vfunc_mubi4_and_hi__530__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__ram_alert 
        = (((([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__535__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__535__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__535__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__535__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__535__Vfuncout)) 
             | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__536__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__536__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__536__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__536__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__536__Vfuncout))) 
            | ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_invalid__537__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                    vlSelfRef.__Vfunc_mubi4_test_invalid__537__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__537__val)) 
                                    | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__537__val)))));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__537__Vfuncout))) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__538__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                vlSelfRef.__Vfunc_mubi4_test_invalid__538__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__538__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__538__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__538__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_alert 
        = ((((([&]() {
                            vlSelfRef.__Vfunc_mubi4_test_invalid__518__val 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_en_q;
                            vlSelfRef.__Vfunc_mubi4_test_invalid__518__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__518__val)) 
                                            | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__518__val)))));
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__518__Vfuncout)) 
              | ([&]() {
                            vlSelfRef.__Vfunc_mubi4_test_invalid__519__val 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__addr_collision_q;
                            vlSelfRef.__Vfunc_mubi4_test_invalid__519__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__519__val)) 
                                            | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__519__val)))));
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__519__Vfuncout))) 
             | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__520__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_pending_q;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__520__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__520__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__520__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__520__Vfuncout))) 
            | ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_invalid__521__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__rvalid_q;
                    vlSelfRef.__Vfunc_mubi4_test_invalid__521__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__521__val)) 
                                    | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__521__val)))));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__521__Vfuncout))) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__ram_alert));
}

void Vsim___024root___act_comb__TOP__86(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__86\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__escalate) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__err_q) 
              | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__bus_integ_error)) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__sram_alert) 
                    | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_reg_regs.__PVT__u_status_readback_error__DOT__de) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__local_esc_reg))))));
}

void Vsim___024root___act_comb__TOP__87(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__87\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__3011__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__3011__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__3011__val;
    __Vfunc_mubi4_bool_to_mubi__3011__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__3012__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__3012__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__3012__val;
    __Vfunc_mubi4_bool_to_mubi__3012__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3013__Vfuncout;
    __Vfunc_mubi4_and_hi__3013__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3013__a;
    __Vfunc_mubi4_and_hi__3013__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3013__b;
    __Vfunc_mubi4_and_hi__3013__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3014__Vfuncout;
    __Vfunc_mubi4_and_hi__3014__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3014__a;
    __Vfunc_mubi4_and_hi__3014__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3014__b;
    __Vfunc_mubi4_and_hi__3014__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__3015__Vfuncout;
    __Vfunc_mubi4_or_hi__3015__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__3015__a;
    __Vfunc_mubi4_or_hi__3015__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or_hi__3015__b;
    __Vfunc_mubi4_or_hi__3015__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__3016__Vfuncout;
    __Vfunc_mubi4_or__3016__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__3016__a;
    __Vfunc_mubi4_or__3016__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__3016__b;
    __Vfunc_mubi4_or__3016__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__3016__a_in;
    __Vfunc_mubi4_or__3016__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_or__3016__b_in;
    __Vfunc_mubi4_or__3016__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3017__Vfuncout;
    __Vfunc_mubi4_and__3017__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3017__a;
    __Vfunc_mubi4_and__3017__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3017__b;
    __Vfunc_mubi4_and__3017__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3017__a_in;
    __Vfunc_mubi4_and__3017__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3017__b_in;
    __Vfunc_mubi4_and__3017__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3018__Vfuncout;
    __Vfunc_mubi4_and__3018__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3018__a;
    __Vfunc_mubi4_and__3018__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3018__b;
    __Vfunc_mubi4_and__3018__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3018__a_in;
    __Vfunc_mubi4_and__3018__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3018__b_in;
    __Vfunc_mubi4_and__3018__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__3028__Vfuncout;
    __Vfunc_mubi4_test_true_loose__3028__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__3028__val;
    __Vfunc_mubi4_test_true_loose__3028__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3029__Vfuncout;
    __Vfunc_mubi4_and_hi__3029__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3029__a;
    __Vfunc_mubi4_and_hi__3029__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3029__b;
    __Vfunc_mubi4_and_hi__3029__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3030__Vfuncout;
    __Vfunc_mubi4_and__3030__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3030__a;
    __Vfunc_mubi4_and__3030__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3030__b;
    __Vfunc_mubi4_and__3030__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3030__a_in;
    __Vfunc_mubi4_and__3030__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3030__b_in;
    __Vfunc_mubi4_and__3030__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__3041__Vfuncout;
    __Vfunc_mubi4_test_true_loose__3041__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__3041__val;
    __Vfunc_mubi4_test_true_loose__3041__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__3042__Vfuncout;
    __Vfunc_mubi4_test_true_loose__3042__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__3042__val;
    __Vfunc_mubi4_test_true_loose__3042__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__3043__Vfuncout;
    __Vfunc_mubi4_test_true_loose__3043__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__3043__val;
    __Vfunc_mubi4_test_true_loose__3043__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__3044__Vfuncout;
    __Vfunc_mubi4_test_true_loose__3044__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__3044__val;
    __Vfunc_mubi4_test_true_loose__3044__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3049__Vfuncout;
    __Vfunc_mubi4_and_hi__3049__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3049__a;
    __Vfunc_mubi4_and_hi__3049__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__3049__b;
    __Vfunc_mubi4_and_hi__3049__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3050__Vfuncout;
    __Vfunc_mubi4_and__3050__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3050__a;
    __Vfunc_mubi4_and__3050__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3050__b;
    __Vfunc_mubi4_and__3050__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3050__a_in;
    __Vfunc_mubi4_and__3050__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__3050__b_in;
    __Vfunc_mubi4_and__3050__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__3051__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__3051__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__3051__val;
    __Vfunc_mubi4_bool_to_mubi__3051__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__3052__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__3052__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__3052__val;
    __Vfunc_mubi4_bool_to_mubi__3052__val = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_wait = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_phase = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase_wrreadback = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_wait = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__hold_tx_data = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_q;
    if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase = 1U;
                                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0xe7U;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                        }
                    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase = 1U;
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mubi4_test_true_loose__3002__val 
                                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                        vlSelfRef.__Vfunc_mubi4_test_true_loose__3002__Vfuncout 
                                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3002__val));
                                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3002__Vfuncout))
                                    ? 0x57U : 0x7eU);
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_d 
                                = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                                    << 8U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                                              >> 0x00000018U));
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_d 
                                = (0x0000007fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                                                  >> 1U));
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d 
                                = (([&]() {
                                        vlSelfRef.__Vfunc_mubi4_test_true_loose__3003__val 
                                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                        vlSelfRef.__Vfunc_mubi4_test_true_loose__3003__Vfuncout 
                                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3003__val));
                                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3003__Vfuncout))
                                    ? 6U : 9U);
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    }
                } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase_wrreadback = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0x7eU;
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0x7eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d 
                        = (([&]() {
                                vlSelfRef.__Vfunc_mubi4_test_true_loose__3004__val 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                vlSelfRef.__Vfunc_mubi4_test_true_loose__3004__Vfuncout 
                                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3004__val));
                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3004__Vfuncout))
                            ? 6U : 9U);
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_d 
                        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
                            << 0x00000010U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
                                               >> 0x00000010U));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_d 
                        = (0x0000007fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
                                          >> 2U));
                }
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                        if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__depth_o))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase = 1U;
                            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0x7eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d 
                                    = (([&]() {
                                            vlSelfRef.__Vfunc_mubi4_test_true_loose__3005__val 
                                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                            vlSelfRef.__Vfunc_mubi4_test_true_loose__3005__Vfuncout 
                                                = (9U 
                                                   != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3005__val));
                                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3005__Vfuncout))
                                        ? 6U : 9U);
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_d 
                                    = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[1U] 
                                        << 0x00000010U) 
                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_d 
                                    = (0x0000007fU 
                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[0U] 
                                          >> 2U));
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0xc0U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__depth_o))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_mubi4_test_true_loose__3006__val 
                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                    vlSelfRef.__Vfunc_mubi4_test_true_loose__3006__Vfuncout 
                                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3006__val));
                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3006__Vfuncout))
                                ? 6U : 9U);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_d 
                            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                << 9U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U] 
                                          >> 0x00000017U));
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_intg_d 
                            = (0x0000007fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d 
                            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i)
                                ? 0x0fU : 0x30U);
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
        }
    } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                            } else {
                                if ((([&]() {
                                                vlSelfRef.__Vfunc_mubi4_test_true_loose__3007__val 
                                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                                vlSelfRef.__Vfunc_mubi4_test_true_loose__3007__Vfuncout 
                                                    = 
                                                    (9U 
                                                     != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3007__val));
                                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3007__Vfuncout)) 
                                     & ([&]() {
                                                vlSelfRef.__Vfunc_mubi4_test_true_loose__3008__val 
                                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_q;
                                                vlSelfRef.__Vfunc_mubi4_test_true_loose__3008__Vfuncout 
                                                    = 
                                                    (9U 
                                                     != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3008__val));
                                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3008__Vfuncout)))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_wait = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_d = 9U;
                                    if ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_data_exp_q 
                                         != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__d_data)) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                                    }
                                }
                                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__byte_wr_txn) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_phase = 1U;
                                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__byte_req_ack) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 2U;
                                    }
                                } else if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__wvalid_i) 
                                             & ([&]() {
                                                    vlSelfRef.__Vfunc_mubi4_test_true_loose__3009__val 
                                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_q;
                                                    vlSelfRef.__Vfunc_mubi4_test_true_loose__3009__Vfuncout 
                                                        = 
                                                        (9U 
                                                         != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3009__val));
                                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3009__Vfuncout))) 
                                            & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i)))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__hold_tx_data = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d 
                                        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_txn)
                                            ? 0x99U
                                            : 0xacU);
                                }
                                if ((((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                                          >> 0x0000000cU)) 
                                      & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_rsp_gen__DOT__tl_i[2U] 
                                            >> 1U))) 
                                     & ([&]() {
                                                vlSelfRef.__Vfunc_mubi4_test_false_strict__3010__val 
                                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_check_q;
                                                vlSelfRef.__Vfunc_mubi4_test_false_strict__3010__Vfuncout 
                                                    = 
                                                    (9U 
                                                     == (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__3010__val));
                                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__3010__Vfuncout)))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_en_d 
                                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__Vcellout__u_readback__q;
                                }
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d 
                            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i)
                                ? 0xe7U : 0xffU);
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0x0fU;
                }
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0x7eU;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_phase = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host = 1U;
            if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__depth_o))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_wait = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__state_d = 0xf1U;
                }
            }
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__sram_byte_readback_error = 1U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase_wrreadback) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__compound_txn_in_progress_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_phase_wrreadback)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__wvalid_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__hold_tx_data) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__byte_req_ack));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_313 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_wait) 
                                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rdback_wait));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT____VdfgRegularize_hb672d1f3_0_2 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_313)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__d_valid));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__req_o 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            >> 0x0000000cU) & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_o)) 
                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wready_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__key_valid_i) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__req_o) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_count__DOT__incr_en_i)));
    __Vfunc_mubi4_bool_to_mubi__3012__val = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_i));
    __Vfunc_mubi4_bool_to_mubi__3012__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__3012__val)
                                                   ? 6U
                                                   : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_en_d 
        = __Vfunc_mubi4_bool_to_mubi__3012__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__3011__val = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) 
                                             & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_i)));
    __Vfunc_mubi4_bool_to_mubi__3011__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__3011__val)
                                                   ? 6U
                                                   : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__read_en 
        = __Vfunc_mubi4_bool_to_mubi__3011__Vfuncout;
    __Vfunc_mubi4_test_true_loose__3042__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_en_d;
    __Vfunc_mubi4_test_true_loose__3042__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__3042__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_en_b 
        = __Vfunc_mubi4_test_true_loose__3042__Vfuncout;
    __Vfunc_mubi4_test_true_loose__3041__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__read_en;
    __Vfunc_mubi4_test_true_loose__3041__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__3041__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__read_en_b 
        = __Vfunc_mubi4_test_true_loose__3041__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__addr_mux 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__3033__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__read_en;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__3033__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3033__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3033__Vfuncout))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__waddr_scr_q));
    __Vfunc_mubi4_and_hi__3029__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__read_en;
    __Vfunc_mubi4_and_hi__3029__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_en_q;
    __Vfunc_mubi4_and__3030__b = __Vfunc_mubi4_and_hi__3029__b;
    __Vfunc_mubi4_and__3030__a = __Vfunc_mubi4_and_hi__3029__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__3030__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3999869606258948246ull);
    __Vfunc_mubi4_and__3030__a_in = __Vfunc_mubi4_and__3030__a;
    __Vfunc_mubi4_and__3030__b_in = __Vfunc_mubi4_and__3030__b;
    vlSelfRef.__Vfunc_mubi4_and__3030__out = ((0x0cU 
                                               & (IData)(vlSelfRef.__Vfunc_mubi4_and__3030__out)) 
                                              | ((2U 
                                                  & ((IData)(__Vfunc_mubi4_and__3030__a_in) 
                                                     & (IData)(__Vfunc_mubi4_and__3030__b_in))) 
                                                 | (1U 
                                                    & ((IData)(__Vfunc_mubi4_and__3030__a_in) 
                                                       | (IData)(__Vfunc_mubi4_and__3030__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__3030__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__3030__out)) 
                                              | (((2U 
                                                   & (((IData)(__Vfunc_mubi4_and__3030__a_in) 
                                                       | (IData)(__Vfunc_mubi4_and__3030__b_in)) 
                                                      >> 2U)) 
                                                  | (1U 
                                                     & (((IData)(__Vfunc_mubi4_and__3030__a_in) 
                                                         & (IData)(__Vfunc_mubi4_and__3030__b_in)) 
                                                        >> 2U))) 
                                                 << 2U));
    __Vfunc_mubi4_and__3030__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__3030__out;
    __Vfunc_mubi4_and_hi__3029__Vfuncout = __Vfunc_mubi4_and__3030__Vfuncout;
    __Vfunc_mubi4_test_true_loose__3028__val = __Vfunc_mubi4_and_hi__3029__Vfuncout;
    __Vfunc_mubi4_test_true_loose__3028__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__3028__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__rw_collision 
        = __Vfunc_mubi4_test_true_loose__3028__Vfuncout;
    __Vfunc_mubi4_and_hi__3013__b = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o) 
                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__waddr_scr_q))
                                      ? 6U : 9U);
    __Vfunc_mubi4_and_hi__3014__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__read_en;
    __Vfunc_mubi4_or_hi__3015__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_pending_q;
    __Vfunc_mubi4_or_hi__3015__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_en_q;
    __Vfunc_mubi4_or__3016__b = __Vfunc_mubi4_or_hi__3015__b;
    __Vfunc_mubi4_or__3016__a = __Vfunc_mubi4_or_hi__3015__a;
    vlSelf->__Vfunc_mubi4_or__3016__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6953003299542416849ull);
    __Vfunc_mubi4_or__3016__a_in = __Vfunc_mubi4_or__3016__a;
    __Vfunc_mubi4_or__3016__b_in = __Vfunc_mubi4_or__3016__b;
    vlSelfRef.__Vfunc_mubi4_or__3016__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_or__3016__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_or__3016__a_in) 
                                                    | (IData)(__Vfunc_mubi4_or__3016__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_or__3016__a_in) 
                                                      & (IData)(__Vfunc_mubi4_or__3016__b_in)))));
    vlSelfRef.__Vfunc_mubi4_or__3016__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__3016__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_or__3016__a_in) 
                                                      & (IData)(__Vfunc_mubi4_or__3016__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_or__3016__a_in) 
                                                        | (IData)(__Vfunc_mubi4_or__3016__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_or__3016__Vfuncout = vlSelfRef.__Vfunc_mubi4_or__3016__out;
    __Vfunc_mubi4_or_hi__3015__Vfuncout = __Vfunc_mubi4_or__3016__Vfuncout;
    __Vfunc_mubi4_and_hi__3014__a = __Vfunc_mubi4_or_hi__3015__Vfuncout;
    __Vfunc_mubi4_and__3017__b = __Vfunc_mubi4_and_hi__3014__b;
    __Vfunc_mubi4_and__3017__a = __Vfunc_mubi4_and_hi__3014__a;
    vlSelf->__Vfunc_mubi4_and__3017__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4913531167140428185ull);
    __Vfunc_mubi4_and__3017__a_in = __Vfunc_mubi4_and__3017__a;
    __Vfunc_mubi4_and__3017__b_in = __Vfunc_mubi4_and__3017__b;
    vlSelfRef.__Vfunc_mubi4_and__3017__out = ((0x0cU 
                                               & (IData)(vlSelfRef.__Vfunc_mubi4_and__3017__out)) 
                                              | ((2U 
                                                  & ((IData)(__Vfunc_mubi4_and__3017__a_in) 
                                                     & (IData)(__Vfunc_mubi4_and__3017__b_in))) 
                                                 | (1U 
                                                    & ((IData)(__Vfunc_mubi4_and__3017__a_in) 
                                                       | (IData)(__Vfunc_mubi4_and__3017__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__3017__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__3017__out)) 
                                              | (((2U 
                                                   & (((IData)(__Vfunc_mubi4_and__3017__a_in) 
                                                       | (IData)(__Vfunc_mubi4_and__3017__b_in)) 
                                                      >> 2U)) 
                                                  | (1U 
                                                     & (((IData)(__Vfunc_mubi4_and__3017__a_in) 
                                                         & (IData)(__Vfunc_mubi4_and__3017__b_in)) 
                                                        >> 2U))) 
                                                 << 2U));
    __Vfunc_mubi4_and__3017__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__3017__out;
    __Vfunc_mubi4_and_hi__3014__Vfuncout = __Vfunc_mubi4_and__3017__Vfuncout;
    __Vfunc_mubi4_and_hi__3013__a = __Vfunc_mubi4_and_hi__3014__Vfuncout;
    __Vfunc_mubi4_and__3018__b = __Vfunc_mubi4_and_hi__3013__b;
    __Vfunc_mubi4_and__3018__a = __Vfunc_mubi4_and_hi__3013__a;
    vlSelf->__Vfunc_mubi4_and__3018__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1064806386026550096ull);
    __Vfunc_mubi4_and__3018__a_in = __Vfunc_mubi4_and__3018__a;
    __Vfunc_mubi4_and__3018__b_in = __Vfunc_mubi4_and__3018__b;
    vlSelfRef.__Vfunc_mubi4_and__3018__out = ((0x0cU 
                                               & (IData)(vlSelfRef.__Vfunc_mubi4_and__3018__out)) 
                                              | ((2U 
                                                  & ((IData)(__Vfunc_mubi4_and__3018__a_in) 
                                                     & (IData)(__Vfunc_mubi4_and__3018__b_in))) 
                                                 | (1U 
                                                    & ((IData)(__Vfunc_mubi4_and__3018__a_in) 
                                                       | (IData)(__Vfunc_mubi4_and__3018__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__3018__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__3018__out)) 
                                              | (((2U 
                                                   & (((IData)(__Vfunc_mubi4_and__3018__a_in) 
                                                       | (IData)(__Vfunc_mubi4_and__3018__b_in)) 
                                                      >> 2U)) 
                                                  | (1U 
                                                     & (((IData)(__Vfunc_mubi4_and__3018__a_in) 
                                                         & (IData)(__Vfunc_mubi4_and__3018__b_in)) 
                                                        >> 2U))) 
                                                 << 2U));
    __Vfunc_mubi4_and__3018__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__3018__out;
    __Vfunc_mubi4_and_hi__3013__Vfuncout = __Vfunc_mubi4_and__3018__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__addr_collision_d 
        = __Vfunc_mubi4_and_hi__3013__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__macro_write 
        = ((([&]() {
                    vlSelfRef.__Vfunc_mubi4_or_hi__3025__b 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_pending_q;
                    vlSelfRef.__Vfunc_mubi4_or_hi__3025__a 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_en_q;
                    vlSelfRef.__Vfunc_mubi4_or__3026__b 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__3025__b;
                    vlSelfRef.__Vfunc_mubi4_or__3026__a 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__3025__a;
                    vlSelf->__Vfunc_mubi4_or__3026__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3418855665145342292ull);
                    vlSelfRef.__Vfunc_mubi4_or__3026__a_in 
                        = vlSelfRef.__Vfunc_mubi4_or__3026__a;
                    vlSelfRef.__Vfunc_mubi4_or__3026__b_in 
                        = vlSelfRef.__Vfunc_mubi4_or__3026__b;
                    vlSelfRef.__Vfunc_mubi4_or__3026__out 
                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__3026__out)) 
                           | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__3026__a_in) 
                                     | (IData)(vlSelfRef.__Vfunc_mubi4_or__3026__b_in))) 
                              | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__3026__a_in) 
                                       & (IData)(vlSelfRef.__Vfunc_mubi4_or__3026__b_in)))));
                    vlSelfRef.__Vfunc_mubi4_or__3026__out 
                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__3026__out)) 
                           | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__3026__a_in) 
                                       & (IData)(vlSelfRef.__Vfunc_mubi4_or__3026__b_in)) 
                                      >> 2U)) | (1U 
                                                 & (((IData)(vlSelfRef.__Vfunc_mubi4_or__3026__a_in) 
                                                     | (IData)(vlSelfRef.__Vfunc_mubi4_or__3026__b_in)) 
                                                    >> 2U))) 
                              << 2U));
                    vlSelfRef.__Vfunc_mubi4_or__3026__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_or__3026__out;
                    vlSelfRef.__Vfunc_mubi4_or_hi__3025__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_or__3026__Vfuncout;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__3024__val 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__3025__Vfuncout;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__3024__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3024__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3024__Vfuncout)) 
            & (~ ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__3027__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__read_en;
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__3027__Vfuncout 
                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3027__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3027__Vfuncout)))) 
           & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__intg_error_w_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__macro_req 
        = (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__intg_error_w_q)) 
            & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_intg_error__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) 
           & ([&]() {
                vlSelfRef.__Vfunc_mubi4_or_hi__3020__b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_pending_q;
                vlSelfRef.__Vfunc_mubi4_or_hi__3021__b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_en_q;
                vlSelfRef.__Vfunc_mubi4_or_hi__3021__a 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__read_en;
                vlSelfRef.__Vfunc_mubi4_or__3022__b 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__3021__b;
                vlSelfRef.__Vfunc_mubi4_or__3022__a 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__3021__a;
                vlSelf->__Vfunc_mubi4_or__3022__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16086806154629073487ull);
                vlSelfRef.__Vfunc_mubi4_or__3022__a_in 
                    = vlSelfRef.__Vfunc_mubi4_or__3022__a;
                vlSelfRef.__Vfunc_mubi4_or__3022__b_in 
                    = vlSelfRef.__Vfunc_mubi4_or__3022__b;
                vlSelfRef.__Vfunc_mubi4_or__3022__out 
                    = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__3022__out)) 
                       | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__3022__a_in) 
                                 | (IData)(vlSelfRef.__Vfunc_mubi4_or__3022__b_in))) 
                          | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__3022__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__3022__b_in)))));
                vlSelfRef.__Vfunc_mubi4_or__3022__out 
                    = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__3022__out)) 
                       | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__3022__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__3022__b_in)) 
                                  >> 2U)) | (1U & (
                                                   ((IData)(vlSelfRef.__Vfunc_mubi4_or__3022__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_or__3022__b_in)) 
                                                   >> 2U))) 
                          << 2U));
                vlSelfRef.__Vfunc_mubi4_or__3022__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__3022__out;
                vlSelfRef.__Vfunc_mubi4_or_hi__3021__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__3022__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_or_hi__3020__a 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__3021__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_or__3023__b 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__3020__b;
                vlSelfRef.__Vfunc_mubi4_or__3023__a 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__3020__a;
                vlSelf->__Vfunc_mubi4_or__3023__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9337489062892139870ull);
                vlSelfRef.__Vfunc_mubi4_or__3023__a_in 
                    = vlSelfRef.__Vfunc_mubi4_or__3023__a;
                vlSelfRef.__Vfunc_mubi4_or__3023__b_in 
                    = vlSelfRef.__Vfunc_mubi4_or__3023__b;
                vlSelfRef.__Vfunc_mubi4_or__3023__out 
                    = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__3023__out)) 
                       | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__3023__a_in) 
                                 | (IData)(vlSelfRef.__Vfunc_mubi4_or__3023__b_in))) 
                          | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__3023__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__3023__b_in)))));
                vlSelfRef.__Vfunc_mubi4_or__3023__out 
                    = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__3023__out)) 
                       | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__3023__a_in) 
                                   & (IData)(vlSelfRef.__Vfunc_mubi4_or__3023__b_in)) 
                                  >> 2U)) | (1U & (
                                                   ((IData)(vlSelfRef.__Vfunc_mubi4_or__3023__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_or__3023__b_in)) 
                                                   >> 2U))) 
                          << 2U));
                vlSelfRef.__Vfunc_mubi4_or__3023__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__3023__out;
                vlSelfRef.__Vfunc_mubi4_or_hi__3020__Vfuncout 
                    = vlSelfRef.__Vfunc_mubi4_or__3023__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__3019__val 
                    = vlSelfRef.__Vfunc_mubi4_or_hi__3020__Vfuncout;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__3019__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3019__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3019__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_write_pending_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__macro_write)
            ? 9U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__rw_collision)
                     ? 6U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_pending_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__sram_wpending 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__macro_write) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__3031__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_en_d;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__3031__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3031__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3031__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__3052__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__macro_write;
    __Vfunc_mubi4_bool_to_mubi__3052__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__3052__val)
                                                   ? 6U
                                                   : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__3052__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__3051__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__macro_req;
    __Vfunc_mubi4_bool_to_mubi__3051__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__3051__val)
                                                   ? 6U
                                                   : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_d 
        = __Vfunc_mubi4_bool_to_mubi__3051__Vfuncout;
    __Vfunc_mubi4_test_true_loose__3044__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__3044__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__3044__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__3044__Vfuncout;
    __Vfunc_mubi4_test_true_loose__3043__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_test_true_loose__3043__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__3043__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_q_b 
        = __Vfunc_mubi4_test_true_loose__3043__Vfuncout;
    __Vfunc_mubi4_and_hi__3049__b = (0x0000000fU & 
                                     (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_d)));
    __Vfunc_mubi4_and_hi__3049__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_d;
    __Vfunc_mubi4_and__3050__b = __Vfunc_mubi4_and_hi__3049__b;
    __Vfunc_mubi4_and__3050__a = __Vfunc_mubi4_and_hi__3049__a;
    vlSelf->__Vfunc_mubi4_and__3050__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 646763382380319052ull);
    __Vfunc_mubi4_and__3050__a_in = __Vfunc_mubi4_and__3050__a;
    __Vfunc_mubi4_and__3050__b_in = __Vfunc_mubi4_and__3050__b;
    vlSelfRef.__Vfunc_mubi4_and__3050__out = ((0x0cU 
                                               & (IData)(vlSelfRef.__Vfunc_mubi4_and__3050__out)) 
                                              | ((2U 
                                                  & ((IData)(__Vfunc_mubi4_and__3050__a_in) 
                                                     & (IData)(__Vfunc_mubi4_and__3050__b_in))) 
                                                 | (1U 
                                                    & ((IData)(__Vfunc_mubi4_and__3050__a_in) 
                                                       | (IData)(__Vfunc_mubi4_and__3050__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__3050__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__3050__out)) 
                                              | (((2U 
                                                   & (((IData)(__Vfunc_mubi4_and__3050__a_in) 
                                                       | (IData)(__Vfunc_mubi4_and__3050__b_in)) 
                                                      >> 2U)) 
                                                  | (1U 
                                                     & (((IData)(__Vfunc_mubi4_and__3050__a_in) 
                                                         & (IData)(__Vfunc_mubi4_and__3050__b_in)) 
                                                        >> 2U))) 
                                                 << 2U));
    __Vfunc_mubi4_and__3050__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__3050__out;
    __Vfunc_mubi4_and_hi__3049__Vfuncout = __Vfunc_mubi4_and__3050__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_d 
        = __Vfunc_mubi4_and_hi__3049__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__ram_alert 
        = (((([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__3054__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__req_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__3054__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3054__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3054__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3054__Vfuncout)) 
             | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__3055__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__write_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__3055__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3055__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3055__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3055__Vfuncout))) 
            | ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_invalid__3056__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                    vlSelfRef.__Vfunc_mubi4_test_invalid__3056__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3056__val)) 
                                    | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3056__val)))));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3056__Vfuncout))) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__3057__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__u_prim_ram_1p_adv__DOT__rvalid_sram_q;
                vlSelfRef.__Vfunc_mubi4_test_invalid__3057__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3057__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3057__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3057__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__sram_alert 
        = ((((([&]() {
                            vlSelfRef.__Vfunc_mubi4_test_invalid__3037__val 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_en_q;
                            vlSelfRef.__Vfunc_mubi4_test_invalid__3037__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3037__val)) 
                                            | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3037__val)))));
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3037__Vfuncout)) 
              | ([&]() {
                            vlSelfRef.__Vfunc_mubi4_test_invalid__3038__val 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__addr_collision_q;
                            vlSelfRef.__Vfunc_mubi4_test_invalid__3038__Vfuncout 
                                = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3038__val)) 
                                            | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3038__val)))));
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3038__Vfuncout))) 
             | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__3039__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_pending_q;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__3039__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3039__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3039__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3039__Vfuncout))) 
            | ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_invalid__3040__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__rvalid_q;
                    vlSelfRef.__Vfunc_mubi4_test_invalid__3040__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3040__val)) 
                                    | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3040__val)))));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__3040__Vfuncout))) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__ram_alert));
}

void Vsim___024root___act_comb__TOP__88(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__88\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__escalate) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_count__DOT__err_q) 
              | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__bus_integ_error)) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__sram_alert) 
                    | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_reg_regs.__PVT__u_status_readback_error__DOT__de) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__local_esc_reg))))));
}

void Vsim___024root___act_comb__TOP__89(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__89\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__cnt_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__cnt_clr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lci_prog_idle = 1U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__otp_req_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__otp_cmd_o = 0x45U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__lc_err_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__lc_ack_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__error_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__error_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__fsm_err_o = 0U;
    if ((0x002bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lci_prog_idle = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__pwr_otp_rsp_q) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__state_d = 0x019eU;
        }
    } else if ((0x019eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vcellout__u_lc_ctrl_fsm__otp_prog_req_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__state_d = 0x0151U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__cnt_clr = 1U;
        }
    } else if ((0x0151U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__otp_req_o = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__otp_cmd_o = 0x37U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lci_prog_idle = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellinp__u_otp_ctrl_lci__otp_gnt_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__state_d = 0x0080U;
        }
    } else if ((0x0080U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lci_prog_idle = 0U;
        if ((0x00001000U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid))) {
            if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__error_d 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_q;
            }
            if ((0x2bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__state_d = 0x019eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__lc_ack_o = 1U;
                if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__error_d))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__lc_err_o = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__state_d = 0x00fdU;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__state_d = 0x0151U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__cnt_en = 1U;
            }
        }
    } else if ((0x00fdU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw))) {
        if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__error_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__error_d = 7U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__state_d = 0x00fdU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__fsm_err_o = 1U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x00fdU 
                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x0080U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x0151U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x019eU 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x002bU 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x00fdU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x0080U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x0151U 
                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x019eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x002bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: otp_ctrl_lci.sv:139: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.u_otp_ctrl_lci.p_fsm: unique case, but multiple matches found for '9'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),9,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/otp_ctrl_lci.sv", 139, "");
            }
        }
    }
    if ((([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__135__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                                  >> 0x00000030U)));
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__135__Vfuncout 
                        = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__135__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__135__Vfuncout)) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__err_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__state_d = 0x00fdU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__fsm_err_o = 1U;
        if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__error_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__error_d = 7U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000007fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__cnt_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000007fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__cnt_en)));
    __Vtemp_1[0U] = (((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__otp_req_o)
                                ? (QData)((IData)((
                                                   (0x02bfU 
                                                    >= 
                                                    (0x000003ffU 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))
                                                    ? 
                                                   (0x0000ffffU 
                                                    & (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))
                                                         ? 0U
                                                         : 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[
                                                         (((IData)(0x0000000fU) 
                                                           + 
                                                           (0x000003ffU 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U))))) 
                                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[
                                                          (0x0000001fU 
                                                           & (VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))))
                                                    : 0U)))
                                : 0ULL)) << 0x0000000aU) 
                     | (0x000003ffU & ((IData)(0x03d4U) 
                                       + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    __Vtemp_1[1U] = (((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__otp_req_o)
                                ? (QData)((IData)((
                                                   (0x02bfU 
                                                    >= 
                                                    (0x000003ffU 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))
                                                    ? 
                                                   (0x0000ffffU 
                                                    & (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))
                                                         ? 0U
                                                         : 
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[
                                                         (((IData)(0x0000000fU) 
                                                           + 
                                                           (0x000003ffU 
                                                            & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U))))) 
                                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[
                                                          (0x0000001fU 
                                                           & (VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))))
                                                    : 0U)))
                                : 0ULL)) >> 0x00000016U) 
                     | ((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__otp_req_o)
                                   ? (QData)((IData)(
                                                     ((0x02bfU 
                                                       >= 
                                                       (0x000003ffU 
                                                        & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))
                                                       ? 
                                                      (0x0000ffffU 
                                                       & (((0U 
                                                            == 
                                                            (0x0000001fU 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))
                                                            ? 0U
                                                            : 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[
                                                            (((IData)(0x0000000fU) 
                                                              + 
                                                              (0x000003ffU 
                                                               & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U))) 
                                                             >> 5U)] 
                                                            << 
                                                            ((IData)(0x00000020U) 
                                                             - 
                                                             (0x0000001fU 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U))))) 
                                                          | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[
                                                             (0x0000001fU 
                                                              & (VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x0000001fU 
                                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))))
                                                       : 0U)))
                                   : 0ULL) >> 0x00000020U)) 
                        << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[0U] 
        = __Vtemp_1[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[2U] 
        = ((0x0007f000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[2U]) 
           | (0x0007ffffU & ((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__otp_req_o)
                                        ? (QData)((IData)(
                                                          ((0x02bfU 
                                                            >= 
                                                            (0x000003ffU 
                                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))
                                                            ? 
                                                           (0x0000ffffU 
                                                            & (((0U 
                                                                 == 
                                                                 (0x0000001fU 
                                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[
                                                                 (((IData)(0x0000000fU) 
                                                                   + 
                                                                   (0x000003ffU 
                                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U))) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x00000020U) 
                                                                  - 
                                                                  (0x0000001fU 
                                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U))))) 
                                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[
                                                                  (0x0000001fU 
                                                                   & (VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q), 4U)))))
                                                            : 0U)))
                                        : 0ULL) >> 0x00000020U)) 
                             >> 0x00000016U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[2U] 
        = ((0x00000fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[2U]) 
           | (0x0007ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__otp_cmd_o) 
                             << 0x0000000cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__13__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__otp_req_o) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 0x0000000cU));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__cnt_clr) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000003fU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000003fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__cnt_en) 
                               & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__cnt_en) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 6U)) ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000003fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__cnt_en) 
                               & (~ (0x0000003fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__cnt_en) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 6U)) ? 0x3fU
                                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[0x0000000cU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[0x0000000cU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[0x0000000cU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[2U];
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__otp_req_o) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1161__03a1079__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1161__03a1079__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1161__03a1079__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2323__03a2241__KET__[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__580__03a498__KET__[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1161__03a1079__KET__[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__580__03a498__KET__[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1161__03a1079__KET__[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__580__03a498__KET__[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1161__03a1079__KET__[2U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1161__03a1079__KET__[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1161__03a1079__KET__[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1161__03a1079__KET__[2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__580__03a498__KET__[0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__580__03a498__KET__[1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__580__03a498__KET__[2U] = 0U;
    }
}

void Vsim___024root___act_comb__TOP__90(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__90\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mode_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__pwr_otp_rsp_d = 1U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_init_req = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__dai_idle = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__dai_prog_idle = 1U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_operation_done = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_req_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_cmd_o = 0x2cU;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_cmd_o = 2U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_sel_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_valid_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__cnt_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__cnt_clr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_clr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_sel = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 0U;
    if ((0x00000800U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000400U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__dai_idle = 1U;
                            if ((7U == (7U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_direct_access_cmd_digest__DOT__we)))))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d = 0U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__cnt_clr = 1U;
                                if ((1U == (7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0966U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_clr = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_d = 1U;
                                } else if ((2U == (7U 
                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_sel = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_en = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_d = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d 
                                        = ((1U & (IData)(
                                                         (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                          [
                                                          ((0x0aU 
                                                            >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                            : 0U)] 
                                                          >> 7U)))
                                            ? 0x0015U
                                            : 0x0dc8U);
                                } else if ((4U == (7U 
                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x03cfU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_d = 0U;
                                }
                                if (VL_UNLIKELY(((1U 
                                                  & (~ 
                                                     VL_ONEHOT_I(
                                                                 (((4U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd)) 
                                                                   << 2U) 
                                                                  | (((2U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd)) 
                                                                      << 1U) 
                                                                     | (1U 
                                                                        == 
                                                                        (7U 
                                                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd)))))))))) {
                                    if ((0U != (((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd)) 
                                                 << 2U) 
                                                | (((2U 
                                                     == 
                                                     (7U 
                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd)) 
                                                    << 1U) 
                                                   | (1U 
                                                      == 
                                                      (7U 
                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd)))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: otp_ctrl_dai.sv:280: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otp_ctrl.u_otp_ctrl_dai.p_fsm: unique case, but multiple matches found for '3'h%x'\n",0,
                                                         64,
                                                         VL_TIME_UNITED_Q(1),
                                                         -12,
                                                         vlSymsp->name(),
                                                         3,
                                                         (7U 
                                                          & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd));
                                            Verilated::runFlushCallbacks();
                                            VL_STOP_MT("verilogSourceFiles/otp_ctrl_dai.sv", 280, "");
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                    } else if ((1U 
                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                    } else {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__dai_prog_idle = 0U;
                                        __Vtemp_1[0U] = 0x2383501cU;
                                        __Vtemp_1[1U] = 0x4d7338c9U;
                                        __Vtemp_1[2U] = 0x43a4de36U;
                                        __Vtemp_1[3U] = 0x00003fcfU;
                                        __Vtemp_2[0U] = 0x2383501cU;
                                        __Vtemp_2[1U] = 0x4d7338c9U;
                                        __Vtemp_2[2U] = 0x43a4de36U;
                                        __Vtemp_2[3U] = 0x00003fcfU;
                                        if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__valid_o) 
                                              & ([&]() {
                                                            vlSelfRef.__Vfunc_mubi8_test_false_strict__126__val 
                                                                = 
                                                                (0x000000ffU 
                                                                 & (((0U 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                                      (((IData)(7U) 
                                                                        + 
                                                                        (0x000000ffU 
                                                                         & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x00000020U) 
                                                                       - 
                                                                       (0x0000001fU 
                                                                        & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))))) 
                                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                                       (7U 
                                                                        & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U) 
                                                                           >> 5U))] 
                                                                       >> 
                                                                       (0x0000001fU 
                                                                        & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))));
                                                            vlSelfRef.__Vfunc_mubi8_test_false_strict__126__Vfuncout 
                                                                = 
                                                                (0x69U 
                                                                 == (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__126__val));
                                                        }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__126__Vfuncout))) 
                                             & ((((((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                                 [
                                                                 ((0x0aU 
                                                                   >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                                   ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                                   : 0U)] 
                                                                 >> 0x00000020U)))) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                               [
                                                               ((0x0aU 
                                                                 >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                                 ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                                 : 0U)] 
                                                               >> 5U))) 
                                                   & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_q))) 
                                                  & ((0x000003ffU 
                                                      & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__addr_calc) 
                                                         >> 1U)) 
                                                     == 
                                                     ((0x6dU 
                                                       >= 
                                                       (0x0000007fU 
                                                        & ((IData)(0x0000000aU) 
                                                           * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                       ? 
                                                      (0x000003ffU 
                                                       & (((0U 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(0x0000000aU) 
                                                                * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                            ? 0U
                                                            : 
                                                           (__Vtemp_1[
                                                            (((IData)(9U) 
                                                              + 
                                                              (0x0000007fU 
                                                               & ((IData)(0x0000000aU) 
                                                                  * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))) 
                                                             >> 5U)] 
                                                            << 
                                                            ((IData)(0x00000020U) 
                                                             - 
                                                             (0x0000001fU 
                                                              & ((IData)(0x0000000aU) 
                                                                 * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))))) 
                                                          | (__Vtemp_1[
                                                             (3U 
                                                              & (((IData)(0x0000000aU) 
                                                                  * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)) 
                                                                 >> 5U))] 
                                                             >> 
                                                             (0x0000001fU 
                                                              & ((IData)(0x0000000aU) 
                                                                 * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))))
                                                       : 0U))) 
                                                 | ((((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                                   [
                                                                   ((0x0aU 
                                                                     >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                                     ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                                     : 0U)] 
                                                                   >> 0x00000020U)))) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                                 [
                                                                 ((0x0aU 
                                                                   >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                                   ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                                   : 0U)] 
                                                                 >> 5U))) 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_q)) 
                                                    & ((0x000003ffU 
                                                        & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__addr_calc) 
                                                           >> 1U)) 
                                                       < 
                                                       ((0x6dU 
                                                         >= 
                                                         (0x0000007fU 
                                                          & ((IData)(0x0000000aU) 
                                                             * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                         ? 
                                                        (0x000003ffU 
                                                         & (((0U 
                                                              == 
                                                              (0x0000001fU 
                                                               & ((IData)(0x0000000aU) 
                                                                  * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                              ? 0U
                                                              : 
                                                             (__Vtemp_2[
                                                              (((IData)(9U) 
                                                                + 
                                                                (0x0000007fU 
                                                                 & ((IData)(0x0000000aU) 
                                                                    * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x00000020U) 
                                                               - 
                                                               (0x0000001fU 
                                                                & ((IData)(0x0000000aU) 
                                                                   * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))))) 
                                                            | (__Vtemp_2[
                                                               (3U 
                                                                & (((IData)(0x0000000aU) 
                                                                    * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)) 
                                                                   >> 5U))] 
                                                               >> 
                                                               (0x0000001fU 
                                                                & ((IData)(0x0000000aU) 
                                                                   * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))))
                                                         : 0U)))) 
                                                | ((1U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                                [
                                                                ((0x0aU 
                                                                  >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                                  ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                                  : 0U)] 
                                                                >> 0x00000020U)))) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_q))))) {
                                            if ((0x00000800U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid))) {
                                                if (
                                                    ((0U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err)) 
                                                     | (4U 
                                                        == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err)))) {
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_clr = 1U;
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0e83U;
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_operation_done = 1U;
                                                    if (
                                                        (4U 
                                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err))) {
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d 
                                                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err;
                                                    }
                                                } else {
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d 
                                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err;
                                                }
                                            }
                                        } else {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d = 7U;
                                        }
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__dai_prog_idle = 0U;
                                __Vtemp_3[0U] = 0x2383501cU;
                                __Vtemp_3[1U] = 0x4d7338c9U;
                                __Vtemp_3[2U] = 0x43a4de36U;
                                __Vtemp_3[3U] = 0x00003fcfU;
                                __Vtemp_4[0U] = 0x2383501cU;
                                __Vtemp_4[1U] = 0x4d7338c9U;
                                __Vtemp_4[2U] = 0x43a4de36U;
                                __Vtemp_4[3U] = 0x00003fcfU;
                                if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__valid_o) 
                                      & ([&]() {
                                                    vlSelfRef.__Vfunc_mubi8_test_false_strict__127__val 
                                                        = 
                                                        (0x000000ffU 
                                                         & (((0U 
                                                              == 
                                                              (0x0000001fU 
                                                               & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))
                                                              ? 0U
                                                              : 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                              (((IData)(7U) 
                                                                + 
                                                                (0x000000ffU 
                                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x00000020U) 
                                                               - 
                                                               (0x0000001fU 
                                                                & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))))) 
                                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                               (7U 
                                                                & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U) 
                                                                   >> 5U))] 
                                                               >> 
                                                               (0x0000001fU 
                                                                & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))));
                                                    vlSelfRef.__Vfunc_mubi8_test_false_strict__127__Vfuncout 
                                                        = 
                                                        (0x69U 
                                                         == (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__127__val));
                                                }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__127__Vfuncout))) 
                                     & ((((((1U == 
                                             (3U & (IData)(
                                                           (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                            [
                                                            ((0x0aU 
                                                              >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                              ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                              : 0U)] 
                                                            >> 0x00000020U)))) 
                                            & (IData)(
                                                      (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                       [
                                                       ((0x0aU 
                                                         >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                         ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                         : 0U)] 
                                                       >> 5U))) 
                                           & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_q))) 
                                          & ((0x000003ffU 
                                              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__addr_calc) 
                                                 >> 1U)) 
                                             == ((0x6dU 
                                                  >= 
                                                  (0x0000007fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                  ? 
                                                 (0x000003ffU 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x0000000aU) 
                                                           * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                       ? 0U
                                                       : 
                                                      (__Vtemp_3[
                                                       (((IData)(9U) 
                                                         + 
                                                         (0x0000007fU 
                                                          & ((IData)(0x0000000aU) 
                                                             * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & ((IData)(0x0000000aU) 
                                                            * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))))) 
                                                     | (__Vtemp_3[
                                                        (3U 
                                                         & (((IData)(0x0000000aU) 
                                                             * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x0000000aU) 
                                                            * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))))
                                                  : 0U))) 
                                         | ((((1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                           [
                                                           ((0x0aU 
                                                             >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                             ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                             : 0U)] 
                                                           >> 0x00000020U)))) 
                                              & (IData)(
                                                        (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                         [
                                                         ((0x0aU 
                                                           >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                           : 0U)] 
                                                         >> 5U))) 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_q)) 
                                            & ((0x000003ffU 
                                                & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__addr_calc) 
                                                   >> 1U)) 
                                               < ((0x6dU 
                                                   >= 
                                                   (0x0000007fU 
                                                    & ((IData)(0x0000000aU) 
                                                       * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                   ? 
                                                  (0x000003ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(0x0000000aU) 
                                                            * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                        ? 0U
                                                        : 
                                                       (__Vtemp_4[
                                                        (((IData)(9U) 
                                                          + 
                                                          (0x0000007fU 
                                                           & ((IData)(0x0000000aU) 
                                                              * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & ((IData)(0x0000000aU) 
                                                             * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))))) 
                                                      | (__Vtemp_4[
                                                         (3U 
                                                          & (((IData)(0x0000000aU) 
                                                              * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & ((IData)(0x0000000aU) 
                                                             * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))))
                                                   : 0U)))) 
                                        | ((1U != (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                              [
                                                              ((0x0aU 
                                                                >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                                ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                                : 0U)] 
                                                              >> 0x00000020U)))) 
                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_q))))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_req_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_cmd_o 
                                        = ((1U & (IData)(
                                                         (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                          [
                                                          ((0x0aU 
                                                            >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                            : 0U)] 
                                                          >> 2U)))
                                            ? 0x37U
                                            : 0x62U);
                                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellinp__u_otp_ctrl_dai__otp_gnt_i) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0e7cU;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_clr = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0e83U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d = 5U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_operation_done = 1U;
                                }
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_sel_o 
                                            = (3U & (IData)(
                                                            (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                             [
                                                             ((0x0aU 
                                                               >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                               ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                               : 0U)] 
                                                             >> 8U)));
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_sel = 2U;
                                        if ((0x00000800U 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_rsp_valid))) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0e83U;
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_en = 1U;
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_operation_done = 1U;
                                        }
                                    } else {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_valid_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_cmd_o = 5U;
                                if ((0x00000800U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0829U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__pwr_otp_rsp_d = 0U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__dai_prog_idle = 0U;
                            if ((0x00000800U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid))) {
                                if (((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err)) 
                                     | (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err)))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x01f9U;
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d 
                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err;
                                }
                            }
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            }
        } else if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__pwr_otp_rsp_d = 0U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__dai_prog_idle = 0U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_clr = 1U;
                                    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_init_sync.q_o) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_req_o = 1U;
                                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellinp__u_otp_ctrl_dai__otp_gnt_i) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0c32U;
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                    } else {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                                        if ((0x00000800U 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid))) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__cnt_en = 1U;
                                            if (((0U 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err)) 
                                                 | (2U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err)))) {
                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_en = 1U;
                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x07e2U;
                                                if (
                                                    (2U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err))) {
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d 
                                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err;
                                                }
                                            } else {
                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d 
                                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err;
                                            }
                                        }
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            }
        } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else {
                                __Vtemp_5[0U] = 0x2383501cU;
                                __Vtemp_5[1U] = 0x4d7338c9U;
                                __Vtemp_5[2U] = 0x43a4de36U;
                                __Vtemp_5[3U] = 0x00003fcfU;
                                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__valid_o) 
                                     & (([&]() {
                                                    vlSelfRef.__Vfunc_mubi8_test_false_strict__128__val 
                                                        = 
                                                        (0x000000ffU 
                                                         & (((0U 
                                                              == 
                                                              (0x0000001fU 
                                                               & ((IData)(8U) 
                                                                  + 
                                                                  (0x000000ffU 
                                                                   & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))))
                                                              ? 0U
                                                              : 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                              (((IData)(0x0000000fU) 
                                                                + 
                                                                (0x000000ffU 
                                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x00000020U) 
                                                               - 
                                                               (0x0000001fU 
                                                                & ((IData)(8U) 
                                                                   + 
                                                                   (0x000000ffU 
                                                                    & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))))))) 
                                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                               (((IData)(8U) 
                                                                 + 
                                                                 (0x000000ffU 
                                                                  & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))) 
                                                                >> 5U)] 
                                                               >> 
                                                               (0x0000001fU 
                                                                & ((IData)(8U) 
                                                                   + 
                                                                   (0x000000ffU 
                                                                    & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))))));
                                                    vlSelfRef.__Vfunc_mubi8_test_false_strict__128__Vfuncout 
                                                        = 
                                                        (0x69U 
                                                         == (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__128__val));
                                                }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__128__Vfuncout)) 
                                        | ((IData)(
                                                   (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                    [
                                                    ((0x0aU 
                                                      >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                      ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                      : 0U)] 
                                                    >> 5U)) 
                                           & ((0x000003ffU 
                                               & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__addr_calc) 
                                                  >> 1U)) 
                                              == ((0x6dU 
                                                   >= 
                                                   (0x0000007fU 
                                                    & ((IData)(0x0000000aU) 
                                                       * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                   ? 
                                                  (0x000003ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(0x0000000aU) 
                                                            * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                        ? 0U
                                                        : 
                                                       (__Vtemp_5[
                                                        (((IData)(9U) 
                                                          + 
                                                          (0x0000007fU 
                                                           & ((IData)(0x0000000aU) 
                                                              * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & ((IData)(0x0000000aU) 
                                                             * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))))) 
                                                      | (__Vtemp_5[
                                                         (3U 
                                                          & (((IData)(0x0000000aU) 
                                                              * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & ((IData)(0x0000000aU) 
                                                             * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))))
                                                   : 0U)))))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_req_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_cmd_o 
                                        = ((1U & (IData)(
                                                         (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                          [
                                                          ((0x0aU 
                                                            >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                            : 0U)] 
                                                          >> 2U)))
                                            ? 0x45U
                                            : 0x79U);
                                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellinp__u_otp_ctrl_dai__otp_gnt_i) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0300U;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0e83U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d = 5U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_operation_done = 1U;
                                }
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            }
        } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        } else if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_q))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d = 7U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
        } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_sel = 2U;
                    if ((0x00000800U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_rsp_valid))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0dc8U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_en = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
        }
    } else if ((0x00000400U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_valid_o = 1U;
                                    __Vtemp_6[0U] = 0x2383501cU;
                                    __Vtemp_6[1U] = 0x4d7338c9U;
                                    __Vtemp_6[2U] = 0x43a4de36U;
                                    __Vtemp_6[3U] = 0x00003fcfU;
                                    if (((0x000003ffU 
                                          & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__addr_calc) 
                                             >> 1U)) 
                                         == ((0x6dU 
                                              >= (0x0000007fU 
                                                  & ((IData)(0x0000000aU) 
                                                     * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                              ? (0x000003ffU 
                                                 & (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(0x0000000aU) 
                                                          * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                      ? 0U
                                                      : 
                                                     (__Vtemp_6[
                                                      (((IData)(9U) 
                                                        + 
                                                        (0x0000007fU 
                                                         & ((IData)(0x0000000aU) 
                                                            * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & ((IData)(0x0000000aU) 
                                                           * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))))) 
                                                    | (__Vtemp_6[
                                                       (3U 
                                                        & (((IData)(0x0000000aU) 
                                                            * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x0000001fU 
                                                        & ((IData)(0x0000000aU) 
                                                           * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))))
                                              : 0U))) {
                                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                                            if ((0x00000800U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready))) {
                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0698U;
                                            }
                                        } else {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_cmd_o = 3U;
                                            if ((0x00000800U 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready))) {
                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0ce5U;
                                            }
                                        }
                                    } else {
                                        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_cmd_o = 3U;
                                        }
                                        if ((0x00000800U 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready))) {
                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0273U;
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_valid_o = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_cmd_o = 3U;
                            if ((0x00000800U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0ce5U;
                            }
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_valid_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_cmd_o = 0U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_sel_o 
                                    = (3U & (IData)(
                                                    (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                     [
                                                     ((0x0aU 
                                                       >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                       ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                       : 0U)] 
                                                     >> 8U)));
                                if ((0x00000800U & 
                                     ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_mtx_gnt) 
                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready)))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0d5fU;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            }
        } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                                __Vtemp_7[0U] = 0x2383501cU;
                                __Vtemp_7[1U] = 0x4d7338c9U;
                                __Vtemp_7[2U] = 0x43a4de36U;
                                __Vtemp_7[3U] = 0x00003fcfU;
                                if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__valid_o) 
                                      & ([&]() {
                                                    vlSelfRef.__Vfunc_mubi8_test_false_strict__129__val 
                                                        = 
                                                        (0x000000ffU 
                                                         & (((0U 
                                                              == 
                                                              (0x0000001fU 
                                                               & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))
                                                              ? 0U
                                                              : 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                              (((IData)(7U) 
                                                                + 
                                                                (0x000000ffU 
                                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x00000020U) 
                                                               - 
                                                               (0x0000001fU 
                                                                & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))))) 
                                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                               (7U 
                                                                & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U) 
                                                                   >> 5U))] 
                                                               >> 
                                                               (0x0000001fU 
                                                                & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))));
                                                    vlSelfRef.__Vfunc_mubi8_test_false_strict__129__Vfuncout 
                                                        = 
                                                        (0x69U 
                                                         == (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__129__val));
                                                }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__129__Vfuncout))) 
                                     & (((((1U == (3U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                              [
                                                              ((0x0aU 
                                                                >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                                ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                                : 0U)] 
                                                              >> 0x00000020U)))) 
                                           & (IData)(
                                                     (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                      [
                                                      ((0x0aU 
                                                        >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                        ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                        : 0U)] 
                                                      >> 7U))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                     [
                                                     ((0x0aU 
                                                       >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                       ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                       : 0U)] 
                                                     >> 5U))) 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_q)) 
                                        & ((0x000003ffU 
                                            & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__addr_calc) 
                                               >> 1U)) 
                                           < ((0x6dU 
                                               >= (0x0000007fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                               ? (0x000003ffU 
                                                  & (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(0x0000000aU) 
                                                           * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                       ? 0U
                                                       : 
                                                      (__Vtemp_7[
                                                       (((IData)(9U) 
                                                         + 
                                                         (0x0000007fU 
                                                          & ((IData)(0x0000000aU) 
                                                             * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & ((IData)(0x0000000aU) 
                                                            * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))))) 
                                                     | (__Vtemp_7[
                                                        (3U 
                                                         & (((IData)(0x0000000aU) 
                                                             * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x0000000aU) 
                                                            * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))))
                                               : 0U))))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_sel = 2U;
                                    if ((0x00000800U 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_rsp_valid))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0dc8U;
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_en = 1U;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d = 7U;
                                }
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
        }
    } else if ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_valid_o = 1U;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_cmd_o = 4U;
                                    if ((0x00000800U 
                                         & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_mtx_gnt) 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready)))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0273U;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else {
                __Vtemp_8[0U] = 0x2383501cU;
                __Vtemp_8[1U] = 0x4d7338c9U;
                __Vtemp_8[2U] = 0x43a4de36U;
                __Vtemp_8[3U] = 0x00003fcfU;
                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__valid_o) 
                     & (([&]() {
                                    vlSelfRef.__Vfunc_mubi8_test_false_strict__130__val 
                                        = (0x000000ffU 
                                           & (((0U 
                                                == 
                                                (0x0000001fU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    (0x000000ffU 
                                                     & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))))
                                                ? 0U
                                                : (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                   (((IData)(0x0000000fU) 
                                                     + 
                                                     (0x000000ffU 
                                                      & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        (0x000000ffU 
                                                         & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))))))) 
                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                 (((IData)(8U) 
                                                   + 
                                                   (0x000000ffU 
                                                    & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     (0x000000ffU 
                                                      & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))))));
                                    vlSelfRef.__Vfunc_mubi8_test_false_strict__130__Vfuncout 
                                        = (0x69U == (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__130__val));
                                }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__130__Vfuncout)) 
                        | ((IData)((vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                    [((0x0aU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                       ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                       : 0U)] >> 5U)) 
                           & ((0x000003ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__addr_calc) 
                                              >> 1U)) 
                              == ((0x6dU >= (0x0000007fU 
                                             & ((IData)(0x0000000aU) 
                                                * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                   ? (0x000003ffU & 
                                      (((0U == (0x0000001fU 
                                                & ((IData)(0x0000000aU) 
                                                   * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                         ? 0U : (__Vtemp_8[
                                                 (((IData)(9U) 
                                                   + 
                                                   (0x0000007fU 
                                                    & ((IData)(0x0000000aU) 
                                                       * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & ((IData)(0x0000000aU) 
                                                      * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))))) 
                                       | (__Vtemp_8[
                                          (3U & (((IData)(0x0000000aU) 
                                                  * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)) 
                                                 >> 5U))] 
                                          >> (0x0000001fU 
                                              & ((IData)(0x0000000aU) 
                                                 * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))))
                                   : 0U)))))) {
                    if ((0x00000800U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_rvalid))) {
                        if (((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err)) 
                             | (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err)))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_en = 1U;
                            __Vtemp_9[0U] = 0x2383501cU;
                            __Vtemp_9[1U] = 0x4d7338c9U;
                            __Vtemp_9[2U] = 0x43a4de36U;
                            __Vtemp_9[3U] = 0x00003fcfU;
                            if (((IData)((vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                          [((0x0aU 
                                             >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                             ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                             : 0U)] 
                                          >> 7U)) & 
                                 ((0x000003ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__addr_calc) 
                                                  >> 1U)) 
                                  != ((0x6dU >= (0x0000007fU 
                                                 & ((IData)(0x0000000aU) 
                                                    * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                       ? (0x000003ffU 
                                          & (((0U == 
                                               (0x0000001fU 
                                                & ((IData)(0x0000000aU) 
                                                   * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                               ? 0U
                                               : (__Vtemp_9[
                                                  (((IData)(9U) 
                                                    + 
                                                    (0x0000007fU 
                                                     & ((IData)(0x0000000aU) 
                                                        * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x0000000aU) 
                                                       * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))))) 
                                             | (__Vtemp_9[
                                                (3U 
                                                 & (((IData)(0x0000000aU) 
                                                     * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(0x0000000aU) 
                                                    * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))))
                                       : 0U)))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x062fU;
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0e83U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_operation_done = 1U;
                            }
                            if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d = 2U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__otp_err;
                        }
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d = 7U;
                }
            }
        } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
        } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                            if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__valid_o) 
                                  & ([&]() {
                                                vlSelfRef.__Vfunc_mubi8_test_false_strict__131__val 
                                                    = 
                                                    (0x000000ffU 
                                                     & (((0U 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              (0x000000ffU 
                                                               & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                          (((IData)(0x0000000fU) 
                                                            + 
                                                            (0x000000ffU 
                                                             & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x00000020U) 
                                                           - 
                                                           (0x0000001fU 
                                                            & ((IData)(8U) 
                                                               + 
                                                               (0x000000ffU 
                                                                & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))))))) 
                                                        | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                           (((IData)(8U) 
                                                             + 
                                                             (0x000000ffU 
                                                              & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))) 
                                                            >> 5U)] 
                                                           >> 
                                                           (0x0000001fU 
                                                            & ((IData)(8U) 
                                                               + 
                                                               (0x000000ffU 
                                                                & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))))));
                                                vlSelfRef.__Vfunc_mubi8_test_false_strict__131__Vfuncout 
                                                    = 
                                                    (0x69U 
                                                     == (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__131__val));
                                            }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__131__Vfuncout))) 
                                 & ([&]() {
                                            vlSelfRef.__Vfunc_mubi8_test_false_strict__132__val 
                                                = (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                        (((IData)(7U) 
                                                          + 
                                                          (0x000000ffU 
                                                           & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))))) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                         (7U 
                                                          & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))));
                                            vlSelfRef.__Vfunc_mubi8_test_false_strict__132__Vfuncout 
                                                = (0x69U 
                                                   == (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__132__val));
                                        }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__132__Vfuncout)))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_req_o = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_cmd_o 
                                    = ((1U & (IData)(
                                                     (vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                      [
                                                      ((0x0aU 
                                                        >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                        ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                        : 0U)] 
                                                      >> 2U)))
                                        ? 0x45U : 0x79U);
                                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellinp__u_otp_ctrl_dai__otp_gnt_i) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0bbaU;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0e83U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d = 5U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_operation_done = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
        }
    } else if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__pwr_otp_rsp_d = 0U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__dai_prog_idle = 0U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_init_req = 1U;
                                if ((0x07ffU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_init_done_i))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0e83U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                            }
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
        }
    } else if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
    } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
    } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o = 1U;
                __Vtemp_10[0U] = 0x2383501cU;
                __Vtemp_10[1U] = 0x4d7338c9U;
                __Vtemp_10[2U] = 0x43a4de36U;
                __Vtemp_10[3U] = 0x00003fcfU;
                if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__valid_o) 
                      & ([&]() {
                                    vlSelfRef.__Vfunc_mubi8_test_false_strict__133__val 
                                        = (0x000000ffU 
                                           & (((0U 
                                                == 
                                                (0x0000001fU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))
                                                ? 0U
                                                : (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x000000ffU 
                                                      & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U))))) 
                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_access_i[
                                                 (7U 
                                                  & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o), 4U)))));
                                    vlSelfRef.__Vfunc_mubi8_test_false_strict__133__Vfuncout 
                                        = (0x69U == (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__133__val));
                                }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_false_strict__133__Vfuncout))) 
                     & (((((1U == (3U & (IData)((vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                                 [(
                                                   (0x0aU 
                                                    >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                                    ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                                    : 0U)] 
                                                 >> 0x00000020U)))) 
                           & (IData)((vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                      [((0x0aU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                         ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                         : 0U)] >> 7U))) 
                          & (IData)((vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                     [((0x0aU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                        ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                        : 0U)] >> 5U))) 
                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__base_sel_q)) 
                        & ((0x000003ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__addr_calc) 
                                           >> 1U)) 
                           < ((0x6dU >= (0x0000007fU 
                                         & ((IData)(0x0000000aU) 
                                            * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                               ? (0x000003ffU & (((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((IData)(0x0000000aU) 
                                                       * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))
                                                   ? 0U
                                                   : 
                                                  (__Vtemp_10[
                                                   (((IData)(9U) 
                                                     + 
                                                     (0x0000007fU 
                                                      & ((IData)(0x0000000aU) 
                                                         * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(0x0000000aU) 
                                                        * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)))))) 
                                                 | (__Vtemp_10[
                                                    (3U 
                                                     & (((IData)(0x0000000aU) 
                                                         * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x0000001fU 
                                                     & ((IData)(0x0000000aU) 
                                                        * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))))))
                               : 0U))))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_valid_o = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_cmd_o = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_sel_o 
                        = (3U & (IData)((vlSymsp->TOP__otp_ctrl_part_pkg.PartInfo
                                         [((0x0aU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o))
                                            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_part_sel_idx__DOT__idx_o)
                                            : 0U)] 
                                         >> 8U)));
                    if ((0x00000800U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_mtx_gnt) 
                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready)))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x05b4U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x0e83U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d = 5U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_operation_done = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
    }
    if ((([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__134__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                                  >> 0x0000002cU)));
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__134__Vfuncout 
                        = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__134__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__134__Vfuncout)) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__err_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__state_d = 0x088eU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o = 1U;
        if ((0x088eU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__error_d = 7U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x000001ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__cnt_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x000001ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__cnt_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2240__03a2158__KET__[0U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_q) 
            << 0x0000000aU) | (0x000003ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__addr_calc) 
                                              >> 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2240__03a2158__KET__[1U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_q) 
            >> 0x00000016U) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_q 
                                        >> 0x00000020U)) 
                               << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2240__03a2158__KET__[2U] 
        = ((0xfffffc00U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_cmd_o) 
                            << 0x0000000cU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_size_o) 
                                               << 0x0000000aU))) 
           | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_q 
                       >> 0x00000020U)) >> 0x00000016U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[0U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_q) 
            << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_valid_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[1U] 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_q) 
            >> 0x0000001fU) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_q 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[2U] 
        = ((0x000000e0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[2U]) 
           | (0x000000ffU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_sel_o) 
                              << 1U) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__data_q 
                                                 >> 0x00000020U)) 
                                        >> 0x0000001fU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[2U] 
        = ((0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[2U]) 
           | (0x000000ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_cmd_o) 
                             << 5U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_intr_operation_done__DOT__hw2reg_intr_state_de_o 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
            & (3U == (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_test_otp_error__DOT__we)))))) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_operation_done));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__scrmbl_mtx_req_o) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 0x0000000bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__26__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__otp_req_o) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 0x0000000bU));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__cnt_clr) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x000000ffU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000000ffU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__cnt_en) 
                               & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__cnt_en) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 8U)) ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000000ffU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__cnt_en) 
                               & (~ (0x000000ffU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__cnt_en) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 8U)) ? 0xffU
                                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[0x0000000bU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2240__03a2158__KET__[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[0x0000000bU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2240__03a2158__KET__[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_otp_arb_bundle[0x0000000bU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2240__03a2158__KET__[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_bundle[0x0000000bU][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_bundle[0x0000000bU][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_bundle[0x0000000bU][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__data_tree__BRA__1943__03a1872__KET__[2U];
}
